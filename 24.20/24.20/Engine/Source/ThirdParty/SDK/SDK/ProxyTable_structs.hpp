#pragma once

#include "Basic.hpp"

#include "Chooser_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

struct FChooserParameterProxyTableBase : public FChooserParameterBase
{
};
static_assert(alignof(FChooserParameterProxyTableBase) == 0x000008, "Wrong alignment on FChooserParameterProxyTableBase");
static_assert(sizeof(FChooserParameterProxyTableBase) == 0x000008, "Wrong size on FChooserParameterProxyTableBase");

struct FProxyEntry final
{
public:
	class UProxyAsset*                            Proxy;
	class FName                                   Key;
	uint8                                         Pad_C[0x4];
	struct FInstancedStruct                       ValueStruct;
};
static_assert(alignof(FProxyEntry) == 0x000008, "Wrong alignment on FProxyEntry");
static_assert(sizeof(FProxyEntry) == 0x000020, "Wrong size on FProxyEntry");
static_assert(offsetof(FProxyEntry, Proxy) == 0x000000, "Member 'FProxyEntry::Proxy' has a wrong offset!");
static_assert(offsetof(FProxyEntry, Key) == 0x000008, "Member 'FProxyEntry::Key' has a wrong offset!");
static_assert(offsetof(FProxyEntry, ValueStruct) == 0x000010, "Member 'FProxyEntry::ValueStruct' has a wrong offset!");

struct FProxyTableContextProperty final : public FChooserParameterProxyTableBase
{
public:
	struct FChooserPropertyBinding                Binding;
};
static_assert(alignof(FProxyTableContextProperty) == 0x000008, "Wrong alignment on FProxyTableContextProperty");
static_assert(sizeof(FProxyTableContextProperty) == 0x000018, "Wrong size on FProxyTableContextProperty");
static_assert(offsetof(FProxyTableContextProperty, Binding) == 0x000008, "Member 'FProxyTableContextProperty::Binding' has a wrong offset!");

struct FLookupProxy final : public FObjectChooserBase
{
public:
	class UProxyAsset*                            Proxy;
};
static_assert(alignof(FLookupProxy) == 0x000008, "Wrong alignment on FLookupProxy");
static_assert(sizeof(FLookupProxy) == 0x000010, "Wrong size on FLookupProxy");
static_assert(offsetof(FLookupProxy, Proxy) == 0x000008, "Member 'FLookupProxy::Proxy' has a wrong offset!");

}
