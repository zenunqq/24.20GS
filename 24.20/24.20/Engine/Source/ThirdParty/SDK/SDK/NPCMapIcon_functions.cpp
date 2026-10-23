#pragma once

#include "Basic.hpp"

#include "NPCMapIcon_classes.hpp"
#include "NPCMapIcon_parameters.hpp"

namespace SDK
{

void UNPCMapIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCMapIcon_C::ExecuteUbergraph_NPCMapIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "ExecuteUbergraph_NPCMapIcon");

	Params::NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090");

	Params::NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8");

	Params::NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::OnSelected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "OnSelected");

	Params::NPCMapIcon_C_OnSelected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::OnUnselected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "OnUnselected");

	Params::NPCMapIcon_C_OnUnselected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "PreConstruct");

	Params::NPCMapIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::SetIcon(const TSoftObjectPtr<class UObject>& Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "SetIcon");

	Params::NPCMapIcon_C_SetIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::SetIsKnown(const bool bIsKnown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "SetIsKnown");

	Params::NPCMapIcon_C_SetIsKnown Parms{};

	Parms.bIsKnown = bIsKnown;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCMapIcon_C::SetSecondaryIcon(const TSoftObjectPtr<class UObject>& SecondaryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCMapIcon_C", "SetSecondaryIcon");

	Params::NPCMapIcon_C_SetSecondaryIcon Parms{};

	Parms.SecondaryIcon = SecondaryIcon;

	UObject::ProcessEvent(Func, &Parms);
}

}
