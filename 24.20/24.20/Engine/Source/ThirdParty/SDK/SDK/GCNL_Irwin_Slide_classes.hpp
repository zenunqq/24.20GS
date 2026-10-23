#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Irwin_Slide_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundBase*                             SlideSound;
	class UAudioComponent*                        SlidingSoundComponent;

public:
	void ExecuteUbergraph_GCNL_Irwin_Slide(int32 EntryPoint);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Irwin_Slide_C">();
	}
	static class AGCNL_Irwin_Slide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Irwin_Slide_C>();
	}
};
static_assert(alignof(AGCNL_Irwin_Slide_C) == 0x000008, "Wrong alignment on AGCNL_Irwin_Slide_C");
static_assert(sizeof(AGCNL_Irwin_Slide_C) == 0x000978, "Wrong size on AGCNL_Irwin_Slide_C");
static_assert(offsetof(AGCNL_Irwin_Slide_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Irwin_Slide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Irwin_Slide_C, SlideSound) == 0x000968, "Member 'AGCNL_Irwin_Slide_C::SlideSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Irwin_Slide_C, SlidingSoundComponent) == 0x000970, "Member 'AGCNL_Irwin_Slide_C::SlidingSoundComponent' has a wrong offset!");

}
