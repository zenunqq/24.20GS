#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class USoundBase*                             CallFunc_PickMatchmakingSucceededSound_SelectedMatchmakingSucceededSound;
	class UWidget*                                Temp_object_Variable;
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	class UWidget*                                Temp_object_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_39[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_44[0x4];
	class UAthenaMatchmakingPlayButton_C*         K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class USoloButton_C*                          K2Node_DynamicCast_AsSolo_Button;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_61[0x7];
	class FText                                   K2Node_Event_PlayButtonText;
	class FText                                   K2Node_Event_CancelButtonText;
	struct FPlaylistFrontEndData                  K2Node_Event_NewPlaylist_1;
	class FText                                   K2Node_Event_PlaylistCMSOverrideName;
	EFortLobbyType                                K2Node_Event_LobbyType_1;
	bool                                          K2Node_Event_bSuccess;
	uint8                                         Pad_102[0x6];
	const class UFortPlaylistAthena*              K2Node_Event_Playlist;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          K2Node_CustomEvent_IsCrossplayEnabled;
	uint8                                         Pad_119[0x3];
	TDelegate<void(bool IsCrossplayEnabled)>      K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	EFortMatchmakingViolatorStyle                 Temp_byte_Variable_3;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          K2Node_Event_bShow;
	uint8                                         Pad_12C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_AreModalsActive_ReturnValue;
	uint8                                         Pad_142[0x6];
	class UCMSContext*                            CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsNewPlaylistInformationAvailable_ReturnValue;
	uint8                                         Pad_151[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	int32                                         Temp_int_Array_Index_Variable_1;
	uint8                                         Pad_164[0x4];
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;
	class AActor*                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_184[0x4];
	TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_HasMatcmakingInteraction_HasInteraction;
	uint8                                         Pad_19B[0x5];
	TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1B2[0x6];
	class UFortCrossplayPromptContext*            CallFunc_GetContext_ReturnValue_1;
	class UFortCrossplayPromptContext*            CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1CA[0x6];
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors_1;
	class AActor*                                 CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_1EC[0x4];
	TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_204[0x4];
	struct FPlaylistFrontEndData                  K2Node_Event_NewPlaylist;
	class FText                                   K2Node_Event_ActivityName;
	EFortLobbyType                                K2Node_Event_LobbyType;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_272[0x6];
	struct FSlateFontInfo                         K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_2E1[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_2F1[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_301[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	bool                                          CallFunc_IsInZone_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              K2Node_Select_Default_2;
	EFortMatchmakingViolatorStyle                 K2Node_Event_NewViolatorStyle;
	uint8                                         Pad_319[0x7];
	class UWidget*                                K2Node_Select_Default_3;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_4;
	uint8                                         Pad_32C[0x4];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay) == 0x000338, "Wrong size on AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, EntryPoint) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_PickMatchmakingSucceededSound_SelectedMatchmakingSucceededSound) == 0x000008, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_PickMatchmakingSucceededSound_SelectedMatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_object_Variable) == 0x000010, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_CreateSound2D_ReturnValue) == 0x000018, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_bool_Variable) == 0x000020, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable) == 0x000021, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_1) == 0x000022, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_2) == 0x000023, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_object_Variable_1) == 0x000030, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_bool_Variable_1) == 0x000038, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_int_Loop_Counter_Variable_1) == 0x00003C, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button) == 0x000048, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_AsSolo_Button) == 0x000058, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_AsSolo_Button' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_PlayButtonText) == 0x000068, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_PlayButtonText' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_CancelButtonText) == 0x000080, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_CancelButtonText' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_NewPlaylist_1) == 0x000098, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_NewPlaylist_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_PlaylistCMSOverrideName) == 0x0000E8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_PlaylistCMSOverrideName' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_LobbyType_1) == 0x000100, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_LobbyType_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_bSuccess) == 0x000101, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_Playlist) == 0x000108, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_Playlist' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_ComponentBoundEvent_Button) == 0x000110, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_CustomEvent_IsCrossplayEnabled) == 0x000118, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_CustomEvent_IsCrossplayEnabled' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_CreateDelegate_OutputDelegate) == 0x00011C, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Not_PreBool_ReturnValue) == 0x000128, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_3) == 0x000129, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00012A, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_bShow) == 0x00012B, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000130, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_PlayAnimationForward_ReturnValue) == 0x000138, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000140, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_AreModalsActive_ReturnValue) == 0x000141, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_AreModalsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetContext_ReturnValue) == 0x000148, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsNewPlaylistInformationAvailable_ReturnValue) == 0x000150, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsNewPlaylistInformationAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_CreateDelegate_OutputDelegate_1) == 0x000154, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_int_Array_Index_Variable_1) == 0x000160, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000168, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Array_Get_Item) == 0x000178, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction) == 0x000188, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_bSuccess_2) == 0x000198, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Less_IntInt_ReturnValue) == 0x000199, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_HasMatcmakingInteraction_HasInteraction) == 0x00019A, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_HasMatcmakingInteraction_HasInteraction' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1) == 0x0001A0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_bSuccess_3) == 0x0001B0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsValid_ReturnValue) == 0x0001B1, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetContext_ReturnValue_1) == 0x0001B8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetContext_ReturnValue_2) == 0x0001C0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue) == 0x0001C8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_BooleanAND_ReturnValue) == 0x0001C9, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetAllActorsWithInterface_OutActors_1) == 0x0001D0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetAllActorsWithInterface_OutActors_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Array_Get_Item_1) == 0x0001E0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Array_Length_ReturnValue_1) == 0x0001E8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2) == 0x0001F0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_DynamicCast_bSuccess_4) == 0x000200, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Less_IntInt_ReturnValue_1) == 0x000201, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsValid_ReturnValue_1) == 0x000202, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_bool_Variable_2) == 0x000203, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_NewPlaylist) == 0x000208, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_NewPlaylist' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_ActivityName) == 0x000258, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_ActivityName' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_LobbyType) == 0x000270, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_LobbyType' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_TextIsEmpty_ReturnValue) == 0x000271, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Select_Default) == 0x000278, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_PlayAnimation_ReturnValue) == 0x0002D0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0002D8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsInZone_ReturnValue) == 0x0002E0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0002E8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002F0, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0002F8, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000300, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000308, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsInZone_ReturnValue_1) == 0x000310, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsInZone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_4) == 0x000311, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Not_PreBool_ReturnValue_2) == 0x000312, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_5) == 0x000313, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_bool_Variable_3) == 0x000314, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Select_Default_1) == 0x000315, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, Temp_byte_Variable_6) == 0x000316, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Select_Default_2) == 0x000317, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Event_NewViolatorStyle) == 0x000318, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Event_NewViolatorStyle' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Select_Default_3) == 0x000320, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_IsValid_ReturnValue_2) == 0x000328, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000329, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00032A, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, K2Node_Select_Default_4) == 0x00032B, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000330, "Member 'AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_InitFonts final
{
public:
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_InitFonts) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_InitFonts");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_InitFonts) == 0x000058, "Wrong size on AthenaLobbyMatchmakingPlay_C_InitFonts");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_InitFonts, K2Node_MakeStruct_SlateFontInfo) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_InitFonts::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged final
{
public:
	bool                                          IsCrossplayEnabled;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged) == 0x000001, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged) == 0x000001, "Wrong size on AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged, IsCrossplayEnabled) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged::IsCrossplayEnabled' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint final
{
public:
	bool                                          bSuccess;
	uint8                                         Pad_1[0x7];
	const class UFortPlaylistAthena*              Playlist;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint) == 0x000010, "Wrong size on AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint, bSuccess) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint::bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint, Playlist) == 0x000008, "Member 'AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint::Playlist' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText final
{
public:
	class FText                                   CancelButtonText;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText) == 0x000018, "Wrong size on AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText, CancelButtonText) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText::CancelButtonText' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText final
{
public:
	class FText                                   PlayButtonText;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText) == 0x000018, "Wrong size on AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText, PlayButtonText) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText::PlayButtonText' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed final
{
public:
	EFortMatchmakingViolatorStyle                 NewViolatorStyle;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed) == 0x000001, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed) == 0x000001, "Wrong size on AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed, NewViolatorStyle) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed::NewViolatorStyle' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound final
{
public:
	class USoundBase*                             SelectedMatchmakingSucceededSound;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound) == 0x000010, "Wrong size on AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound, SelectedMatchmakingSucceededSound) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound::SelectedMatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged final
{
public:
	struct FPlaylistFrontEndData                  NewPlaylist;
	class FText                                   ActivityName;
	EFortLobbyType                                LobbyType;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged) == 0x000070, "Wrong size on AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged, NewPlaylist) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged::NewPlaylist' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged, ActivityName) == 0x000050, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged::ActivityName' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged, LobbyType) == 0x000068, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged::LobbyType' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_PlaylistChanged final
{
public:
	struct FPlaylistFrontEndData                  NewPlaylist;
	class FText                                   PlaylistCMSOverrideName;
	EFortLobbyType                                LobbyType;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_PlaylistChanged) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_PlaylistChanged");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_PlaylistChanged) == 0x000070, "Wrong size on AthenaLobbyMatchmakingPlay_C_PlaylistChanged");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistChanged, NewPlaylist) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistChanged::NewPlaylist' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistChanged, PlaylistCMSOverrideName) == 0x000050, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistChanged::PlaylistCMSOverrideName' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_PlaylistChanged, LobbyType) == 0x000068, "Member 'AthenaLobbyMatchmakingPlay_C_PlaylistChanged::LobbyType' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_SetBasePanelColor final
{
public:
	struct FLinearColor                           NewColor;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_SetBasePanelColor) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_SetBasePanelColor");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_SetBasePanelColor) == 0x000018, "Wrong size on AthenaLobbyMatchmakingPlay_C_SetBasePanelColor");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_SetBasePanelColor, NewColor) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_SetBasePanelColor::NewColor' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_SetBasePanelColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'AthenaLobbyMatchmakingPlay_C_SetBasePanelColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails final
{
public:
	bool                                          bShow;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails) == 0x000001, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails) == 0x000001, "Wrong size on AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails, bShow) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails::bShow' has a wrong offset!");

struct AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info final
{
public:
	struct FPlaylistFrontEndData                  NewPlaylist;
	class FText                                   PlaylistTitleOverride;
	EFortLobbyType                                LobbyType;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_6B[0x5];
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info) == 0x000008, "Wrong alignment on AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info");
static_assert(sizeof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info) == 0x000090, "Wrong size on AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, NewPlaylist) == 0x000000, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::NewPlaylist' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, PlaylistTitleOverride) == 0x000050, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::PlaylistTitleOverride' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, LobbyType) == 0x000068, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::LobbyType' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, Temp_bool_Variable) == 0x000069, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, CallFunc_TextIsEmpty_ReturnValue) == 0x00006A, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, K2Node_Select_Default) == 0x000070, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, Temp_byte_Variable) == 0x000088, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000089, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, CallFunc_BooleanOR_ReturnValue) == 0x00008A, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, Temp_byte_Variable_1) == 0x00008B, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, Temp_bool_Variable_1) == 0x00008C, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info, K2Node_Select_Default_1) == 0x00008D, "Member 'AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info::K2Node_Select_Default_1' has a wrong offset!");

}
