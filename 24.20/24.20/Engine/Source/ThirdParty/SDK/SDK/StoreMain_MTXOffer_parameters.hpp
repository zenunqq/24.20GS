#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct StoreMain_MTXOffer_C_TriggerIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(StoreMain_MTXOffer_C_TriggerIntro) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_TriggerIntro");
static_assert(sizeof(StoreMain_MTXOffer_C_TriggerIntro) == 0x000008, "Wrong size on StoreMain_MTXOffer_C_TriggerIntro");
static_assert(offsetof(StoreMain_MTXOffer_C_TriggerIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'StoreMain_MTXOffer_C_TriggerIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct StoreMain_MTXOffer_C_SetTileSize final
{
public:
	EFortMtxOfferDisplaySize                      DisplaySize;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_2[0x6];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(StoreMain_MTXOffer_C_SetTileSize) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_SetTileSize");
static_assert(sizeof(StoreMain_MTXOffer_C_SetTileSize) == 0x000068, "Wrong size on StoreMain_MTXOffer_C_SetTileSize");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTileSize, DisplaySize) == 0x000000, "Member 'StoreMain_MTXOffer_C_SetTileSize::DisplaySize' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTileSize, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'StoreMain_MTXOffer_C_SetTileSize::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTileSize, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'StoreMain_MTXOffer_C_SetTileSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTileSize, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'StoreMain_MTXOffer_C_SetTileSize::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct StoreMain_MTXOffer_C_SetTextOutlineColor final
{
public:
	class UTextBlock*                             Text;
	struct FFortMtxGradient                       Gradient;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicOutlineMaterial_ReturnValue;
};
static_assert(alignof(StoreMain_MTXOffer_C_SetTextOutlineColor) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_SetTextOutlineColor");
static_assert(sizeof(StoreMain_MTXOffer_C_SetTextOutlineColor) == 0x000030, "Wrong size on StoreMain_MTXOffer_C_SetTextOutlineColor");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTextOutlineColor, Text) == 0x000000, "Member 'StoreMain_MTXOffer_C_SetTextOutlineColor::Text' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTextOutlineColor, Gradient) == 0x000008, "Member 'StoreMain_MTXOffer_C_SetTextOutlineColor::Gradient' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_SetTextOutlineColor, CallFunc_GetDynamicOutlineMaterial_ReturnValue) == 0x000028, "Member 'StoreMain_MTXOffer_C_SetTextOutlineColor::CallFunc_GetDynamicOutlineMaterial_ReturnValue' has a wrong offset!");

