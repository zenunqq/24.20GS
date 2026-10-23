#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFort_Entry_Music_Controller_BP_C final : public AFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        SceneComponent;
	double                                        FadeOutTime;
	class USoundBase*                             CurrentMusic;
	bool                                          Is_Music_Activate_Override;
	uint8                                         Pad_2A9[0x7];
	class UAthenaMusicPackItemDefinition*         MusicPackToPlayLater;
	bool                                          bCanRetriggerNextMusicPack;
	bool                                          bRegisteredForAnalysis;

public:
	void OnMusicPackChanged(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void StartMusic();
	void SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack_0);
	void PlayEquippedMusicPack();
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void Change_Music(class USoundBase* New_Music, double StartTime, const struct FGameplayTag& Event_Tag);
	void ListenToMusicPacks();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fort_Entry_Music_Controller_BP_C">();
	}
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFort_Entry_Music_Controller_BP_C>();
	}
};
static_assert(alignof(AFort_Entry_Music_Controller_BP_C) == 0x000008, "Wrong alignment on AFort_Entry_Music_Controller_BP_C");
static_assert(sizeof(AFort_Entry_Music_Controller_BP_C) == 0x0002C0, "Wrong size on AFort_Entry_Music_Controller_BP_C");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, UberGraphFrame) == 0x000288, "Member 'AFort_Entry_Music_Controller_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, SceneComponent) == 0x000290, "Member 'AFort_Entry_Music_Controller_BP_C::SceneComponent' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, FadeOutTime) == 0x000298, "Member 'AFort_Entry_Music_Controller_BP_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, CurrentMusic) == 0x0002A0, "Member 'AFort_Entry_Music_Controller_BP_C::CurrentMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Is_Music_Activate_Override) == 0x0002A8, "Member 'AFort_Entry_Music_Controller_BP_C::Is_Music_Activate_Override' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MusicPackToPlayLater) == 0x0002B0, "Member 'AFort_Entry_Music_Controller_BP_C::MusicPackToPlayLater' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, bCanRetriggerNextMusicPack) == 0x0002B8, "Member 'AFort_Entry_Music_Controller_BP_C::bCanRetriggerNextMusicPack' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, bRegisteredForAnalysis) == 0x0002B9, "Member 'AFort_Entry_Music_Controller_BP_C::bRegisteredForAnalysis' has a wrong offset!");

}
