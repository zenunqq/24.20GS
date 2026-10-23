#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "UnrealEngineExperimental_0_structs.hpp"

namespace SDK
{

class UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass UnrealEngineExperimental.$SolarisSignatureFunctionOuter", true>();
	}
	static class UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on UnrealEngineExperimental_0::U_SolarisSignatureFunctionOuter");

class UCurves_editable_curve final : public UCurveFloat
{
public:
	FVerseFunctionProperty_                       __verse_0xF015AD4E__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Curves_editable_curve">();
	}
	static class UCurves_editable_curve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurves_editable_curve>();
	}
};
static_assert(alignof(UCurves_editable_curve) == 0x000008, "Wrong alignment on UCurves_editable_curve");
static_assert(sizeof(UCurves_editable_curve) == 0x0000C8, "Wrong size on UCurves_editable_curve");
static_assert(offsetof(UCurves_editable_curve, __verse_0xF015AD4E__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R) == 0x0000B8, "Member 'UCurves_editable_curve::__verse_0xF015AD4E__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R' has a wrong offset!");

class UDiagnostics_log final : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0x68BD11CE__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R;
	FVerseFunctionProperty_                       __verse_0xBC5A2053__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R;
	class UClass*                                 __verse_0xFAE6EE9E_Channel;
	EDiagnostics_log_level                        __verse_0x540F3253_DefaultLevel;
	uint8                                         Pad_51[0x7];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R(const struct UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R(FOptionProperty_ __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Diagnostics_log">();
	}
	static class UDiagnostics_log* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiagnostics_log>();
	}
};
static_assert(alignof(UDiagnostics_log) == 0x000008, "Wrong alignment on UDiagnostics_log");
static_assert(sizeof(UDiagnostics_log) == 0x000058, "Wrong size on UDiagnostics_log");
static_assert(offsetof(UDiagnostics_log, __verse_0x68BD11CE__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R) == 0x000028, "Member 'UDiagnostics_log::__verse_0x68BD11CE__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R' has a wrong offset!");
static_assert(offsetof(UDiagnostics_log, __verse_0xBC5A2053__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R) == 0x000038, "Member 'UDiagnostics_log::__verse_0xBC5A2053__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R' has a wrong offset!");
static_assert(offsetof(UDiagnostics_log, __verse_0xFAE6EE9E_Channel) == 0x000048, "Member 'UDiagnostics_log::__verse_0xFAE6EE9E_Channel' has a wrong offset!");
static_assert(offsetof(UDiagnostics_log, __verse_0x540F3253_DefaultLevel) == 0x000050, "Member 'UDiagnostics_log::__verse_0x540F3253_DefaultLevel' has a wrong offset!");

class UDiagnostics_log_channel : public UObject
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Diagnostics_log_channel">();
	}
	static class UDiagnostics_log_channel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiagnostics_log_channel>();
	}
};
static_assert(alignof(UDiagnostics_log_channel) == 0x000008, "Wrong alignment on UDiagnostics_log_channel");
static_assert(sizeof(UDiagnostics_log_channel) == 0x000028, "Wrong size on UDiagnostics_log_channel");

}
