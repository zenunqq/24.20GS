#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontend_C final : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          NewLobby;
	bool                                          NewVar_0;
	uint8                                         Pad_2AA[0x6];
	class AHBOnboardingFlow_C*                    HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;

public:
	void ExecuteUbergraph_Frontend(int32 EntryPoint);
	void EnableTutorial();
	void PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile);
	void OnMatchStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_C">();
	}
	static class AFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_C>();
	}
};
static_assert(alignof(AFrontend_C) == 0x000008, "Wrong alignment on AFrontend_C");
static_assert(sizeof(AFrontend_C) == 0x0002B8, "Wrong size on AFrontend_C");
static_assert(offsetof(AFrontend_C, UberGraphFrame) == 0x0002A0, "Member 'AFrontend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_C, NewLobby) == 0x0002A8, "Member 'AFrontend_C::NewLobby' has a wrong offset!");
static_assert(offsetof(AFrontend_C, NewVar_0) == 0x0002A9, "Member 'AFrontend_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AFrontend_C, HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty) == 0x0002B0, "Member 'AFrontend_C::HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty' has a wrong offset!");

}