struct StoreMain_MTXOffer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(StoreMain_MTXOffer_C_PreConstruct) == 0x000001, "Wrong alignment on StoreMain_MTXOffer_C_PreConstruct");
static_assert(sizeof(StoreMain_MTXOffer_C_PreConstruct) == 0x000001, "Wrong size on StoreMain_MTXOffer_C_PreConstruct");
static_assert(offsetof(StoreMain_MTXOffer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StoreMain_MTXOffer_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct StoreMain_MTXOffer_C_OnOfferTileBrushLoaded final
{
public:
	struct FSlateBrush                            OfferBrush;
};
static_assert(alignof(StoreMain_MTXOffer_C_OnOfferTileBrushLoaded) == 0x000010, "Wrong alignment on StoreMain_MTXOffer_C_OnOfferTileBrushLoaded");
static_assert(sizeof(StoreMain_MTXOffer_C_OnOfferTileBrushLoaded) == 0x0000C0, "Wrong size on StoreMain_MTXOffer_C_OnOfferTileBrushLoaded");
static_assert(offsetof(StoreMain_MTXOffer_C_OnOfferTileBrushLoaded, OfferBrush) == 0x000000, "Member 'StoreMain_MTXOffer_C_OnOfferTileBrushLoaded::OfferBrush' has a wrong offset!");

struct StoreMain_MTXOffer_C_OnUpdateStorePrice final
{
public:
	class FText                                   InStorePrice;
};
static_assert(alignof(StoreMain_MTXOffer_C_OnUpdateStorePrice) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_OnUpdateStorePrice");
static_assert(sizeof(StoreMain_MTXOffer_C_OnUpdateStorePrice) == 0x000018, "Wrong size on StoreMain_MTXOffer_C_OnUpdateStorePrice");
static_assert(offsetof(StoreMain_MTXOffer_C_OnUpdateStorePrice, InStorePrice) == 0x000000, "Member 'StoreMain_MTXOffer_C_OnUpdateStorePrice::InStorePrice' has a wrong offset!");

struct StoreMain_MTXOffer_C_InitOffer final
{
public:
	class UFortMtxOfferData*                      DisplayAsset;
	struct FFortMtxGradient                       Gradient;
	int32                                         TotalQuantity;
	int32                                         BonusQuantity;
	class UFortStoreFrontOfferInfo*               OfferInfo;
	class FText                                   BonusMTX;
	class FText                                   BaseMtx;
	class UMaterial*                              OfferMaterial;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_77[0x1];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class FString                                 CallFunc_GetBannerOverrideTag_ReturnValue;
	class FText                                   CallFunc_GetSalePriceFromLastAppStore_SalePrice;
	bool                                          CallFunc_GetSalePriceFromLastAppStore_ReturnValue;
	uint8                                         Pad_A9[0x7];
	class FText                                   CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_CB[0x1];
	class FName                                   CallFunc_GetStorefrontName_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	bool                                          CallFunc_IsPurchasingAvailable_ReturnValue;
	uint8                                         Pad_D2[0x6];
	class FText                                   CallFunc_GetNormalPrice_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_109[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_129[0x7];
	class FText                                   CallFunc_GetName_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_149[0x3];
	int32                                         CallFunc_GetBonusQuantity_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_152[0x6];
	class FText                                   CallFunc_GetBonusText_BonusText;
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue;
	uint8                                         Pad_171[0x7];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_181[0x7];
	class UFortMtxOfferData*                      CallFunc_GetOfferDisplayAsset_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_192[0x6];
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_1;
	EFortMtxOfferDisplaySize                      CallFunc_GetOfferDisplaySize_ReturnValue;
	uint8                                         Pad_1A1[0x3];
	int32                                         CallFunc_GetTotalQuantity_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_1B1[0x7];
	class FString                                 CallFunc_GetMetaValue_ReturnValue;
	class FText                                   CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	uint8                                         Pad_1E1[0x7];
	class UWidget*                                K2Node_Select_Default_3;
	class FString                                 CallFunc_GetBannerOverrideTag_ReturnValue_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_201[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class FText                                   K2Node_Select_Default_4;
};
static_assert(alignof(StoreMain_MTXOffer_C_InitOffer) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_InitOffer");
static_assert(sizeof(StoreMain_MTXOffer_C_InitOffer) == 0x000228, "Wrong size on StoreMain_MTXOffer_C_InitOffer");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, DisplayAsset) == 0x000000, "Member 'StoreMain_MTXOffer_C_InitOffer::DisplayAsset' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Gradient) == 0x000008, "Member 'StoreMain_MTXOffer_C_InitOffer::Gradient' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, TotalQuantity) == 0x000028, "Member 'StoreMain_MTXOffer_C_InitOffer::TotalQuantity' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, BonusQuantity) == 0x00002C, "Member 'StoreMain_MTXOffer_C_InitOffer::BonusQuantity' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, OfferInfo) == 0x000030, "Member 'StoreMain_MTXOffer_C_InitOffer::OfferInfo' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, BonusMTX) == 0x000038, "Member 'StoreMain_MTXOffer_C_InitOffer::BonusMTX' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, BaseMtx) == 0x000050, "Member 'StoreMain_MTXOffer_C_InitOffer::BaseMtx' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, OfferMaterial) == 0x000068, "Member 'StoreMain_MTXOffer_C_InitOffer::OfferMaterial' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable) == 0x000070, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_bool_Variable) == 0x000071, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable_1) == 0x000072, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable_2) == 0x000073, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_bool_Variable_1) == 0x000074, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable_3) == 0x000075, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable_4) == 0x000076, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000078, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetBannerOverrideTag_ReturnValue) == 0x000080, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetBannerOverrideTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetSalePriceFromLastAppStore_SalePrice) == 0x000090, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetSalePriceFromLastAppStore_SalePrice' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetSalePriceFromLastAppStore_ReturnValue) == 0x0000A8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetSalePriceFromLastAppStore_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Map_Find_Value) == 0x0000B0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Map_Find_ReturnValue) == 0x0000C8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, K2Node_Select_Default) == 0x0000C9, "Member 'StoreMain_MTXOffer_C_InitOffer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_byte_Variable_5) == 0x0000CA, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetStorefrontName_ReturnValue) == 0x0000CC, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetStorefrontName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000D0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_IsPurchasingAvailable_ReturnValue) == 0x0000D1, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_IsPurchasingAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetNormalPrice_ReturnValue) == 0x0000D8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetNormalPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Greater_IntInt_ReturnValue) == 0x000108, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000110, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, K2Node_Select_Default_1) == 0x000128, "Member 'StoreMain_MTXOffer_C_InitOffer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetName_ReturnValue) == 0x000130, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000148, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetBonusQuantity_ReturnValue) == 0x00014C, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetBonusQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_BooleanAND_ReturnValue) == 0x000150, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_BooleanOR_ReturnValue) == 0x000151, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetBonusText_BonusText) == 0x000158, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetBonusText_BonusText' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetFortStoreOfferType_ReturnValue) == 0x000170, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetFortStoreOfferType_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetOfferInfo_ReturnValue) == 0x000178, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000180, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetOfferDisplayAsset_ReturnValue) == 0x000188, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetOfferDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_bool_Variable_2) == 0x000190, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, K2Node_Select_Default_2) == 0x000191, "Member 'StoreMain_MTXOffer_C_InitOffer::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetOfferInfo_ReturnValue_1) == 0x000198, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetOfferInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetOfferDisplaySize_ReturnValue) == 0x0001A0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetOfferDisplaySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetTotalQuantity_ReturnValue) == 0x0001A4, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetTotalQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetOfferInfo_ReturnValue_2) == 0x0001A8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetOfferInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_bool_Variable_3) == 0x0001B0, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetMetaValue_ReturnValue) == 0x0001B8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetMetaValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Map_Find_Value_1) == 0x0001C8, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_Map_Find_ReturnValue_1) == 0x0001E0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, K2Node_Select_Default_3) == 0x0001E8, "Member 'StoreMain_MTXOffer_C_InitOffer::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetBannerOverrideTag_ReturnValue_1) == 0x0001F0, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetBannerOverrideTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, Temp_bool_Variable_4) == 0x000200, "Member 'StoreMain_MTXOffer_C_InitOffer::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000208, "Member 'StoreMain_MTXOffer_C_InitOffer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_InitOffer, K2Node_Select_Default_4) == 0x000210, "Member 'StoreMain_MTXOffer_C_InitOffer::K2Node_Select_Default_4' has a wrong offset!");

