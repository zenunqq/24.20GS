#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ProxyTableFunctionLibrary_EvaluateProxyAsset final
{
public:
	const class UObject*                          ContextObject;
	const class UProxyAsset*                      Proxy;
	TSubclassOf<class UObject>                    ObjectClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(ProxyTableFunctionLibrary_EvaluateProxyAsset) == 0x000008, "Wrong alignment on ProxyTableFunctionLibrary_EvaluateProxyAsset");
static_assert(sizeof(ProxyTableFunctionLibrary_EvaluateProxyAsset) == 0x000020, "Wrong size on ProxyTableFunctionLibrary_EvaluateProxyAsset");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyAsset, ContextObject) == 0x000000, "Member 'ProxyTableFunctionLibrary_EvaluateProxyAsset::ContextObject' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyAsset, Proxy) == 0x000008, "Member 'ProxyTableFunctionLibrary_EvaluateProxyAsset::Proxy' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyAsset, ObjectClass) == 0x000010, "Member 'ProxyTableFunctionLibrary_EvaluateProxyAsset::ObjectClass' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyAsset, ReturnValue) == 0x000018, "Member 'ProxyTableFunctionLibrary_EvaluateProxyAsset::ReturnValue' has a wrong offset!");

struct ProxyTableFunctionLibrary_EvaluateProxyTable final
{
public:
	const class UObject*                          ContextObject;
	const class UProxyTable*                      ProxyTable;
	class FName                                   Key;
	uint8                                         Pad_14[0x4];
	class UObject*                                ReturnValue;
};
static_assert(alignof(ProxyTableFunctionLibrary_EvaluateProxyTable) == 0x000008, "Wrong alignment on ProxyTableFunctionLibrary_EvaluateProxyTable");
static_assert(sizeof(ProxyTableFunctionLibrary_EvaluateProxyTable) == 0x000020, "Wrong size on ProxyTableFunctionLibrary_EvaluateProxyTable");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyTable, ContextObject) == 0x000000, "Member 'ProxyTableFunctionLibrary_EvaluateProxyTable::ContextObject' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyTable, ProxyTable) == 0x000008, "Member 'ProxyTableFunctionLibrary_EvaluateProxyTable::ProxyTable' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyTable, Key) == 0x000010, "Member 'ProxyTableFunctionLibrary_EvaluateProxyTable::Key' has a wrong offset!");
static_assert(offsetof(ProxyTableFunctionLibrary_EvaluateProxyTable, ReturnValue) == 0x000018, "Member 'ProxyTableFunctionLibrary_EvaluateProxyTable::ReturnValue' has a wrong offset!");

}
