#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	uint8                                         Pad_5[0xB];
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton) == 0x000010, "Wrong alignment on AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton");
static_assert(sizeof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton) == 0x000280, "Wrong size on AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, EntryPoint) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, CallFunc_GetIsEnabled_ReturnValue) == 0x000004, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, K2Node_Event_TabLabelInfo) == 0x000010, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, K2Node_Event_MyGeometry) == 0x000100, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, K2Node_Event_MouseEvent_1) == 0x000140, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0001D8, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001E0, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton, K2Node_Event_MouseEvent) == 0x0001E8, "Member 'AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton::K2Node_Event_MouseEvent' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaMatchmakingModeButton_C_OnMouseEnter");
static_assert(sizeof(AthenaMatchmakingModeButton_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaMatchmakingModeButton_C_OnMouseEnter");
static_assert(offsetof(AthenaMatchmakingModeButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaMatchmakingModeButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaMatchmakingModeButton_C_OnMouseLeave");
static_assert(sizeof(AthenaMatchmakingModeButton_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaMatchmakingModeButton_C_OnMouseLeave");
static_assert(offsetof(AthenaMatchmakingModeButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_PlaylistChanged final
{
public:
	class UFortPlaylistAthena*                    NewPlaylist;
	class FText                                   OverrideName;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_PlaylistChanged) == 0x000008, "Wrong alignment on AthenaMatchmakingModeButton_C_PlaylistChanged");
static_assert(sizeof(AthenaMatchmakingModeButton_C_PlaylistChanged) == 0x000020, "Wrong size on AthenaMatchmakingModeButton_C_PlaylistChanged");
static_assert(offsetof(AthenaMatchmakingModeButton_C_PlaylistChanged, NewPlaylist) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_PlaylistChanged::NewPlaylist' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingModeButton_C_PlaylistChanged, OverrideName) == 0x000008, "Member 'AthenaMatchmakingModeButton_C_PlaylistChanged::OverrideName' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning final
{
public:
	bool                                          IsCrossplayEnabled;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning) == 0x000001, "Wrong alignment on AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning");
static_assert(sizeof(AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning) == 0x000001, "Wrong size on AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning");
static_assert(offsetof(AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning, IsCrossplayEnabled) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning::IsCrossplayEnabled' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_SetSquadFillText final
{
public:
	bool                                          bFill;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_SetSquadFillText) == 0x000001, "Wrong alignment on AthenaMatchmakingModeButton_C_SetSquadFillText");
static_assert(sizeof(AthenaMatchmakingModeButton_C_SetSquadFillText) == 0x000001, "Wrong size on AthenaMatchmakingModeButton_C_SetSquadFillText");
static_assert(offsetof(AthenaMatchmakingModeButton_C_SetSquadFillText, bFill) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_SetSquadFillText::bFill' has a wrong offset!");

struct AthenaMatchmakingModeButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(AthenaMatchmakingModeButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on AthenaMatchmakingModeButton_C_SetTabLabelInfo");
static_assert(sizeof(AthenaMatchmakingModeButton_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on AthenaMatchmakingModeButton_C_SetTabLabelInfo");
static_assert(offsetof(AthenaMatchmakingModeButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'AthenaMatchmakingModeButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

}
