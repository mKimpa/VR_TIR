// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "HighScoreSave.generated.h"

/**
 * 
 */
UCLASS()
class TIR_API UHighScoreSave : public USaveGame
{
	GENERATED_BODY()
	
private:
	float ScoreTable;



};
