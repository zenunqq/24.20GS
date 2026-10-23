#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_3A[0x6];
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsLiveStreamEnabled;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_75[0x3];
	class FText                                   K2Node_Select_Default_1;
	class FText                                   K2Node_Select_Default_2;
	class FText                                   K2Node_Select_Default_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle) == 0x000008, "Wrong alignment on LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle");
static_assert(sizeof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle) == 0x0000D0, "Wrong size on LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, EntryPoint) == 0x000000, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::EntryPoint' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue) == 0x000004, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_bool_Variable) == 0x000005, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_text_Variable) == 0x000008, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_text_Variable_1) == 0x000020, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_bool_Variable_1) == 0x000038, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_bool_Variable_2) == 0x000039, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_text_Variable_2) == 0x000040, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_text_Variable_3) == 0x000058, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_bool_Variable_3) == 0x000070, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_byte_Variable) == 0x000071, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, Temp_byte_Variable_1) == 0x000072, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, K2Node_Event_IsLiveStreamEnabled) == 0x000073, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::K2Node_Event_IsLiveStreamEnabled' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, K2Node_Select_Default) == 0x000074, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, K2Node_Select_Default_1) == 0x000078, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, K2Node_Select_Default_2) == 0x000090, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, K2Node_Select_Default_3) == 0x0000A8, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000C0, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C8, "Member 'LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct LiveStreamMenuButtonToggle_C_RefreshButton final
{
public:
	bool                                          IsLiveStreamEnabled;
};
static_assert(alignof(LiveStreamMenuButtonToggle_C_RefreshButton) == 0x000001, "Wrong alignment on LiveStreamMenuButtonToggle_C_RefreshButton");
static_assert(sizeof(LiveStreamMenuButtonToggle_C_RefreshButton) == 0x000001, "Wrong size on LiveStreamMenuButtonToggle_C_RefreshButton");
static_assert(offsetof(LiveStreamMenuButtonToggle_C_RefreshButton, IsLiveStreamEnabled) == 0x000000, "Member 'LiveStreamMenuButtonToggle_C_RefreshButton::IsLiveStreamEnabled' has a wrong offset!");

}
