#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortnitePartyHeroSelect_Camera_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCameraComponent*                       CameraActor_0;
	bool                                          MouseDown;
	uint8                                         Pad_A01[0x7];
	class AFortPlayerPawn*                        CachedPawn;

public:
	void ReceiveTick(float DeltaSeconds);
	void BP_OnActivated(class AFortPlayerController* PlayerController);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void HandleMouseRelease();
	void HandleMousePress();
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortnitePartyHeroSelect_Camera_C">();
	}
	static class AFortnitePartyHeroSelect_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortnitePartyHeroSelect_Camera_C>();
	}
};
static_assert(alignof(AFortnitePartyHeroSelect_Camera_C) == 0x000010, "Wrong alignment on AFortnitePartyHeroSelect_Camera_C");
static_assert(sizeof(AFortnitePartyHeroSelect_Camera_C) == 0x000A10, "Wrong size on AFortnitePartyHeroSelect_Camera_C");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, UberGraphFrame) == 0x0009F0, "Member 'AFortnitePartyHeroSelect_Camera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, CameraActor_0) == 0x0009F8, "Member 'AFortnitePartyHeroSelect_Camera_C::CameraActor_0' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, MouseDown) == 0x000A00, "Member 'AFortnitePartyHeroSelect_Camera_C::MouseDown' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, CachedPawn) == 0x000A08, "Member 'AFortnitePartyHeroSelect_Camera_C::CachedPawn' has a wrong offset!");

}
