#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct StoreMain_OfferDetails_C_UpdatePurchaseBlocked final
{
public:
	bool                                          bIsBlocked;
	uint8                                         Pad_1[0x7];
	class FText                                   PurchaseNotAllowedReason;
};
static_assert(alignof(StoreMain_OfferDetails_C_UpdatePurchaseBlocked) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_UpdatePurchaseBlocked");
static_assert(sizeof(StoreMain_OfferDetails_C_UpdatePurchaseBlocked) == 0x000020, "Wrong size on StoreMain_OfferDetails_C_UpdatePurchaseBlocked");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseBlocked, bIsBlocked) == 0x000000, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseBlocked::bIsBlocked' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseBlocked, PurchaseNotAllowedReason) == 0x000008, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseBlocked::PurchaseNotAllowedReason' has a wrong offset!");

struct StoreMain_OfferDetails_C_SetupCurrencyImage final
{
public:
	class UFortAccountItemDefinition*             PriceItem;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_B[0x5];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	int32                                         CallFunc_GetPriceItem_RequiredItemCount;
	uint8                                         Pad_4C[0x4];
	class UFortAccountItemDefinition*             CallFunc_GetPriceItem_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_1;
	bool                                          CallFunc_IsPriceInRealMoney_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(StoreMain_OfferDetails_C_SetupCurrencyImage) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_SetupCurrencyImage");
static_assert(sizeof(StoreMain_OfferDetails_C_SetupCurrencyImage) == 0x000068, "Wrong size on StoreMain_OfferDetails_C_SetupCurrencyImage");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, PriceItem) == 0x000000, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::PriceItem' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, Temp_bool_Variable) == 0x000008, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, Temp_byte_Variable) == 0x000009, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, Temp_byte_Variable_1) == 0x00000A, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000010, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_GetOfferInfo_ReturnValue) == 0x000040, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_GetPriceItem_RequiredItemCount) == 0x000048, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_GetPriceItem_RequiredItemCount' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_GetPriceItem_ReturnValue) == 0x000050, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_GetPriceItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_GetOfferInfo_ReturnValue_1) == 0x000058, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_GetOfferInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, CallFunc_IsPriceInRealMoney_ReturnValue) == 0x000060, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::CallFunc_IsPriceInRealMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetupCurrencyImage, K2Node_Select_Default) == 0x000061, "Member 'StoreMain_OfferDetails_C_SetupCurrencyImage::K2Node_Select_Default' has a wrong offset!");

struct StoreMain_OfferDetails_C_UpdatePurchaseButton final
{
public:
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x7];
	class UFortHoldableButton*                    CallFunc_GetPurchaseButtonCurrent_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_AreGrantedItemsOwned_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_53[0x5];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(StoreMain_OfferDetails_C_UpdatePurchaseButton) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_UpdatePurchaseButton");
static_assert(sizeof(StoreMain_OfferDetails_C_UpdatePurchaseButton) == 0x000070, "Wrong size on StoreMain_OfferDetails_C_UpdatePurchaseButton");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, Temp_text_Variable) == 0x000000, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, Temp_text_Variable_1) == 0x000018, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, Temp_bool_Variable) == 0x000030, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, CallFunc_GetPurchaseButtonCurrent_ReturnValue) == 0x000038, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::CallFunc_GetPurchaseButtonCurrent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, CallFunc_GetOfferInfo_ReturnValue) == 0x000040, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000048, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, CallFunc_AreGrantedItemsOwned_ReturnValue) == 0x000051, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::CallFunc_AreGrantedItemsOwned_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, CallFunc_Not_PreBool_ReturnValue) == 0x000052, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_UpdatePurchaseButton, K2Node_Select_Default) == 0x000058, "Member 'StoreMain_OfferDetails_C_UpdatePurchaseButton::K2Node_Select_Default' has a wrong offset!");

