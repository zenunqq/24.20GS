#pragma once

#include "Basic.hpp"

#include "Reflex_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UReflexBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetFlashIndicatorEnabled();
	static float GetGameLatencyInMs();
	static float GetGameToRenderLatencyInMs();
	static bool GetReflexAvailable();
	static EReflexMode GetReflexMode();
	static float GetRenderLatencyInMs();
	static void SetFlashIndicatorEnabled(const bool bEnabled);
	static void SetReflexMode(const EReflexMode Mode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReflexBlueprintLibrary">();
	}
	static class UReflexBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReflexBlueprintLibrary>();
	}
};
static_assert(alignof(UReflexBlueprintLibrary) == 0x000008, "Wrong alignment on UReflexBlueprintLibrary");
static_assert(sizeof(UReflexBlueprintLibrary) == 0x000028, "Wrong size on UReflexBlueprintLibrary");

}
