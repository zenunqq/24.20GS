#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1A[0x6];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
};
static_assert(alignof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton) == 0x000010, "Wrong alignment on AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton");
static_assert(sizeof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton) == 0x000120, "Wrong size on AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, EntryPoint) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000008, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue_1) == 0x000010, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, K2Node_Event_TabLabelInfo) == 0x000020, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetSelected_ReturnValue) == 0x000110, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetSelected_ReturnValue_1) == 0x000111, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");

struct AthenaLeaderboardTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaLeaderboardTabButton_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaLeaderboardTabButton_C_PreConstruct");
static_assert(sizeof(AthenaLeaderboardTabButton_C_PreConstruct) == 0x000001, "Wrong size on AthenaLeaderboardTabButton_C_PreConstruct");
static_assert(offsetof(AthenaLeaderboardTabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaLeaderboardTabButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(AthenaLeaderboardTabButton_C_Set_Icon) == 0x000010, "Wrong alignment on AthenaLeaderboardTabButton_C_Set_Icon");
static_assert(sizeof(AthenaLeaderboardTabButton_C_Set_Icon) == 0x0000C0, "Wrong size on AthenaLeaderboardTabButton_C_Set_Icon");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct AthenaLeaderboardTabButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;
};
static_assert(alignof(AthenaLeaderboardTabButton_C_Set_Text) == 0x000008, "Wrong alignment on AthenaLeaderboardTabButton_C_Set_Text");
static_assert(sizeof(AthenaLeaderboardTabButton_C_Set_Text) == 0x000038, "Wrong size on AthenaLeaderboardTabButton_C_Set_Text");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_Set_Text::ButtonText_0' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

struct AthenaLeaderboardTabButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(AthenaLeaderboardTabButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on AthenaLeaderboardTabButton_C_SetTabLabelInfo");
static_assert(sizeof(AthenaLeaderboardTabButton_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on AthenaLeaderboardTabButton_C_SetTabLabelInfo");
static_assert(offsetof(AthenaLeaderboardTabButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

}
