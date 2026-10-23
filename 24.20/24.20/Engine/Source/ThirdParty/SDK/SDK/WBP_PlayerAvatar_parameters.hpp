#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings final
{
public:
	double                                        Scale;
	struct FVector2D                              Offset;
};
static_assert(alignof(WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings) == 0x000008, "Wrong alignment on WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings");
static_assert(sizeof(WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings) == 0x000018, "Wrong size on WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings");
static_assert(offsetof(WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings, Scale) == 0x000000, "Member 'WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings::Scale' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings, Offset) == 0x000008, "Member 'WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings::Offset' has a wrong offset!");

struct WBP_PlayerAvatar_C_Event_Set_Size final
{
public:
	struct FVector2D                              NewSize;
};
static_assert(alignof(WBP_PlayerAvatar_C_Event_Set_Size) == 0x000008, "Wrong alignment on WBP_PlayerAvatar_C_Event_Set_Size");
static_assert(sizeof(WBP_PlayerAvatar_C_Event_Set_Size) == 0x000010, "Wrong size on WBP_PlayerAvatar_C_Event_Set_Size");
static_assert(offsetof(WBP_PlayerAvatar_C_Event_Set_Size, NewSize) == 0x000000, "Member 'WBP_PlayerAvatar_C_Event_Set_Size::NewSize' has a wrong offset!");

struct WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x3];
	float                                         Temp_real_Variable_2;
	float                                         Temp_real_Variable_3;
	float                                         K2Node_Select_Default;
	EPresenceIndicatorState                       Temp_byte_Variable;
	uint8                                         Pad_21[0x3];
	float                                         Temp_real_Variable_4;
	bool                                          K2Node_Event_bHidePresence;
	EPresenceIndicatorState                       K2Node_Event_PresenceState;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_2B[0x5];
	struct FVector2D                              K2Node_CustomEvent_NewSize;
	float                                         Temp_real_Variable_5;
	struct FLinearColor                           K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_56[0x2];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_129[0x3];
	float                                         K2Node_Select_Default_2;
	float                                         K2Node_Select_Default_3;
	uint8                                         Pad_134[0x4];
	double                                        K2Node_CustomEvent_Scale;
	struct FVector2D                              K2Node_CustomEvent_Offset;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	EPresenceIndicatorState                       Temp_byte_Variable_1;
	uint8                                         Pad_169[0x3];
	struct FLinearColor                           K2Node_Select_Default_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
};
static_assert(alignof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar) == 0x000010, "Wrong alignment on WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar");
static_assert(sizeof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar) == 0x000190, "Wrong size on WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, EntryPoint) == 0x000000, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_bool_Variable) == 0x000004, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable) == 0x000008, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable_1) == 0x00000C, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_bool_Variable_1) == 0x000010, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable_2) == 0x000014, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable_3) == 0x000018, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Select_Default) == 0x00001C, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_byte_Variable) == 0x000020, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable_4) == 0x000024, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Event_bHidePresence) == 0x000028, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Event_bHidePresence' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Event_PresenceState) == 0x000029, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Event_PresenceState' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_CustomEvent_NewSize) == 0x000030, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_CustomEvent_NewSize' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_real_Variable_5) == 0x000040, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Select_Default_1) == 0x000044, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_bool_Variable_2) == 0x000054, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Event_IsDesignTime) == 0x000055, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000058, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_MakeStruct_SlateBrush) == 0x000060, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000120, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Select_Default_2) == 0x00012C, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Select_Default_3) == 0x000130, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_CustomEvent_Scale) == 0x000138, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_CustomEvent_Scale' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_CustomEvent_Offset) == 0x000140, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_BreakVector2D_X) == 0x000150, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_BreakVector2D_Y) == 0x000158, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000160, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, Temp_byte_Variable_1) == 0x000168, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, K2Node_Select_Default_4) == 0x00016C, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00017C, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000180, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000184, "Member 'WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

struct WBP_PlayerAvatar_C_OnOnlinePresenceChanged final
{
public:
	bool                                          bHidePresence;
	EPresenceIndicatorState                       PresenceState;
};
static_assert(alignof(WBP_PlayerAvatar_C_OnOnlinePresenceChanged) == 0x000001, "Wrong alignment on WBP_PlayerAvatar_C_OnOnlinePresenceChanged");
static_assert(sizeof(WBP_PlayerAvatar_C_OnOnlinePresenceChanged) == 0x000002, "Wrong size on WBP_PlayerAvatar_C_OnOnlinePresenceChanged");
static_assert(offsetof(WBP_PlayerAvatar_C_OnOnlinePresenceChanged, bHidePresence) == 0x000000, "Member 'WBP_PlayerAvatar_C_OnOnlinePresenceChanged::bHidePresence' has a wrong offset!");
static_assert(offsetof(WBP_PlayerAvatar_C_OnOnlinePresenceChanged, PresenceState) == 0x000001, "Member 'WBP_PlayerAvatar_C_OnOnlinePresenceChanged::PresenceState' has a wrong offset!");

struct WBP_PlayerAvatar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_PlayerAvatar_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PlayerAvatar_C_PreConstruct");
static_assert(sizeof(WBP_PlayerAvatar_C_PreConstruct) == 0x000001, "Wrong size on WBP_PlayerAvatar_C_PreConstruct");
static_assert(offsetof(WBP_PlayerAvatar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PlayerAvatar_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
