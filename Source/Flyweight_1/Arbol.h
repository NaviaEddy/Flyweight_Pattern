// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arbol.generated.h"

UCLASS()
class FLYWEIGHT_1_API AArbol : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArbol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float X;
	float Y;
	class AFlyweightTiposArboles* TipoArbol;

public:
	void Inicializar(float _x, float _y, AFlyweightTiposArboles* _Tipo);
	void MostrarDetallesArbol();

};
