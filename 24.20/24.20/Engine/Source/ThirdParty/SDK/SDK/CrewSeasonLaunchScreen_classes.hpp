#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UCrewSeasonLaunchScreen_C final : public UCrewSeasonLaunchScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Background_Blurred;
	class USafeZone*                              SafeZone_0;

public:
	void ExecuteUbergraph_CrewSeasonLaunchScreen(int32 EntryPoint);
	void OnDownloadBackgroundComplete(class UTexture2D* NewBackground);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewSeasonLaunchScreen_C">();
	}
	static class UCrewSeasonLaunchScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewSeasonLaunchScreen_C>();
	}
};
static_assert(alignof(UCrewSeasonLaunchScreen_C) == 0x000008, "Wrong alignment on UCrewSeasonLaunchScreen_C");
static_assert(sizeof(UCrewSeasonLaunchScreen_C) == 0x0004F0, "Wrong size on UCrewSeasonLaunchScreen_C");
static_assert(offsetof(UCrewSeasonLaunchScreen_C, UberGraphFrame) == 0x0004D8, "Member 'UCrewSeasonLaunchScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen_C, Image_Background_Blurred) == 0x0004E0, "Member 'UCrewSeasonLaunchScreen_C::Image_Background_Blurred' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen_C, SafeZone_0) == 0x0004E8, "Member 'UCrewSeasonLaunchScreen_C::SafeZone_0' has a wrong offset!");

}
