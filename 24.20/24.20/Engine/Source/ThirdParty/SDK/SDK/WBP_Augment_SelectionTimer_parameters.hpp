#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsAugmentSelectionAvailable_IsEnabled;
	uint8                                         Pad_11[0x3];
	float                                         K2Node_Event_TimeRemaining;
	float                                         K2Node_Event_TimePercentage;
	bool                                          K2Node_Event_bCanSelectAugment;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_CanSelectAugment_ReturnValue;
	uint8                                         Pad_1F[0x1];
	struct FGameplayTagContainer                  K2Node_Event_HiddenElementTagContainer;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_43[0x5];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_5C[0x4];
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          K2Node_CustomEvent_bEnteredBuildMode;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_77[0x1];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	TDelegate<void(bool bEnteredBuildMode)>       K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_8C[0x4];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_9D[0x3];
	class UObject*                                Temp_object_Variable;
	class UPaperSprite*                           K2Node_DynamicCast_AsPaper_Sprite;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_B1[0x7];
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_D1[0x7];
	class UWidget*                                K2Node_Select_Default;
	double                                        CallFunc_UpdateCountdown_InTimeLeft_ImplicitCast;
	double                                        CallFunc_SetMobileProgressTimer_FPercentLeft_ImplicitCast;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer) == 0x0000F0, "Wrong size on WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, EntryPoint) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsAugmentSelectionAvailable_IsEnabled) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsAugmentSelectionAvailable_IsEnabled' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Event_TimeRemaining) == 0x000014, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Event_TimeRemaining' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Event_TimePercentage) == 0x000018, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Event_TimePercentage' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Event_bCanSelectAugment) == 0x00001C, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Event_bCanSelectAugment' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Event_IsDesignTime) == 0x00001D, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_CanSelectAugment_ReturnValue) == 0x00001E, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_CanSelectAugment_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Event_HiddenElementTagContainer) == 0x000020, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Event_HiddenElementTagContainer' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_HasTag_ReturnValue_1) == 0x000041, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_HasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000060, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000068, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsSkydiving_ReturnValue) == 0x000071, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsDBNO_ReturnValue) == 0x000072, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_BooleanOR_ReturnValue) == 0x000073, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_BooleanOR_ReturnValue_1) == 0x000074, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_CustomEvent_bEnteredBuildMode) == 0x000075, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_CustomEvent_bEnteredBuildMode' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_Not_PreBool_ReturnValue_1) == 0x000076, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000080, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000090, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsMobileGame_ReturnValue) == 0x000099, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsMobileGame_ReturnValue_1) == 0x00009A, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_IsUsingTouch_ReturnValue) == 0x00009B, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_BooleanAND_ReturnValue) == 0x00009C, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, Temp_object_Variable) == 0x0000A0, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_AsPaper_Sprite) == 0x0000A8, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_AsPaper_Sprite' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x0000B8, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_CustomEvent_Loaded) == 0x0000C8, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, Temp_bool_Variable) == 0x0000D0, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, K2Node_Select_Default) == 0x0000D8, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_UpdateCountdown_InTimeLeft_ImplicitCast) == 0x0000E0, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_UpdateCountdown_InTimeLeft_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer, CallFunc_SetMobileProgressTimer_FPercentLeft_ImplicitCast) == 0x0000E8, "Member 'WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer::CallFunc_SetMobileProgressTimer_FPercentLeft_ImplicitCast' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_ForceAugmentReadyState final
{
public:
	bool                                          AugmentSelectionAvailable;
	uint8                                         Pad_1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_ForceAugmentReadyState) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_ForceAugmentReadyState");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_ForceAugmentReadyState) == 0x000018, "Wrong size on WBP_Augment_SelectionTimer_C_ForceAugmentReadyState");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ForceAugmentReadyState, AugmentSelectionAvailable) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_ForceAugmentReadyState::AugmentSelectionAvailable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ForceAugmentReadyState, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_ForceAugmentReadyState::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ForceAugmentReadyState, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_ForceAugmentReadyState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable final
{
public:
	bool                                          IsEnabled;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable) == 0x000003, "Wrong size on WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable, IsEnabled) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable::IsEnabled' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished) == 0x000008, "Wrong size on WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged final
{
public:
	bool                                          bCanSelectAugment;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged) == 0x000001, "Wrong size on WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged, bCanSelectAugment) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged::bCanSelectAugment' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged final
{
public:
	struct FGameplayTagContainer                  HiddenElementTagContainer;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged) == 0x000020, "Wrong size on WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged, HiddenElementTagContainer) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged::HiddenElementTagContainer' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233) == 0x000008, "Wrong size on WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233, Loaded) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233::Loaded' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated final
{
public:
	int32                                         NumPendingAugmentsToGrant;
	bool                                          DidValueIncrease;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class FText                                   Temp_text_Variable;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_2A[0x6];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	bool                                          CallFunc_IsAugmentSelectionAvailable_IsEnabled;
	uint8                                         Pad_99[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;
	uint8                                         Pad_BA[0x6];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated) == 0x0000D8, "Wrong size on WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, NumPendingAugmentsToGrant) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::NumPendingAugmentsToGrant' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, DidValueIncrease) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::DidValueIncrease' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, Temp_bool_Variable) == 0x000005, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, Temp_text_Variable) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_SpawnSound2D_ReturnValue) == 0x000020, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000029, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, K2Node_MakeArray_Array) == 0x000088, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_IsAugmentSelectionAvailable_IsEnabled) == 0x000098, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_IsAugmentSelectionAvailable_IsEnabled' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_BooleanAND_ReturnValue) == 0x0000B8, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000B9, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated, K2Node_Select_Default) == 0x0000C0, "Member 'WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated::K2Node_Select_Default' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode final
{
public:
	bool                                          bEnteredBuildMode;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode) == 0x000001, "Wrong size on WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode, bEnteredBuildMode) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode::bEnteredBuildMode' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_OnTimerUpdated final
{
public:
	float                                         TimeRemaining;
	float                                         TimePercentage;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_OnTimerUpdated) == 0x000004, "Wrong alignment on WBP_Augment_SelectionTimer_C_OnTimerUpdated");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_OnTimerUpdated) == 0x000008, "Wrong size on WBP_Augment_SelectionTimer_C_OnTimerUpdated");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnTimerUpdated, TimeRemaining) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_OnTimerUpdated::TimeRemaining' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_OnTimerUpdated, TimePercentage) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_OnTimerUpdated::TimePercentage' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_PlayReminderAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_PlayReminderAnimation) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_PlayReminderAnimation");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_PlayReminderAnimation) == 0x000008, "Wrong size on WBP_Augment_SelectionTimer_C_PlayReminderAnimation");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_PlayReminderAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_PlayReminderAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_PreConstruct");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_PreConstruct) == 0x000001, "Wrong size on WBP_Augment_SelectionTimer_C_PreConstruct");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims) == 0x000018, "Wrong size on WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_SetAugmentReadyState final
{
public:
	bool                                          AugmentSelectionAvailable;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_SetAugmentReadyState");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState) == 0x000020, "Wrong size on WBP_Augment_SelectionTimer_C_SetAugmentReadyState");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, AugmentSelectionAvailable) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::AugmentSelectionAvailable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_IsMobileGame_ReturnValue) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_IsUsingTouch_ReturnValue) == 0x000002, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000018, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetAugmentReadyState, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00001C, "Member 'WBP_Augment_SelectionTimer_C_SetAugmentReadyState::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_SetMobileProgressTimer final
{
public:
	double                                        FPercentLeft;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_SetMobileProgressTimer) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_SetMobileProgressTimer");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_SetMobileProgressTimer) == 0x000010, "Wrong size on WBP_Augment_SelectionTimer_C_SetMobileProgressTimer");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileProgressTimer, FPercentLeft) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_SetMobileProgressTimer::FPercentLeft' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileProgressTimer, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_SetMobileProgressTimer::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_SetMobileVisuals final
{
public:
	float                                         Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_29[0x7];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_51[0x7];
	struct FVector2D                              Temp_struct_Variable_4;
	struct FVector2D                              Temp_struct_Variable_5;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_7E[0x2];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_89[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_9C[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_2;
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          CallFunc_HasChild_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_B3[0x5];
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;
	bool                                          Temp_bool_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	bool                                          Temp_bool_Variable_7;
	uint8                                         Pad_C4[0x4];
	struct FVector2D                              Temp_struct_Variable_6;
	bool                                          CallFunc_HasChild_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_DA[0x6];
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	struct FVector2D                              Temp_struct_Variable_7;
	bool                                          Temp_bool_Variable_8;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              Temp_byte_Variable_9;
	bool                                          Temp_bool_Variable_9;
	EVerticalAlignment                            Temp_byte_Variable_10;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	EVerticalAlignment                            Temp_byte_Variable_11;
	uint8                                         Pad_FF[0x1];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          Temp_bool_Variable_10;
	uint8                                         Pad_109[0x3];
	float                                         Temp_real_Variable_2;
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_1;
	float                                         Temp_real_Variable_3;
	bool                                          Temp_bool_Variable_11;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_11F[0x1];
	float                                         K2Node_Select_Default;
	EVerticalAlignment                            K2Node_Select_Default_1;
	uint8                                         Pad_125[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_139[0x7];
	struct FVector2D                              K2Node_Select_Default_3;
	ESlateVisibility                              K2Node_Select_Default_4;
	ESlateVisibility                              K2Node_Select_Default_5;
	ESlateVisibility                              K2Node_Select_Default_6;
	ESlateVisibility                              K2Node_Select_Default_7;
	float                                         K2Node_Select_Default_8;
	struct FVector2D                              K2Node_Select_Default_9;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	struct FVector2D                              K2Node_Select_Default_10;
	struct FVector2D                              K2Node_Select_Default_11;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_SetMobileVisuals) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_SetMobileVisuals");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_SetMobileVisuals) == 0x000198, "Wrong size on WBP_Augment_SelectionTimer_C_SetMobileVisuals");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_real_Variable) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_1) == 0x000028, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_2) == 0x000030, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_3) == 0x000040, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_2) == 0x000050, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_4) == 0x000058, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_5) == 0x000068, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_real_Variable_1) == 0x000078, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_3) == 0x00007C, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable) == 0x00007D, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000080, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_1) == 0x000088, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000090, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_4) == 0x000098, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_2) == 0x000099, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_3) == 0x00009A, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_5) == 0x00009B, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue_2) == 0x0000A0, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000A8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_4) == 0x0000B0, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_HasChild_ReturnValue) == 0x0000B1, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_HasChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_5) == 0x0000B2, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_AddChildToOverlay_ReturnValue) == 0x0000B8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_6) == 0x0000C0, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_6) == 0x0000C1, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_7) == 0x0000C2, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_7) == 0x0000C3, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_6) == 0x0000C8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_HasChild_ReturnValue_1) == 0x0000D8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_HasChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_BooleanAND_ReturnValue) == 0x0000D9, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x0000E0, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_struct_Variable_7) == 0x0000E8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_8) == 0x0000F8, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_8) == 0x0000F9, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_9) == 0x0000FA, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_9) == 0x0000FB, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_10) == 0x0000FC, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_IsMobileGame_ReturnValue) == 0x0000FD, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_byte_Variable_11) == 0x0000FE, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000100, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_10) == 0x000108, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_real_Variable_2) == 0x00010C, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_AddChildToOverlay_ReturnValue_1) == 0x000110, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_AddChildToOverlay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_real_Variable_3) == 0x000118, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, Temp_bool_Variable_11) == 0x00011C, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_IsUsingTouch_ReturnValue) == 0x00011D, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, CallFunc_BooleanAND_ReturnValue_1) == 0x00011E, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default) == 0x000120, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_1) == 0x000124, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_MakeStruct_Margin) == 0x000128, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_2) == 0x000138, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_3) == 0x000140, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_4) == 0x000150, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_5) == 0x000151, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_6) == 0x000152, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_7) == 0x000153, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_8) == 0x000154, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_9) == 0x000158, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_MakeStruct_Margin_1) == 0x000168, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_10) == 0x000178, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_SetMobileVisuals, K2Node_Select_Default_11) == 0x000188, "Member 'WBP_Augment_SelectionTimer_C_SetMobileVisuals::K2Node_Select_Default_11' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_StartHideTimerEvent final
{
public:
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_3[0x1];
	int32                                         CallFunc_GetValueAsInteger_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_StartHideTimerEvent");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent) == 0x000028, "Wrong size on WBP_Augment_SelectionTimer_C_StartHideTimerEvent");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_IsUsingTouch_ReturnValue) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_IsMobileGame_ReturnValue) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_GetValueAsInteger_ReturnValue) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_GetValueAsInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_StartHideTimerEvent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_Augment_SelectionTimer_C_StartHideTimerEvent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector final
{
public:
	bool                                          InPlayerAbleToOpenSelector;
	bool                                          CallFunc_IsAugmentSelectionAvailable_IsEnabled;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector) == 0x000002, "Wrong size on WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector, InPlayerAbleToOpenSelector) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector::InPlayerAbleToOpenSelector' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector, CallFunc_IsAugmentSelectionAvailable_IsEnabled) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector::CallFunc_IsAugmentSelectionAvailable_IsEnabled' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_UpdateCountdown final
{
public:
	double                                        InTimeLeft;
	bool                                          IsNewlyActivated;
	bool                                          NewIsCountdownActive;
	uint8                                         Pad_A[0x2];
	int32                                         TimeLeft;
	int32                                         CallFunc_Round_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         CallFunc_GetValueAsInteger_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsCountdownVisible_IsVisible;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_22[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_43[0x1];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_49[0x3];
	int32                                         CallFunc_GetValueAsInteger_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	uint8                                         Pad_54[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_UpdateCountdown) == 0x000008, "Wrong alignment on WBP_Augment_SelectionTimer_C_UpdateCountdown");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_UpdateCountdown) == 0x0000A0, "Wrong size on WBP_Augment_SelectionTimer_C_UpdateCountdown");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, InTimeLeft) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::InTimeLeft' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, IsNewlyActivated) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::IsNewlyActivated' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, NewIsCountdownActive) == 0x000009, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::NewIsCountdownActive' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, TimeLeft) == 0x00000C, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::TimeLeft' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Round_ReturnValue) == 0x000010, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_GetValueAsInteger_ReturnValue) == 0x000018, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_GetValueAsInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x00001E, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Not_PreBool_ReturnValue) == 0x00001F, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_IsCountdownVisible_IsVisible) == 0x000020, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_IsCountdownVisible_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Not_PreBool_ReturnValue_1) == 0x000021, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_PlayAnimation_ReturnValue_2) == 0x000038, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000040, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_BooleanAND_ReturnValue_1) == 0x000041, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_BooleanAND_ReturnValue_2) == 0x000042, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000044, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_BooleanAND_ReturnValue_3) == 0x000048, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_GetValueAsInteger_ReturnValue_1) == 0x00004C, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_GetValueAsInteger_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000050, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000088, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00008C, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateCountdown, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'WBP_Augment_SelectionTimer_C_UpdateCountdown::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_UpdateVisibility final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsCountdownVisible_IsVisible;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_UpdateVisibility) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_UpdateVisibility");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_UpdateVisibility) == 0x00000A, "Wrong size on WBP_Augment_SelectionTimer_C_UpdateVisibility");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_IsMobileGame_ReturnValue) == 0x000003, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_IsCountdownVisible_IsVisible) == 0x000006, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_IsCountdownVisible_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, CallFunc_BooleanOR_ReturnValue_1) == 0x000008, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_UpdateVisibility, K2Node_Select_Default) == 0x000009, "Member 'WBP_Augment_SelectionTimer_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");

struct WBP_Augment_SelectionTimer_C_IsCountdownVisible final
{
public:
	bool                                          IsVisible_0;
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(WBP_Augment_SelectionTimer_C_IsCountdownVisible) == 0x000001, "Wrong alignment on WBP_Augment_SelectionTimer_C_IsCountdownVisible");
static_assert(sizeof(WBP_Augment_SelectionTimer_C_IsCountdownVisible) == 0x000006, "Wrong size on WBP_Augment_SelectionTimer_C_IsCountdownVisible");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, IsVisible_0) == 0x000000, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::IsVisible_0' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x000001, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, CallFunc_Not_PreBool_ReturnValue_1) == 0x000003, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_SelectionTimer_C_IsCountdownVisible, CallFunc_BooleanAND_ReturnValue_1) == 0x000005, "Member 'WBP_Augment_SelectionTimer_C_IsCountdownVisible::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
