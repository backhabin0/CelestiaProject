// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
AMyGameModeBase::AMyGameModeBase()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MainCharacter/BP_MainCharacter.BP_MainCharacter_c'"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}
