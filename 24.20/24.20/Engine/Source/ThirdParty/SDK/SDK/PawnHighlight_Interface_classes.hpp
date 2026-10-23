#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IPawnHighlight_Interface_C final : public IInterface
{
public:
	void AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent);
	void RemoveHighlightFromSource(class UObject* Source);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PawnHighlight_Interface_C">();
	}
	static class IPawnHighlight_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPawnHighlight_Interface_C>();
	}
};
static_assert(alignof(IPawnHighlight_Interface_C) == 0x000008, "Wrong alignment on IPawnHighlight_Interface_C");
static_assert(sizeof(IPawnHighlight_Interface_C) == 0x000028, "Wrong size on IPawnHighlight_Interface_C");

}
