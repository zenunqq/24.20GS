#pragma once

#include "Basic.hpp"

#include "GameFeedback_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class ULogOptions final : public UObject
{
public:
	TArray<struct FLogSubmitOptions>              LogOptions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LogOptions">();
	}
	static class ULogOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogOptions>();
	}
};
static_assert(alignof(ULogOptions) == 0x000008, "Wrong alignment on ULogOptions");
static_assert(sizeof(ULogOptions) == 0x000038, "Wrong size on ULogOptions");
static_assert(offsetof(ULogOptions, LogOptions) == 0x000028, "Member 'ULogOptions::LogOptions' has a wrong offset!");

}
