#pragma once

#include "Basic.hpp"

#include "PurchaseFlow_structs.hpp"

namespace SDK::Params
{

struct PurchaseFlowJSBridge_GetDefaultExternalBrowserID final
{
public:
	class FString                                 URL;
	class FString                                 ReturnValue;
};
static_assert(alignof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetDefaultExternalBrowserID");
static_assert(sizeof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetDefaultExternalBrowserID");
static_assert(offsetof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID, URL) == 0x000000, "Member 'PurchaseFlowJSBridge_GetDefaultExternalBrowserID::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetDefaultExternalBrowserID::ReturnValue' has a wrong offset!");

struct PurchaseFlowJSBridge_GetExternalBrowserName final
{
public:
	class FString                                 BrowserId;
	class FString                                 ReturnValue;
};
static_assert(alignof(PurchaseFlowJSBridge_GetExternalBrowserName) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetExternalBrowserName");
static_assert(sizeof(PurchaseFlowJSBridge_GetExternalBrowserName) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetExternalBrowserName");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserName, BrowserId) == 0x000000, "Member 'PurchaseFlowJSBridge_GetExternalBrowserName::BrowserId' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserName, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetExternalBrowserName::ReturnValue' has a wrong offset!");

struct PurchaseFlowJSBridge_GetExternalBrowserPath final
{
public:
	class FString                                 BrowserId;
	class FString                                 ReturnValue;
};
static_assert(alignof(PurchaseFlowJSBridge_GetExternalBrowserPath) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetExternalBrowserPath");
static_assert(sizeof(PurchaseFlowJSBridge_GetExternalBrowserPath) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetExternalBrowserPath");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserPath, BrowserId) == 0x000000, "Member 'PurchaseFlowJSBridge_GetExternalBrowserPath::BrowserId' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserPath, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetExternalBrowserPath::ReturnValue' has a wrong offset!");

struct PurchaseFlowJSBridge_LaunchExternalBrowserUrl final
{
public:
	class FString                                 URL;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_LaunchExternalBrowserUrl");
static_assert(sizeof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl) == 0x000018, "Wrong size on PurchaseFlowJSBridge_LaunchExternalBrowserUrl");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl, URL) == 0x000000, "Member 'PurchaseFlowJSBridge_LaunchExternalBrowserUrl::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_LaunchExternalBrowserUrl::ReturnValue' has a wrong offset!");

struct PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl final
{
public:
	class FString                                 AllowedBrowserID;
	class FString                                 URL;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl");
static_assert(sizeof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl) == 0x000028, "Wrong size on PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, AllowedBrowserID) == 0x000000, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::AllowedBrowserID' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, URL) == 0x000010, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, ReturnValue) == 0x000020, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::ReturnValue' has a wrong offset!");

struct PurchaseFlowJSBridge_Receipt final
{
public:
	struct FPurchaseFlowReceiptParam              Receipt_0;
};
static_assert(alignof(PurchaseFlowJSBridge_Receipt) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_Receipt");
static_assert(sizeof(PurchaseFlowJSBridge_Receipt) == 0x000030, "Wrong size on PurchaseFlowJSBridge_Receipt");
static_assert(offsetof(PurchaseFlowJSBridge_Receipt, Receipt_0) == 0x000000, "Member 'PurchaseFlowJSBridge_Receipt::Receipt_0' has a wrong offset!");

struct PurchaseFlowJSBridge_RequestClose final
{
public:
	class FString                                 CloseInfo;
};
static_assert(alignof(PurchaseFlowJSBridge_RequestClose) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_RequestClose");
static_assert(sizeof(PurchaseFlowJSBridge_RequestClose) == 0x000010, "Wrong size on PurchaseFlowJSBridge_RequestClose");
static_assert(offsetof(PurchaseFlowJSBridge_RequestClose, CloseInfo) == 0x000000, "Member 'PurchaseFlowJSBridge_RequestClose::CloseInfo' has a wrong offset!");

}
