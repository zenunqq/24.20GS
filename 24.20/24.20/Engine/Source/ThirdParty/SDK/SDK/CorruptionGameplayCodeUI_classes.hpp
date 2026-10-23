#pragma once

#include "Basic.hpp"

#include "CorruptionGameplayCodeUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortPowerupReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	EPowerupHeatState                             LastPowerupHeatState;
	uint8                                         Pad_2E1[0x7];

public:
	float GetCurrentOverheatPercent() const;
	float GetCurrentOverheatValue() const;
	float GetOverheatingMaxValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPowerupReticleExtensionWidget">();
	}
	static class UFortPowerupReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPowerupReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortPowerupReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortPowerupReticleExtensionWidget");
static_assert(sizeof(UFortPowerupReticleExtensionWidget) == 0x0002E8, "Wrong size on UFortPowerupReticleExtensionWidget");
static_assert(offsetof(UFortPowerupReticleExtensionWidget, LastPowerupHeatState) == 0x0002E0, "Member 'UFortPowerupReticleExtensionWidget::LastPowerupHeatState' has a wrong offset!");

}
