#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PlayerBanner_C_Account_Info_Changed final
{
public:
	struct FFortPublicAccountInfo                 NewInfo;
};
static_assert(alignof(PlayerBanner_C_Account_Info_Changed) == 0x000004, "Wrong alignment on PlayerBanner_C_Account_Info_Changed");
static_assert(sizeof(PlayerBanner_C_Account_Info_Changed) == 0x000034, "Wrong size on PlayerBanner_C_Account_Info_Changed");
static_assert(offsetof(PlayerBanner_C_Account_Info_Changed, NewInfo) == 0x000000, "Member 'PlayerBanner_C_Account_Info_Changed::NewInfo' has a wrong offset!");

struct PlayerBanner_C_ExecuteUbergraph_PlayerBanner final
{
public:
	int32                                         EntryPoint;
	struct FFortPublicAccountInfo                 K2Node_CustomEvent_NewInfo;
};
static_assert(alignof(PlayerBanner_C_ExecuteUbergraph_PlayerBanner) == 0x000004, "Wrong alignment on PlayerBanner_C_ExecuteUbergraph_PlayerBanner");
static_assert(sizeof(PlayerBanner_C_ExecuteUbergraph_PlayerBanner) == 0x000038, "Wrong size on PlayerBanner_C_ExecuteUbergraph_PlayerBanner");
static_assert(offsetof(PlayerBanner_C_ExecuteUbergraph_PlayerBanner, EntryPoint) == 0x000000, "Member 'PlayerBanner_C_ExecuteUbergraph_PlayerBanner::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ExecuteUbergraph_PlayerBanner, K2Node_CustomEvent_NewInfo) == 0x000004, "Member 'PlayerBanner_C_ExecuteUbergraph_PlayerBanner::K2Node_CustomEvent_NewInfo' has a wrong offset!");

struct PlayerBanner_C_GetBannerMID final
{
public:
	class UMaterialInstanceDynamic*               BannerMID;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(PlayerBanner_C_GetBannerMID) == 0x000008, "Wrong alignment on PlayerBanner_C_GetBannerMID");
static_assert(sizeof(PlayerBanner_C_GetBannerMID) == 0x000010, "Wrong size on PlayerBanner_C_GetBannerMID");
static_assert(offsetof(PlayerBanner_C_GetBannerMID, BannerMID) == 0x000000, "Member 'PlayerBanner_C_GetBannerMID::BannerMID' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_GetBannerMID, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'PlayerBanner_C_GetBannerMID::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct PlayerBanner_C_OnBannerIconLoaded final
{
public:
	class UObject*                                LoadedObject;
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(PlayerBanner_C_OnBannerIconLoaded) == 0x000008, "Wrong alignment on PlayerBanner_C_OnBannerIconLoaded");
static_assert(sizeof(PlayerBanner_C_OnBannerIconLoaded) == 0x000020, "Wrong size on PlayerBanner_C_OnBannerIconLoaded");
static_assert(offsetof(PlayerBanner_C_OnBannerIconLoaded, LoadedObject) == 0x000000, "Member 'PlayerBanner_C_OnBannerIconLoaded::LoadedObject' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnBannerIconLoaded, CallFunc_GetBannerMID_BannerMID) == 0x000008, "Member 'PlayerBanner_C_OnBannerIconLoaded::CallFunc_GetBannerMID_BannerMID' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnBannerIconLoaded, K2Node_DynamicCast_AsTexture) == 0x000010, "Member 'PlayerBanner_C_OnBannerIconLoaded::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnBannerIconLoaded, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerBanner_C_OnBannerIconLoaded::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct PlayerBanner_C_OnSurroundIconLoaded final
{
public:
	class UObject*                                LoadedObject;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(PlayerBanner_C_OnSurroundIconLoaded) == 0x000008, "Wrong alignment on PlayerBanner_C_OnSurroundIconLoaded");
static_assert(sizeof(PlayerBanner_C_OnSurroundIconLoaded) == 0x000020, "Wrong size on PlayerBanner_C_OnSurroundIconLoaded");
static_assert(offsetof(PlayerBanner_C_OnSurroundIconLoaded, LoadedObject) == 0x000000, "Member 'PlayerBanner_C_OnSurroundIconLoaded::LoadedObject' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnSurroundIconLoaded, K2Node_DynamicCast_AsTexture) == 0x000008, "Member 'PlayerBanner_C_OnSurroundIconLoaded::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnSurroundIconLoaded, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PlayerBanner_C_OnSurroundIconLoaded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_OnSurroundIconLoaded, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'PlayerBanner_C_OnSurroundIconLoaded::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct PlayerBanner_C_RefreshSurround final
{
public:
	int32                                         Level;
	uint8                                         Pad_4[0x4];
	struct FAthenaSeasonBannerLevel               CallFunc_GetSeasonBannerInfo_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	uint8                                         Pad_69[0x7];
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_79[0x3];
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(PlayerBanner_C_RefreshSurround) == 0x000008, "Wrong alignment on PlayerBanner_C_RefreshSurround");
static_assert(sizeof(PlayerBanner_C_RefreshSurround) == 0x000088, "Wrong size on PlayerBanner_C_RefreshSurround");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, Level) == 0x000000, "Member 'PlayerBanner_C_RefreshSurround::Level' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, CallFunc_GetSeasonBannerInfo_ReturnValue) == 0x000008, "Member 'PlayerBanner_C_RefreshSurround::CallFunc_GetSeasonBannerInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000058, "Member 'PlayerBanner_C_RefreshSurround::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000060, "Member 'PlayerBanner_C_RefreshSurround::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, CallFunc_IsAssetNull_ReturnValue) == 0x000068, "Member 'PlayerBanner_C_RefreshSurround::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, K2Node_DynamicCast_AsMaterial_Interface) == 0x000070, "Member 'PlayerBanner_C_RefreshSurround::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'PlayerBanner_C_RefreshSurround::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_RefreshSurround, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'PlayerBanner_C_RefreshSurround::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct PlayerBanner_C_SetBannerColorId final
{
public:
	class FName                                   InBannerColorId;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	uint8                                         Pad_11[0x3];
	struct FHomebaseBannerColor                   CallFunc_GetBannerColorFromRowName_ReturnValue;
	uint8                                         Pad_34[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID_1;
	struct FLinearColor                           CallFunc_GetSecondaryColor_ReturnValue;
	struct FLinearColor                           CallFunc_GetPrimaryColor_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;
};
static_assert(alignof(PlayerBanner_C_SetBannerColorId) == 0x000008, "Wrong alignment on PlayerBanner_C_SetBannerColorId");
static_assert(sizeof(PlayerBanner_C_SetBannerColorId) == 0x000068, "Wrong size on PlayerBanner_C_SetBannerColorId");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, InBannerColorId) == 0x000000, "Member 'PlayerBanner_C_SetBannerColorId::InBannerColorId' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_GetBannerMID_BannerMID) == 0x000008, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_GetBannerMID_BannerMID' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_GetBannerColorFromRowName_ReturnValue) == 0x000014, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_GetBannerColorFromRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_GetBannerMID_BannerMID_1) == 0x000038, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_GetBannerMID_BannerMID_1' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_GetSecondaryColor_ReturnValue) == 0x000040, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_GetSecondaryColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_GetPrimaryColor_ReturnValue) == 0x000050, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_GetPrimaryColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerColorId, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000060, "Member 'PlayerBanner_C_SetBannerColorId::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

struct PlayerBanner_C_SetBannerIconAndColor final
{
public:
	class FName                                   IconId;
	class FName                                   ColorId;
};
static_assert(alignof(PlayerBanner_C_SetBannerIconAndColor) == 0x000004, "Wrong alignment on PlayerBanner_C_SetBannerIconAndColor");
static_assert(sizeof(PlayerBanner_C_SetBannerIconAndColor) == 0x000008, "Wrong size on PlayerBanner_C_SetBannerIconAndColor");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColor, IconId) == 0x000000, "Member 'PlayerBanner_C_SetBannerIconAndColor::IconId' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColor, ColorId) == 0x000004, "Member 'PlayerBanner_C_SetBannerIconAndColor::ColorId' has a wrong offset!");

struct PlayerBanner_C_SetBannerIconAndColorFromProfile final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	struct FFortAthenaLoadout                     CallFunc_GetLoadoutForPlayer_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;
};
static_assert(alignof(PlayerBanner_C_SetBannerIconAndColorFromProfile) == 0x000008, "Wrong alignment on PlayerBanner_C_SetBannerIconAndColorFromProfile");
static_assert(sizeof(PlayerBanner_C_SetBannerIconAndColorFromProfile) == 0x000188, "Wrong size on PlayerBanner_C_SetBannerIconAndColorFromProfile");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColorFromProfile, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'PlayerBanner_C_SetBannerIconAndColorFromProfile::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColorFromProfile, CallFunc_GetLoadoutForPlayer_ReturnValue) == 0x000008, "Member 'PlayerBanner_C_SetBannerIconAndColorFromProfile::CallFunc_GetLoadoutForPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColorFromProfile, CallFunc_Conv_StringToName_ReturnValue) == 0x000180, "Member 'PlayerBanner_C_SetBannerIconAndColorFromProfile::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconAndColorFromProfile, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000184, "Member 'PlayerBanner_C_SetBannerIconAndColorFromProfile::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");

