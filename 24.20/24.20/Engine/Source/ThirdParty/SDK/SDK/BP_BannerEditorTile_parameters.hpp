#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;
	class UFortHomebaseBannerColorItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UFortHomebaseBannerIconItem*            K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_29[0x7];
	class UObject*                                CallFunc_GetListItemObject_ReturnValue_1;
	class UFortHomebaseBannerIconItem*            K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_41[0x7];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerSmallIconAsset_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Object;
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_84[0x4];
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_91[0x7];
	class UObject*                                CallFunc_GetListItemObject_ReturnValue_2;
	class UFortHomebaseBannerColorItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_A9[0x3];
	struct FLinearColor                           CallFunc_GetBannerColorSecondaryColor_ReturnValue;
	struct FLinearColor                           CallFunc_GetBannerColorPrimaryColor_ReturnValue;
	uint8                                         Pad_CC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class UObject*                                K2Node_Event_ListItemObject;
};
static_assert(alignof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile) == 0x000008, "Wrong alignment on BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile");
static_assert(sizeof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile) == 0x0000E8, "Wrong size on BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, EntryPoint) == 0x000000, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetListItemObject_ReturnValue) == 0x000008, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item) == 0x000010, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item) == 0x000020, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetListItemObject_ReturnValue_1) == 0x000030, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetListItemObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item_1) == 0x000038, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetBannerSmallIconAsset_ReturnValue) == 0x000048, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetBannerSmallIconAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_CustomEvent_Object) == 0x000070, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_CustomEvent_Object' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_AsTexture_2D) == 0x000088, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetListItemObject_ReturnValue_2) == 0x000098, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetListItemObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item_1) == 0x0000A0, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_DynamicCast_bSuccess_4) == 0x0000A8, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetBannerColorSecondaryColor_ReturnValue) == 0x0000AC, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetBannerColorSecondaryColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetBannerColorPrimaryColor_ReturnValue) == 0x0000BC, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetBannerColorPrimaryColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000D0, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile, K2Node_Event_ListItemObject) == 0x0000E0, "Member 'BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile::K2Node_Event_ListItemObject' has a wrong offset!");

struct BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished final
{
public:
	class UObject*                                Object;
};
static_assert(alignof(BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished) == 0x000008, "Wrong alignment on BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished");
static_assert(sizeof(BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished) == 0x000008, "Wrong size on BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished");
static_assert(offsetof(BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished, Object) == 0x000000, "Member 'BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished::Object' has a wrong offset!");

struct BP_BannerEditorTile_C_Mark_Item_As_Seen final
{
public:
	bool                                          bAlreadySeen;
	uint8                                         Pad_1[0x7];
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;
	class UFortAccountItem*                       K2Node_DynamicCast_AsFort_Account_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
};
static_assert(alignof(BP_BannerEditorTile_C_Mark_Item_As_Seen) == 0x000008, "Wrong alignment on BP_BannerEditorTile_C_Mark_Item_As_Seen");
static_assert(sizeof(BP_BannerEditorTile_C_Mark_Item_As_Seen) == 0x000020, "Wrong size on BP_BannerEditorTile_C_Mark_Item_As_Seen");
static_assert(offsetof(BP_BannerEditorTile_C_Mark_Item_As_Seen, bAlreadySeen) == 0x000000, "Member 'BP_BannerEditorTile_C_Mark_Item_As_Seen::bAlreadySeen' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Mark_Item_As_Seen, CallFunc_GetListItemObject_ReturnValue) == 0x000008, "Member 'BP_BannerEditorTile_C_Mark_Item_As_Seen::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Mark_Item_As_Seen, K2Node_DynamicCast_AsFort_Account_Item) == 0x000010, "Member 'BP_BannerEditorTile_C_Mark_Item_As_Seen::K2Node_DynamicCast_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Mark_Item_As_Seen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BannerEditorTile_C_Mark_Item_As_Seen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Mark_Item_As_Seen, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000019, "Member 'BP_BannerEditorTile_C_Mark_Item_As_Seen::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");

struct BP_BannerEditorTile_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(BP_BannerEditorTile_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on BP_BannerEditorTile_C_OnListItemObjectSet");
static_assert(sizeof(BP_BannerEditorTile_C_OnListItemObjectSet) == 0x000008, "Wrong size on BP_BannerEditorTile_C_OnListItemObjectSet");
static_assert(offsetof(BP_BannerEditorTile_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'BP_BannerEditorTile_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

struct BP_BannerEditorTile_C_Update_Bang_State final
{
public:
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;
	class UFortAccountItem*                       K2Node_DynamicCast_AsFort_Account_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(BP_BannerEditorTile_C_Update_Bang_State) == 0x000008, "Wrong alignment on BP_BannerEditorTile_C_Update_Bang_State");
static_assert(sizeof(BP_BannerEditorTile_C_Update_Bang_State) == 0x000018, "Wrong size on BP_BannerEditorTile_C_Update_Bang_State");
static_assert(offsetof(BP_BannerEditorTile_C_Update_Bang_State, CallFunc_GetListItemObject_ReturnValue) == 0x000000, "Member 'BP_BannerEditorTile_C_Update_Bang_State::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Update_Bang_State, K2Node_DynamicCast_AsFort_Account_Item) == 0x000008, "Member 'BP_BannerEditorTile_C_Update_Bang_State::K2Node_DynamicCast_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Update_Bang_State, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_BannerEditorTile_C_Update_Bang_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Update_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000011, "Member 'BP_BannerEditorTile_C_Update_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BannerEditorTile_C_Update_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_BannerEditorTile_C_Update_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
