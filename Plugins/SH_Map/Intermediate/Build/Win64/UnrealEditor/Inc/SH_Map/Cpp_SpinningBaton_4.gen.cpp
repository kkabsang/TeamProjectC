// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_SpinningBaton_4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_SpinningBaton_4() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_SpinningBaton_4_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_SpinningBaton_4();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACpp_SpinningBaton_4::StaticRegisterNativesACpp_SpinningBaton_4()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_SpinningBaton_4);
	UClass* Z_Construct_UClass_ACpp_SpinningBaton_4_NoRegister()
	{
		return ACpp_SpinningBaton_4::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_SpinningBaton_4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_SpinningBaton_4.h" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "Category", "Cpp_SpinningBaton_4" },
		{ "Comment", "// ????\xc6\xbd ?\xde\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
		{ "ToolTip", "????\xc6\xbd ?\xde\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pStComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// \xc8\xb8??\n" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
		{ "ToolTip", "\xc8\xb8??" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, RollValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_RollValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, YawValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp1_MetaData[] = {
		{ "Comment", "// ?\xdd\xb8??? ?\xda\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
		{ "ToolTip", "?\xdd\xb8??? ?\xda\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp1 = { "m_pBoxComp1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, m_pBoxComp1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_4.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp2 = { "m_pBoxComp2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_4, m_pBoxComp2), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pStComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_RollValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_PitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_YawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::NewProp_m_pBoxComp2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_SpinningBaton_4>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::ClassParams = {
		&ACpp_SpinningBaton_4::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_SpinningBaton_4()
	{
		if (!Z_Registration_Info_UClass_ACpp_SpinningBaton_4.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_SpinningBaton_4.OuterSingleton, Z_Construct_UClass_ACpp_SpinningBaton_4_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_SpinningBaton_4.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_SpinningBaton_4>()
	{
		return ACpp_SpinningBaton_4::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_SpinningBaton_4);
	struct Z_CompiledInDeferFile_FID_KGCA40CTeam_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_4_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA40CTeam_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_4_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_SpinningBaton_4, ACpp_SpinningBaton_4::StaticClass, TEXT("ACpp_SpinningBaton_4"), &Z_Registration_Info_UClass_ACpp_SpinningBaton_4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_SpinningBaton_4), 1504640375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA40CTeam_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_4_h_3046469136(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA40CTeam_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_4_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA40CTeam_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_4_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
