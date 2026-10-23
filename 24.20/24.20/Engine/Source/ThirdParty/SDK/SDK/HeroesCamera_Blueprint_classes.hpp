#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AHeroesCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          MouseDown;
	uint8                                         Pad_9F9[0x7];
	class AFortPlayerPawn*                        Cached_Pawn;

public:
	void ReceiveTick(float DeltaSeconds);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void HandleMouseRelease();
	void HandleMousePress();
	void ExecuteUbergraph_HeroesCamera_Blueprint(int32 EntryPoint);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroesCamera_Blueprint_C">();
	}
	static class AHeroesCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHeroesCamera_Blueprint_C>();
	}
};
static_assert(alignof(AHeroesCamera_Blueprint_C) == 0x000010, "Wrong alignment on AHeroesCamera_Blueprint_C");
static_assert(sizeof(AHeroesCamera_Blueprint_C) == 0x000A10, "Wrong size on AHeroesCamera_Blueprint_C");
static_assert(offsetof(AHeroesCamera_Blueprint_C, UberGraphFrame) == 0x0009F0, "Member 'AHeroesCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHeroesCamera_Blueprint_C, MouseDown) == 0x0009F8, "Member 'AHeroesCamera_Blueprint_C::MouseDown' has a wrong offset!");
static_assert(offsetof(AHeroesCamera_Blueprint_C, Cached_Pawn) == 0x000A00, "Member 'AHeroesCamera_Blueprint_C::Cached_Pawn' has a wrong offset!");

}
