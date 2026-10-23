#pragma once

#include "Basic.hpp"

#include "CommonInput_classes.hpp"

namespace SDK
{

class UCommonUIInputData_C final : public UCommonUIInputData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUIInputData_C">();
	}
	static class UCommonUIInputData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIInputData_C>();
	}
};
static_assert(alignof(UCommonUIInputData_C) == 0x000008, "Wrong alignment on UCommonUIInputData_C");
static_assert(sizeof(UCommonUIInputData_C) == 0x000048, "Wrong size on UCommonUIInputData_C");

}
