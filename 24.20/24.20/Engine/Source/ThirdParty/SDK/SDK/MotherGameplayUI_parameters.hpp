#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AvocadoEaterHealthBarWidget_OnSetMarkerPosition final
{
public:
	float                                         MarkerPosition;
};
static_assert(alignof(AvocadoEaterHealthBarWidget_OnSetMarkerPosition) == 0x000004, "Wrong alignment on AvocadoEaterHealthBarWidget_OnSetMarkerPosition");
static_assert(sizeof(AvocadoEaterHealthBarWidget_OnSetMarkerPosition) == 0x000004, "Wrong size on AvocadoEaterHealthBarWidget_OnSetMarkerPosition");
static_assert(offsetof(AvocadoEaterHealthBarWidget_OnSetMarkerPosition, MarkerPosition) == 0x000000, "Member 'AvocadoEaterHealthBarWidget_OnSetMarkerPosition::MarkerPosition' has a wrong offset!");

struct FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged final
{
public:
	bool                                          Activated;
};
static_assert(alignof(FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged) == 0x000001, "Wrong alignment on FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged");
static_assert(sizeof(FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged) == 0x000001, "Wrong size on FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged, Activated) == 0x000000, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged::Activated' has a wrong offset!");

struct FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged final
{
public:
	class FText                                   CategoryText;
	int32                                         PropIndex;
	int32                                         MaxPropCount;
	int32                                         CategoryIndex;
	int32                                         MaxCategoryCount;
};
static_assert(alignof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged) == 0x000008, "Wrong alignment on FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged");
static_assert(sizeof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged) == 0x000028, "Wrong size on FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged, CategoryText) == 0x000000, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged::CategoryText' has a wrong offset!");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged, PropIndex) == 0x000018, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged::PropIndex' has a wrong offset!");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged, MaxPropCount) == 0x00001C, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged::MaxPropCount' has a wrong offset!");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged, CategoryIndex) == 0x000020, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged::CategoryIndex' has a wrong offset!");
static_assert(offsetof(FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged, MaxCategoryCount) == 0x000024, "Member 'FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged::MaxCategoryCount' has a wrong offset!");

struct FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge final
{
public:
	float                                         ChargePercent;
};
static_assert(alignof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge) == 0x000004, "Wrong alignment on FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge");
static_assert(sizeof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge) == 0x000004, "Wrong size on FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge");
static_assert(offsetof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge, ChargePercent) == 0x000000, "Member 'FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge::ChargePercent' has a wrong offset!");

struct FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin final
{
public:
	float                                         ChargePercent;
};
static_assert(alignof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin) == 0x000004, "Wrong alignment on FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin");
static_assert(sizeof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin) == 0x000004, "Wrong size on FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin");
static_assert(offsetof(FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin, ChargePercent) == 0x000000, "Member 'FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin::ChargePercent' has a wrong offset!");

}
