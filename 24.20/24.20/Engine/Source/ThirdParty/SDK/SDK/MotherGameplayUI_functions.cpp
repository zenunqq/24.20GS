#pragma once

#include "Basic.hpp"

#include "MotherGameplayUI_classes.hpp"
#include "MotherGameplayUI_parameters.hpp"

namespace SDK
{

void UAvocadoEaterHealthBarWidget::OnParasiteAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void UAvocadoEaterHealthBarWidget::OnParasiteDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteDetached");

	UObject::ProcessEvent(Func, nullptr);
}

void UAvocadoEaterHealthBarWidget::OnSetMarkerPosition(float MarkerPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnSetMarkerPosition");

	Params::AvocadoEaterHealthBarWidget_OnSetMarkerPosition Parms{};

	Parms.MarkerPosition = MarkerPosition;

	UObject::ProcessEvent(Func, &Parms);
}

void UAvocadoEaterHealthBarWidget::OnTargetDamaged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnTargetDamaged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGravyGoblinReticleExtensionWidget::OnItemActivatable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemActivatable");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGravyGoblinReticleExtensionWidget::OnItemInactivatable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemInactivatable");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPaddleGingerReticleExtensionWidget::OnPropActivationChanged(const bool Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropActivationChanged");

	Params::FortPaddleGingerReticleExtensionWidget_OnPropActivationChanged Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPaddleGingerReticleExtensionWidget::OnPropIndexChanged(const class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropIndexChanged");

	Params::FortPaddleGingerReticleExtensionWidget_OnPropIndexChanged Parms{};

	Parms.CategoryText = std::move(CategoryText);
	Parms.PropIndex = PropIndex;
	Parms.MaxPropCount = MaxPropCount;
	Parms.CategoryIndex = CategoryIndex;
	Parms.MaxCategoryCount = MaxCategoryCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortReactorGradeReticleExtensionWidget::OnMinimumChargeReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnMinimumChargeReached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToAutoDischarge(const float ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToAutoDischarge");

	Params::FortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge Parms{};

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToMin(const float ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToMin");

	Params::FortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin Parms{};

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);
}

}
