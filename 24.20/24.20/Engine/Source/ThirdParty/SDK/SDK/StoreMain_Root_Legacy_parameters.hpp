#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct StoreMain_Root_Legacy_C_Start_Ambient_Sound final
{
public:
	bool                                          Condition;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(StoreMain_Root_Legacy_C_Start_Ambient_Sound) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_Start_Ambient_Sound");
static_assert(sizeof(StoreMain_Root_Legacy_C_Start_Ambient_Sound) == 0x000018, "Wrong size on StoreMain_Root_Legacy_C_Start_Ambient_Sound");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, Condition) == 0x000000, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::Condition' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_GetSubGame_ReturnValue) == 0x000001, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_CreateSound2D_ReturnValue) == 0x000008, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_Start_Ambient_Sound, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'StoreMain_Root_Legacy_C_Start_Ambient_Sound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct StoreMain_Root_Legacy_C_SetupForCampaignUpsell final
{
public:
	class UFortRuntimeOptions*                    NewLocalVar_0;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsDesktopPlatform_ReturnValue;
	uint8                                         Pad_45[0x3];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;
	TArray<class FString>                         K2Node_MakeArray_Array;
};
static_assert(alignof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_SetupForCampaignUpsell");
static_assert(sizeof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell) == 0x000068, "Wrong size on StoreMain_Root_Legacy_C_SetupForCampaignUpsell");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, NewLocalVar_0) == 0x000000, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000008, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, K2Node_MakeStruct_DataTableRowHandle) == 0x000020, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, CallFunc_IsDesktopPlatform_ReturnValue) == 0x000044, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::CallFunc_IsDesktopPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000048, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupForCampaignUpsell, K2Node_MakeArray_Array) == 0x000058, "Member 'StoreMain_Root_Legacy_C_SetupForCampaignUpsell::K2Node_MakeArray_Array' has a wrong offset!");

struct StoreMain_Root_Legacy_C_UpdateCurrencyNotification final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3[0x1];
	struct FMtxBreakdown                          CallFunc_GetMtxBreakdown_ReturnValue;
	uint8                                         Pad_14[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_21[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_89[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_UpdateCurrencyNotification");
static_assert(sizeof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification) == 0x0000A8, "Wrong size on StoreMain_Root_Legacy_C_UpdateCurrencyNotification");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, Temp_byte_Variable) == 0x000000, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, Temp_byte_Variable_1) == 0x000001, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, Temp_bool_Variable) == 0x000002, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, CallFunc_GetMtxBreakdown_ReturnValue) == 0x000004, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::CallFunc_GetMtxBreakdown_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, K2Node_MakeArray_Array) == 0x000078, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, K2Node_Select_Default) == 0x000088, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_UpdateCurrencyNotification, CallFunc_Format_ReturnValue) == 0x000090, "Member 'StoreMain_Root_Legacy_C_UpdateCurrencyNotification::CallFunc_Format_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_SetupFirstFocusableTile final
{
public:
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_SetupFirstFocusableTile) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_SetupFirstFocusableTile");
static_assert(sizeof(StoreMain_Root_Legacy_C_SetupFirstFocusableTile) == 0x000018, "Wrong size on StoreMain_Root_Legacy_C_SetupFirstFocusableTile");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupFirstFocusableTile, CallFunc_GetChildAt_ReturnValue) == 0x000000, "Member 'StoreMain_Root_Legacy_C_SetupFirstFocusableTile::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupFirstFocusableTile, CallFunc_GetChildAt_ReturnValue_1) == 0x000008, "Member 'StoreMain_Root_Legacy_C_SetupFirstFocusableTile::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_SetupFirstFocusableTile, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'StoreMain_Root_Legacy_C_SetupFirstFocusableTile::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_PlayEquippedLockerMusic final
{
public:
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_1[0x7];
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;
};
static_assert(alignof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_PlayEquippedLockerMusic");
static_assert(sizeof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic) == 0x000028, "Wrong size on StoreMain_Root_Legacy_C_PlayEquippedLockerMusic");
static_assert(offsetof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic, CallFunc_GetSubGame_ReturnValue) == 0x000000, "Member 'StoreMain_Root_Legacy_C_PlayEquippedLockerMusic::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'StoreMain_Root_Legacy_C_PlayEquippedLockerMusic::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'StoreMain_Root_Legacy_C_PlayEquippedLockerMusic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_PlayEquippedLockerMusic, CallFunc_Array_Get_Item) == 0x000020, "Member 'StoreMain_Root_Legacy_C_PlayEquippedLockerMusic::CallFunc_Array_Get_Item' has a wrong offset!");

