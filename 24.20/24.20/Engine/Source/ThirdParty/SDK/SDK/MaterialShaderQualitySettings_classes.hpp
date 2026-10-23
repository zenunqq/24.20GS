#pragma once

#include "Basic.hpp"

#include "MaterialShaderQualitySettings_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UShaderPlatformQualitySettings final : public UObject
{
public:
	struct FMaterialQualityOverrides              QualityOverrides[0x4];
	uint8                                         Pad_48[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ShaderPlatformQualitySettings">();
	}
	static class UShaderPlatformQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShaderPlatformQualitySettings>();
	}
};
static_assert(alignof(UShaderPlatformQualitySettings) == 0x000008, "Wrong alignment on UShaderPlatformQualitySettings");
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x000058, "Wrong size on UShaderPlatformQualitySettings");
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x000028, "Member 'UShaderPlatformQualitySettings::QualityOverrides' has a wrong offset!");

class UMaterialShaderQualitySettings final : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialShaderQualitySettings">();
	}
	static class UMaterialShaderQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialShaderQualitySettings>();
	}
};
static_assert(alignof(UMaterialShaderQualitySettings) == 0x000008, "Wrong alignment on UMaterialShaderQualitySettings");
static_assert(sizeof(UMaterialShaderQualitySettings) == 0x000078, "Wrong size on UMaterialShaderQualitySettings");
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x000028, "Member 'UMaterialShaderQualitySettings::ForwardSettingMap' has a wrong offset!");

}
