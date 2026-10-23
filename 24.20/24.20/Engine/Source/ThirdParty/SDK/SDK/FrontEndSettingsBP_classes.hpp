#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontEndSettingsBP_C final : public AFrontEndSettings
{
public:
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndSettingsBP_C">();
	}
	static class AFrontEndSettingsBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEndSettingsBP_C>();
	}
};
static_assert(alignof(AFrontEndSettingsBP_C) == 0x000008, "Wrong alignment on AFrontEndSettingsBP_C");
static_assert(sizeof(AFrontEndSettingsBP_C) == 0x0002B0, "Wrong size on AFrontEndSettingsBP_C");
static_assert(offsetof(AFrontEndSettingsBP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AFrontEndSettingsBP_C::DefaultSceneRoot' has a wrong offset!");

}
