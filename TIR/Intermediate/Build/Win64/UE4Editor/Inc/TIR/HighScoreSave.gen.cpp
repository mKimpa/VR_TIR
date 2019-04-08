// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIR/Public/HighScoreSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighScoreSave() {}
// Cross Module References
	TIR_API UClass* Z_Construct_UClass_UHighScoreSave_NoRegister();
	TIR_API UClass* Z_Construct_UClass_UHighScoreSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_TIR();
// End Cross Module References
	void UHighScoreSave::StaticRegisterNativesUHighScoreSave()
	{
	}
	UClass* Z_Construct_UClass_UHighScoreSave_NoRegister()
	{
		return UHighScoreSave::StaticClass();
	}
	struct Z_Construct_UClass_UHighScoreSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighScoreSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TIR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighScoreSave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HighScoreSave.h" },
		{ "ModuleRelativePath", "Public/HighScoreSave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighScoreSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighScoreSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighScoreSave_Statics::ClassParams = {
		&UHighScoreSave::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHighScoreSave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHighScoreSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighScoreSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighScoreSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighScoreSave, 583986997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighScoreSave(Z_Construct_UClass_UHighScoreSave, &UHighScoreSave::StaticClass, TEXT("/Script/TIR"), TEXT("UHighScoreSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighScoreSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
