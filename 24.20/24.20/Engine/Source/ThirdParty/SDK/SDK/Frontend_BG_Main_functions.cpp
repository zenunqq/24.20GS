#pragma once

#include "Basic.hpp"

#include "Frontend_BG_Main_classes.hpp"
#include "Frontend_BG_Main_parameters.hpp"

namespace SDK
{

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_BG_Main_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_BG_Main_C::ExecuteUbergraph_Frontend_BG_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "ExecuteUbergraph_Frontend_BG_Main");

	Params::Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");

	Params::Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature Parms{};

	Parms.BackgroundImage = BackgroundImage;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature Parms{};

	Parms.PresetEnvironmentName = std::move(PresetEnvironmentName);

	UObject::ProcessEvent(Func, &Parms);
}

}
