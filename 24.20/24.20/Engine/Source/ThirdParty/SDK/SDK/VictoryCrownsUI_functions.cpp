#pragma once

#include "Basic.hpp"

#include "VictoryCrownsUI_classes.hpp"
#include "VictoryCrownsUI_parameters.hpp"

namespace SDK
{

void UFortUIManagerComponent_VictoryCrowns::HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "HandleGamePhaseStepChanged");

	Params::FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUIManagerComponent_VictoryCrowns::RebuildBearerIndicators(const TArray<class AFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "RebuildBearerIndicators");

	Params::FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators Parms{};

	Parms.CrownBearerList = std::move(CrownBearerList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsBearerInfoBase::OnSetPlayerState(class AFortPlayerStateAthena* PSA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "OnSetPlayerState");

	Params::VictoryCrownsBearerInfoBase_OnSetPlayerState Parms{};

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownsBearerInfoBase::SetPlayerState(class AFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "SetPlayerState");

	Params::VictoryCrownsBearerInfoBase_SetPlayerState Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsIndicator::OnDistanceChanged(int32 Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsIndicator", "OnDistanceChanged");

	Params::VictoryCrownsIndicator_OnDistanceChanged Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownsIndicator::OnScreenClampChanged(bool bIsClamped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsIndicator", "OnScreenClampChanged");

	Params::VictoryCrownsIndicator_OnScreenClampChanged Parms{};

	Parms.bIsClamped = bIsClamped;

	UObject::ProcessEvent(Func, &Parms);
}

const class AFortPlayerStateAthena* UVictoryCrownsIndicator::GetIndicatedPlayerStateAthena() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsIndicator", "GetIndicatedPlayerStateAthena");

	Params::VictoryCrownsIndicator_GetIndicatedPlayerStateAthena Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVictoryCrownsPlayerInfoWidget::HandleCrownBearerListChanged(const TArray<class AFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "HandleCrownBearerListChanged");

	Params::VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged Parms{};

	Parms.CrownBearerList = std::move(CrownBearerList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPlayerInfoWidget::OnPlayerVictoryCrownStatusChanged(const bool bHasCrown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "OnPlayerVictoryCrownStatusChanged");

	Params::VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged Parms{};

	Parms.bHasCrown = bHasCrown;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownsPreGameWidget::FadeOutTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "FadeOutTimerFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPreGameWidget::HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "HandleGamePhaseStepChanged");

	Params::VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPreGameWidget::OnButtonClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonClose");

	UObject::ProcessEvent(Func, nullptr);
}

void UVictoryCrownsPreGameWidget::OnButtonCloseProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonCloseProgress");

	Params::VictoryCrownsPreGameWidget_OnButtonCloseProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownsPreGameWidget::OnCloseActionsComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnCloseActionsComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPreGameWidget::OnInputMethodChanged(ECommonInputType CurrentInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnInputMethodChanged");

	Params::VictoryCrownsPreGameWidget_OnInputMethodChanged Parms{};

	Parms.CurrentInput = CurrentInput;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownsPreGameWidget::RebuildBearerList(const TArray<class AFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RebuildBearerList");

	Params::VictoryCrownsPreGameWidget_RebuildBearerList Parms{};

	Parms.CrownBearerList = std::move(CrownBearerList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPreGameWidget::RegisterCloseButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RegisterCloseButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVictoryCrownsPreGameWidget::StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "StartFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}

void UVictoryCrownsPreGameWidget::UnregisterCloseButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "UnregisterCloseButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
