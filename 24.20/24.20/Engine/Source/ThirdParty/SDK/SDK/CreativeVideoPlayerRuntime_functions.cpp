#pragma once

#include "Basic.hpp"

#include "CreativeVideoPlayerRuntime_classes.hpp"
#include "CreativeVideoPlayerRuntime_parameters.hpp"

namespace SDK
{

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientLeaveFullscreenVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientLeaveFullscreenVideo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientTransitionToFullscreenVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientTransitionToFullscreenVideo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenStateWithOptions(const struct FCreativeVideoPlayerFullscreenOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenStateWithOptions");

	Params::CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions Parms{};

	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::ExitFullscreenState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ExitFullscreenState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::OnFullscreenUIEnds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "OnFullscreenUIEnds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerEnterFullscreenMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerEnterFullscreenMode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerLeaveFullscreenMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerLeaveFullscreenMode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFunctionLibrary::ShutdownFullscreenVideoMode(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeVideoPlayerFunctionLibrary", "ShutdownFullscreenVideoMode");

	Params::CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
