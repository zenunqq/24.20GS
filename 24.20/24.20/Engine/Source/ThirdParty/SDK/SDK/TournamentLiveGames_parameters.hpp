#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentLiveGames_C_EventColorize final
{
public:
	struct FFortTournamentDisplayInfo             TournamentDisplayInfo;
};
static_assert(alignof(TournamentLiveGames_C_EventColorize) == 0x000008, "Wrong alignment on TournamentLiveGames_C_EventColorize");
static_assert(sizeof(TournamentLiveGames_C_EventColorize) == 0x0001D0, "Wrong size on TournamentLiveGames_C_EventColorize");
static_assert(offsetof(TournamentLiveGames_C_EventColorize, TournamentDisplayInfo) == 0x000000, "Member 'TournamentLiveGames_C_EventColorize::TournamentDisplayInfo' has a wrong offset!");

struct TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class FString                                 K2Node_CustomEvent_TournamentId;
	class FString                                 K2Node_CustomEvent_EventId;
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_TournamentDisplayInfo;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	bool                                          K2Node_Event_bIsLoading;
};
static_assert(alignof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames) == 0x000008, "Wrong alignment on TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames");
static_assert(sizeof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames) == 0x000220, "Wrong size on TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, EntryPoint) == 0x000000, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_CustomEvent_TournamentId) == 0x000010, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_CustomEvent_TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_CustomEvent_EventId) == 0x000020, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_CustomEvent_EventId' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_CustomEvent_TournamentDisplayInfo) == 0x000030, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_CustomEvent_TournamentDisplayInfo' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_MakeStruct_LinearColor) == 0x000200, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_ComponentBoundEvent_Button_1) == 0x000210, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames, K2Node_Event_bIsLoading) == 0x000218, "Member 'TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames::K2Node_Event_bIsLoading' has a wrong offset!");

struct TournamentLiveGames_C_Init final
{
public:
	class FString                                 TournamentId;
	class FString                                 EventId;
};
static_assert(alignof(TournamentLiveGames_C_Init) == 0x000008, "Wrong alignment on TournamentLiveGames_C_Init");
static_assert(sizeof(TournamentLiveGames_C_Init) == 0x000020, "Wrong size on TournamentLiveGames_C_Init");
static_assert(offsetof(TournamentLiveGames_C_Init, TournamentId) == 0x000000, "Member 'TournamentLiveGames_C_Init::TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentLiveGames_C_Init, EventId) == 0x000010, "Member 'TournamentLiveGames_C_Init::EventId' has a wrong offset!");

struct TournamentLiveGames_C_NotifyLoadingMoreGames final
{
public:
	bool                                          bIsLoading;
};
static_assert(alignof(TournamentLiveGames_C_NotifyLoadingMoreGames) == 0x000001, "Wrong alignment on TournamentLiveGames_C_NotifyLoadingMoreGames");
static_assert(sizeof(TournamentLiveGames_C_NotifyLoadingMoreGames) == 0x000001, "Wrong size on TournamentLiveGames_C_NotifyLoadingMoreGames");
static_assert(offsetof(TournamentLiveGames_C_NotifyLoadingMoreGames, bIsLoading) == 0x000000, "Member 'TournamentLiveGames_C_NotifyLoadingMoreGames::bIsLoading' has a wrong offset!");

}
