// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckFloatorDrown.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

ACheckFloatorDrown::ACheckFloatorDrown()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	eps = 1.0;
	mycheckmethod = ECheckMethods::BoundCheck;
	myFilePath = "C:/";
}

// Called when the game starts or when spawned
void ACheckFloatorDrown::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACheckFloatorDrown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckOneTime();
}

bool ACheckFloatorDrown::SaveToFile() {
	IPlatformFile& F = FPlatformFileManager::Get().GetPlatformFile();
	if (!F.DirectoryExists(*myFilePath)) return false;
	return FFileHelper::SaveStringArrayToFile(texts, *(myFilePath + "\\" + TEXT("Floating_or_Drowning_Actors.csv")));
}

void ACheckFloatorDrown::CheckOneTime() {
	AbnormalActors.Empty();
	if (bCheckFloat) CheckForFloat();
	if (bCheckDrown) CheckForDrown();
	SaveToFile();
}

