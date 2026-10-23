#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuartzMusicController_classes.hpp"

namespace SDK
{

class ABattlepass_MusicController_Quartz_C final : public ABP_QuartzMusicController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UQuartzMusicTrackComponent_C*           QuartzMusicTrackComponent;

public:
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Battlepass_MusicController_Quartz(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Battlepass_MusicController_Quartz_C">();
	}
	static class ABattlepass_MusicController_Quartz_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattlepass_MusicController_Quartz_C>();
	}
};
static_assert(alignof(ABattlepass_MusicController_Quartz_C) == 0x000008, "Wrong alignment on ABattlepass_MusicController_Quartz_C");
static_assert(sizeof(ABattlepass_MusicController_Quartz_C) == 0x0002B8, "Wrong size on ABattlepass_MusicController_Quartz_C");
static_assert(offsetof(ABattlepass_MusicController_Quartz_C, UberGraphFrame) == 0x0002A8, "Member 'ABattlepass_MusicController_Quartz_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattlepass_MusicController_Quartz_C, QuartzMusicTrackComponent) == 0x0002B0, "Member 'ABattlepass_MusicController_Quartz_C::QuartzMusicTrackComponent' has a wrong offset!");

}
