#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct CampaignPurchaseScreen_C_ToggleTimer final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
};
static_assert(alignof(CampaignPurchaseScreen_C_ToggleTimer) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_ToggleTimer");
static_assert(sizeof(CampaignPurchaseScreen_C_ToggleTimer) == 0x000018, "Wrong size on CampaignPurchaseScreen_C_ToggleTimer");
static_assert(offsetof(CampaignPurchaseScreen_C_ToggleTimer, Enabled) == 0x000000, "Member 'CampaignPurchaseScreen_C_ToggleTimer::Enabled' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ToggleTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CampaignPurchaseScreen_C_ToggleTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ToggleTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'CampaignPurchaseScreen_C_ToggleTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

struct CampaignPurchaseScreen_C_OnStoreScreenCreated final
{
public:
	class UFortMtxStoreRootBase_Legacy*           StoreScreen;
};
static_assert(alignof(CampaignPurchaseScreen_C_OnStoreScreenCreated) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_OnStoreScreenCreated");
static_assert(sizeof(CampaignPurchaseScreen_C_OnStoreScreenCreated) == 0x000008, "Wrong size on CampaignPurchaseScreen_C_OnStoreScreenCreated");
static_assert(offsetof(CampaignPurchaseScreen_C_OnStoreScreenCreated, StoreScreen) == 0x000000, "Member 'CampaignPurchaseScreen_C_OnStoreScreenCreated::StoreScreen' has a wrong offset!");

struct CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortMtxStoreRootBase_Legacy*           K2Node_Event_StoreScreen;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class UStoreMain_Root_Legacy_C*               K2Node_DynamicCast_AsStore_Main_Root_Legacy;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
};
static_assert(alignof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen");
static_assert(sizeof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen) == 0x000050, "Wrong size on CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, EntryPoint) == 0x000000, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, K2Node_Event_StoreScreen) == 0x000008, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::K2Node_Event_StoreScreen' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, K2Node_DynamicCast_AsStore_Main_Root_Legacy) == 0x000018, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::K2Node_DynamicCast_AsStore_Main_Root_Legacy' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen, CallFunc_GetContext_ReturnValue) == 0x000048, "Member 'CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");

struct CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled");
static_assert(sizeof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled) == 0x000018, "Wrong size on CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled");
static_assert(offsetof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled, Enabled) == 0x000000, "Member 'CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetFeatureState_OutFeatureState) == 0x000010, "Member 'CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetFeatureState_OutReason) == 0x000011, "Member 'CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct CampaignPurchaseScreen_C_IsBusyMatchmaking final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsMatchmakingLocal_ReturnValue;
};
static_assert(alignof(CampaignPurchaseScreen_C_IsBusyMatchmaking) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_IsBusyMatchmaking");
static_assert(sizeof(CampaignPurchaseScreen_C_IsBusyMatchmaking) == 0x000018, "Wrong size on CampaignPurchaseScreen_C_IsBusyMatchmaking");
static_assert(offsetof(CampaignPurchaseScreen_C_IsBusyMatchmaking, ReturnValue) == 0x000000, "Member 'CampaignPurchaseScreen_C_IsBusyMatchmaking::ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsBusyMatchmaking, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'CampaignPurchaseScreen_C_IsBusyMatchmaking::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_IsBusyMatchmaking, CallFunc_IsMatchmakingLocal_ReturnValue) == 0x000010, "Member 'CampaignPurchaseScreen_C_IsBusyMatchmaking::CallFunc_IsMatchmakingLocal_ReturnValue' has a wrong offset!");

struct CampaignPurchaseScreen_C_InitializeTextureCycle final
{
public:
	class UTexture*                               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UTexture*                               CallFunc_Array_Get_Item_1;
};
static_assert(alignof(CampaignPurchaseScreen_C_InitializeTextureCycle) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_InitializeTextureCycle");
static_assert(sizeof(CampaignPurchaseScreen_C_InitializeTextureCycle) == 0x000018, "Wrong size on CampaignPurchaseScreen_C_InitializeTextureCycle");
static_assert(offsetof(CampaignPurchaseScreen_C_InitializeTextureCycle, CallFunc_Array_Get_Item) == 0x000000, "Member 'CampaignPurchaseScreen_C_InitializeTextureCycle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_InitializeTextureCycle, CallFunc_Array_LastIndex_ReturnValue) == 0x000008, "Member 'CampaignPurchaseScreen_C_InitializeTextureCycle::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_InitializeTextureCycle, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'CampaignPurchaseScreen_C_InitializeTextureCycle::CallFunc_Array_Get_Item_1' has a wrong offset!");

struct CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct CampaignPurchaseScreen_C_AdvanceTextureCycle final
{
public:
	int32                                         NextTextureIndex;
	int32                                         CurrentTextureIndex;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UTexture*                               CallFunc_Array_Get_Item;
	class UTexture*                               CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(CampaignPurchaseScreen_C_AdvanceTextureCycle) == 0x000008, "Wrong alignment on CampaignPurchaseScreen_C_AdvanceTextureCycle");
static_assert(sizeof(CampaignPurchaseScreen_C_AdvanceTextureCycle) == 0x000028, "Wrong size on CampaignPurchaseScreen_C_AdvanceTextureCycle");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, NextTextureIndex) == 0x000000, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::NextTextureIndex' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CurrentTextureIndex) == 0x000004, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CurrentTextureIndex' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CallFunc_Array_Get_Item) == 0x000010, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CallFunc_Array_Get_Item_1) == 0x000018, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CampaignPurchaseScreen_C_AdvanceTextureCycle, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'CampaignPurchaseScreen_C_AdvanceTextureCycle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