struct StoreMain_MTXOffer_C_InitialReset final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(StoreMain_MTXOffer_C_InitialReset) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_InitialReset");
static_assert(sizeof(StoreMain_MTXOffer_C_InitialReset) == 0x000008, "Wrong size on StoreMain_MTXOffer_C_InitialReset");
static_assert(offsetof(StoreMain_MTXOffer_C_InitialReset, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'StoreMain_MTXOffer_C_InitialReset::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct StoreMain_MTXOffer_C_GetBonusText final
{
public:
	class UFortStoreFrontOfferInfo*               OfferInfo;
	class FText                                   BonusText_0;
	int32                                         CallFunc_GetBonusQuantity_ReturnValue;
	int32                                         CallFunc_GetBaseQuantity_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	uint8                                         Pad_44[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(StoreMain_MTXOffer_C_GetBonusText) == 0x000008, "Wrong alignment on StoreMain_MTXOffer_C_GetBonusText");
static_assert(sizeof(StoreMain_MTXOffer_C_GetBonusText) == 0x0000D8, "Wrong size on StoreMain_MTXOffer_C_GetBonusText");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, OfferInfo) == 0x000000, "Member 'StoreMain_MTXOffer_C_GetBonusText::OfferInfo' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, BonusText_0) == 0x000008, "Member 'StoreMain_MTXOffer_C_GetBonusText::BonusText_0' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_GetBonusQuantity_ReturnValue) == 0x000020, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_GetBonusQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_GetBaseQuantity_ReturnValue) == 0x000024, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_GetBaseQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00002C, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000048, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'StoreMain_MTXOffer_C_GetBonusText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, K2Node_MakeArray_Array) == 0x0000A0, "Member 'StoreMain_MTXOffer_C_GetBonusText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_GetBonusText, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000D0, "Member 'StoreMain_MTXOffer_C_GetBonusText::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UFortStoreFrontOfferInfo*               CallFunc_GetOfferInfo_ReturnValue;
	EFortMtxOfferDisplaySize                      CallFunc_GetOfferDisplaySize_ReturnValue;
	uint8                                         Pad_21[0x7];
	class FText                                   K2Node_Event_InStorePrice;
	struct FSlateBrush                            K2Node_Event_OfferBrush;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
};
static_assert(alignof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer) == 0x000010, "Wrong alignment on StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer");
static_assert(sizeof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer) == 0x000110, "Wrong size on StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, EntryPoint) == 0x000000, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, K2Node_Event_IsDesignTime) == 0x000004, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, CallFunc_GetOfferInfo_ReturnValue) == 0x000018, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, CallFunc_GetOfferDisplaySize_ReturnValue) == 0x000020, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::CallFunc_GetOfferDisplaySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, K2Node_Event_InStorePrice) == 0x000028, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::K2Node_Event_InStorePrice' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, K2Node_Event_OfferBrush) == 0x000040, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::K2Node_Event_OfferBrush' has a wrong offset!");
static_assert(offsetof(StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer, CallFunc_SpawnSound2D_ReturnValue) == 0x000100, "Member 'StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

}
