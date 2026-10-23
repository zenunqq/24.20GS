#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaSeconds;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_39[0x3];
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
};
static_assert(alignof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof) == 0x000008, "Wrong alignment on InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof");
static_assert(sizeof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof) == 0x000040, "Wrong size on InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, EntryPoint) == 0x000000, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_MapRangeClamped_ReturnValue) == 0x000018, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_SelectFloat_ReturnValue_1) == 0x000028, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_Lerp_ReturnValue) == 0x000030, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x00003C, "Member 'InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

struct InteriorAudioComponent_Roof_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(InteriorAudioComponent_Roof_C_ReceiveTick) == 0x000004, "Wrong alignment on InteriorAudioComponent_Roof_C_ReceiveTick");
static_assert(sizeof(InteriorAudioComponent_Roof_C_ReceiveTick) == 0x000004, "Wrong size on InteriorAudioComponent_Roof_C_ReceiveTick");
static_assert(offsetof(InteriorAudioComponent_Roof_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'InteriorAudioComponent_Roof_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct InteriorAudioComponent_Roof_C_Update final
{
public:
	struct FInteriorAudioScanResults              ScanResults;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
};
static_assert(alignof(InteriorAudioComponent_Roof_C_Update) == 0x000008, "Wrong alignment on InteriorAudioComponent_Roof_C_Update");
static_assert(sizeof(InteriorAudioComponent_Roof_C_Update) == 0x000088, "Wrong size on InteriorAudioComponent_Roof_C_Update");
static_assert(offsetof(InteriorAudioComponent_Roof_C_Update, ScanResults) == 0x000000, "Member 'InteriorAudioComponent_Roof_C_Update::ScanResults' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_Update, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000078, "Member 'InteriorAudioComponent_Roof_C_Update::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteriorAudioComponent_Roof_C_Update, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000080, "Member 'InteriorAudioComponent_Roof_C_Update::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}
