#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "VerseAssets_0_classes.hpp"

namespace SDK
{

class UAssets_asset : public UVerseAssetPtr
{
public:
	FVerseFunctionProperty_                       __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad;
	FVerseFunctionProperty_                       __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load;
	FVerseFunctionProperty_                       __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent;
	FVerseFunctionProperty_                       __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType;
	uint8                                         Pad_D0[0x8];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_asset">();
	}
	static class UAssets_asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_asset>();
	}
};
static_assert(alignof(UAssets_asset) == 0x000008, "Wrong alignment on UAssets_asset");
static_assert(sizeof(UAssets_asset) == 0x0000D8, "Wrong size on UAssets_asset");
static_assert(offsetof(UAssets_asset, __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad) == 0x000090, "Member 'UAssets_asset::__verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad' has a wrong offset!");
static_assert(offsetof(UAssets_asset, __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load) == 0x0000A0, "Member 'UAssets_asset::__verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load' has a wrong offset!");
static_assert(offsetof(UAssets_asset, __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent) == 0x0000B0, "Member 'UAssets_asset::__verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent' has a wrong offset!");
static_assert(offsetof(UAssets_asset, __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType) == 0x0000C0, "Member 'UAssets_asset::__verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType' has a wrong offset!");

class UAssets_client_asset : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_client_asset">();
	}
	static class UAssets_client_asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_client_asset>();
	}
};
static_assert(alignof(UAssets_client_asset) == 0x000008, "Wrong alignment on UAssets_client_asset");
static_assert(sizeof(UAssets_client_asset) == 0x0000D8, "Wrong size on UAssets_client_asset");

class UAssets_font final : public UAssets_client_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_font">();
	}
	static class UAssets_font* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_font>();
	}
};
static_assert(alignof(UAssets_font) == 0x000008, "Wrong alignment on UAssets_font");
static_assert(sizeof(UAssets_font) == 0x0000D8, "Wrong size on UAssets_font");

class UAssets_animation_instance final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_animation_instance">();
	}
	static class UAssets_animation_instance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_animation_instance>();
	}
};
static_assert(alignof(UAssets_animation_instance) == 0x000008, "Wrong alignment on UAssets_animation_instance");
static_assert(sizeof(UAssets_animation_instance) == 0x0000D8, "Wrong size on UAssets_animation_instance");

class UAssets_animation final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_animation">();
	}
	static class UAssets_animation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_animation>();
	}
};
static_assert(alignof(UAssets_animation) == 0x000008, "Wrong alignment on UAssets_animation");
static_assert(sizeof(UAssets_animation) == 0x0000D8, "Wrong size on UAssets_animation");

class UAssets_texture : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_texture">();
	}
	static class UAssets_texture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_texture>();
	}
};
static_assert(alignof(UAssets_texture) == 0x000008, "Wrong alignment on UAssets_texture");
static_assert(sizeof(UAssets_texture) == 0x0000D8, "Wrong size on UAssets_texture");

class UAssets_texture_2d final : public UAssets_texture
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_texture_2d">();
	}
	static class UAssets_texture_2d* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_texture_2d>();
	}
};
static_assert(alignof(UAssets_texture_2d) == 0x000008, "Wrong alignment on UAssets_texture_2d");
static_assert(sizeof(UAssets_texture_2d) == 0x0000D8, "Wrong size on UAssets_texture_2d");

class VerseAssets::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseAssets.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseAssets::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseAssets::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseAssets::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseAssets::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseAssets::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseAssets::U_SolarisSignatureFunctionOuter");

class UAssets final : public UObject
{
public:
	static class UAssets_asset* _L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R(const struct VerseAssets::Ftuple_Lasset_M_Kchar_R& __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets">();
	}
	static class UAssets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets>();
	}
};
static_assert(alignof(UAssets) == 0x000008, "Wrong alignment on UAssets");
static_assert(sizeof(UAssets) == 0x000028, "Wrong size on UAssets");

class UAssets_animation_blueprint final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_animation_blueprint">();
	}
	static class UAssets_animation_blueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_animation_blueprint>();
	}
};
static_assert(alignof(UAssets_animation_blueprint) == 0x000008, "Wrong alignment on UAssets_animation_blueprint");
static_assert(sizeof(UAssets_animation_blueprint) == 0x0000D8, "Wrong size on UAssets_animation_blueprint");

class UAssets_level final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_level">();
	}
	static class UAssets_level* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_level>();
	}
};
static_assert(alignof(UAssets_level) == 0x000008, "Wrong alignment on UAssets_level");
static_assert(sizeof(UAssets_level) == 0x0000D8, "Wrong size on UAssets_level");

class UAssets_material final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_material">();
	}
	static class UAssets_material* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_material>();
	}
};
static_assert(alignof(UAssets_material) == 0x000008, "Wrong alignment on UAssets_material");
static_assert(sizeof(UAssets_material) == 0x0000D8, "Wrong size on UAssets_material");

class UAssets_particle_system final : public UAssets_client_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_particle_system">();
	}
	static class UAssets_particle_system* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_particle_system>();
	}
};
static_assert(alignof(UAssets_particle_system) == 0x000008, "Wrong alignment on UAssets_particle_system");
static_assert(sizeof(UAssets_particle_system) == 0x0000D8, "Wrong size on UAssets_particle_system");

class UAssets_skeletal_mesh final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_skeletal_mesh">();
	}
	static class UAssets_skeletal_mesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_skeletal_mesh>();
	}
};
static_assert(alignof(UAssets_skeletal_mesh) == 0x000008, "Wrong alignment on UAssets_skeletal_mesh");
static_assert(sizeof(UAssets_skeletal_mesh) == 0x0000D8, "Wrong size on UAssets_skeletal_mesh");

class UAssets_sound final : public UAssets_client_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_sound">();
	}
	static class UAssets_sound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_sound>();
	}
};
static_assert(alignof(UAssets_sound) == 0x000008, "Wrong alignment on UAssets_sound");
static_assert(sizeof(UAssets_sound) == 0x0000D8, "Wrong size on UAssets_sound");

class UAssets_static_mesh final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Assets_static_mesh">();
	}
	static class UAssets_static_mesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssets_static_mesh>();
	}
};
static_assert(alignof(UAssets_static_mesh) == 0x000008, "Wrong alignment on UAssets_static_mesh");
static_assert(sizeof(UAssets_static_mesh) == 0x0000D8, "Wrong size on UAssets_static_mesh");

}
