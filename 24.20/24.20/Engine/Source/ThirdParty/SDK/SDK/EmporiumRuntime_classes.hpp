#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UEmporiumAssetsPaths final : public UObject
{
public:
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Clearcoat;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Sheen;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Unlit;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_Clearcoat;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Transmission;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Clearcoat_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Sheen_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Unlit_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_Clearcoat_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Transmission_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Clearcoat;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Sheen;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_Clearcoat;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Transmission;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Clearcoat_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Sheen_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_Clearcoat_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Transmission_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Foliage_TS;
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Foliage_TS;
	TSoftObjectPtr<class UStaticMesh>             PlaceholderSphere;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmporiumAssetsPaths">();
	}
	static class UEmporiumAssetsPaths* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmporiumAssetsPaths>();
	}
};
static_assert(alignof(UEmporiumAssetsPaths) == 0x000008, "Wrong alignment on UEmporiumAssetsPaths");
static_assert(sizeof(UEmporiumAssetsPaths) == 0x0004B0, "Wrong size on UEmporiumAssetsPaths");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque) == 0x000028, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Clearcoat) == 0x000050, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Clearcoat' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Sheen) == 0x000078, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Sheen' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Unlit) == 0x0000A0, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Unlit' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent) == 0x0000C8, "Member 'UEmporiumAssetsPaths::MR_MI_Translucent' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_Clearcoat) == 0x0000F0, "Member 'UEmporiumAssetsPaths::MR_MI_Translucent_Clearcoat' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Transmission) == 0x000118, "Member 'UEmporiumAssetsPaths::MR_MI_Transmission' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_TS) == 0x000140, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Clearcoat_TS) == 0x000168, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Clearcoat_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Sheen_TS) == 0x000190, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Sheen_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Unlit_TS) == 0x0001B8, "Member 'UEmporiumAssetsPaths::MR_MI_Opaque_Unlit_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_TS) == 0x0001E0, "Member 'UEmporiumAssetsPaths::MR_MI_Translucent_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_Clearcoat_TS) == 0x000208, "Member 'UEmporiumAssetsPaths::MR_MI_Translucent_Clearcoat_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Transmission_TS) == 0x000230, "Member 'UEmporiumAssetsPaths::MR_MI_Transmission_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque) == 0x000258, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Clearcoat) == 0x000280, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque_Clearcoat' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Sheen) == 0x0002A8, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque_Sheen' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent) == 0x0002D0, "Member 'UEmporiumAssetsPaths::SG_MI_Translucent' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_Clearcoat) == 0x0002F8, "Member 'UEmporiumAssetsPaths::SG_MI_Translucent_Clearcoat' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Transmission) == 0x000320, "Member 'UEmporiumAssetsPaths::SG_MI_Transmission' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_TS) == 0x000348, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Clearcoat_TS) == 0x000370, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque_Clearcoat_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Sheen_TS) == 0x000398, "Member 'UEmporiumAssetsPaths::SG_MI_Opaque_Sheen_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_TS) == 0x0003C0, "Member 'UEmporiumAssetsPaths::SG_MI_Translucent_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_Clearcoat_TS) == 0x0003E8, "Member 'UEmporiumAssetsPaths::SG_MI_Translucent_Clearcoat_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Transmission_TS) == 0x000410, "Member 'UEmporiumAssetsPaths::SG_MI_Transmission_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Foliage_TS) == 0x000438, "Member 'UEmporiumAssetsPaths::SG_MI_Foliage_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Foliage_TS) == 0x000460, "Member 'UEmporiumAssetsPaths::MR_MI_Foliage_TS' has a wrong offset!");
static_assert(offsetof(UEmporiumAssetsPaths, PlaceholderSphere) == 0x000488, "Member 'UEmporiumAssetsPaths::PlaceholderSphere' has a wrong offset!");

}