struct StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0");
static_assert(sizeof(StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0) == 0x000008, "Wrong size on StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0");
static_assert(offsetof(StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0, Loaded) == 0x000000, "Member 'StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0::Loaded' has a wrong offset!");

struct StoreMain_OfferDetails_C_SetPurchaseButtonText final
{
public:
	class FText                                   ButtonText;
	class UFortHoldableButton*                    CallFunc_GetPurchaseButtonCurrent_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(StoreMain_OfferDetails_C_SetPurchaseButtonText) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_SetPurchaseButtonText");
static_assert(sizeof(StoreMain_OfferDetails_C_SetPurchaseButtonText) == 0x000030, "Wrong size on StoreMain_OfferDetails_C_SetPurchaseButtonText");
static_assert(offsetof(StoreMain_OfferDetails_C_SetPurchaseButtonText, ButtonText) == 0x000000, "Member 'StoreMain_OfferDetails_C_SetPurchaseButtonText::ButtonText' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetPurchaseButtonText, CallFunc_GetPurchaseButtonCurrent_ReturnValue) == 0x000018, "Member 'StoreMain_OfferDetails_C_SetPurchaseButtonText::CallFunc_GetPurchaseButtonCurrent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetPurchaseButtonText, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000020, "Member 'StoreMain_OfferDetails_C_SetPurchaseButtonText::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_SetPurchaseButtonText, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StoreMain_OfferDetails_C_SetPurchaseButtonText::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C");
static_assert(sizeof(StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C) == 0x000008, "Wrong size on StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C");
static_assert(offsetof(StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C, Loaded) == 0x000000, "Member 'StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C::Loaded' has a wrong offset!");

struct StoreMain_OfferDetails_C_IsGiftingStorefrontOffer final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	bool                                          CallFunc_IsGiftingStorefrontOffer_ReturnValue;
};
static_assert(alignof(StoreMain_OfferDetails_C_IsGiftingStorefrontOffer) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_IsGiftingStorefrontOffer");
static_assert(sizeof(StoreMain_OfferDetails_C_IsGiftingStorefrontOffer) == 0x000018, "Wrong size on StoreMain_OfferDetails_C_IsGiftingStorefrontOffer");
static_assert(offsetof(StoreMain_OfferDetails_C_IsGiftingStorefrontOffer, ReturnValue) == 0x000000, "Member 'StoreMain_OfferDetails_C_IsGiftingStorefrontOffer::ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_IsGiftingStorefrontOffer, CallFunc_GetOfferInfo_ReturnValue) == 0x000008, "Member 'StoreMain_OfferDetails_C_IsGiftingStorefrontOffer::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_IsGiftingStorefrontOffer, CallFunc_IsGiftingStorefrontOffer_ReturnValue) == 0x000010, "Member 'StoreMain_OfferDetails_C_IsGiftingStorefrontOffer::CallFunc_IsGiftingStorefrontOffer_ReturnValue' has a wrong offset!");

struct StoreMain_OfferDetails_C_RegisterInput final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
};
static_assert(alignof(StoreMain_OfferDetails_C_RegisterInput) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_RegisterInput");
static_assert(sizeof(StoreMain_OfferDetails_C_RegisterInput) == 0x000020, "Wrong size on StoreMain_OfferDetails_C_RegisterInput");
static_assert(offsetof(StoreMain_OfferDetails_C_RegisterInput, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'StoreMain_OfferDetails_C_RegisterInput::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_RegisterInput, K2Node_MakeStruct_DataTableRowHandle) == 0x000010, "Member 'StoreMain_OfferDetails_C_RegisterInput::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");

struct StoreMain_OfferDetails_C_InitStoreTypeVisuals final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_3[0x5];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(StoreMain_OfferDetails_C_InitStoreTypeVisuals) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_InitStoreTypeVisuals");
static_assert(sizeof(StoreMain_OfferDetails_C_InitStoreTypeVisuals) == 0x000018, "Wrong size on StoreMain_OfferDetails_C_InitStoreTypeVisuals");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, Temp_bool_Variable) == 0x000000, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, Temp_byte_Variable) == 0x000001, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, Temp_byte_Variable_1) == 0x000002, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, CallFunc_GetOfferInfo_ReturnValue) == 0x000008, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, CallFunc_GetFortStoreOfferType_ReturnValue) == 0x000010, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::CallFunc_GetFortStoreOfferType_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitStoreTypeVisuals, K2Node_Select_Default) == 0x000012, "Member 'StoreMain_OfferDetails_C_InitStoreTypeVisuals::K2Node_Select_Default' has a wrong offset!");

