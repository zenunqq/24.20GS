#pragma once

#include "Basic.hpp"

#include "VerseAssets_structs.hpp"

namespace SDK::Params
{

struct alignas(0x08) Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load final
{
public:
	struct VerseAssets::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load) == 0x000008, "Wrong alignment on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load");
static_assert(sizeof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load) == 0x000010, "Wrong size on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load, RetVal) == 0x000008, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load::RetVal' has a wrong offset!");

struct alignas(0x08) Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType final
{
public:
	struct VerseAssets::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType) == 0x000008, "Wrong alignment on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType");
static_assert(sizeof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType) == 0x000018, "Wrong size on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType, RetVal) == 0x000008, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType::RetVal' has a wrong offset!");

struct alignas(0x08) Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent final
{
public:
	struct VerseAssets::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent) == 0x000008, "Wrong alignment on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent");
static_assert(sizeof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent) == 0x000010, "Wrong size on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent, RetVal) == 0x000008, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent::RetVal' has a wrong offset!");

struct Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad final
{
public:
	struct VerseAssets::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad) == 0x000001, "Wrong alignment on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad");
static_assert(sizeof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad) == 0x000002, "Wrong size on Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad");
static_assert(offsetof(Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R final
{
public:
	struct VerseAssets::Ftuple_Lasset_M_Kchar_R   __verse_0xB2CDDD72_Argument;
	class UAssets_asset*                          RetVal;
};
static_assert(alignof(Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R) == 0x000008, "Wrong alignment on Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R");
static_assert(sizeof(Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R) == 0x000020, "Wrong size on Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R");
static_assert(offsetof(Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R, RetVal) == 0x000018, "Member 'Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R::RetVal' has a wrong offset!");

}
