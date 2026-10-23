#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UTexture* BackgroundImage)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_Event_bEmpty;
	bool                                          K2Node_CustomEvent_bIsNavigationEnabled;
	uint8                                         Pad_12[0x6];
	TSoftObjectPtr<class UTexture>                CallFunc_GetLoadedTexture_ReturnValue;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_49[0x7];
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_5A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_75[0x3];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen) == 0x000008, "Wrong alignment on ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen");
static_assert(sizeof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen) == 0x000080, "Wrong size on ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, EntryPoint) == 0x000000, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_Event_bEmpty) == 0x000010, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_Event_bEmpty' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_CustomEvent_bIsNavigationEnabled) == 0x000011, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_CustomEvent_bIsNavigationEnabled' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, CallFunc_GetLoadedTexture_ReturnValue) == 0x000018, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::CallFunc_GetLoadedTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000040, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_DynamicCast_AsTexture) == 0x000050, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_CreateDelegate_OutputDelegate_2) == 0x000068, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, Temp_bool_Variable) == 0x000074, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen, K2Node_Select_Default) == 0x000078, "Member 'ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen::K2Node_Select_Default' has a wrong offset!");

struct ItemShopScreen_C_HandleDynamicBackgroundTextureChanged final
{
public:
	class UTexture*                               BackgroundTexture;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ItemShopScreen_C_HandleDynamicBackgroundTextureChanged) == 0x000008, "Wrong alignment on ItemShopScreen_C_HandleDynamicBackgroundTextureChanged");
static_assert(sizeof(ItemShopScreen_C_HandleDynamicBackgroundTextureChanged) == 0x000018, "Wrong size on ItemShopScreen_C_HandleDynamicBackgroundTextureChanged");
static_assert(offsetof(ItemShopScreen_C_HandleDynamicBackgroundTextureChanged, BackgroundTexture) == 0x000000, "Member 'ItemShopScreen_C_HandleDynamicBackgroundTextureChanged::BackgroundTexture' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_HandleDynamicBackgroundTextureChanged, K2Node_DynamicCast_AsTexture_2D) == 0x000008, "Member 'ItemShopScreen_C_HandleDynamicBackgroundTextureChanged::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ItemShopScreen_C_HandleDynamicBackgroundTextureChanged, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ItemShopScreen_C_HandleDynamicBackgroundTextureChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct ItemShopScreen_C_OnSectionsEstablished final
{
public:
	bool                                          bEmpty;
};
static_assert(alignof(ItemShopScreen_C_OnSectionsEstablished) == 0x000001, "Wrong alignment on ItemShopScreen_C_OnSectionsEstablished");
static_assert(sizeof(ItemShopScreen_C_OnSectionsEstablished) == 0x000001, "Wrong size on ItemShopScreen_C_OnSectionsEstablished");
static_assert(offsetof(ItemShopScreen_C_OnSectionsEstablished, bEmpty) == 0x000000, "Member 'ItemShopScreen_C_OnSectionsEstablished::bEmpty' has a wrong offset!");

struct ItemShopScreen_C_SequencerEvent_EnableShopNavigate final
{
public:
	bool                                          bIsNavigationEnabled;
};
static_assert(alignof(ItemShopScreen_C_SequencerEvent_EnableShopNavigate) == 0x000001, "Wrong alignment on ItemShopScreen_C_SequencerEvent_EnableShopNavigate");
static_assert(sizeof(ItemShopScreen_C_SequencerEvent_EnableShopNavigate) == 0x000001, "Wrong size on ItemShopScreen_C_SequencerEvent_EnableShopNavigate");
static_assert(offsetof(ItemShopScreen_C_SequencerEvent_EnableShopNavigate, bIsNavigationEnabled) == 0x000000, "Member 'ItemShopScreen_C_SequencerEvent_EnableShopNavigate::bIsNavigationEnabled' has a wrong offset!");

}
