#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated final
{
public:
	class UUserWidget*                            Widget;
	EUIExtensionSlot                              SlotType;
};
static_assert(alignof(PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000008, "Wrong alignment on PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(sizeof(PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000010, "Wrong size on PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(offsetof(PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated, Widget) == 0x000000, "Member 'PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated::Widget' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated, SlotType) == 0x000008, "Member 'PlayerDiscovered_C_BP_HandlePlaylistExtensionWidgetCreated::SlotType' has a wrong offset!");

struct PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Variable;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable;
	class USoundCue*                              K2Node_DynamicCast_AsSound_Cue;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_32[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_53[0x1];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;
	class FText                                   K2Node_Event_LocalizedLocationName;
	TSoftObjectPtr<class USoundCue>               K2Node_Event_DiscoveredSoundCue;
	bool                                          K2Node_Event_bIsNamedLocation;
	bool                                          K2Node_Event_bIsDiscovered;
	uint8                                         Pad_A2[0x6];
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_CC[0x4];
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_109[0x7];
	class UUserWidget*                            K2Node_Event_Widget;
	EUIExtensionSlot                              K2Node_Event_SlotType;
	uint8                                         Pad_119[0x7];
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;
};
static_assert(alignof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered) == 0x000008, "Wrong alignment on PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered");
static_assert(sizeof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered) == 0x000128, "Wrong size on PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, EntryPoint) == 0x000000, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, Temp_int_Variable) == 0x000004, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, Temp_object_Variable) == 0x000020, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_DynamicCast_AsSound_Cue) == 0x000028, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_DynamicCast_AsSound_Cue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000031, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, Temp_int_Variable_1) == 0x00004C, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, Temp_bool_Variable) == 0x000050, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_IsMobileGame_ReturnValue) == 0x000051, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000052, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_LocalizedLocationName) == 0x000060, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_LocalizedLocationName' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_DiscoveredSoundCue) == 0x000078, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_DiscoveredSoundCue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_bIsNamedLocation) == 0x0000A0, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_bIsNamedLocation' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_bIsDiscovered) == 0x0000A1, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_bIsDiscovered' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_BreakVector2D_X) == 0x0000A8, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_BreakVector2D_Y) == 0x0000B0, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_MakeVector2D_ReturnValue) == 0x0000B8, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Select_Default) == 0x0000C8, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_MakeStruct_WidgetTransform) == 0x0000D0, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000108, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_Widget) == 0x000110, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, K2Node_Event_SlotType) == 0x000118, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::K2Node_Event_SlotType' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered, CallFunc_AddChildToOverlay_ReturnValue) == 0x000120, "Member 'PlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

struct PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E) == 0x000008, "Wrong alignment on PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E");
static_assert(sizeof(PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E) == 0x000008, "Wrong size on PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E");
static_assert(offsetof(PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E, Loaded) == 0x000000, "Member 'PlayerDiscovered_C_OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E::Loaded' has a wrong offset!");

struct PlayerDiscovered_C_OnNewDiscovery final
{
public:
	class FText                                   LocalizedLocationName;
	TSoftObjectPtr<class USoundCue>               DiscoveredSoundCue;
	bool                                          bIsNamedLocation;
	bool                                          bIsDiscovered;
};
static_assert(alignof(PlayerDiscovered_C_OnNewDiscovery) == 0x000008, "Wrong alignment on PlayerDiscovered_C_OnNewDiscovery");
static_assert(sizeof(PlayerDiscovered_C_OnNewDiscovery) == 0x000048, "Wrong size on PlayerDiscovered_C_OnNewDiscovery");
static_assert(offsetof(PlayerDiscovered_C_OnNewDiscovery, LocalizedLocationName) == 0x000000, "Member 'PlayerDiscovered_C_OnNewDiscovery::LocalizedLocationName' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_OnNewDiscovery, DiscoveredSoundCue) == 0x000018, "Member 'PlayerDiscovered_C_OnNewDiscovery::DiscoveredSoundCue' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_OnNewDiscovery, bIsNamedLocation) == 0x000040, "Member 'PlayerDiscovered_C_OnNewDiscovery::bIsNamedLocation' has a wrong offset!");
static_assert(offsetof(PlayerDiscovered_C_OnNewDiscovery, bIsDiscovered) == 0x000041, "Member 'PlayerDiscovered_C_OnNewDiscovery::bIsDiscovered' has a wrong offset!");

}
