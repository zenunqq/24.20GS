#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UFortActivatableMovieWidget_C final : public UFortActivatableMovieWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       WholeFade;
	class UWidgetAnimation*                       ColorFade;
	class USafeZone*                              MainSafeZone;
	class USafeZone*                              SafeZone_0;
	bool                                          NewVar_0;
	uint8                                         Pad_6C1[0x7];
	class USoundBase*                             TransitionSound;

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_FortActivatableMovieWidget(int32 EntryPoint);
	void Finished_54C0D3BF443750D753CECD9EE06086EA();
	void Finished_67F0D773400E13ABEB8A0DB143879F1C();
	void MediaStarted();
	void PreEnded();
	void StartFadeFromColor(bool bEnd, EUFortActivatablePrePostRollStates Reason, bool bReverse);
	void StartWholeFade(bool bReverse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortActivatableMovieWidget_C">();
	}
	static class UFortActivatableMovieWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivatableMovieWidget_C>();
	}
};
static_assert(alignof(UFortActivatableMovieWidget_C) == 0x000008, "Wrong alignment on UFortActivatableMovieWidget_C");
static_assert(sizeof(UFortActivatableMovieWidget_C) == 0x0006D0, "Wrong size on UFortActivatableMovieWidget_C");
static_assert(offsetof(UFortActivatableMovieWidget_C, UberGraphFrame) == 0x000698, "Member 'UFortActivatableMovieWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, WholeFade) == 0x0006A0, "Member 'UFortActivatableMovieWidget_C::WholeFade' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, ColorFade) == 0x0006A8, "Member 'UFortActivatableMovieWidget_C::ColorFade' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, MainSafeZone) == 0x0006B0, "Member 'UFortActivatableMovieWidget_C::MainSafeZone' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, SafeZone_0) == 0x0006B8, "Member 'UFortActivatableMovieWidget_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, NewVar_0) == 0x0006C0, "Member 'UFortActivatableMovieWidget_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UFortActivatableMovieWidget_C, TransitionSound) == 0x0006C8, "Member 'UFortActivatableMovieWidget_C::TransitionSound' has a wrong offset!");

}
