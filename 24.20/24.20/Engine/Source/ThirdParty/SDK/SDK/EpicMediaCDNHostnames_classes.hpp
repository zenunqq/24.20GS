#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UEpicMediaCDNHostnames : public UObject
{
public:
	TArray<float>                                 CDNDistribution;
	uint8                                         Pad_38[0x128];

public:
	class FString GetSelectedHostName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicMediaCDNHostnames">();
	}
	static class UEpicMediaCDNHostnames* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicMediaCDNHostnames>();
	}
};
static_assert(alignof(UEpicMediaCDNHostnames) == 0x000008, "Wrong alignment on UEpicMediaCDNHostnames");
static_assert(sizeof(UEpicMediaCDNHostnames) == 0x000160, "Wrong size on UEpicMediaCDNHostnames");
static_assert(offsetof(UEpicMediaCDNHostnames, CDNDistribution) == 0x000028, "Member 'UEpicMediaCDNHostnames::CDNDistribution' has a wrong offset!");

}