struct StoreMain_OfferDetails_C_InitDetailAttributes final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	class UFortMtxOfferData*                      CallFunc_GetOfferDisplayAsset_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UStoreMain_OfferDetailsAttribute_C*     CallFunc_Create_ReturnValue;
	struct FFortMtxDetailsAttribute               CallFunc_Array_Get_Item;
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(StoreMain_OfferDetails_C_InitDetailAttributes) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_InitDetailAttributes");
static_assert(sizeof(StoreMain_OfferDetails_C_InitDetailAttributes) == 0x000070, "Wrong size on StoreMain_OfferDetails_C_InitDetailAttributes");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, Temp_int_Array_Index_Variable) == 0x000000, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_GetOfferInfo_ReturnValue) == 0x000010, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_GetOfferDisplayAsset_ReturnValue) == 0x000018, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_GetOfferDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_Create_ReturnValue) == 0x000028, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_Array_Get_Item) == 0x000030, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000060, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitDetailAttributes, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'StoreMain_OfferDetails_C_InitDetailAttributes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity final
{
public:
	int32                                         Quantity;
	uint8                                         Pad_4[0x4];
	class UFortMtxOfferData*                      DataAsset;
	class UFortMtxOfferData*                      CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
};
static_assert(alignof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity");
static_assert(sizeof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity) == 0x000020, "Wrong size on StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity");
static_assert(offsetof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity, Quantity) == 0x000000, "Member 'StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity::Quantity' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity, DataAsset) == 0x000008, "Member 'StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity::DataAsset' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity, CallFunc_Map_Find_Value) == 0x000010, "Member 'StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

struct StoreMain_OfferDetails_C_InitCurrency final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_11[0x7];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_1;
	int32                                         CallFunc_GetBonusQuantity_ReturnValue;
	int32                                         CallFunc_GetTotalQuantity_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_35[0x3];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_2;
	class FText                                   CallFunc_GetDescription_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_3;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_4;
	int32                                         CallFunc_GetBonusQuantity_ReturnValue_1;
	int32                                         CallFunc_GetTotalQuantity_ReturnValue_1;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;
	uint8                                         Pad_89[0x3];
	int32                                         CallFunc_GetBaseQuantity_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(StoreMain_OfferDetails_C_InitCurrency) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_InitCurrency");
static_assert(sizeof(StoreMain_OfferDetails_C_InitCurrency) == 0x0000B0, "Wrong size on StoreMain_OfferDetails_C_InitCurrency");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable) == 0x000000, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable_1) == 0x000001, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_bool_Variable) == 0x000002, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable_2) == 0x000003, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable_3) == 0x000004, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_bool_Variable_1) == 0x000005, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable_4) == 0x000006, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_byte_Variable_5) == 0x000007, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000008, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, Temp_bool_Variable_2) == 0x000010, "Member 'StoreMain_OfferDetails_C_InitCurrency::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetOfferInfo_ReturnValue) == 0x000018, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetOfferInfo_ReturnValue_1) == 0x000020, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetOfferInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetBonusQuantity_ReturnValue) == 0x000028, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetBonusQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetTotalQuantity_ReturnValue) == 0x00002C, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetTotalQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000031, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, K2Node_Select_Default) == 0x000033, "Member 'StoreMain_OfferDetails_C_InitCurrency::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, K2Node_Select_Default_1) == 0x000034, "Member 'StoreMain_OfferDetails_C_InitCurrency::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetOfferInfo_ReturnValue_2) == 0x000038, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetOfferInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetDescription_ReturnValue) == 0x000040, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetOfferInfo_ReturnValue_3) == 0x000058, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetOfferInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetOfferInfo_ReturnValue_4) == 0x000060, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetOfferInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetBonusQuantity_ReturnValue_1) == 0x000068, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetBonusQuantity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetTotalQuantity_ReturnValue_1) == 0x00006C, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetTotalQuantity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000088, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_GetBaseQuantity_ReturnValue) == 0x00008C, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_GetBaseQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000090, "Member 'StoreMain_OfferDetails_C_InitCurrency::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_InitCurrency, K2Node_Select_Default_2) == 0x0000A8, "Member 'StoreMain_OfferDetails_C_InitCurrency::K2Node_Select_Default_2' has a wrong offset!");

