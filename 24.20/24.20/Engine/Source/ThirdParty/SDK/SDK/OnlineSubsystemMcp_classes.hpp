#pragma once

#include "Basic.hpp"

#include "OnlineSubsystemMcp_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UOnlineISOConversionUtil final : public UObject
{
public:
	TArray<struct FOnlineISOLanguageInfo>         Languages;
	TArray<struct FOnlineISORegionInfo>           Regions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineISOConversionUtil">();
	}
	static class UOnlineISOConversionUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineISOConversionUtil>();
	}
};
static_assert(alignof(UOnlineISOConversionUtil) == 0x000008, "Wrong alignment on UOnlineISOConversionUtil");
static_assert(sizeof(UOnlineISOConversionUtil) == 0x000048, "Wrong size on UOnlineISOConversionUtil");
static_assert(offsetof(UOnlineISOConversionUtil, Languages) == 0x000028, "Member 'UOnlineISOConversionUtil::Languages' has a wrong offset!");
static_assert(offsetof(UOnlineISOConversionUtil, Regions) == 0x000038, "Member 'UOnlineISOConversionUtil::Regions' has a wrong offset!");

}
