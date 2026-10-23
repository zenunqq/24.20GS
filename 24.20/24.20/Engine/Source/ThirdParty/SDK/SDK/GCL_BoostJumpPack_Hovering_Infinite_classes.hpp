#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCL_BoostJumpPack_Hovering_Infinite_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          bJetpackAudioEnabled;
	uint8                                         Pad_AA9[0x7];
	class USoundBase*                             SoundOnStart;
	class USoundBase*                             SoundOnStop;
	class USoundBase*                             SoundLoopOnIdle;
	class USoundBase*                             SoundLoopOnAccel;
	bool                                          bIsFirstJump;
	uint8                                         Pad_AD1[0x7];
	class UFXSystemComponent*                     VFX_Reference;

public:
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32 EntryPoint);
	void On_Pawn_Landed(const struct FHitResult& Hit);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void SetJetpackAudioEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_Hovering_Infinite_C">();
	}
	static class AGCL_BoostJumpPack_Hovering_Infinite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_Hovering_Infinite_C>();
	}
};
static_assert(alignof(AGCL_BoostJumpPack_Hovering_Infinite_C) == 0x000008, "Wrong alignment on AGCL_BoostJumpPack_Hovering_Infinite_C");
static_assert(sizeof(AGCL_BoostJumpPack_Hovering_Infinite_C) == 0x000AE0, "Wrong size on AGCL_BoostJumpPack_Hovering_Infinite_C");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, UberGraphFrame) == 0x000AA0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, bJetpackAudioEnabled) == 0x000AA8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::bJetpackAudioEnabled' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundOnStart) == 0x000AB0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundOnStart' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundOnStop) == 0x000AB8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundOnStop' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundLoopOnIdle) == 0x000AC0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundLoopOnIdle' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundLoopOnAccel) == 0x000AC8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundLoopOnAccel' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, bIsFirstJump) == 0x000AD0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::bIsFirstJump' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, VFX_Reference) == 0x000AD8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::VFX_Reference' has a wrong offset!");

}
