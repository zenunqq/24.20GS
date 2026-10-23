#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct MainMenuButton_C_ExecuteUbergraph_MainMenuButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	TSoftObjectPtr<class UMaterialInterface>      K2Node_CustomEvent_SoftMaterial;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_31[0x3];
	struct FLinearColor                           K2Node_CustomEvent_Color;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton) == 0x000008, "Wrong alignment on MainMenuButton_C_ExecuteUbergraph_MainMenuButton");
static_assert(sizeof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton) == 0x000048, "Wrong size on MainMenuButton_C_ExecuteUbergraph_MainMenuButton");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, EntryPoint) == 0x000000, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, Temp_bool_Variable) == 0x000004, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, Temp_byte_Variable) == 0x000005, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, Temp_byte_Variable_1) == 0x000006, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, K2Node_CustomEvent_SoftMaterial) == 0x000008, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::K2Node_CustomEvent_SoftMaterial' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, K2Node_CustomEvent_Color) == 0x000034, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::K2Node_CustomEvent_Color' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, K2Node_Select_Default) == 0x000044, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::K2Node_Select_Default' has a wrong offset!");

struct MainMenuButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(MainMenuButton_C_PreConstruct) == 0x000001, "Wrong alignment on MainMenuButton_C_PreConstruct");
static_assert(sizeof(MainMenuButton_C_PreConstruct) == 0x000001, "Wrong size on MainMenuButton_C_PreConstruct");
static_assert(offsetof(MainMenuButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MainMenuButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct MainMenuButton_C_UpdateRightSideIcon final
{
public:
	TSoftObjectPtr<class UMaterialInterface>      SoftMaterial;
};
static_assert(alignof(MainMenuButton_C_UpdateRightSideIcon) == 0x000008, "Wrong alignment on MainMenuButton_C_UpdateRightSideIcon");
static_assert(sizeof(MainMenuButton_C_UpdateRightSideIcon) == 0x000028, "Wrong size on MainMenuButton_C_UpdateRightSideIcon");
static_assert(offsetof(MainMenuButton_C_UpdateRightSideIcon, SoftMaterial) == 0x000000, "Member 'MainMenuButton_C_UpdateRightSideIcon::SoftMaterial' has a wrong offset!");

struct MainMenuButton_C_UpdateRightSideIconColor final
{
public:
	struct FLinearColor                           Color;
};
static_assert(alignof(MainMenuButton_C_UpdateRightSideIconColor) == 0x000004, "Wrong alignment on MainMenuButton_C_UpdateRightSideIconColor");
static_assert(sizeof(MainMenuButton_C_UpdateRightSideIconColor) == 0x000010, "Wrong size on MainMenuButton_C_UpdateRightSideIconColor");
static_assert(offsetof(MainMenuButton_C_UpdateRightSideIconColor, Color) == 0x000000, "Member 'MainMenuButton_C_UpdateRightSideIconColor::Color' has a wrong offset!");

}