struct StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                Temp_object_Variable;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UObject*                                Temp_object_Variable_1;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	class FText                                   CallFunc_GetNormalPrice_ReturnValue;
	class FText                                   CallFunc_GetName_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	class UFortExperimentContext*                 CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue;
	uint8                                         Pad_79[0x7];
	class UFortExperimentContext*                 CallFunc_GetContext_ReturnValue_1;
	class UFortExperimentContext*                 CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1;
	bool                                          CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue;
	uint8                                         Pad_92[0x6];
	class UMaterialInterface*                     Temp_object_Variable_2;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_AC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_C1[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_D9[0x7];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_1;
	int32                                         CallFunc_GetTotalQuantity_ReturnValue;
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue;
	uint8                                         Pad_ED[0x3];
	class UFortMtxOfferData*                      CallFunc_GetCurrencyABAssetFromQuantity_DataAsset;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_FB[0x5];
	struct FSlateBrush                            CallFunc_CreateBrushFromAsset_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_2;
	int32                                         CallFunc_GetTotalQuantity_ReturnValue_1;
	uint8                                         Pad_1CC[0x4];
	class UFortMtxOfferData*                      CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1;
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_1DD[0x3];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_3;
	class UFortMtxOfferData*                      CallFunc_GetOfferDisplayAsset_ReturnValue;
	struct FSlateBrush                            CallFunc_CreateBrushFromAsset_ReturnValue_1;
	class FText                                   CallFunc_GetSalePriceFromLastAppStore_SalePrice;
	bool                                          CallFunc_GetSalePriceFromLastAppStore_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_2CB[0x1];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          K2Node_Event_bIsBlocked;
	uint8                                         Pad_2E1[0x7];
	class FText                                   K2Node_Event_PurchaseNotAllowedReason;
};
static_assert(alignof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails) == 0x000010, "Wrong alignment on StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails");
static_assert(sizeof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails) == 0x000300, "Wrong size on StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, EntryPoint) == 0x000000, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_object_Variable) == 0x000008, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000020, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_object_Variable_1) == 0x000028, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetOfferInfo_ReturnValue) == 0x000030, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetNormalPrice_ReturnValue) == 0x000038, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetNormalPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetName_ReturnValue) == 0x000050, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_CustomEvent_Loaded_1) == 0x000068, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue) == 0x000078, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetContext_ReturnValue_1) == 0x000080, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetContext_ReturnValue_2) == 0x000088, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1) == 0x000090, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue) == 0x000091, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_object_Variable_2) == 0x000098, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x0000B0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_object_Variable_3) == 0x0000B8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_bool_Variable) == 0x0000C0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_Select_Default) == 0x0000C8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x0000D0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_byte_Variable) == 0x0000D8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetOfferInfo_ReturnValue_1) == 0x0000E0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetOfferInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetTotalQuantity_ReturnValue) == 0x0000E8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetTotalQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetFortStoreOfferType_ReturnValue) == 0x0000EC, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetFortStoreOfferType_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetCurrencyABAssetFromQuantity_DataAsset) == 0x0000F0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetCurrencyABAssetFromQuantity_DataAsset' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_IsValid_ReturnValue) == 0x0000F9, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_BooleanAND_ReturnValue) == 0x0000FA, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_CreateBrushFromAsset_ReturnValue) == 0x000100, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_CreateBrushFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetOfferInfo_ReturnValue_2) == 0x0001C0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetOfferInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetTotalQuantity_ReturnValue_1) == 0x0001C8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetTotalQuantity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1) == 0x0001D0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetFortStoreOfferType_ReturnValue_1) == 0x0001D8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetFortStoreOfferType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_IsValid_ReturnValue_1) == 0x0001D9, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001DA, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_BooleanAND_ReturnValue_1) == 0x0001DB, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_byte_Variable_1) == 0x0001DC, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetOfferInfo_ReturnValue_3) == 0x0001E0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetOfferInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetOfferDisplayAsset_ReturnValue) == 0x0001E8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetOfferDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_CreateBrushFromAsset_ReturnValue_1) == 0x0001F0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_CreateBrushFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetSalePriceFromLastAppStore_SalePrice) == 0x0002B0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetSalePriceFromLastAppStore_SalePrice' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetSalePriceFromLastAppStore_ReturnValue) == 0x0002C8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetSalePriceFromLastAppStore_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, Temp_bool_Variable_1) == 0x0002C9, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_Select_Default_1) == 0x0002CA, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002CC, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0002D8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_Event_bIsBlocked) == 0x0002E0, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_Event_bIsBlocked' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails, K2Node_Event_PurchaseNotAllowedReason) == 0x0002E8, "Member 'StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails::K2Node_Event_PurchaseNotAllowedReason' has a wrong offset!");