struct PlayerBanner_C_SetBannerIconId final
{
public:
	class FName                                   InBannerIconId;
	TDelegate<void(class UObject* Object)>        K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Option_B___If_false__use_Option_A_Variable;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_13[0x5];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue;
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue;
	TSoftObjectPtr<class UObject>                 K2Node_Select_Default;
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;
};
static_assert(alignof(PlayerBanner_C_SetBannerIconId) == 0x000008, "Wrong alignment on PlayerBanner_C_SetBannerIconId");
static_assert(sizeof(PlayerBanner_C_SetBannerIconId) == 0x0000A0, "Wrong size on PlayerBanner_C_SetBannerIconId");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, InBannerIconId) == 0x000000, "Member 'PlayerBanner_C_SetBannerIconId::InBannerIconId' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerBanner_C_SetBannerIconId::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, Temp_bool_Option_B___If_false__use_Option_A_Variable) == 0x000010, "Member 'PlayerBanner_C_SetBannerIconId::Temp_bool_Option_B___If_false__use_Option_A_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, CallFunc_NotEqual_NameName_ReturnValue) == 0x000011, "Member 'PlayerBanner_C_SetBannerIconId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, Temp_bool_Variable) == 0x000012, "Member 'PlayerBanner_C_SetBannerIconId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue) == 0x000018, "Member 'PlayerBanner_C_SetBannerIconId::CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue) == 0x000040, "Member 'PlayerBanner_C_SetBannerIconId::CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, K2Node_Select_Default) == 0x000068, "Member 'PlayerBanner_C_SetBannerIconId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, CallFunc_GetBannerMID_BannerMID) == 0x000090, "Member 'PlayerBanner_C_SetBannerIconId::CallFunc_GetBannerMID_BannerMID' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerIconId, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000098, "Member 'PlayerBanner_C_SetBannerIconId::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

