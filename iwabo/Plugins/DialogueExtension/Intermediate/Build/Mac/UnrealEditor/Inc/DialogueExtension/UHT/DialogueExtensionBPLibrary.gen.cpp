// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueExtension/Public/DialogueExtensionBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueExtensionBPLibrary() {}
// Cross Module References
	DIALOGUEEXTENSION_API UClass* Z_Construct_UClass_UDialogueExtensionBPLibrary();
	DIALOGUEEXTENSION_API UClass* Z_Construct_UClass_UDialogueExtensionBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DialogueExtension();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueExtensionBPLibrary::execTestFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Input1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Input2);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDialogueExtensionBPLibrary::TestFunction(Z_Param_Input1,Z_Param_Input2,Z_Param_Out_ReturnValue2);
		P_NATIVE_END;
	}
	void UDialogueExtensionBPLibrary::StaticRegisterNativesUDialogueExtensionBPLibrary()
	{
		UClass* Class = UDialogueExtensionBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunction", &UDialogueExtensionBPLibrary::execTestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics
	{
		struct DialogueExtensionBPLibrary_eventTestFunction_Parms
		{
			float Input1;
			int32 Input2;
			FString ReturnValue2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Input1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Input2;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_Input1 = { "Input1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueExtensionBPLibrary_eventTestFunction_Parms, Input1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_Input2 = { "Input2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueExtensionBPLibrary_eventTestFunction_Parms, Input2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue2 = { "ReturnValue2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueExtensionBPLibrary_eventTestFunction_Parms, ReturnValue2), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueExtensionBPLibrary_eventTestFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueExtensionBPLibrary_eventTestFunction_Parms), &Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_Input1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_Input2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueExtensionBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueExtensionBPLibrary, nullptr, "TestFunction", nullptr, nullptr, Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::DialogueExtensionBPLibrary_eventTestFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::DialogueExtensionBPLibrary_eventTestFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueExtensionBPLibrary);
	UClass* Z_Construct_UClass_UDialogueExtensionBPLibrary_NoRegister()
	{
		return UDialogueExtensionBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueExtension,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueExtensionBPLibrary_TestFunction, "TestFunction" }, // 780836616
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "DialogueExtensionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DialogueExtensionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueExtensionBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::ClassParams = {
		&UDialogueExtensionBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDialogueExtensionBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDialogueExtensionBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueExtensionBPLibrary.OuterSingleton, Z_Construct_UClass_UDialogueExtensionBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueExtensionBPLibrary.OuterSingleton;
	}
	template<> DIALOGUEEXTENSION_API UClass* StaticClass<UDialogueExtensionBPLibrary>()
	{
		return UDialogueExtensionBPLibrary::StaticClass();
	}
	UDialogueExtensionBPLibrary::UDialogueExtensionBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueExtensionBPLibrary);
	UDialogueExtensionBPLibrary::~UDialogueExtensionBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_admin_Documents_projects_iwabo_unreal_iwabo_ue_0_1_iwabo_Plugins_DialogueExtension_Source_DialogueExtension_Public_DialogueExtensionBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_admin_Documents_projects_iwabo_unreal_iwabo_ue_0_1_iwabo_Plugins_DialogueExtension_Source_DialogueExtension_Public_DialogueExtensionBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueExtensionBPLibrary, UDialogueExtensionBPLibrary::StaticClass, TEXT("UDialogueExtensionBPLibrary"), &Z_Registration_Info_UClass_UDialogueExtensionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueExtensionBPLibrary), 4162727884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_admin_Documents_projects_iwabo_unreal_iwabo_ue_0_1_iwabo_Plugins_DialogueExtension_Source_DialogueExtension_Public_DialogueExtensionBPLibrary_h_1714369382(TEXT("/Script/DialogueExtension"),
		Z_CompiledInDeferFile_FID_admin_Documents_projects_iwabo_unreal_iwabo_ue_0_1_iwabo_Plugins_DialogueExtension_Source_DialogueExtension_Public_DialogueExtensionBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_admin_Documents_projects_iwabo_unreal_iwabo_ue_0_1_iwabo_Plugins_DialogueExtension_Source_DialogueExtension_Public_DialogueExtensionBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