struct StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage final
{
public:
	bool                                          HasOtherPlatformCurrency;
	uint8                                         Pad_1[0x7];
	class FText                                   CurrencyMessageLocText;
};
static_assert(alignof(StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage");
static_assert(sizeof(StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage) == 0x000020, "Wrong size on StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage");
static_assert(offsetof(StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage, HasOtherPlatformCurrency) == 0x000000, "Member 'StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage::HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage, CurrencyMessageLocText) == 0x000008, "Member 'StoreMain_Root_Legacy_C_OnUpdateOtherPlatformMTXMessage::CurrencyMessageLocText' has a wrong offset!");

struct StoreMain_Root_Legacy_C_OnMainTabSelected final
{
public:
	class FName                                   TabName;
};
static_assert(alignof(StoreMain_Root_Legacy_C_OnMainTabSelected) == 0x000004, "Wrong alignment on StoreMain_Root_Legacy_C_OnMainTabSelected");
static_assert(sizeof(StoreMain_Root_Legacy_C_OnMainTabSelected) == 0x000004, "Wrong size on StoreMain_Root_Legacy_C_OnMainTabSelected");
static_assert(offsetof(StoreMain_Root_Legacy_C_OnMainTabSelected, TabName) == 0x000000, "Member 'StoreMain_Root_Legacy_C_OnMainTabSelected::TabName' has a wrong offset!");

struct StoreMain_Root_Legacy_C_HandleBack final
{
public:
	bool                                          PassThrough;
};
static_assert(alignof(StoreMain_Root_Legacy_C_HandleBack) == 0x000001, "Wrong alignment on StoreMain_Root_Legacy_C_HandleBack");
static_assert(sizeof(StoreMain_Root_Legacy_C_HandleBack) == 0x000001, "Wrong size on StoreMain_Root_Legacy_C_HandleBack");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleBack, PassThrough) == 0x000000, "Member 'StoreMain_Root_Legacy_C_HandleBack::PassThrough' has a wrong offset!");

struct StoreMain_Root_Legacy_C_HandleAllOffersGenerated final
{
public:
	bool                                          BothOfferSectionsVisible;
	EHorizontalAlignment                          Temp_byte_Variable;
	EHorizontalAlignment                          Temp_byte_Variable_1;
	uint8                                         Pad_3[0x1];
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_25[0x3];
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              CallFunc_GetVisibilityByChildrenPresence_NewParam;
	ESlateVisibility                              CallFunc_GetVisibilityByChildrenPresence_NewParam_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsActivated_ReturnValue;
	struct FMargin                                K2Node_Select_Default;
	EHorizontalAlignment                          K2Node_Select_Default_1;
};
static_assert(alignof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_HandleAllOffersGenerated");
static_assert(sizeof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated) == 0x000050, "Wrong size on StoreMain_Root_Legacy_C_HandleAllOffersGenerated");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, BothOfferSectionsVisible) == 0x000000, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::BothOfferSectionsVisible' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, Temp_byte_Variable) == 0x000001, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, Temp_byte_Variable_1) == 0x000002, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_MakeStruct_Margin) == 0x000004, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_MakeStruct_Margin_1) == 0x000014, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, Temp_bool_Variable) == 0x000024, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_DynamicCast_AsOverlay_Slot) == 0x000028, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_GetVisibilityByChildrenPresence_NewParam) == 0x000031, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_GetVisibilityByChildrenPresence_NewParam' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_GetVisibilityByChildrenPresence_NewParam_1) == 0x000032, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_GetVisibilityByChildrenPresence_NewParam_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000033, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000034, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_BooleanAND_ReturnValue) == 0x000035, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, Temp_bool_Variable_1) == 0x000036, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, CallFunc_IsActivated_ReturnValue) == 0x000037, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_Select_Default) == 0x000038, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleAllOffersGenerated, K2Node_Select_Default_1) == 0x000048, "Member 'StoreMain_Root_Legacy_C_HandleAllOffersGenerated::K2Node_Select_Default_1' has a wrong offset!");

