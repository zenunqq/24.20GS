#pragma once

#include "Basic.hpp"

#include "ProxyTable_classes.hpp"
#include "ProxyTable_parameters.hpp"

namespace SDK
{

class UObject* UProxyTableFunctionLibrary::EvaluateProxyAsset(const class UObject* ContextObject, const class UProxyAsset* Proxy, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyAsset");

	Params::ProxyTableFunctionLibrary_EvaluateProxyAsset Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Proxy = Proxy;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UProxyTableFunctionLibrary::EvaluateProxyTable(const class UObject* ContextObject, const class UProxyTable* ProxyTable, class FName Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ProxyTableFunctionLibrary", "EvaluateProxyTable");

	Params::ProxyTableFunctionLibrary_EvaluateProxyTable Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ProxyTable = ProxyTable;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
