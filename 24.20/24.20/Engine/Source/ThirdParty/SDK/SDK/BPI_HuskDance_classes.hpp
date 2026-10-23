#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IBPI_HuskDance_C final : public IInterface
{
public:
	void OnBeginDance();
	void OnEndDance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_HuskDance_C">();
	}
	static class IBPI_HuskDance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_HuskDance_C>();
	}
};
static_assert(alignof(IBPI_HuskDance_C) == 0x000008, "Wrong alignment on IBPI_HuskDance_C");
static_assert(sizeof(IBPI_HuskDance_C) == 0x000028, "Wrong size on IBPI_HuskDance_C");

}
