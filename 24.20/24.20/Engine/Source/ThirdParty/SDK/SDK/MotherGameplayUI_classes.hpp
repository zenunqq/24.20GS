#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "GameplayMessages_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UAvocadoEaterHealthBarWidget final : public UFortHUDElementWidget
{
public:
	struct FEventMessageTag                       AttachedMessageTag;
	struct FEventMessageTag                       DetachedMessageTag;
	struct FEventMessageTag                       SetMarkerPositionMessageTag;
	struct FEventMessageTag                       TargetDamagedMessageTag;
	uint8                                         Pad_2E0[0x60];

public:
	void OnParasiteAttached();
	void OnParasiteDetached();
	void OnSetMarkerPosition(float MarkerPosition);
	void OnTargetDamaged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AvocadoEaterHealthBarWidget">();
	}
	static class UAvocadoEaterHealthBarWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAvocadoEaterHealthBarWidget>();
	}
};
static_assert(alignof(UAvocadoEaterHealthBarWidget) == 0x000008, "Wrong alignment on UAvocadoEaterHealthBarWidget");
static_assert(sizeof(UAvocadoEaterHealthBarWidget) == 0x000340, "Wrong size on UAvocadoEaterHealthBarWidget");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, AttachedMessageTag) == 0x0002D0, "Member 'UAvocadoEaterHealthBarWidget::AttachedMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, DetachedMessageTag) == 0x0002D4, "Member 'UAvocadoEaterHealthBarWidget::DetachedMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, SetMarkerPositionMessageTag) == 0x0002D8, "Member 'UAvocadoEaterHealthBarWidget::SetMarkerPositionMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, TargetDamagedMessageTag) == 0x0002DC, "Member 'UAvocadoEaterHealthBarWidget::TargetDamagedMessageTag' has a wrong offset!");

class UFortGravyGoblinReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	uint8                                         Pad_2E0[0x20];

public:
	void OnItemActivatable();
	void OnItemInactivatable();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGravyGoblinReticleExtensionWidget">();
	}
	static class UFortGravyGoblinReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGravyGoblinReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortGravyGoblinReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortGravyGoblinReticleExtensionWidget");
static_assert(sizeof(UFortGravyGoblinReticleExtensionWidget) == 0x000300, "Wrong size on UFortGravyGoblinReticleExtensionWidget");

class UFortLlamaRoasterReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaRoasterReticleExtensionWidget">();
	}
	static class UFortLlamaRoasterReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaRoasterReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortLlamaRoasterReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortLlamaRoasterReticleExtensionWidget");
static_assert(sizeof(UFortLlamaRoasterReticleExtensionWidget) == 0x0002E0, "Wrong size on UFortLlamaRoasterReticleExtensionWidget");

class UFortPaddleGingerReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	class UFortKeybindWidget*                     Keybind_ActivateAction;
	class UFortKeybindWidget*                     Keybind_CycleCategoryAction;
	class UFortKeybindWidget*                     Keybind_CyclePropAction;
	uint8                                         Pad_2F8[0x48];

public:
	void OnPropActivationChanged(const bool Activated);
	void OnPropIndexChanged(const class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPaddleGingerReticleExtensionWidget">();
	}
	static class UFortPaddleGingerReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPaddleGingerReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortPaddleGingerReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortPaddleGingerReticleExtensionWidget");
static_assert(sizeof(UFortPaddleGingerReticleExtensionWidget) == 0x000340, "Wrong size on UFortPaddleGingerReticleExtensionWidget");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_ActivateAction) == 0x0002E0, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_ActivateAction' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CycleCategoryAction) == 0x0002E8, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_CycleCategoryAction' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CyclePropAction) == 0x0002F0, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_CyclePropAction' has a wrong offset!");

class UFortReactorGradeReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	void OnMinimumChargeReached();
	void OnUpdateChargeToAutoDischarge(const float ChargePercent);
	void OnUpdateChargeToMin(const float ChargePercent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortReactorGradeReticleExtensionWidget">();
	}
	static class UFortReactorGradeReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReactorGradeReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortReactorGradeReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortReactorGradeReticleExtensionWidget");
static_assert(sizeof(UFortReactorGradeReticleExtensionWidget) == 0x0002E0, "Wrong size on UFortReactorGradeReticleExtensionWidget");

class UFortMobileActionBBE_GravyGoblinRotate final : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTag                           GravyGoblinTag;
	uint8                                         Pad_74[0x24];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionBBE_GravyGoblinRotate">();
	}
	static class UFortMobileActionBBE_GravyGoblinRotate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionBBE_GravyGoblinRotate>();
	}
};
static_assert(alignof(UFortMobileActionBBE_GravyGoblinRotate) == 0x000008, "Wrong alignment on UFortMobileActionBBE_GravyGoblinRotate");
static_assert(sizeof(UFortMobileActionBBE_GravyGoblinRotate) == 0x000098, "Wrong size on UFortMobileActionBBE_GravyGoblinRotate");
static_assert(offsetof(UFortMobileActionBBE_GravyGoblinRotate, GravyGoblinTag) == 0x000070, "Member 'UFortMobileActionBBE_GravyGoblinRotate::GravyGoblinTag' has a wrong offset!");

}
