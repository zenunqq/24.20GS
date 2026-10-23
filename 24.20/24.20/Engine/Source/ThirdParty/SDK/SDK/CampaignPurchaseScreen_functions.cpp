#pragma once

#include "Basic.hpp"

#include "CampaignPurchaseScreen_classes.hpp"
#include "CampaignPurchaseScreen_parameters.hpp"

namespace SDK
{

void UCampaignPurchaseScreen_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

void UCampaignPurchaseScreen_C::ToggleTimer(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "ToggleTimer");

	Params::CampaignPurchaseScreen_C_ToggleTimer Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UCampaignPurchaseScreen_C::OnStoreScreenCreated(class UFortMtxStoreRootBase_Legacy* StoreScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "OnStoreScreenCreated");

	Params::CampaignPurchaseScreen_C_OnStoreScreenCreated Parms{};

	Parms.StoreScreen = StoreScreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UCampaignPurchaseScreen_C::InitializeRedeemButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "InitializeRedeemButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UCampaignPurchaseScreen_C::OnImageCycleTimeElapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "OnImageCycleTimeElapsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UCampaignPurchaseScreen_C::ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "ExecuteUbergraph_CampaignPurchaseScreen");

	Params::CampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCampaignPurchaseScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "IsMinorShutdownWarningEnabled");

	Params::CampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}

void UCampaignPurchaseScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

bool UCampaignPurchaseScreen_C::IsBusyMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "IsBusyMatchmaking");

	Params::CampaignPurchaseScreen_C_IsBusyMatchmaking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCampaignPurchaseScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCampaignPurchaseScreen_C::InitializeTextureCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "InitializeTextureCycle");

	UObject::ProcessEvent(Func, nullptr);
}

void UCampaignPurchaseScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	Params::CampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UCampaignPurchaseScreen_C::AdvanceTextureCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignPurchaseScreen_C", "AdvanceTextureCycle");

	UObject::ProcessEvent(Func, nullptr);
}

}
