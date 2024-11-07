// Fill out your copyright notice in the Description page of Project Settings.
#include "Bosque.h"
#include "FabricaDeArboles.h"
#include "FlyweightTiposArboles.h"
#include "Arbol.h"

// Sets default values
ABosque::ABosque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ContenedorArboles = TArray<AArbol*>();
	FabricaArboles = nullptr;
}

// Called when the game starts or when spawned
void ABosque::BeginPlay()
{
	Super::BeginPlay();
	FabricaArboles = GetWorld()->SpawnActor<AFabricaDeArboles>(AFabricaDeArboles::StaticClass());
	//TipoArbol = GetWorld()->SpawnActor<AFlyweightTiposArboles>(AFlyweightTiposArboles::StaticClass());
	/*PlantarArbol(120.0f, 180.0f, "Pino", "Verde", "Rugosa");
	PlantarArbol(130.0f, 190.0f, "Cerezo", "Rosado", "Aspera");
	PlantarArbol(140.0f, 200.0f, "Nogal", "Cafe", "Lisa");*/
}

// Called every frame
void ABosque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABosque::PlantarArbol(float X, float Y, FString _nombre, FString _color, FString _textura)
{
	
	TipoArbol = FabricaArboles->ObtenerTiposArboles(_nombre, _color, _textura);

	Arbol = GetWorld()->SpawnActor<AArbol>(AArbol::StaticClass());
	
	if (Arbol)
	{
		Arbol->Inicializar(X, Y, TipoArbol);
		Arbol->MostrarDetallesArbol();
		ContenedorArboles.Add(Arbol);
	}

}

