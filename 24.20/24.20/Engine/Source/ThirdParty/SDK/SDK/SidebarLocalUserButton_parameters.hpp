#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_32[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ELocalUserOnlineStatus                        K2Node_Event_OnlineStatus;
	bool                                          CallFunc_IsHovered_ReturnValue;
	uint8                                         Pad_42[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_56[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
	uint8                                         Pad_69[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	bool                                          K2Node_Event_bUsingNewAvatars;
	uint8                                         Pad_7D[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_3;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	ELocalUserOnlineStatus                        Temp_byte_Variable_4;
	uint8                                         Pad_93[0x1];
	struct FLinearColor                           K2Node_Select_Default_2;
};
static_assert(alignof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton) == 0x000008, "Wrong alignment on SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton");
static_assert(sizeof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton) == 0x0000A8, "Wrong size on SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, EntryPoint) == 0x000000, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_bool_Variable) == 0x000004, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_byte_Variable) == 0x000005, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_byte_Variable_1) == 0x000006, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_bool_Variable_1) == 0x000007, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_byte_Variable_2) == 0x000008, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_byte_Variable_3) == 0x000009, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_IsUsingTouch_ReturnValue) == 0x000030, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Event_OnlineStatus) == 0x000040, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Event_OnlineStatus' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_IsHovered_ReturnValue) == 0x000041, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_SelectColor_ReturnValue) == 0x000044, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_GetSelected_ReturnValue) == 0x000054, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Event_IsDesignTime) == 0x000055, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_SelectColor_ReturnValue_1) == 0x000058, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_GetSelected_ReturnValue_1) == 0x000068, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_SelectColor_ReturnValue_2) == 0x00006C, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Event_bUsingNewAvatars) == 0x00007C, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, CallFunc_SelectColor_ReturnValue_3) == 0x000080, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::CallFunc_SelectColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Select_Default) == 0x000090, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Select_Default_1) == 0x000091, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, Temp_byte_Variable_4) == 0x000092, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton, K2Node_Select_Default_2) == 0x000094, "Member 'SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton::K2Node_Select_Default_2' has a wrong offset!");

struct SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

struct SidebarLocalUserButton_C_OnOnlineStatusChanged final
{
public:
	ELocalUserOnlineStatus                        OnlineStatus;
};
static_assert(alignof(SidebarLocalUserButton_C_OnOnlineStatusChanged) == 0x000001, "Wrong alignment on SidebarLocalUserButton_C_OnOnlineStatusChanged");
static_assert(sizeof(SidebarLocalUserButton_C_OnOnlineStatusChanged) == 0x000001, "Wrong size on SidebarLocalUserButton_C_OnOnlineStatusChanged");
static_assert(offsetof(SidebarLocalUserButton_C_OnOnlineStatusChanged, OnlineStatus) == 0x000000, "Member 'SidebarLocalUserButton_C_OnOnlineStatusChanged::OnlineStatus' has a wrong offset!");

struct SidebarLocalUserButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarLocalUserButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarLocalUserButton_C_PreConstruct");
static_assert(sizeof(SidebarLocalUserButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarLocalUserButton_C_PreConstruct");
static_assert(offsetof(SidebarLocalUserButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarLocalUserButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor final
{
public:
	struct FLinearColor                           Value;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor) == 0x000008, "Wrong alignment on SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor");
static_assert(sizeof(SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor) == 0x000018, "Wrong size on SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor");
static_assert(offsetof(SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor, Value) == 0x000000, "Member 'SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor::Value' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct SidebarLocalUserButton_C_SetSkewBoxColor final
{
public:
	struct FLinearColor                           InputPin;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(SidebarLocalUserButton_C_SetSkewBoxColor) == 0x000008, "Wrong alignment on SidebarLocalUserButton_C_SetSkewBoxColor");
static_assert(sizeof(SidebarLocalUserButton_C_SetSkewBoxColor) == 0x000018, "Wrong size on SidebarLocalUserButton_C_SetSkewBoxColor");
static_assert(offsetof(SidebarLocalUserButton_C_SetSkewBoxColor, InputPin) == 0x000000, "Member 'SidebarLocalUserButton_C_SetSkewBoxColor::InputPin' has a wrong offset!");
static_assert(offsetof(SidebarLocalUserButton_C_SetSkewBoxColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'SidebarLocalUserButton_C_SetSkewBoxColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
