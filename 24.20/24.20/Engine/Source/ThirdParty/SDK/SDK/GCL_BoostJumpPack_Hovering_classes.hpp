#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCL_BoostJumpPack_Hovering_C final : public AGameplayCueNotify_Jetpack_Hovering
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
	class UParticleSystemComponent*               GroundInteract;
	TSoftObjectPtr<class USkeletalMeshComponent>  Milo_Check;
	TSoftObjectPtr<class UObject>                 Milo_Backpack;
	struct FVector                                Milo_LightScale;
	class FName                                   AttachSocketName;
	uint8                                         Pad_B5C[0x4];
	class UFXSystemComponent*                     VFX;
	class UParticleSystem*                        P_GroundInteraction;
	class UFXSystemAsset*                         NS_Hover;

public:
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void PlayLowFuelWarning();
	void ReceiveDestroyed();
	void ResetFX();
	void SetJetpackAudioEnabled(bool Enabled);
	void TryToPlayGroundEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_Hovering_C">();
	}
	static class AGCL_BoostJumpPack_Hovering_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_Hovering_C>();
	}
};
static_assert(alignof(AGCL_BoostJumpPack_Hovering_C) == 0x000008, "Wrong alignment on AGCL_BoostJumpPack_Hovering_C");
static_assert(sizeof(AGCL_BoostJumpPack_Hovering_C) == 0x000B78, "Wrong size on AGCL_BoostJumpPack_Hovering_C");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, UberGraphFrame) == 0x000AA0, "Member 'AGCL_BoostJumpPack_Hovering_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, bJetpackAudioEnabled) == 0x000AA8, "Member 'AGCL_BoostJumpPack_Hovering_C::bJetpackAudioEnabled' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundOnStart) == 0x000AB0, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundOnStart' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundOnStop) == 0x000AB8, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundOnStop' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundLoopOnIdle) == 0x000AC0, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundLoopOnIdle' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundLoopOnAccel) == 0x000AC8, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundLoopOnAccel' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundLoopOnOutOfFuel) == 0x000AD0, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundLoopOnOutOfFuel' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundOnFuelWarning) == 0x000AD8, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundOnFuelWarning' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, SoundOnOutOfFuel) == 0x000AE0, "Member 'AGCL_BoostJumpPack_Hovering_C::SoundOnOutOfFuel' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, GroundInteract) == 0x000AE8, "Member 'AGCL_BoostJumpPack_Hovering_C::GroundInteract' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, Milo_Check) == 0x000AF0, "Member 'AGCL_BoostJumpPack_Hovering_C::Milo_Check' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, Milo_Backpack) == 0x000B18, "Member 'AGCL_BoostJumpPack_Hovering_C::Milo_Backpack' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, Milo_LightScale) == 0x000B40, "Member 'AGCL_BoostJumpPack_Hovering_C::Milo_LightScale' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, AttachSocketName) == 0x000B58, "Member 'AGCL_BoostJumpPack_Hovering_C::AttachSocketName' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, VFX) == 0x000B60, "Member 'AGCL_BoostJumpPack_Hovering_C::VFX' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, P_GroundInteraction) == 0x000B68, "Member 'AGCL_BoostJumpPack_Hovering_C::P_GroundInteraction' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_C, NS_Hover) == 0x000B70, "Member 'AGCL_BoostJumpPack_Hovering_C::NS_Hover' has a wrong offset!");

}
