#pragma once

#include "Basic.hpp"

namespace SDK
{

struct alignas(0x08) FWebJSCallbackBase
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FWebJSCallbackBase) == 0x000008, "Wrong alignment on FWebJSCallbackBase");
static_assert(sizeof(FWebJSCallbackBase) == 0x000020, "Wrong size on FWebJSCallbackBase");

struct FWebJSFunction final : public FWebJSCallbackBase
{
};
static_assert(alignof(FWebJSFunction) == 0x000008, "Wrong alignment on FWebJSFunction");
static_assert(sizeof(FWebJSFunction) == 0x000020, "Wrong size on FWebJSFunction");

struct FWebJSResponse final : public FWebJSCallbackBase
{
};
static_assert(alignof(FWebJSResponse) == 0x000008, "Wrong alignment on FWebJSResponse");
static_assert(sizeof(FWebJSResponse) == 0x000020, "Wrong size on FWebJSResponse");

}
