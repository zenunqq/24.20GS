#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent) == 0x000004, "Wrong alignment on FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent");
static_assert(sizeof(FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent) == 0x000004, "Wrong size on FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent");
static_assert(offsetof(FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent, ReturnValue) == 0x000000, "Member 'FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent::ReturnValue' has a wrong offset!");

struct FortPowerupReticleExtensionWidget_GetCurrentOverheatValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPowerupReticleExtensionWidget_GetCurrentOverheatValue) == 0x000004, "Wrong alignment on FortPowerupReticleExtensionWidget_GetCurrentOverheatValue");
static_assert(sizeof(FortPowerupReticleExtensionWidget_GetCurrentOverheatValue) == 0x000004, "Wrong size on FortPowerupReticleExtensionWidget_GetCurrentOverheatValue");
static_assert(offsetof(FortPowerupReticleExtensionWidget_GetCurrentOverheatValue, ReturnValue) == 0x000000, "Member 'FortPowerupReticleExtensionWidget_GetCurrentOverheatValue::ReturnValue' has a wrong offset!");

struct FortPowerupReticleExtensionWidget_GetOverheatingMaxValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPowerupReticleExtensionWidget_GetOverheatingMaxValue) == 0x000004, "Wrong alignment on FortPowerupReticleExtensionWidget_GetOverheatingMaxValue");
static_assert(sizeof(FortPowerupReticleExtensionWidget_GetOverheatingMaxValue) == 0x000004, "Wrong size on FortPowerupReticleExtensionWidget_GetOverheatingMaxValue");
static_assert(offsetof(FortPowerupReticleExtensionWidget_GetOverheatingMaxValue, ReturnValue) == 0x000000, "Member 'FortPowerupReticleExtensionWidget_GetOverheatingMaxValue::ReturnValue' has a wrong offset!");

}
