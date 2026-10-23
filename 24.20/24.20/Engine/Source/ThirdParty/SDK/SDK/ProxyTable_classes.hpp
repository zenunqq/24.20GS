#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "StructUtils_structs.hpp"
#include "ProxyTable_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IChooserParameterProxyTable final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChooserParameterProxyTable">();
	}
	static class IChooserParameterProxyTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChooserParameterProxyTable>();
	}
};
static_assert(alignof(IChooserParameterProxyTable) == 0x000008, "Wrong alignment on IChooserParameterProxyTable");
static_assert(sizeof(IChooserParameterProxyTable) == 0x000028, "Wrong size on IChooserParameterProxyTable");

class UProxyAsset final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSubclassOf<class UObject>                    Type;
	TSubclassOf<class UObject>                    ContextClass;
	struct FInstancedStruct                       ProxyTable;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProxyAsset">();
	}
	static class UProxyAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProxyAsset>();
	}
};
static_assert(alignof(UProxyAsset) == 0x000008, "Wrong alignment on UProxyAsset");
static_assert(sizeof(UProxyAsset) == 0x000050, "Wrong size on UProxyAsset");
static_assert(offsetof(UProxyAsset, Type) == 0x000030, "Member 'UProxyAsset::Type' has a wrong offset!");
static_assert(offsetof(UProxyAsset, ContextClass) == 0x000038, "Member 'UProxyAsset::ContextClass' has a wrong offset!");
static_assert(offsetof(UProxyAsset, ProxyTable) == 0x000040, "Member 'UProxyAsset::ProxyTable' has a wrong offset!");

class UProxyTable final : public UObject
{
public:
	TArray<struct FProxyEntry>                    Entries;
	TArray<class UProxyTable*>                    InheritEntriesFrom;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProxyTable">();
	}
	static class UProxyTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProxyTable>();
	}
};
static_assert(alignof(UProxyTable) == 0x000008, "Wrong alignment on UProxyTable");
static_assert(sizeof(UProxyTable) == 0x000048, "Wrong size on UProxyTable");
static_assert(offsetof(UProxyTable, Entries) == 0x000028, "Member 'UProxyTable::Entries' has a wrong offset!");
static_assert(offsetof(UProxyTable, InheritEntriesFrom) == 0x000038, "Member 'UProxyTable::InheritEntriesFrom' has a wrong offset!");

class UProxyTableFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UObject* EvaluateProxyAsset(const class UObject* ContextObject, const class UProxyAsset* Proxy, TSubclassOf<class UObject> ObjectClass);
	static class UObject* EvaluateProxyTable(const class UObject* ContextObject, const class UProxyTable* ProxyTable, class FName Key);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProxyTableFunctionLibrary">();
	}
	static class UProxyTableFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProxyTableFunctionLibrary>();
	}
};
static_assert(alignof(UProxyTableFunctionLibrary) == 0x000008, "Wrong alignment on UProxyTableFunctionLibrary");
static_assert(sizeof(UProxyTableFunctionLibrary) == 0x000028, "Wrong size on UProxyTableFunctionLibrary");

}
