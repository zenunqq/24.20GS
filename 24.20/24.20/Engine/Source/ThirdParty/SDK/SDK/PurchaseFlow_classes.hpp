#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UPurchaseFlowJSBridge final : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	class FString GetDefaultExternalBrowserID(const class FString& URL);
	class FString GetExternalBrowserName(const class FString& BrowserId);
	class FString GetExternalBrowserPath(const class FString& BrowserId);
	bool LaunchExternalBrowserUrl(const class FString& URL);
	bool LaunchValidatedExternalBrowserUrl(const class FString& AllowedBrowserID, const class FString& URL);
	void Receipt(const struct FPurchaseFlowReceiptParam& Receipt_0);
	void RequestClose(const class FString& CloseInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PurchaseFlowJSBridge">();
	}
	static class UPurchaseFlowJSBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseFlowJSBridge>();
	}
};
static_assert(alignof(UPurchaseFlowJSBridge) == 0x000008, "Wrong alignment on UPurchaseFlowJSBridge");
static_assert(sizeof(UPurchaseFlowJSBridge) == 0x000038, "Wrong size on UPurchaseFlowJSBridge");

}
