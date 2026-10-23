#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ProgressiveHeaderBanner_C_Update_Text final
{
public:
	class FText                                   InText;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ProgressiveHeaderBanner_C_Update_Text) == 0x000008, "Wrong alignment on ProgressiveHeaderBanner_C_Update_Text");
static_assert(sizeof(ProgressiveHeaderBanner_C_Update_Text) == 0x000020, "Wrong size on ProgressiveHeaderBanner_C_Update_Text");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, InText) == 0x000000, "Member 'ProgressiveHeaderBanner_C_Update_Text::InText' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, Temp_bool_Variable) == 0x000018, "Member 'ProgressiveHeaderBanner_C_Update_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'ProgressiveHeaderBanner_C_Update_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, Temp_byte_Variable) == 0x00001A, "Member 'ProgressiveHeaderBanner_C_Update_Text::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, Temp_byte_Variable_1) == 0x00001B, "Member 'ProgressiveHeaderBanner_C_Update_Text::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Text, K2Node_Select_Default) == 0x00001C, "Member 'ProgressiveHeaderBanner_C_Update_Text::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveHeaderBanner_C_Update_Banner_State final
{
public:
	class FText                                   Text;
	bool                                          Current_Sets_Complete;
	bool                                          Subscribed_0;
	uint8                                         Pad_1A[0x2];
	struct FLinearColor                           Unlocked_Color;
	struct FLinearColor                           Locked_Color;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3D[0x3];
	class UTexture2D*                             Temp_object_Variable;
	class UTexture2D*                             Temp_object_Variable_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_51[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	uint8                                         Pad_64[0x4];
	class UTexture2D*                             K2Node_Select_Default;
};
static_assert(alignof(ProgressiveHeaderBanner_C_Update_Banner_State) == 0x000008, "Wrong alignment on ProgressiveHeaderBanner_C_Update_Banner_State");
static_assert(sizeof(ProgressiveHeaderBanner_C_Update_Banner_State) == 0x000070, "Wrong size on ProgressiveHeaderBanner_C_Update_Banner_State");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Text) == 0x000000, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Text' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Current_Sets_Complete) == 0x000018, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Current_Sets_Complete' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Subscribed_0) == 0x000019, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Subscribed_0' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Unlocked_Color) == 0x00001C, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Unlocked_Color' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Locked_Color) == 0x00002C, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Locked_Color' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Temp_bool_Variable) == 0x00003C, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Temp_object_Variable) == 0x000040, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, Temp_object_Variable_1) == 0x000048, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, CallFunc_BooleanOR_ReturnValue) == 0x000050, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, CallFunc_SelectColor_ReturnValue) == 0x000054, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_Update_Banner_State, K2Node_Select_Default) == 0x000068, "Member 'ProgressiveHeaderBanner_C_Update_Banner_State::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveHeaderBanner_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveHeaderBanner_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveHeaderBanner_C_PreConstruct");
static_assert(sizeof(ProgressiveHeaderBanner_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveHeaderBanner_C_PreConstruct");
static_assert(offsetof(ProgressiveHeaderBanner_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveHeaderBanner_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner) == 0x000004, "Wrong alignment on ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner");
static_assert(sizeof(ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner) == 0x000008, "Wrong size on ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner");
static_assert(offsetof(ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner, EntryPoint) == 0x000000, "Member 'ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner::K2Node_Event_IsDesignTime' has a wrong offset!");

}
