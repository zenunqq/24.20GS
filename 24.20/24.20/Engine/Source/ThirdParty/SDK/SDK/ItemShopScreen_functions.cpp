#pragma once

#include "Basic.hpp"

#include "ItemShopScreen_classes.hpp"
#include "ItemShopScreen_parameters.hpp"

namespace SDK
{

void UItemShopScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::ExecuteUbergraph_ItemShopScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "ExecuteUbergraph_ItemShopScreen");

	Params::ItemShopScreen_C_ExecuteUbergraph_ItemShopScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopScreen_C::HandleDynamicBackgroundTextureChanged(class UTexture* BackgroundTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "HandleDynamicBackgroundTextureChanged");

	Params::ItemShopScreen_C_HandleDynamicBackgroundTextureChanged Parms{};

	Parms.BackgroundTexture = BackgroundTexture;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopScreen_C::HideDynamicBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "HideDynamicBackground");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::OnEstablishingSections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "OnEstablishingSections");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::OnSectionsEstablished(bool bEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "OnSectionsEstablished");

	Params::ItemShopScreen_C_OnSectionsEstablished Parms{};

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopScreen_C::OnSpecialOfferVideoFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "OnSpecialOfferVideoFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::OnSpecialOfferVideoSkipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "OnSpecialOfferVideoSkipped");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::OnSpecialOfferVideoStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "OnSpecialOfferVideoStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::SequenceEvent__ENTRYPOINTItemShopScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "SequenceEvent__ENTRYPOINTItemShopScreen");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::SequenceEvent__ENTRYPOINTItemShopScreen_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "SequenceEvent__ENTRYPOINTItemShopScreen_0");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopScreen_C::SequencerEvent_EnableShopNavigate(bool bIsNavigationEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "SequencerEvent_EnableShopNavigate");

	Params::ItemShopScreen_C_SequencerEvent_EnableShopNavigate Parms{};

	Parms.bIsNavigationEnabled = bIsNavigationEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopScreen_C::ShowDynamicBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopScreen_C", "ShowDynamicBackground");

	UObject::ProcessEvent(Func, nullptr);
}

}
