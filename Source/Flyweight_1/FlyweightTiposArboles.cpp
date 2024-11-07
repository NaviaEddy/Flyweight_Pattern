// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyweightTiposArboles.h"

// Sets default values
AFlyweightTiposArboles::AFlyweightTiposArboles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlyweightTiposArboles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyweightTiposArboles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFlyweightTiposArboles::Inicializar(FString nombre, FString color, FString textura)
{
	Nombre = nombre;
	Color = color;
	Textura = textura;
}

void AFlyweightTiposArboles::MostrarDetalles(float _x, float _y)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Arbol: %s, Color: %s, Textura: %s, Posicion: %f, %f"), *GetNombre(), *GetColor(), *GetTextura(), _x, _y));
}

FString AFlyweightTiposArboles::GetNombre() const
{
	return Nombre;
}

FString AFlyweightTiposArboles::GetColor() const
{
	return Color;
}

FString AFlyweightTiposArboles::GetTextura() const
{
	return Textura;
}

