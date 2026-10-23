#pragma once

#include "Basic.hpp"

#include "PurchaseFlow_classes.hpp"
#include "PurchaseFlow_parameters.hpp"

namespace SDK
{

class FString UPurchaseFlowJSBridge::GetDefaultExternalBrowserID(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetDefaultExternalBrowserID");

	Params::PurchaseFlowJSBridge_GetDefaultExternalBrowserID Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UPurchaseFlowJSBridge::GetExternalBrowserName(const class FString& BrowserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserName");

	Params::PurchaseFlowJSBridge_GetExternalBrowserName Parms{};

	Parms.BrowserId = std::move(BrowserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UPurchaseFlowJSBridge::GetExternalBrowserPath(const class FString& BrowserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserPath");

	Params::PurchaseFlowJSBridge_GetExternalBrowserPath Parms{};

	Parms.BrowserId = std::move(BrowserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPurchaseFlowJSBridge::LaunchExternalBrowserUrl(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchExternalBrowserUrl");

	Params::PurchaseFlowJSBridge_LaunchExternalBrowserUrl Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPurchaseFlowJSBridge::LaunchValidatedExternalBrowserUrl(const class FString& AllowedBrowserID, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchValidatedExternalBrowserUrl");

	Params::PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl Parms{};

	Parms.AllowedBrowserID = std::move(AllowedBrowserID);
	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPurchaseFlowJSBridge::Receipt(const struct FPurchaseFlowReceiptParam& Receipt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "Receipt");

	Params::PurchaseFlowJSBridge_Receipt Parms{};

	Parms.Receipt_0 = std::move(Receipt_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::PurchaseFlowJSBridge_RequestClose Parms{};

	Parms.CloseInfo = std::move(CloseInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
