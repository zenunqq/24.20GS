#pragma once

#include "Basic.hpp"

#include "NetUI_classes.hpp"
#include "NetUI_parameters.hpp"

namespace SDK
{

void UBadNetworkIndicator::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "UpdateDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

float UBadNetworkIndicator::GetPacketLoss() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "GetPacketLoss");

	Params::BadNetworkIndicator_GetPacketLoss Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UBadNetworkIndicator::GetPing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "GetPing");

	Params::BadNetworkIndicator_GetPing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBadNetworkIndicator::HasBadPacketLoss() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "HasBadPacketLoss");

	Params::BadNetworkIndicator_HasBadPacketLoss Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBadNetworkIndicator::HasBadPing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "HasBadPing");

	Params::BadNetworkIndicator_HasBadPing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBadNetworkIndicator::HasSeverePacketLoss() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePacketLoss");

	Params::BadNetworkIndicator_HasSeverePacketLoss Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBadNetworkIndicator::HasSeverePing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePing");

	Params::BadNetworkIndicator_HasSeverePing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBadNetworkIndicator::ShouldDisplay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadNetworkIndicator", "ShouldDisplay");

	Params::BadNetworkIndicator_ShouldDisplay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNetDebugWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetDebugWidget", "StartTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNetDebugWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetDebugWidget", "StopTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