struct PlayerBanner_C_SetBannerImage final
{
public:
	struct FFortHomeBaseInfo                      Image_info;
	bool                                          Success;
	uint8                                         Pad_41[0x3];
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;
};
static_assert(alignof(PlayerBanner_C_SetBannerImage) == 0x000008, "Wrong alignment on PlayerBanner_C_SetBannerImage");
static_assert(sizeof(PlayerBanner_C_SetBannerImage) == 0x000050, "Wrong size on PlayerBanner_C_SetBannerImage");
static_assert(offsetof(PlayerBanner_C_SetBannerImage, Image_info) == 0x000000, "Member 'PlayerBanner_C_SetBannerImage::Image_info' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerImage, Success) == 0x000040, "Member 'PlayerBanner_C_SetBannerImage::Success' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerImage, CallFunc_Conv_StringToName_ReturnValue) == 0x000044, "Member 'PlayerBanner_C_SetBannerImage::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerImage, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000048, "Member 'PlayerBanner_C_SetBannerImage::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");

struct PlayerBanner_C_SetBannerOwner final
{
public:
	struct FUniqueNetIdRepl                       OwnerId;
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_3C[0x4];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
};
static_assert(alignof(PlayerBanner_C_SetBannerOwner) == 0x000008, "Wrong alignment on PlayerBanner_C_SetBannerOwner");
static_assert(sizeof(PlayerBanner_C_SetBannerOwner) == 0x000050, "Wrong size on PlayerBanner_C_SetBannerOwner");
static_assert(offsetof(PlayerBanner_C_SetBannerOwner, OwnerId) == 0x000000, "Member 'PlayerBanner_C_SetBannerOwner::OwnerId' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerOwner, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'PlayerBanner_C_SetBannerOwner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerOwner, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'PlayerBanner_C_SetBannerOwner::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetBannerOwner, CallFunc_IsValid_UniqueNetIdRepl_ReturnValue) == 0x000048, "Member 'PlayerBanner_C_SetBannerOwner::CallFunc_IsValid_UniqueNetIdRepl_ReturnValue' has a wrong offset!");

struct PlayerBanner_C_SetupSurround final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;
	class ULoadGuardSlot*                         K2Node_DynamicCast_AsLoad_Guard_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(PlayerBanner_C_SetupSurround) == 0x000008, "Wrong alignment on PlayerBanner_C_SetupSurround");
