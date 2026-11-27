#pragma once

#include "ShooterTypes.generated.h"

UENUM(BlueprintType)
enum class ETurningInPlace : uint8
{
	Left UMETA(DisplayName = "TurningLeft"),
	Right UMETA(DisplayName = "TurningRight"),
	NotTurning UMETA(DisplayName = "NotTurning")
};


//处理准星效果的结构体
USTRUCT(BlueprintType)
struct FReticleParams
{
	GENERATED_BODY()

	//准星开口的大小

	//开火时准星的开口大小
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ShapeCutFactor_RoundFired = 0.f;

	//瞄准时
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ShapeCutFactor_Aiming = 0.f;

	//腰射时
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ShapeCutFactor_NotAiming = 0.f;

	//准星的缩放

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ScaleFactor_RoundFired = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ScaleFactor_Aiming = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ScaleFactor_NotAiming = 0.f;

	//瞄准到目标时
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ScaleFactor_Targeting = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ScaleFactor_NotTargeting = 0.f;

	//准星从不同状态过渡的速度

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RoundFiredInterpSpeed = 20.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AimingInterpSpeed = 15.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TargetingPlayerInterpSpeed = 10.f;
};


//在虚幻引擎的反射系统中，一个 UENUM 强烈建议（甚至某些情况下强制要求）包含一个值为 0 的枚举项。
//告诉引擎“这个枚举里的每个值，都代表一个独立的二进制位（bit）,用于UENUM一般用于与UI的沟通
//这里的作用是指示当前的击杀状态（如爆头，一血等），主要用于与UI沟通
//这种极度省内存，网络传输快（省带宽），效率高

//特殊击杀的枚举
UENUM(meta = (BitFlags))
enum class ESpecialElimType : uint16
{
	None = 0,
	Headshot		= 1 << 0,		// 爆头
	Sequential		= 1 << 1,		// 连杀
	Streak			= 1 << 2,		// 不死连杀
	Revenge			= 1 << 3,		// 复仇
	Dethrone		= 1 << 4,		// 击杀当前得分最高的
	Showstopper		= 1 << 5,		// 终结连杀
	FirstBlood		= 1 << 6,		// 一血
	GainedTheLead	= 1 << 7,		// 比分取得领先
	TiedTheLeader	= 1 << 8,		// 追平比分
	LostTheLead		= 1 << 9		// 比分失去领先
};

//进行状态判断时会使用到位运算，这里宏的作用就是时枚举支持位运算
ENUM_CLASS_FLAGS(ESpecialElimType)
