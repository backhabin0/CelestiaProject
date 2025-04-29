// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CELESTIA_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
    // 플레이어 소지 금액
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Money;

    // 인벤토리 맵 (예: 아이템 ID → 개수)
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, int32> InventoryMap;
	
};
