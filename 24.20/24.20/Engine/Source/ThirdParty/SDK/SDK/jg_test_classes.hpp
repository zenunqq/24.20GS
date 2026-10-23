#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class Ujg_testBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float jg_testSampleFunction(float Param);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"jg_testBPLibrary">();
	}
	static class Ujg_testBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ujg_testBPLibrary>();
	}
};
static_assert(alignof(Ujg_testBPLibrary) == 0x000008, "Wrong alignment on Ujg_testBPLibrary");
static_assert(sizeof(Ujg_testBPLibrary) == 0x000028, "Wrong size on Ujg_testBPLibrary");

}
