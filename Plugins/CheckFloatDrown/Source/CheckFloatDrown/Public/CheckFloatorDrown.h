// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CheckFloatorDrown.generated.h"

UENUM(BlueprintType)
enum class ECheckMethods : uint8 {
	LineTrace,
	BoxTrace,
	BoundCheck,
};

UCLASS()
class CHECKFLOATDROWN_API ACheckFloatorDrown : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckFloatorDrown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		bool BP_ActorIsFloat(AActor* checkactor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		bool BP_ActorIsDrown(AActor* checkactor);

	UFUNCTION(BlueprintImplementableEvent)
	void CheckForFloat();

	UFUNCTION(BlueprintImplementableEvent)
	void CheckForDrown();

	void CheckOneTime();

	UPROPERTY(BlueprintReadWrite)
		TArray<FString> texts;

};
