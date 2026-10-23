#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class AVaultWorld_C : public AFortItemPreviewWorld
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          bIsPrimaryBackgroundActive;

public:
	void ReceiveBeginPlay();
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void GetVaultRotator(class AVaultRotator_C** VaultRotator);
	void OnTransitionItemDetails(const bool bShowItemDetails);
	void ExecuteUbergraph_VaultWorld(int32 EntryPoint);
	void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);
	void OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultWorld_C">();
	}
	static class AVaultWorld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultWorld_C>();
	}
};
static_assert(alignof(AVaultWorld_C) == 0x000008, "Wrong alignment on AVaultWorld_C");
static_assert(sizeof(AVaultWorld_C) == 0x000348, "Wrong size on AVaultWorld_C");
static_assert(offsetof(AVaultWorld_C, UberGraphFrame) == 0x000338, "Member 'AVaultWorld_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultWorld_C, bIsPrimaryBackgroundActive) == 0x000340, "Member 'AVaultWorld_C::bIsPrimaryBackgroundActive' has a wrong offset!");

}
