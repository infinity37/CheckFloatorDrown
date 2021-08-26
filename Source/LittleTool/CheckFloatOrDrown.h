// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "GameFramework/Actor.h"
#include "CheckFloatOrDrown.generated.h"

UENUM(BlueprintType)
enum class ECheckMethods : uint8 {
	LineTrace,
	BoxTrace,
	BoundCheck,
};


UCLASS()
class LITTLETOOL_API ACheckFloatOrDrown: public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	ACheckFloatOrDrown();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<EObjectTypeQuery> > TerrainTypes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSubclassOf<AActor> > ItemClasses;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSet<AActor*> ActorsToIgnore;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		TSet<AActor*> AbnormalActors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<ECheckMethods> mycheckmethod;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float eps;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString myFilePath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bCheckFloat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bCheckDrown;

	UFUNCTION(BlueprintCallable)
		bool SaveToFile();

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> texts;

};
