#pragma once

#include "Basic.hpp"

#include "Fort_Entry_Music_Controller_BP_classes.hpp"
#include "Fort_Entry_Music_Controller_BP_parameters.hpp"

namespace SDK
{

void AFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "OnMusicPackChanged");

	Params::Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged Parms{};

	Parms.NewMusicPack = NewMusicPack;
	Parms.StartTimeOffset = StartTimeOffset;

	UObject::ProcessEvent(Func, &Parms);
}

void AFort_Entry_Music_Controller_BP_C::StartMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "StartMusic");

	UObject::ProcessEvent(Func, nullptr);
}

void AFort_Entry_Music_Controller_BP_C::SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "SetCanRetriggerNextMusicPack");

	Params::Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack Parms{};

	Parms.bCanRetriggerNextMusicPack_0 = bCanRetriggerNextMusicPack_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AFort_Entry_Music_Controller_BP_C::PlayEquippedMusicPack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "PlayEquippedMusicPack");

	UObject::ProcessEvent(Func, nullptr);
}

void AFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Lobby Music Override");

	Params::Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override Parms{};

	Parms.Lobby_Music_Activate = Lobby_Music_Activate;
	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);
}

void AFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music, double StartTime, const struct FGameplayTag& Event_Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Change Music");

	Params::Fort_Entry_Music_Controller_BP_C_Change_Music Parms{};

	Parms.New_Music = New_Music;
	Parms.StartTime = StartTime;
	Parms.Event_Tag = std::move(Event_Tag);

	UObject::ProcessEvent(Func, &Parms);
}

void AFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ListenToMusicPacks");

	UObject::ProcessEvent(Func, nullptr);
}

void AFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	Params::Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
