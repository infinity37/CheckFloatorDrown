// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckFloatDrown/Public/CheckFloatorDrown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckFloatorDrown() {}
// Cross Module References
	CHECKFLOATDROWN_API UEnum* Z_Construct_UEnum_CheckFloatDrown_ECheckMethods();
	UPackage* Z_Construct_UPackage__Script_CheckFloatDrown();
	CHECKFLOATDROWN_API UClass* Z_Construct_UClass_ACheckFloatorDrown_NoRegister();
	CHECKFLOATDROWN_API UClass* Z_Construct_UClass_ACheckFloatorDrown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* ECheckMethods_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CheckFloatDrown_ECheckMethods, Z_Construct_UPackage__Script_CheckFloatDrown(), TEXT("ECheckMethods"));
		}
		return Singleton;
	}
	template<> CHECKFLOATDROWN_API UEnum* StaticEnum<ECheckMethods>()
	{
		return ECheckMethods_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECheckMethods(ECheckMethods_StaticEnum, TEXT("/Script/CheckFloatDrown"), TEXT("ECheckMethods"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CheckFloatDrown_ECheckMethods_Hash() { return 1514849225U; }
	UEnum* Z_Construct_UEnum_CheckFloatDrown_ECheckMethods()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CheckFloatDrown();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECheckMethods"), 0, Get_Z_Construct_UEnum_CheckFloatDrown_ECheckMethods_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECheckMethods::LineTrace", (int64)ECheckMethods::LineTrace },
				{ "ECheckMethods::BoxTrace", (int64)ECheckMethods::BoxTrace },
				{ "ECheckMethods::BoundCheck", (int64)ECheckMethods::BoundCheck },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BoundCheck.Name", "ECheckMethods::BoundCheck" },
				{ "BoxTrace.Name", "ECheckMethods::BoxTrace" },
				{ "LineTrace.Name", "ECheckMethods::LineTrace" },
				{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CheckFloatDrown,
				nullptr,
				"ECheckMethods",
				"ECheckMethods",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACheckFloatorDrown::execSaveToFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveToFile();
		P_NATIVE_END;
	}
	static FName NAME_ACheckFloatorDrown_BP_ActorIsDrown = FName(TEXT("BP_ActorIsDrown"));
	bool ACheckFloatorDrown::BP_ActorIsDrown(AActor* checkactor)
	{
		CheckFloatorDrown_eventBP_ActorIsDrown_Parms Parms;
		Parms.checkactor=checkactor;
		ProcessEvent(FindFunctionChecked(NAME_ACheckFloatorDrown_BP_ActorIsDrown),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACheckFloatorDrown_BP_ActorIsFloat = FName(TEXT("BP_ActorIsFloat"));
	bool ACheckFloatorDrown::BP_ActorIsFloat(AActor* checkactor)
	{
		CheckFloatorDrown_eventBP_ActorIsFloat_Parms Parms;
		Parms.checkactor=checkactor;
		ProcessEvent(FindFunctionChecked(NAME_ACheckFloatorDrown_BP_ActorIsFloat),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACheckFloatorDrown_CheckForDrown = FName(TEXT("CheckForDrown"));
	void ACheckFloatorDrown::CheckForDrown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACheckFloatorDrown_CheckForDrown),NULL);
	}
	static FName NAME_ACheckFloatorDrown_CheckForFloat = FName(TEXT("CheckForFloat"));
	void ACheckFloatorDrown::CheckForFloat()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACheckFloatorDrown_CheckForFloat),NULL);
	}
	void ACheckFloatorDrown::StaticRegisterNativesACheckFloatorDrown()
	{
		UClass* Class = ACheckFloatorDrown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveToFile", &ACheckFloatorDrown::execSaveToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_checkactor = { "checkactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckFloatorDrown_eventBP_ActorIsDrown_Parms, checkactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckFloatorDrown_eventBP_ActorIsDrown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckFloatorDrown_eventBP_ActorIsDrown_Parms), &Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_checkactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckFloatorDrown, nullptr, "BP_ActorIsDrown", nullptr, nullptr, sizeof(CheckFloatorDrown_eventBP_ActorIsDrown_Parms), Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_checkactor = { "checkactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckFloatorDrown_eventBP_ActorIsFloat_Parms, checkactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckFloatorDrown_eventBP_ActorIsFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckFloatorDrown_eventBP_ActorIsFloat_Parms), &Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_checkactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckFloatorDrown, nullptr, "BP_ActorIsFloat", nullptr, nullptr, sizeof(CheckFloatorDrown_eventBP_ActorIsFloat_Parms), Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckFloatorDrown, nullptr, "CheckForDrown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckFloatorDrown, nullptr, "CheckForFloat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics
	{
		struct CheckFloatorDrown_eventSaveToFile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckFloatorDrown_eventSaveToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckFloatorDrown_eventSaveToFile_Parms), &Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckFloatorDrown, nullptr, "SaveToFile", nullptr, nullptr, sizeof(CheckFloatorDrown_eventSaveToFile_Parms), Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACheckFloatorDrown_NoRegister()
	{
		return ACheckFloatorDrown::StaticClass();
	}
	struct Z_Construct_UClass_ACheckFloatorDrown_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TerrainTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemClasses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbnormalActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbnormalActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AbnormalActors;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mycheckmethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mycheckmethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mycheckmethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_myFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckFloat_MetaData[];
#endif
		static void NewProp_bCheckFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckDrown_MetaData[];
#endif
		static void NewProp_bCheckDrown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckDrown;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_texts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_texts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckFloatorDrown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CheckFloatDrown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckFloatorDrown_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsDrown, "BP_ActorIsDrown" }, // 1642144235
		{ &Z_Construct_UFunction_ACheckFloatorDrown_BP_ActorIsFloat, "BP_ActorIsFloat" }, // 2434858984
		{ &Z_Construct_UFunction_ACheckFloatorDrown_CheckForDrown, "CheckForDrown" }, // 977271298
		{ &Z_Construct_UFunction_ACheckFloatorDrown_CheckForFloat, "CheckForFloat" }, // 2778039123
		{ &Z_Construct_UFunction_ACheckFloatorDrown_SaveToFile, "SaveToFile" }, // 2802333086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckFloatorDrown.h" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes_Inner = { "TerrainTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes = { "TerrainTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, TerrainTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses_Inner = { "ItemClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses = { "ItemClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, ItemClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore_ElementProp = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors_ElementProp = { "AbnormalActors", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors = { "AbnormalActors", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, AbnormalActors), METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod = { "mycheckmethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, mycheckmethod), Z_Construct_UEnum_CheckFloatDrown_ECheckMethods, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_eps_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_eps = { "eps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, eps), METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_eps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_eps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_myFilePath_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_myFilePath = { "myFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, myFilePath), METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_myFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_myFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	void Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat_SetBit(void* Obj)
	{
		((ACheckFloatorDrown*)Obj)->bCheckFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat = { "bCheckFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACheckFloatorDrown), &Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	void Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown_SetBit(void* Obj)
	{
		((ACheckFloatorDrown*)Obj)->bCheckDrown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown = { "bCheckDrown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACheckFloatorDrown), &Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts_Inner = { "texts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts_MetaData[] = {
		{ "Category", "CheckFloatorDrown" },
		{ "ModuleRelativePath", "Public/CheckFloatorDrown.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts = { "texts", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckFloatorDrown, texts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckFloatorDrown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_TerrainTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ItemClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_AbnormalActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_mycheckmethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_eps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_myFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_bCheckDrown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckFloatorDrown_Statics::NewProp_texts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckFloatorDrown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckFloatorDrown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACheckFloatorDrown_Statics::ClassParams = {
		&ACheckFloatorDrown::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACheckFloatorDrown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckFloatorDrown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckFloatorDrown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckFloatorDrown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACheckFloatorDrown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheckFloatorDrown, 3383894232);
	template<> CHECKFLOATDROWN_API UClass* StaticClass<ACheckFloatorDrown>()
	{
		return ACheckFloatorDrown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheckFloatorDrown(Z_Construct_UClass_ACheckFloatorDrown, &ACheckFloatorDrown::StaticClass, TEXT("/Script/CheckFloatDrown"), TEXT("ACheckFloatorDrown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckFloatorDrown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