struct StoreMain_OfferDetails_C_ContentBlocked final
{
public:
	bool                                          isContentBlocked_0;
	uint8                                         Pad_1[0x7];
	class FText                                   Content_Blocked_Text;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(StoreMain_OfferDetails_C_ContentBlocked) == 0x000008, "Wrong alignment on StoreMain_OfferDetails_C_ContentBlocked");
static_assert(sizeof(StoreMain_OfferDetails_C_ContentBlocked) == 0x000028, "Wrong size on StoreMain_OfferDetails_C_ContentBlocked");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, isContentBlocked_0) == 0x000000, "Member 'StoreMain_OfferDetails_C_ContentBlocked::isContentBlocked_0' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Content_Blocked_Text) == 0x000008, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Content_Blocked_Text' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_bool_Variable) == 0x000020, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_byte_Variable) == 0x000021, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_byte_Variable_1) == 0x000022, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_bool_Variable_1) == 0x000023, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, K2Node_Select_Default) == 0x000024, "Member 'StoreMain_OfferDetails_C_ContentBlocked::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_byte_Variable_2) == 0x000025, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, Temp_byte_Variable_3) == 0x000026, "Member 'StoreMain_OfferDetails_C_ContentBlocked::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_OfferDetails_C_ContentBlocked, K2Node_Select_Default_1) == 0x000027, "Member 'StoreMain_OfferDetails_C_ContentBlocked::K2Node_Select_Default_1' has a wrong offset!");

struct StoreMain_OfferDetails_C_HandleBack final
{
public:
	bool                                          PassThrough;
};
static_assert(alignof(StoreMain_OfferDetails_C_HandleBack) == 0x000001, "Wrong alignment on StoreMain_OfferDetails_C_HandleBack");
static_assert(sizeof(StoreMain_OfferDetails_C_HandleBack) == 0x000001, "Wrong size on StoreMain_OfferDetails_C_HandleBack");
static_assert(offsetof(StoreMain_OfferDetails_C_HandleBack, PassThrough) == 0x000000, "Member 'StoreMain_OfferDetails_C_HandleBack::PassThrough' has a wrong offset!");

}
