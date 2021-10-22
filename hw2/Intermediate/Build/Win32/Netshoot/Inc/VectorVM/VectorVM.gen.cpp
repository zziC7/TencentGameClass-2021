// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VectorVM/Public/VectorVM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorVM() {}
// Cross Module References
	VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOp();
	UPackage* Z_Construct_UPackage__Script_VectorVM();
	VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation();
	VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes();
// End Cross Module References
	static UEnum* EVectorVMOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOp, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOp"));
		}
		return Singleton;
	}
	template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOp>()
	{
		return EVectorVMOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMOp(EVectorVMOp_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOp_Hash() { return 547143802U; }
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VectorVM();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMOp"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVectorVMOp::done", (int64)EVectorVMOp::done },
				{ "EVectorVMOp::add", (int64)EVectorVMOp::add },
				{ "EVectorVMOp::sub", (int64)EVectorVMOp::sub },
				{ "EVectorVMOp::mul", (int64)EVectorVMOp::mul },
				{ "EVectorVMOp::div", (int64)EVectorVMOp::div },
				{ "EVectorVMOp::mad", (int64)EVectorVMOp::mad },
				{ "EVectorVMOp::lerp", (int64)EVectorVMOp::lerp },
				{ "EVectorVMOp::rcp", (int64)EVectorVMOp::rcp },
				{ "EVectorVMOp::rsq", (int64)EVectorVMOp::rsq },
				{ "EVectorVMOp::sqrt", (int64)EVectorVMOp::sqrt },
				{ "EVectorVMOp::neg", (int64)EVectorVMOp::neg },
				{ "EVectorVMOp::abs", (int64)EVectorVMOp::abs },
				{ "EVectorVMOp::exp", (int64)EVectorVMOp::exp },
				{ "EVectorVMOp::exp2", (int64)EVectorVMOp::exp2 },
				{ "EVectorVMOp::log", (int64)EVectorVMOp::log },
				{ "EVectorVMOp::log2", (int64)EVectorVMOp::log2 },
				{ "EVectorVMOp::sin", (int64)EVectorVMOp::sin },
				{ "EVectorVMOp::cos", (int64)EVectorVMOp::cos },
				{ "EVectorVMOp::tan", (int64)EVectorVMOp::tan },
				{ "EVectorVMOp::asin", (int64)EVectorVMOp::asin },
				{ "EVectorVMOp::acos", (int64)EVectorVMOp::acos },
				{ "EVectorVMOp::atan", (int64)EVectorVMOp::atan },
				{ "EVectorVMOp::atan2", (int64)EVectorVMOp::atan2 },
				{ "EVectorVMOp::ceil", (int64)EVectorVMOp::ceil },
				{ "EVectorVMOp::floor", (int64)EVectorVMOp::floor },
				{ "EVectorVMOp::fmod", (int64)EVectorVMOp::fmod },
				{ "EVectorVMOp::frac", (int64)EVectorVMOp::frac },
				{ "EVectorVMOp::trunc", (int64)EVectorVMOp::trunc },
				{ "EVectorVMOp::clamp", (int64)EVectorVMOp::clamp },
				{ "EVectorVMOp::min", (int64)EVectorVMOp::min },
				{ "EVectorVMOp::max", (int64)EVectorVMOp::max },
				{ "EVectorVMOp::pow", (int64)EVectorVMOp::pow },
				{ "EVectorVMOp::round", (int64)EVectorVMOp::round },
				{ "EVectorVMOp::sign", (int64)EVectorVMOp::sign },
				{ "EVectorVMOp::step", (int64)EVectorVMOp::step },
				{ "EVectorVMOp::random", (int64)EVectorVMOp::random },
				{ "EVectorVMOp::noise", (int64)EVectorVMOp::noise },
				{ "EVectorVMOp::cmplt", (int64)EVectorVMOp::cmplt },
				{ "EVectorVMOp::cmple", (int64)EVectorVMOp::cmple },
				{ "EVectorVMOp::cmpgt", (int64)EVectorVMOp::cmpgt },
				{ "EVectorVMOp::cmpge", (int64)EVectorVMOp::cmpge },
				{ "EVectorVMOp::cmpeq", (int64)EVectorVMOp::cmpeq },
				{ "EVectorVMOp::cmpneq", (int64)EVectorVMOp::cmpneq },
				{ "EVectorVMOp::select", (int64)EVectorVMOp::select },
				{ "EVectorVMOp::addi", (int64)EVectorVMOp::addi },
				{ "EVectorVMOp::subi", (int64)EVectorVMOp::subi },
				{ "EVectorVMOp::muli", (int64)EVectorVMOp::muli },
				{ "EVectorVMOp::divi", (int64)EVectorVMOp::divi },
				{ "EVectorVMOp::clampi", (int64)EVectorVMOp::clampi },
				{ "EVectorVMOp::mini", (int64)EVectorVMOp::mini },
				{ "EVectorVMOp::maxi", (int64)EVectorVMOp::maxi },
				{ "EVectorVMOp::absi", (int64)EVectorVMOp::absi },
				{ "EVectorVMOp::negi", (int64)EVectorVMOp::negi },
				{ "EVectorVMOp::signi", (int64)EVectorVMOp::signi },
				{ "EVectorVMOp::randomi", (int64)EVectorVMOp::randomi },
				{ "EVectorVMOp::cmplti", (int64)EVectorVMOp::cmplti },
				{ "EVectorVMOp::cmplei", (int64)EVectorVMOp::cmplei },
				{ "EVectorVMOp::cmpgti", (int64)EVectorVMOp::cmpgti },
				{ "EVectorVMOp::cmpgei", (int64)EVectorVMOp::cmpgei },
				{ "EVectorVMOp::cmpeqi", (int64)EVectorVMOp::cmpeqi },
				{ "EVectorVMOp::cmpneqi", (int64)EVectorVMOp::cmpneqi },
				{ "EVectorVMOp::bit_and", (int64)EVectorVMOp::bit_and },
				{ "EVectorVMOp::bit_or", (int64)EVectorVMOp::bit_or },
				{ "EVectorVMOp::bit_xor", (int64)EVectorVMOp::bit_xor },
				{ "EVectorVMOp::bit_not", (int64)EVectorVMOp::bit_not },
				{ "EVectorVMOp::bit_lshift", (int64)EVectorVMOp::bit_lshift },
				{ "EVectorVMOp::bit_rshift", (int64)EVectorVMOp::bit_rshift },
				{ "EVectorVMOp::logic_and", (int64)EVectorVMOp::logic_and },
				{ "EVectorVMOp::logic_or", (int64)EVectorVMOp::logic_or },
				{ "EVectorVMOp::logic_xor", (int64)EVectorVMOp::logic_xor },
				{ "EVectorVMOp::logic_not", (int64)EVectorVMOp::logic_not },
				{ "EVectorVMOp::f2i", (int64)EVectorVMOp::f2i },
				{ "EVectorVMOp::i2f", (int64)EVectorVMOp::i2f },
				{ "EVectorVMOp::f2b", (int64)EVectorVMOp::f2b },
				{ "EVectorVMOp::b2f", (int64)EVectorVMOp::b2f },
				{ "EVectorVMOp::i2b", (int64)EVectorVMOp::i2b },
				{ "EVectorVMOp::b2i", (int64)EVectorVMOp::b2i },
				{ "EVectorVMOp::inputdata_float", (int64)EVectorVMOp::inputdata_float },
				{ "EVectorVMOp::inputdata_int32", (int64)EVectorVMOp::inputdata_int32 },
				{ "EVectorVMOp::inputdata_half", (int64)EVectorVMOp::inputdata_half },
				{ "EVectorVMOp::inputdata_noadvance_float", (int64)EVectorVMOp::inputdata_noadvance_float },
				{ "EVectorVMOp::inputdata_noadvance_int32", (int64)EVectorVMOp::inputdata_noadvance_int32 },
				{ "EVectorVMOp::inputdata_noadvance_half", (int64)EVectorVMOp::inputdata_noadvance_half },
				{ "EVectorVMOp::outputdata_float", (int64)EVectorVMOp::outputdata_float },
				{ "EVectorVMOp::outputdata_int32", (int64)EVectorVMOp::outputdata_int32 },
				{ "EVectorVMOp::outputdata_half", (int64)EVectorVMOp::outputdata_half },
				{ "EVectorVMOp::acquireindex", (int64)EVectorVMOp::acquireindex },
				{ "EVectorVMOp::external_func_call", (int64)EVectorVMOp::external_func_call },
				{ "EVectorVMOp::exec_index", (int64)EVectorVMOp::exec_index },
				{ "EVectorVMOp::noise2D", (int64)EVectorVMOp::noise2D },
				{ "EVectorVMOp::noise3D", (int64)EVectorVMOp::noise3D },
				{ "EVectorVMOp::enter_stat_scope", (int64)EVectorVMOp::enter_stat_scope },
				{ "EVectorVMOp::exit_stat_scope", (int64)EVectorVMOp::exit_stat_scope },
				{ "EVectorVMOp::update_id", (int64)EVectorVMOp::update_id },
				{ "EVectorVMOp::acquire_id", (int64)EVectorVMOp::acquire_id },
				{ "EVectorVMOp::NumOpcodes", (int64)EVectorVMOp::NumOpcodes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "abs.Name", "EVectorVMOp::abs" },
				{ "absi.Name", "EVectorVMOp::absi" },
				{ "acos.Name", "EVectorVMOp::acos" },
				{ "acquire_id.Comment", "//acquires a new ID from the free list.\n" },
				{ "acquire_id.Name", "EVectorVMOp::acquire_id" },
				{ "acquire_id.ToolTip", "acquires a new ID from the free list." },
				{ "acquireindex.Name", "EVectorVMOp::acquireindex" },
				{ "add.Name", "EVectorVMOp::add" },
				{ "addi.Comment", "//Integer ops\n" },
				{ "addi.Name", "EVectorVMOp::addi" },
				{ "addi.ToolTip", "Integer ops" },
				{ "asin.Name", "EVectorVMOp::asin" },
				{ "atan.Name", "EVectorVMOp::atan" },
				{ "atan2.Name", "EVectorVMOp::atan2" },
				{ "b2f.Name", "EVectorVMOp::b2f" },
				{ "b2i.Name", "EVectorVMOp::b2i" },
				{ "bit_and.Name", "EVectorVMOp::bit_and" },
				{ "bit_lshift.Name", "EVectorVMOp::bit_lshift" },
				{ "bit_not.Name", "EVectorVMOp::bit_not" },
				{ "bit_or.Name", "EVectorVMOp::bit_or" },
				{ "bit_rshift.Name", "EVectorVMOp::bit_rshift" },
				{ "bit_xor.Name", "EVectorVMOp::bit_xor" },
				{ "ceil.Name", "EVectorVMOp::ceil" },
				{ "clamp.Name", "EVectorVMOp::clamp" },
				{ "clampi.Comment", "//SSE Integer division is not implemented as an intrinsic. Will have to do some manual implementation.\n" },
				{ "clampi.Name", "EVectorVMOp::clampi" },
				{ "clampi.ToolTip", "SSE Integer division is not implemented as an intrinsic. Will have to do some manual implementation." },
				{ "cmpeq.Name", "EVectorVMOp::cmpeq" },
				{ "cmpeqi.Name", "EVectorVMOp::cmpeqi" },
				{ "cmpge.Name", "EVectorVMOp::cmpge" },
				{ "cmpgei.Name", "EVectorVMOp::cmpgei" },
				{ "cmpgt.Name", "EVectorVMOp::cmpgt" },
				{ "cmpgti.Name", "EVectorVMOp::cmpgti" },
				{ "cmple.Name", "EVectorVMOp::cmple" },
				{ "cmplei.Name", "EVectorVMOp::cmplei" },
				{ "cmplt.Comment", "//Comparison ops.\n" },
				{ "cmplt.Name", "EVectorVMOp::cmplt" },
				{ "cmplt.ToolTip", "Comparison ops." },
				{ "cmplti.Name", "EVectorVMOp::cmplti" },
				{ "cmpneq.Name", "EVectorVMOp::cmpneq" },
				{ "cmpneqi.Name", "EVectorVMOp::cmpneqi" },
				{ "cos.Name", "EVectorVMOp::cos" },
				{ "div.Name", "EVectorVMOp::div" },
				{ "divi.Name", "EVectorVMOp::divi" },
				{ "done.Name", "EVectorVMOp::done" },
				{ "enter_stat_scope.Comment", "/** Utility ops for hooking into the stats system for performance analysis. */" },
				{ "enter_stat_scope.Name", "EVectorVMOp::enter_stat_scope" },
				{ "enter_stat_scope.ToolTip", "Utility ops for hooking into the stats system for performance analysis." },
				{ "exec_index.Comment", "/** Returns the index of each instance in the current execution context. */" },
				{ "exec_index.Name", "EVectorVMOp::exec_index" },
				{ "exec_index.ToolTip", "Returns the index of each instance in the current execution context." },
				{ "exit_stat_scope.Name", "EVectorVMOp::exit_stat_scope" },
				{ "exp.Name", "EVectorVMOp::exp" },
				{ "exp2.Name", "EVectorVMOp::exp2" },
				{ "external_func_call.Name", "EVectorVMOp::external_func_call" },
				{ "f2b.Name", "EVectorVMOp::f2b" },
				{ "f2i.Comment", "//conversions\n" },
				{ "f2i.Name", "EVectorVMOp::f2i" },
				{ "f2i.ToolTip", "conversions" },
				{ "floor.Name", "EVectorVMOp::floor" },
				{ "fmod.Name", "EVectorVMOp::fmod" },
				{ "frac.Name", "EVectorVMOp::frac" },
				{ "i2b.Name", "EVectorVMOp::i2b" },
				{ "i2f.Name", "EVectorVMOp::i2f" },
				{ "inputdata_float.Comment", "// data read/write\n" },
				{ "inputdata_float.Name", "EVectorVMOp::inputdata_float" },
				{ "inputdata_float.ToolTip", "data read/write" },
				{ "inputdata_half.Name", "EVectorVMOp::inputdata_half" },
				{ "inputdata_int32.Name", "EVectorVMOp::inputdata_int32" },
				{ "inputdata_noadvance_float.Name", "EVectorVMOp::inputdata_noadvance_float" },
				{ "inputdata_noadvance_half.Name", "EVectorVMOp::inputdata_noadvance_half" },
				{ "inputdata_noadvance_int32.Name", "EVectorVMOp::inputdata_noadvance_int32" },
				{ "lerp.Name", "EVectorVMOp::lerp" },
				{ "log.Name", "EVectorVMOp::log" },
				{ "log2.Name", "EVectorVMOp::log2" },
				{ "logic_and.Comment", "//\"Boolean\" ops. Currently handling bools as integers.\n" },
				{ "logic_and.Name", "EVectorVMOp::logic_and" },
				{ "logic_and.ToolTip", "\"Boolean\" ops. Currently handling bools as integers." },
				{ "logic_not.Name", "EVectorVMOp::logic_not" },
				{ "logic_or.Name", "EVectorVMOp::logic_or" },
				{ "logic_xor.Name", "EVectorVMOp::logic_xor" },
				{ "mad.Name", "EVectorVMOp::mad" },
				{ "max.Name", "EVectorVMOp::max" },
				{ "maxi.Name", "EVectorVMOp::maxi" },
				{ "min.Name", "EVectorVMOp::min" },
				{ "mini.Name", "EVectorVMOp::mini" },
				{ "ModuleRelativePath", "Public/VectorVM.h" },
				{ "mul.Name", "EVectorVMOp::mul" },
				{ "muli.Name", "EVectorVMOp::muli" },
				{ "neg.Name", "EVectorVMOp::neg" },
				{ "negi.Name", "EVectorVMOp::negi" },
				{ "noise.Name", "EVectorVMOp::noise" },
				{ "noise2D.Name", "EVectorVMOp::noise2D" },
				{ "noise3D.Name", "EVectorVMOp::noise3D" },
				{ "NumOpcodes.Name", "EVectorVMOp::NumOpcodes" },
				{ "outputdata_float.Name", "EVectorVMOp::outputdata_float" },
				{ "outputdata_half.Name", "EVectorVMOp::outputdata_half" },
				{ "outputdata_int32.Name", "EVectorVMOp::outputdata_int32" },
				{ "pow.Name", "EVectorVMOp::pow" },
				{ "random.Name", "EVectorVMOp::random" },
				{ "randomi.Name", "EVectorVMOp::randomi" },
				{ "rcp.Name", "EVectorVMOp::rcp" },
				{ "round.Name", "EVectorVMOp::round" },
				{ "rsq.Name", "EVectorVMOp::rsq" },
				{ "select.Name", "EVectorVMOp::select" },
				{ "sign.Name", "EVectorVMOp::sign" },
				{ "signi.Name", "EVectorVMOp::signi" },
				{ "sin.Name", "EVectorVMOp::sin" },
				{ "sqrt.Name", "EVectorVMOp::sqrt" },
				{ "step.Name", "EVectorVMOp::step" },
				{ "sub.Name", "EVectorVMOp::sub" },
				{ "subi.Name", "EVectorVMOp::subi" },
				{ "tan.Name", "EVectorVMOp::tan" },
				{ "trunc.Name", "EVectorVMOp::trunc" },
				{ "update_id.Comment", "//updates an ID in the ID table\n" },
				{ "update_id.Name", "EVectorVMOp::update_id" },
				{ "update_id.ToolTip", "updates an ID in the ID table" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
				nullptr,
				"EVectorVMOp",
				"EVectorVMOp",
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
	static UEnum* EVectorVMOperandLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOperandLocation"));
		}
		return Singleton;
	}
	template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOperandLocation>()
	{
		return EVectorVMOperandLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMOperandLocation(EVectorVMOperandLocation_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMOperandLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Hash() { return 4080804873U; }
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VectorVM();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMOperandLocation"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVectorVMOperandLocation::Register", (int64)EVectorVMOperandLocation::Register },
				{ "EVectorVMOperandLocation::Constant", (int64)EVectorVMOperandLocation::Constant },
				{ "EVectorVMOperandLocation::Num", (int64)EVectorVMOperandLocation::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Constant.Name", "EVectorVMOperandLocation::Constant" },
				{ "ModuleRelativePath", "Public/VectorVM.h" },
				{ "Num.Name", "EVectorVMOperandLocation::Num" },
				{ "Register.Name", "EVectorVMOperandLocation::Register" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
				nullptr,
				"EVectorVMOperandLocation",
				"EVectorVMOperandLocation",
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
	static UEnum* EVectorVMBaseTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMBaseTypes"));
		}
		return Singleton;
	}
	template<> VECTORVM_API UEnum* StaticEnum<EVectorVMBaseTypes>()
	{
		return EVectorVMBaseTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMBaseTypes(EVectorVMBaseTypes_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMBaseTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Hash() { return 3709337421U; }
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VectorVM();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMBaseTypes"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVectorVMBaseTypes::Float", (int64)EVectorVMBaseTypes::Float },
				{ "EVectorVMBaseTypes::Int", (int64)EVectorVMBaseTypes::Int },
				{ "EVectorVMBaseTypes::Bool", (int64)EVectorVMBaseTypes::Bool },
				{ "EVectorVMBaseTypes::Num", (int64)EVectorVMBaseTypes::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "EVectorVMBaseTypes::Bool" },
				{ "Float.Name", "EVectorVMBaseTypes::Float" },
				{ "Int.Name", "EVectorVMBaseTypes::Int" },
				{ "ModuleRelativePath", "Public/VectorVM.h" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "EVectorVMBaseTypes::Num" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
				nullptr,
				"EVectorVMBaseTypes",
				"EVectorVMBaseTypes",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
