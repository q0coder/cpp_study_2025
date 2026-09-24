// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


bool UMyBlueprintFunctionLibrary::LoadStringFromFile(FString& FileString, FString FilePath)
{
	if (FileString.IsEmpty())
	{
		if (FFileHelper::LoadFileToString(FileString,*FilePath))
		{
			return  true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,5,FColor::Red,TEXT("false"));
		}
	}
	return false;
}

bool UMyBlueprintFunctionLibrary::WriteStringToFile(FString FileString, FString FilePath)
{
	if (!FilePath.IsEmpty())
	{
		if (FFileHelper::SaveStringToFile(FileString,*FilePath))
		{
			return true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,5,FColor::Red,TEXT("false"));
		}

	}
	return false;

}

