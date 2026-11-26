// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Data/SpecialElimData.h"
#include "GameFramework/PlayerState.h"
#include "ShooterPlayerState.generated.h"


class USpecialElim;
class USpecialElimData;
enum class ESpecialElimType : uint16;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScoreChanged, int32, NewScore);



//它是玩家在网络游戏中的“永久数据容器”，代表了一个玩家的身份和所有持久化状态（比如分数、击杀数、队伍等）。
//在单机游戏中对于玩家生命值，背包等属性，我们可以直接写在玩家的Pawn上，玩家死亡后Pawn可以不进行销毁，使得数据能够持久化保存
//但是对于联机游戏，玩家的Pawn是必须要进行销毁的，一旦将玩家分数，击杀数等属性放在Pawn中，玩家死亡Pawn销毁后，新生成的Pawn就不知道玩家当前的分数与击杀数了
UCLASS()
class FPS_API AShooterPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	AShooterPlayerState();

	//更改击杀分数的委托
	UPROPERTY(BlueprintAssignable)
	FScoreChanged OnScoreChanged;

	//增加击杀分数
	void AddScoredElim();
	//增加死亡次数
	void AddDefeat();
	//增加命中数
	void AddHit();
	//增加未命中数
	void AddMiss();
	//增加爆头击杀数量
	void AddHeadShotElim();
	//增加连杀数量
	void AddSequentialElim(int32 SequenceCount);
	//更新单次最高的击杀数量
	void UpdateHighestStreak(int32 StreakCount);
	//增加复仇击杀数量
	void AddRevengeElim();
	//增加击杀第一名的次数
	void AddDethroneElim();
	//增加终结击杀的次数
	void AddShowStopperElim();
	//获取一血
	void GotFirstBlood();
	//判断是否是当前的获胜者
	void IsNowWinner();
	//设置当前是否处于连杀状态
	void SetOnStreak(bool bIsOnStreak);
	//设置最后击杀者
	void SetLastAttacker(APlayerState* Attacker);

	//判断当前是否处于连杀状态
	bool IsOnStreak() const;
	//获取最后一个击杀者
	APlayerState* GetLastAttacker() const;
	//获取击杀得分
	int32 GetScoredElims() const;

	//Client属性说明符，表示该函数为一个客户端的RPC（由服务端发给特定客户端）
	//Reliable表示当前RPC的传输可靠性，默认为UnReliable不可靠（Reliable表示给RPC一定会传输到客户端，如果因为网络等原因导致无法传输到，引擎会自动重发（Retransmit），直到客户端确认收到为止）
	//多个 Reliable 的 RPC 会按照服务器发送的顺序，依次在客户端执行，不会乱序,由于需要确认和重发机制，它消耗的网络带宽更大，且如果网络极差，可能会导致后续的数据包被阻塞
	// UFUNCTION(Client, Unreliable)，引擎发出去就不管了，丢包就丢了。它适合高频、但丢了也无所谓的视觉表现（如：通知客户端播放一个轻微的枪口火花特效）。
	//前缀加Client_是一种命名约定，该函数只会在客户端执行，在服务端发送调用
	//实际上是在声明一个网络接口，BlueprintNativeEvent接口，所以实现函数必须加上_Implementation

	//客户端RPC判断当前是否得分失去领先并添加对应的UI
	UFUNCTION(Client, Reliable)
	void Client_LostTheLead();

	//客户端RPC，广播击杀积分更新委托
	UFUNCTION(Client, Reliable)
	void Client_ScoredElim(int32 ElimScore);

	//客户端RPC，检测多杀与连杀的特殊击杀，根据特殊击杀的类型初始化多杀与连杀的计数，广播击杀积分更新委托，并将所有检测的特殊击杀放入特殊击杀的队列中
	UFUNCTION(Client, Reliable)
	void Client_SpecialElim(const ESpecialElimType& SpecialElim, int32 SequentialElimCount, int32 StreakCount, int32 ElimScore);

	//特殊击杀数据成员
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FPS|SpecialElims")
	TObjectPtr<USpecialElimData> SpecialElimData;

	//特殊击杀的UMG成员
	UPROPERTY(EditDefaultsOnly, Category = "FPS|SpecialElims")
	TSubclassOf<USpecialElim> SpecialElimWidgetClass;

	//击杀·展示时间
	UPROPERTY(EditDefaultsOnly, Category = "FPS|SpecialElims")
	float ElimDisplayTime;

private:
	//击杀分数
	int32 ScoredElims;
	//阵亡次数
	int32 Defeats;
	//命中数
	int32 Hits;
	//未命中数
	int32 Misses;
	//是否处于未死连杀状态
	bool bOnStreak;
	//爆头击杀的数量
	int32 HeadShotElims;
	//用于多杀的状态管路，key代表当前的连杀个数，value代表当前的完成该连杀的次数（如二连杀的次数），UE5默认对于TMa复制效率较低，最好不要将TMap设置为Replicated
	TMap<int32, int32> SequentialElims;
	//复仇击杀数
	int32 RevengeElims;
	//击杀最高分数者是次数
	int32 DethroneElims;
	//终结连杀的次数
	int32 ShowStopperElims;
	//是否为一血
	bool bFirstBlood;
	//是否为胜利者
	bool bWinner;
	//最高为死亡连杀数
	int32 HighestStreak;

	//上一个击杀玩家的人
	TWeakObjectPtr<APlayerState> LastAttacker;

	////一个位掩码解码器
	TArray<ESpecialElimType> DecodeElimBitmask(ESpecialElimType ElimTypeBitmask);
	//处理特殊击杀队列的成员
	void ProcessNextSpecialElim();

	//判断队列中的元素属于何种击杀并，，根据多杀与连杀的计数初始化相应的UMG并添加
	void ShowSpecialElim(const FSpecialElimInfo& ElimMessageInfo);

	//多杀与连杀的特殊击杀队列
	TQueue<FSpecialElimInfo> SpecialElimQueue;
	//当前是否正在处理队列，用于防止当前的击杀同时或连锁击杀了多个对象，当前队列未处理完，又产生了新的击杀事件的情况导致无限递归或逻辑死锁
	//第二个作用是分帧处理，如果你的队列里一次积压了 1000 个伤害结算或网络 RPC 请求，如果在同一帧全部处理完，会导致服务器掉帧（卡顿）。
	bool bIsProcessingQueue;
};
