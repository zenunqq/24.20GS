#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UTexture2D*                             K2Node_Event_NewBackground;
};
static_assert(alignof(CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen) == 0x000008, "Wrong alignment on CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen");
static_assert(sizeof(CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen) == 0x000010, "Wrong size on CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen");
static_assert(offsetof(CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen, EntryPoint) == 0x000000, "Member 'CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen, K2Node_Event_NewBackground) == 0x000008, "Member 'CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen::K2Node_Event_NewBackground' has a wrong offset!");

struct CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete final
{
public:
	class UTexture2D*                             NewBackground;
};
static_assert(alignof(CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong alignment on CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete");
static_assert(sizeof(CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong size on CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete");
static_assert(offsetof(CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete, NewBackground) == 0x000000, "Member 'CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete::NewBackground' has a wrong offset!");

}
