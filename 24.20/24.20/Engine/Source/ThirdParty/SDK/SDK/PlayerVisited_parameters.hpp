#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated final
{
public:
	class UUserWidget*                            Widget;
	EUIExtensionSlot                              SlotType;
};
static_assert(alignof(PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000008, "Wrong alignment on PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(sizeof(PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000010, "Wrong size on PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(offsetof(PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated, Widget) == 0x000000, "Member 'PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated::Widget' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated, SlotType) == 0x000008, "Member 'PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated::SlotType' has a wrong offset!");

struct PlayerVisited_C_ExecuteUbergraph_PlayerVisited final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_2C[0x4];
	class FText                                   Temp_text_Variable_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_54[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable;
	class USoundCue*                              K2Node_DynamicCast_AsSound_Cue;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_72[0x6];
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   K2Node_Event_LocalizedLocationName;
	TSoftObjectPtr<class USoundCue>               K2Node_Event_DiscoveredSoundCue;
	bool                                          K2Node_Event_bIsNamedLocation;
	bool                                          K2Node_Event_bIsDiscovered;
	uint8                                         Pad_EA[0x6];
	class FText                                   K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_11E[0x2];
	class FText                                   K2Node_Select_Default_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	float                                         CallFunc_GetEndTime_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;
	uint8                                         Pad_15D[0x3];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	class UUserWidget*                            K2Node_Event_Widget;
	EUIExtensionSlot                              K2Node_Event_SlotType;
	uint8                                         Pad_179[0x7];
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_18A[0x2];
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_191[0x3];
	int32                                         K2Node_Select_Default_2;
	float                                         CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_19D[0x3];
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited) == 0x000008, "Wrong alignment on PlayerVisited_C_ExecuteUbergraph_PlayerVisited");
static_assert(sizeof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited) == 0x0001A8, "Wrong size on PlayerVisited_C_ExecuteUbergraph_PlayerVisited");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, EntryPoint) == 0x000000, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_text_Variable) == 0x000008, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_text_Variable_1) == 0x000030, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_CustomEvent_Loaded) == 0x000058, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_object_Variable) == 0x000060, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_DynamicCast_AsSound_Cue) == 0x000068, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_DynamicCast_AsSound_Cue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_bool_Variable) == 0x000071, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_text_Variable_2) == 0x000078, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_text_Variable_3) == 0x000090, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_LocalizedLocationName) == 0x0000A8, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_LocalizedLocationName' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_DiscoveredSoundCue) == 0x0000C0, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_DiscoveredSoundCue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_bIsNamedLocation) == 0x0000E8, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_bIsNamedLocation' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_bIsDiscovered) == 0x0000E9, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_bIsDiscovered' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Select_Default) == 0x0000F0, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_PlayAnimation_ReturnValue) == 0x000108, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_CreateDelegate_OutputDelegate_2) == 0x000110, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_bool_Variable_1) == 0x00011C, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00011D, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Select_Default_1) == 0x000120, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_CreateDelegate_OutputDelegate_3) == 0x000138, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_GetEndTime_ReturnValue) == 0x000144, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000148, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000150, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_int_Variable) == 0x000158, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_NotEqual_TextText_ReturnValue) == 0x00015C, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000160, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000168, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_Widget) == 0x000170, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Event_SlotType) == 0x000178, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Event_SlotType' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_AddChildToOverlay_ReturnValue) == 0x000180, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000188, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000189, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_int_Variable_1) == 0x00018C, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, Temp_bool_Variable_2) == 0x000190, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, K2Node_Select_Default_2) == 0x000194, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_GetConsoleVariableFloatValue_ReturnValue) == 0x000198, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_GetConsoleVariableFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00019C, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_ExecuteUbergraph_PlayerVisited, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x0001A0, "Member 'PlayerVisited_C_ExecuteUbergraph_PlayerVisited::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562) == 0x000008, "Wrong alignment on PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562");
static_assert(sizeof(PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562) == 0x000008, "Wrong size on PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562");
static_assert(offsetof(PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562, Loaded) == 0x000000, "Member 'PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562::Loaded' has a wrong offset!");

struct PlayerVisited_C_OnNewVisited final
{
public:
	class FText                                   LocalizedLocationName;
	TSoftObjectPtr<class USoundCue>               DiscoveredSoundCue;
	bool                                          bIsNamedLocation;
	bool                                          bIsDiscovered;
};
static_assert(alignof(PlayerVisited_C_OnNewVisited) == 0x000008, "Wrong alignment on PlayerVisited_C_OnNewVisited");
static_assert(sizeof(PlayerVisited_C_OnNewVisited) == 0x000048, "Wrong size on PlayerVisited_C_OnNewVisited");
static_assert(offsetof(PlayerVisited_C_OnNewVisited, LocalizedLocationName) == 0x000000, "Member 'PlayerVisited_C_OnNewVisited::LocalizedLocationName' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_OnNewVisited, DiscoveredSoundCue) == 0x000018, "Member 'PlayerVisited_C_OnNewVisited::DiscoveredSoundCue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_OnNewVisited, bIsNamedLocation) == 0x000040, "Member 'PlayerVisited_C_OnNewVisited::bIsNamedLocation' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_OnNewVisited, bIsDiscovered) == 0x000041, "Member 'PlayerVisited_C_OnNewVisited::bIsDiscovered' has a wrong offset!");

struct PlayerVisited_C_SetMobileVisuals final
{
public:
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x3];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_2E[0x2];
	float                                         K2Node_Select_Default;
	uint8                                         Pad_34[0x4];
	struct FVector2D                              K2Node_Select_Default_1;
};
static_assert(alignof(PlayerVisited_C_SetMobileVisuals) == 0x000008, "Wrong alignment on PlayerVisited_C_SetMobileVisuals");
static_assert(sizeof(PlayerVisited_C_SetMobileVisuals) == 0x000048, "Wrong size on PlayerVisited_C_SetMobileVisuals");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_struct_Variable) == 0x000000, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_struct_Variable_1) == 0x000010, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_bool_Variable) == 0x000020, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_real_Variable) == 0x000024, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_real_Variable_1) == 0x000028, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, Temp_bool_Variable_1) == 0x00002C, "Member 'PlayerVisited_C_SetMobileVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, CallFunc_IsUsingTouch_ReturnValue) == 0x00002D, "Member 'PlayerVisited_C_SetMobileVisuals::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, K2Node_Select_Default) == 0x000030, "Member 'PlayerVisited_C_SetMobileVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetMobileVisuals, K2Node_Select_Default_1) == 0x000038, "Member 'PlayerVisited_C_SetMobileVisuals::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerVisited_C_SetPOIMusic final
{
public:
	class USoundBase*                             Asset;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class UAudioComponent*                        CallFunc_AddEvent_ReturnValue;
};
static_assert(alignof(PlayerVisited_C_SetPOIMusic) == 0x000008, "Wrong alignment on PlayerVisited_C_SetPOIMusic");
static_assert(sizeof(PlayerVisited_C_SetPOIMusic) == 0x000018, "Wrong size on PlayerVisited_C_SetPOIMusic");
static_assert(offsetof(PlayerVisited_C_SetPOIMusic, Asset) == 0x000000, "Member 'PlayerVisited_C_SetPOIMusic::Asset' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetPOIMusic, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'PlayerVisited_C_SetPOIMusic::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerVisited_C_SetPOIMusic, CallFunc_AddEvent_ReturnValue) == 0x000010, "Member 'PlayerVisited_C_SetPOIMusic::CallFunc_AddEvent_ReturnValue' has a wrong offset!");

}