static_assert(sizeof(PlayerBanner_C_SetupSurround) == 0x000020, "Wrong size on PlayerBanner_C_SetupSurround");
static_assert(offsetof(PlayerBanner_C_SetupSurround, K2Node_MakeStruct_Margin) == 0x000000, "Member 'PlayerBanner_C_SetupSurround::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetupSurround, K2Node_DynamicCast_AsLoad_Guard_Slot) == 0x000010, "Member 'PlayerBanner_C_SetupSurround::K2Node_DynamicCast_AsLoad_Guard_Slot' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_SetupSurround, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerBanner_C_SetupSurround::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct PlayerBanner_C_ToggleBannerMask final
{
public:
	bool                                          Enable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UMaterialInstanceDynamic*               CallFunc_GetBannerMID_BannerMID;
	double                                        K2Node_Select_Default;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(PlayerBanner_C_ToggleBannerMask) == 0x000008, "Wrong alignment on PlayerBanner_C_ToggleBannerMask");
static_assert(sizeof(PlayerBanner_C_ToggleBannerMask) == 0x000030, "Wrong size on PlayerBanner_C_ToggleBannerMask");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, Enable) == 0x000000, "Member 'PlayerBanner_C_ToggleBannerMask::Enable' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, Temp_bool_Variable) == 0x000001, "Member 'PlayerBanner_C_ToggleBannerMask::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, Temp_real_Variable) == 0x000008, "Member 'PlayerBanner_C_ToggleBannerMask::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, Temp_real_Variable_1) == 0x000010, "Member 'PlayerBanner_C_ToggleBannerMask::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, CallFunc_GetBannerMID_BannerMID) == 0x000018, "Member 'PlayerBanner_C_ToggleBannerMask::CallFunc_GetBannerMID_BannerMID' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, K2Node_Select_Default) == 0x000020, "Member 'PlayerBanner_C_ToggleBannerMask::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_ToggleBannerMask, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000028, "Member 'PlayerBanner_C_ToggleBannerMask::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct PlayerBanner_C_UnbindDelegates final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(PlayerBanner_C_UnbindDelegates) == 0x000008, "Wrong alignment on PlayerBanner_C_UnbindDelegates");
static_assert(sizeof(PlayerBanner_C_UnbindDelegates) == 0x000018, "Wrong size on PlayerBanner_C_UnbindDelegates");
static_assert(offsetof(PlayerBanner_C_UnbindDelegates, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'PlayerBanner_C_UnbindDelegates::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBanner_C_UnbindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PlayerBanner_C_UnbindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}
