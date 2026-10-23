#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaTemperature_C_ShowTemperatureChanged final
{
public:
	bool                                          bShowTemperature;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaTemperature_C_ShowTemperatureChanged) == 0x000001, "Wrong alignment on AthenaTemperature_C_ShowTemperatureChanged");
static_assert(sizeof(AthenaTemperature_C_ShowTemperatureChanged) == 0x000005, "Wrong size on AthenaTemperature_C_ShowTemperatureChanged");
static_assert(offsetof(AthenaTemperature_C_ShowTemperatureChanged, bShowTemperature) == 0x000000, "Member 'AthenaTemperature_C_ShowTemperatureChanged::bShowTemperature' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ShowTemperatureChanged, Temp_bool_Variable) == 0x000001, "Member 'AthenaTemperature_C_ShowTemperatureChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ShowTemperatureChanged, Temp_byte_Variable) == 0x000002, "Member 'AthenaTemperature_C_ShowTemperatureChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ShowTemperatureChanged, Temp_byte_Variable_1) == 0x000003, "Member 'AthenaTemperature_C_ShowTemperatureChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ShowTemperatureChanged, K2Node_Select_Default) == 0x000004, "Member 'AthenaTemperature_C_ShowTemperatureChanged::K2Node_Select_Default' has a wrong offset!");

struct AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	TDelegate<void(bool bShowTemperature)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature) == 0x000008, "Wrong alignment on AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature");
static_assert(sizeof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature) == 0x000030, "Wrong size on AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature");
static_assert(offsetof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature, EntryPoint) == 0x000000, "Member 'AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000020, "Member 'AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
