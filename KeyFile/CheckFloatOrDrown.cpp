// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckFloatOrDrown.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
ACheckFloatOrDrown::ACheckFloatOrDrown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	eps = 1.0;
	mycheckmethod = ECheckMethods::BoxTrace;
}

// Called when the game starts or when spawned
void ACheckFloatOrDrown::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckFloatOrDrown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ACheckFloatOrDrown::SaveToFile() {
	IPlatformFile& F = FPlatformFileManager::Get().GetPlatformFile();
	if (!F.DirectoryExists(*myFilePath)) return false;
	return FFileHelper::SaveStringArrayToFile(texts, *(myFilePath + "\\" + TEXT("Floating_or_Drowning_Actors.txt")));
}
