// Fill out your copyright notice in the Description page of Project Settings.
#include "Arbol.h"
#include "FlyweightTiposArboles.h"


// Sets default values
AArbol::AArbol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArbol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArbol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArbol::Inicializar(float _x, float _y, AFlyweightTiposArboles* _Tipo)
{
	X = _x;
	Y = _y;
	TipoArbol = _Tipo;
}

void AArbol::MostrarDetallesArbol()
{
	if (TipoArbol) {
		TipoArbol->MostrarDetalles(X, Y);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No se ha asignado un tipo de arbol")));
	}
}

