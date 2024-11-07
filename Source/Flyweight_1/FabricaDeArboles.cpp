// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaDeArboles.h"
#include "FlyweightTiposArboles.h"

// Sets default values
AFabricaDeArboles::AFabricaDeArboles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiposArboles = TMap<FString, AFlyweightTiposArboles*>();
}

// Called when the game starts or when spawned
void AFabricaDeArboles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaDeArboles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AFlyweightTiposArboles* AFabricaDeArboles::ObtenerTiposArboles(FString Nombre, FString Color, FString Textura)
{
	ClaveArbol = GenerarClaveArbol(Nombre, Color, Textura);

	if (!TiposArboles.Contains(ClaveArbol))
	{
		NuevoArbol = GetWorld()->SpawnActor<AFlyweightTiposArboles>(AFlyweightTiposArboles::StaticClass());
		if (NuevoArbol) {
			NuevoArbol->Inicializar(Nombre, Color, Textura);
			TiposArboles.Add(ClaveArbol, NuevoArbol);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No se pudo crear el objeto")));
		}

	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Memoria optimizada")));
	}

	return *TiposArboles.Find(ClaveArbol);
}

FString AFabricaDeArboles::GenerarClaveArbol(FString Nombre, FString Color, FString Textura)
{
	FString Clave = Nombre + "_" + Color + "_" + Textura;
	return Clave;
}

