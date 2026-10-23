#pragma once

#include "Basic.hpp"

#include "DLSS_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UDLSSOverrideSettings final : public UObject
{
public:
	EDLSSSettingOverride                          EnableDLSSInEditorViewportsOverride;
	EDLSSSettingOverride                          EnableDLSSInPlayInEditorViewportsOverride;
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;
	EDLSSSettingOverride                          ShowDLSSSDebugOnScreenMessages;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSOverrideSettings">();
	}
	static class UDLSSOverrideSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSOverrideSettings>();
	}
};
static_assert(alignof(UDLSSOverrideSettings) == 0x000008, "Wrong alignment on UDLSSOverrideSettings");
static_assert(sizeof(UDLSSOverrideSettings) == 0x000030, "Wrong size on UDLSSOverrideSettings");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x000028, "Member 'UDLSSOverrideSettings::EnableDLSSInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x000029, "Member 'UDLSSOverrideSettings::EnableDLSSInPlayInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 0x00002A, "Member 'UDLSSOverrideSettings::bShowDLSSIncompatiblePluginsToolsWarnings' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x00002B, "Member 'UDLSSOverrideSettings::ShowDLSSSDebugOnScreenMessages' has a wrong offset!");

class UDLSSSettings final : public UObject
{
public:
	bool                                          bEnableDLSSD3D12;
	bool                                          bEnableDLSSD3D11;
	bool                                          bEnableDLSSVulkan;
	bool                                          bEnableDLSSInEditorViewports;
	bool                                          bEnableDLSSInPlayInEditorViewports;
	bool                                          bShowDLSSSDebugOnScreenMessages;
	uint8                                         Pad_2E[0x2];
	class FString                                 GenericDLSSBinaryPath;
	bool                                          bGenericDLSSBinaryExists;
	uint8                                         Pad_41[0x3];
	uint32                                        NVIDIANGXApplicationId;
	class FString                                 CustomDLSSBinaryPath;
	bool                                          bCustomDLSSBinaryExists;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSSettings">();
	}
	static class UDLSSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSSettings>();
	}
};
static_assert(alignof(UDLSSSettings) == 0x000008, "Wrong alignment on UDLSSSettings");
static_assert(sizeof(UDLSSSettings) == 0x000060, "Wrong size on UDLSSSettings");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D12) == 0x000028, "Member 'UDLSSSettings::bEnableDLSSD3D12' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D11) == 0x000029, "Member 'UDLSSSettings::bEnableDLSSD3D11' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSVulkan) == 0x00002A, "Member 'UDLSSSettings::bEnableDLSSVulkan' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInEditorViewports) == 0x00002B, "Member 'UDLSSSettings::bEnableDLSSInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInPlayInEditorViewports) == 0x00002C, "Member 'UDLSSSettings::bEnableDLSSInPlayInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bShowDLSSSDebugOnScreenMessages) == 0x00002D, "Member 'UDLSSSettings::bShowDLSSSDebugOnScreenMessages' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x000030, "Member 'UDLSSSettings::GenericDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bGenericDLSSBinaryExists) == 0x000040, "Member 'UDLSSSettings::bGenericDLSSBinaryExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, NVIDIANGXApplicationId) == 0x000044, "Member 'UDLSSSettings::NVIDIANGXApplicationId' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x000048, "Member 'UDLSSSettings::CustomDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bCustomDLSSBinaryExists) == 0x000058, "Member 'UDLSSSettings::bCustomDLSSBinaryExists' has a wrong offset!");

}
