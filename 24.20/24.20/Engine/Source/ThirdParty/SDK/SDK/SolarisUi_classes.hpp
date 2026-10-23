#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class USolUserWidget final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SolUserWidget">();
	}
	static class USolUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<USolUserWidget>();
	}
};
static_assert(alignof(USolUserWidget) == 0x000008, "Wrong alignment on USolUserWidget");
static_assert(sizeof(USolUserWidget) == 0x000288, "Wrong size on USolUserWidget");

}
