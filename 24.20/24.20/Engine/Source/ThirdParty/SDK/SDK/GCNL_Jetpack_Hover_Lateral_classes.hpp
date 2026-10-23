#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Jetpack_Hover_Lateral_C final : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          bJetpackAudioEnabled;
	uint8                                         Pad_AA9[0x7];
	class USoundBase*                             SoundOnStart;
	class USoundBase*                             SoundOnStop;
	class USoundBase*                             SoundLoopOnIdle;
	class USoundBase*                             SoundLoopOnAccel;
	class USoundBase*                             SoundLoopOnOutOfFuel;
	class USoundBase*                             SoundOnFuelWarning;
	class USoundBase*                             SoundOnOutOfFuel;
	bool                                          bIsFirstJump;
	uint8                                         Pad_AE9[0x7];
	class UParticleSystemComponent*               GroundInteract;
	TSoftObjectPtr<class USkeletalMeshComponent>  Milo_Check;
	TSoftObjectPtr<class UObject>                 Milo_Backpack;
	struct FVector                                Milo_LightScale;
	class UParticleSystem*                        HoverEffect;
	class FName                                   AttachSocketName;
	uint8                                         Pad_B6C[0x4];
	class UParticleSystem*                        P_GroundInteract;
	class UFXSystemComponent*                     HoverFXSystem;
	class UFXSystemAsset*                         NS_Hover;

public:
	void ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void ResetFX();
	void SetJetpackAudioEnabled(bool Enabled);
	void TryToPlayGroundEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Jetpack_Hover_Lateral_C">();
	}
	static class AGCNL_Jetpack_Hover_Lateral_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Jetpack_Hover_Lateral_C>();
	}
};
static_assert(alignof(AGCNL_Jetpack_Hover_Lateral_C) == 0x000008, "Wrong alignment on AGCNL_Jetpack_Hover_Lateral_C");
static_assert(sizeof(AGCNL_Jetpack_Hover_Lateral_C) == 0x000B88, "Wrong size on AGCNL_Jetpack_Hover_Lateral_C");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, UberGraphFrame) == 0x000AA0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, bJetpackAudioEnabled) == 0x000AA8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::bJetpackAudioEnabled' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundOnStart) == 0x000AB0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundOnStart' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundOnStop) == 0x000AB8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundOnStop' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundLoopOnIdle) == 0x000AC0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundLoopOnIdle' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundLoopOnAccel) == 0x000AC8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundLoopOnAccel' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundLoopOnOutOfFuel) == 0x000AD0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundLoopOnOutOfFuel' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundOnFuelWarning) == 0x000AD8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundOnFuelWarning' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, SoundOnOutOfFuel) == 0x000AE0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::SoundOnOutOfFuel' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, bIsFirstJump) == 0x000AE8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::bIsFirstJump' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, GroundInteract) == 0x000AF0, "Member 'AGCNL_Jetpack_Hover_Lateral_C::GroundInteract' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, Milo_Check) == 0x000AF8, "Member 'AGCNL_Jetpack_Hover_Lateral_C::Milo_Check' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, Milo_Backpack) == 0x000B20, "Member 'AGCNL_Jetpack_Hover_Lateral_C::Milo_Backpack' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, Milo_LightScale) == 0x000B48, "Member 'AGCNL_Jetpack_Hover_Lateral_C::Milo_LightScale' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, HoverEffect) == 0x000B60, "Member 'AGCNL_Jetpack_Hover_Lateral_C::HoverEffect' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, AttachSocketName) == 0x000B68, "Member 'AGCNL_Jetpack_Hover_Lateral_C::AttachSocketName' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, P_GroundInteract) == 0x000B70, "Member 'AGCNL_Jetpack_Hover_Lateral_C::P_GroundInteract' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, HoverFXSystem) == 0x000B78, "Member 'AGCNL_Jetpack_Hover_Lateral_C::HoverFXSystem' has a wrong offset!");
static_assert(offsetof(AGCNL_Jetpack_Hover_Lateral_C, NS_Hover) == 0x000B80, "Member 'AGCNL_Jetpack_Hover_Lateral_C::NS_Hover' has a wrong offset!");

}
