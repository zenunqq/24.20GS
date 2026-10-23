#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UInScreenWidget_C final : public UUserWidget
{
public:
	class UImage*                                 InScreenMedia;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InScreenWidget_C">();
	}
	static class UInScreenWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInScreenWidget_C>();
	}
};
static_assert(alignof(UInScreenWidget_C) == 0x000008, "Wrong alignment on UInScreenWidget_C");
static_assert(sizeof(UInScreenWidget_C) == 0x000270, "Wrong size on UInScreenWidget_C");
static_assert(offsetof(UInScreenWidget_C, InScreenMedia) == 0x000268, "Member 'UInScreenWidget_C::InScreenMedia' has a wrong offset!");

}
