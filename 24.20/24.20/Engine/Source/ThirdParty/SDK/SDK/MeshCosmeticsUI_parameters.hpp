#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortVariantRedirectorTile_HandleBoundaryNavigation final
{
public:
	EUINavigation                                 InNavigation;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
};
static_assert(alignof(FortVariantRedirectorTile_HandleBoundaryNavigation) == 0x000008, "Wrong alignment on FortVariantRedirectorTile_HandleBoundaryNavigation");
static_assert(sizeof(FortVariantRedirectorTile_HandleBoundaryNavigation) == 0x000010, "Wrong size on FortVariantRedirectorTile_HandleBoundaryNavigation");
static_assert(offsetof(FortVariantRedirectorTile_HandleBoundaryNavigation, InNavigation) == 0x000000, "Member 'FortVariantRedirectorTile_HandleBoundaryNavigation::InNavigation' has a wrong offset!");
static_assert(offsetof(FortVariantRedirectorTile_HandleBoundaryNavigation, ReturnValue) == 0x000008, "Member 'FortVariantRedirectorTile_HandleBoundaryNavigation::ReturnValue' has a wrong offset!");

struct FortVariantSprayCustomizer_BP_SetChannelSlotIcon final
{
public:
	TSoftObjectPtr<class UObject>                 ChannelSlotIcon;
};
static_assert(alignof(FortVariantSprayCustomizer_BP_SetChannelSlotIcon) == 0x000008, "Wrong alignment on FortVariantSprayCustomizer_BP_SetChannelSlotIcon");
static_assert(sizeof(FortVariantSprayCustomizer_BP_SetChannelSlotIcon) == 0x000028, "Wrong size on FortVariantSprayCustomizer_BP_SetChannelSlotIcon");
static_assert(offsetof(FortVariantSprayCustomizer_BP_SetChannelSlotIcon, ChannelSlotIcon) == 0x000000, "Member 'FortVariantSprayCustomizer_BP_SetChannelSlotIcon::ChannelSlotIcon' has a wrong offset!");

struct FortVariantSprayCustomizer_BP_SetVariantEditorMode final
{
public:
	bool                                          bIsLockerMode;
};
static_assert(alignof(FortVariantSprayCustomizer_BP_SetVariantEditorMode) == 0x000001, "Wrong alignment on FortVariantSprayCustomizer_BP_SetVariantEditorMode");
static_assert(sizeof(FortVariantSprayCustomizer_BP_SetVariantEditorMode) == 0x000001, "Wrong size on FortVariantSprayCustomizer_BP_SetVariantEditorMode");
static_assert(offsetof(FortVariantSprayCustomizer_BP_SetVariantEditorMode, bIsLockerMode) == 0x000000, "Member 'FortVariantSprayCustomizer_BP_SetVariantEditorMode::bIsLockerMode' has a wrong offset!");

struct FortVariantSprayCustomizerSetting_BP_OnChangeValue final
{
public:
	float                                         Value;
	float                                         NormalizedValue;
};
static_assert(alignof(FortVariantSprayCustomizerSetting_BP_OnChangeValue) == 0x000004, "Wrong alignment on FortVariantSprayCustomizerSetting_BP_OnChangeValue");
static_assert(sizeof(FortVariantSprayCustomizerSetting_BP_OnChangeValue) == 0x000008, "Wrong size on FortVariantSprayCustomizerSetting_BP_OnChangeValue");
static_assert(offsetof(FortVariantSprayCustomizerSetting_BP_OnChangeValue, Value) == 0x000000, "Member 'FortVariantSprayCustomizerSetting_BP_OnChangeValue::Value' has a wrong offset!");
static_assert(offsetof(FortVariantSprayCustomizerSetting_BP_OnChangeValue, NormalizedValue) == 0x000004, "Member 'FortVariantSprayCustomizerSetting_BP_OnChangeValue::NormalizedValue' has a wrong offset!");

struct FortVariantSprayCustomizerSetting_BP_OnSetConstraints final
{
public:
	struct FFloatRange                            Constraints;
};
static_assert(alignof(FortVariantSprayCustomizerSetting_BP_OnSetConstraints) == 0x000004, "Wrong alignment on FortVariantSprayCustomizerSetting_BP_OnSetConstraints");
static_assert(sizeof(FortVariantSprayCustomizerSetting_BP_OnSetConstraints) == 0x000010, "Wrong size on FortVariantSprayCustomizerSetting_BP_OnSetConstraints");
static_assert(offsetof(FortVariantSprayCustomizerSetting_BP_OnSetConstraints, Constraints) == 0x000000, "Member 'FortVariantSprayCustomizerSetting_BP_OnSetConstraints::Constraints' has a wrong offset!");

struct FortVariantSprayCustomizerSetting_HandleSliderValueChanged final
{
public:
	float                                         NormalizedValue;
};
static_assert(alignof(FortVariantSprayCustomizerSetting_HandleSliderValueChanged) == 0x000004, "Wrong alignment on FortVariantSprayCustomizerSetting_HandleSliderValueChanged");
static_assert(sizeof(FortVariantSprayCustomizerSetting_HandleSliderValueChanged) == 0x000004, "Wrong size on FortVariantSprayCustomizerSetting_HandleSliderValueChanged");
static_assert(offsetof(FortVariantSprayCustomizerSetting_HandleSliderValueChanged, NormalizedValue) == 0x000000, "Member 'FortVariantSprayCustomizerSetting_HandleSliderValueChanged::NormalizedValue' has a wrong offset!");

}
