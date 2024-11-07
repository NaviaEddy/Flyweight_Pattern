// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlyweightTiposArboles.generated.h"

UCLASS()
class FLYWEIGHT_1_API AFlyweightTiposArboles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlyweightTiposArboles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Inicializar(FString nombre, FString color, FString textura);

	FORCEINLINE void MostrarDetalles(float _x, float _y);

	FORCEINLINE FString GetNombre() const;
	FORCEINLINE FString GetColor() const;
	FORCEINLINE FString GetTextura() const;

private:
	FString Nombre;
	FString Color;
	FString Textura;

};
