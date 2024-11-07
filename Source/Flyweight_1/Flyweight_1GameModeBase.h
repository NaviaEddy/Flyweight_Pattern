// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Flyweight_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FLYWEIGHT_1_API AFlyweight_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFlyweight_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	class ABosque* Bosque;
	
};