struct StoreMain_Root_Legacy_C_LayoutVBuckTiles final
{
public:
	class UWidget*                                Child;
	int32                                         Index_0;
	int32                                         CallFunc_Divide_IntInt_ReturnValue;
	class UStoreMain_MTXOffer_C*                  K2Node_DynamicCast_AsStore_Main_MTXOffer;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue;
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_41[0x3];
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_49[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_LayoutVBuckTiles) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_LayoutVBuckTiles");
static_assert(sizeof(StoreMain_Root_Legacy_C_LayoutVBuckTiles) == 0x000050, "Wrong size on StoreMain_Root_Legacy_C_LayoutVBuckTiles");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, Child) == 0x000000, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::Child' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, Index_0) == 0x000008, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::Index_0' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, K2Node_DynamicCast_AsStore_Main_MTXOffer) == 0x000010, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::K2Node_DynamicCast_AsStore_Main_MTXOffer' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_SlotAsGridSlot_ReturnValue) == 0x000020, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_SlotAsGridSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000038, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, Temp_int_Variable) == 0x000044, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_LayoutVBuckTiles, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'StoreMain_Root_Legacy_C_LayoutVBuckTiles::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence final
{
public:
	class UPanelWidget*                           Panel;
	ESlateVisibility                              NewParam;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence");
static_assert(sizeof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence) == 0x000010, "Wrong size on StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, Panel) == 0x000000, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::Panel' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, NewParam) == 0x000008, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::NewParam' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, Temp_bool_Variable) == 0x000009, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, CallFunc_HasAnyChildren_ReturnValue) == 0x00000A, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, Temp_byte_Variable) == 0x00000B, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, Temp_byte_Variable_1) == 0x00000C, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence, K2Node_Select_Default) == 0x00000D, "Member 'StoreMain_Root_Legacy_C_GetVisibilityByChildrenPresence::K2Node_Select_Default' has a wrong offset!");

struct StoreMain_Root_Legacy_C_HandleRedeem final
{
public:
	bool                                          bPassThrough;
	uint8                                         Pad_1[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class URedeemFriendCodeWindow_C*              CallFunc_Create_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_HandleRedeem) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_HandleRedeem");
static_assert(sizeof(StoreMain_Root_Legacy_C_HandleRedeem) == 0x000018, "Wrong size on StoreMain_Root_Legacy_C_HandleRedeem");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleRedeem, bPassThrough) == 0x000000, "Member 'StoreMain_Root_Legacy_C_HandleRedeem::bPassThrough' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleRedeem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'StoreMain_Root_Legacy_C_HandleRedeem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleRedeem, CallFunc_Create_ReturnValue) == 0x000010, "Member 'StoreMain_Root_Legacy_C_HandleRedeem::CallFunc_Create_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_GenerateOfferWidget final
{
public:
	class UFortStoreFrontOfferInfo*               OfferData;
};
static_assert(alignof(StoreMain_Root_Legacy_C_GenerateOfferWidget) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_GenerateOfferWidget");
static_assert(sizeof(StoreMain_Root_Legacy_C_GenerateOfferWidget) == 0x000008, "Wrong size on StoreMain_Root_Legacy_C_GenerateOfferWidget");
static_assert(offsetof(StoreMain_Root_Legacy_C_GenerateOfferWidget, OfferData) == 0x000000, "Member 'StoreMain_Root_Legacy_C_GenerateOfferWidget::OfferData' has a wrong offset!");

struct StoreMain_Root_Legacy_C_HandleGenerateOffer final
{
public:
	class UFortStoreFrontOfferInfo*               OfferInfo;
	class UFortRealMoneyOffer*                    StoreOfferWidget;
	class FName                                   CallFunc_GetStorefrontName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         CallFunc_GetChildrenCount_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue_1;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UStoreMain_MTXOffer_C*                  CallFunc_Create_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_HandleGenerateOffer) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_HandleGenerateOffer");
static_assert(sizeof(StoreMain_Root_Legacy_C_HandleGenerateOffer) == 0x000048, "Wrong size on StoreMain_Root_Legacy_C_HandleGenerateOffer");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, OfferInfo) == 0x000000, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::OfferInfo' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, StoreOfferWidget) == 0x000008, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::StoreOfferWidget' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_GetStorefrontName_ReturnValue) == 0x000010, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_GetStorefrontName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000014, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000020, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000024, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_AddChildToGrid_ReturnValue) == 0x000028, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_AddChildToGrid_ReturnValue_1) == 0x000030, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_AddChildToGrid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_HandleGenerateOffer, CallFunc_Create_ReturnValue) == 0x000040, "Member 'StoreMain_Root_Legacy_C_HandleGenerateOffer::CallFunc_Create_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy final
{
public:
	int32                                         EntryPoint;
	EFrontEndCamera                               Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_13[0x5];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void(class FName TabName)>          K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_Event_HasOtherPlatformCurrency;
	uint8                                         Pad_2D[0x3];
	class FText                                   K2Node_Event_CurrencyMessageLocText;
	class UFortStoreFrontOfferInfo*               K2Node_Event_OfferData;
	bool                                          CallFunc_IsActivated_ReturnValue;
	uint8                                         Pad_51[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	EFrontEndCamera                               Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_63[0x1];
	class FName                                   K2Node_CustomEvent_TabName;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	EFrontEndCamera                               K2Node_Select_Default_1;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy");
static_assert(sizeof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy) == 0x000070, "Wrong size on StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, EntryPoint) == 0x000000, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_byte_Variable) == 0x000004, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_bool_Variable) == 0x000010, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_byte_Variable_1) == 0x000011, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_byte_Variable_2) == 0x000012, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000018, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_Event_HasOtherPlatformCurrency) == 0x00002C, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_Event_HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_Event_CurrencyMessageLocText) == 0x000030, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_Event_CurrencyMessageLocText' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_Event_OfferData) == 0x000048, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_Event_OfferData' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_IsActivated_ReturnValue) == 0x000050, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000058, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_byte_Variable_3) == 0x000060, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_Select_Default) == 0x000061, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, Temp_bool_Variable_1) == 0x000062, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_CustomEvent_TabName) == 0x000064, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_CustomEvent_TabName' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000068, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, K2Node_Select_Default_1) == 0x000069, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_GetSubGame_ReturnValue) == 0x00006A, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006B, "Member 'StoreMain_Root_Legacy_C_ExecuteUbergraph_StoreMain_Root_Legacy::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'StoreMain_Root_Legacy_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}
