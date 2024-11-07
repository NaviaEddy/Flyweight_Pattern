// Copyright Epic Games, Inc. All Rights Reserved.
#include "Flyweight_1GameModeBase.h"
#include "Bosque.h"

AFlyweight_1GameModeBase::AFlyweight_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFlyweight_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Bosque = GetWorld()->SpawnActor<ABosque>(ABosque::StaticClass());

	for (int i = 0; i <= 3; i++)
	{
		Bosque->PlantarArbol(100.0f+i, 200.0f-i, "Pino", "Verde", "Rugosa");
		Bosque->PlantarArbol(200.0f-i, 300.0f*i, "Cerezo", "Rosado", "Aspera");
		Bosque->PlantarArbol(300.0f*i, 400.0f+i, "Nogal", "Cafe", "Lisa");
	}
}

void AFlyweight_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
