#pragma once

#include "Basic.hpp"

#include "VoiceChannelChangePopup_classes.hpp"
#include "VoiceChannelChangePopup_parameters.hpp"

namespace SDK
{

void UVoiceChannelChangePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelChangePopup_C::ExecuteUbergraph_VoiceChannelChangePopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "ExecuteUbergraph_VoiceChannelChangePopup");

	Params::VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UVoiceChannelChangePopup_C::OnInputModeChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnInputModeChanged");

	Params::VoiceChannelChangePopup_C_OnInputModeChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UVoiceChannelChangePopup_C::OnPlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayCloseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelChangePopup_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelChangePopup_C::Popup_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Popup Animation Finished");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelChangePopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "PreConstruct");

	Params::VoiceChannelChangePopup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
