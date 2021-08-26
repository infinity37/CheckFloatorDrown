// Copyright Epic Games, Inc. All Rights Reserved.

#include "CheckFloatDrown.h"

#define LOCTEXT_NAMESPACE "FCheckFloatDrownModule"

void FCheckFloatDrownModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//mycheckactor = GEngine->GetWorld()->SpawnActor<ACheckFloatorDrown>();
	/*while (true) {
		mycheckactor->CheckOneTime();
		FPlatformProcess::Sleep(5);
	}*/
}

void FCheckFloatDrownModule::ShutdownModule()
{
	//mycheckactor->Destroy();
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCheckFloatDrownModule, CheckFloatDrown)