// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaDeArboles.generated.h"

UCLASS()
class FLYWEIGHT_1_API AFabricaDeArboles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaDeArboles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	class AFlyweightTiposArboles* NuevoArbol;
	AFlyweightTiposArboles* ObtenerTiposArboles(FString Nombre, FString Color, FString Textura);
	FString GenerarClaveArbol(FString Nombre, FString Color, FString Textura);
	TMap<FString, AFlyweightTiposArboles*> TiposArboles;

private:
	FString ClaveArbol;
	class AFabricaDeArboles* FabricaArboles;

};
