// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DischargedWorld.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1DischargedWorld() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	DISCHARGEDWORLD_API class UClass* Z_Construct_UClass_ADischargedWorldGameModeBase_NoRegister();
	DISCHARGEDWORLD_API class UClass* Z_Construct_UClass_ADischargedWorldGameModeBase();
	DISCHARGEDWORLD_API class UPackage* Z_Construct_UPackage__Script_DischargedWorld();
	void ADischargedWorldGameModeBase::StaticRegisterNativesADischargedWorldGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADischargedWorldGameModeBase_NoRegister()
	{
		return ADischargedWorldGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ADischargedWorldGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_DischargedWorld();
			OuterClass = ADischargedWorldGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ADischargedWorldGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DischargedWorldGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("DischargedWorldGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADischargedWorldGameModeBase, 2858959595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADischargedWorldGameModeBase(Z_Construct_UClass_ADischargedWorldGameModeBase, &ADischargedWorldGameModeBase::StaticClass, TEXT("/Script/DischargedWorld"), TEXT("ADischargedWorldGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADischargedWorldGameModeBase);
	UPackage* Z_Construct_UPackage__Script_DischargedWorld()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/DischargedWorld")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xE9DD584D;
			Guid.B = 0xF8ECD86D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
