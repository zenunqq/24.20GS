#pragma once

#include "Basic.hpp"

#include "VerseAssets_classes.hpp"
#include "VerseAssets_parameters.hpp"

namespace SDK
{

void UAssets_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load");

	Params::Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType");

	Params::Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent");

	Params::Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(const struct VerseAssets::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad");

	Params::Assets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAssets_client_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_client_asset", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_client_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_client_asset", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_client_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_client_asset", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_font::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_font", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_font::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_font", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_font::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_font", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_instance::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_instance", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_instance::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_instance", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_instance::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_instance", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture_2d::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture_2d", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture_2d::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture_2d", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_texture_2d::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_texture_2d", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UAssets_asset* UAssets::_L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R(const struct VerseAssets::Ftuple_Lasset_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Assets", "_L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R");

	Params::Assets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_Ntype_Lany_M_20asset_R_M_N_Kchar_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAssets::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_blueprint::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_blueprint", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_blueprint::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_blueprint", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_animation_blueprint::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_animation_blueprint", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_level::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_level", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_level::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_level", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_level::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_level", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_material::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_material", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_material::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_material", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_material::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_material", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_particle_system::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_particle_system", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_particle_system::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_particle_system", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_particle_system::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_particle_system", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_skeletal_mesh::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_skeletal_mesh::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_skeletal_mesh::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_sound::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_sound", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_sound::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_sound", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_sound::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_sound", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_static_mesh::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_static_mesh", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_static_mesh::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_static_mesh", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UAssets_static_mesh::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Assets_static_mesh", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

}
