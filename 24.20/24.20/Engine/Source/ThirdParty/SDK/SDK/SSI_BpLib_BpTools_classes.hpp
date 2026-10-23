#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class USSI_BpLib_BpTools_C final : public UBlueprintFunctionLibrary
{
public:
	static void OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool* Return_Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SSI_BpLib_BpTools_C">();
	}
	static class USSI_BpLib_BpTools_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USSI_BpLib_BpTools_C>();
	}
};
static_assert(alignof(USSI_BpLib_BpTools_C) == 0x000008, "Wrong alignment on USSI_BpLib_BpTools_C");
static_assert(sizeof(USSI_BpLib_BpTools_C) == 0x000028, "Wrong size on USSI_BpLib_BpTools_C");

}
