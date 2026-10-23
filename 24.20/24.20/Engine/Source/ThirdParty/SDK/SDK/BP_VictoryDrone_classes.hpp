#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ABP_VictoryDrone_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USkeletalMeshComponentBudgeted*         SkeletalMeshComponentBudgeted;
	class USceneComponent*                        Scene;
	TMulticastInlineDelegate<void(class ABP_VictoryDrone_C* Drone)> SpawnOutAnimEndedDispatcher;
	double                                        AnimPlayRate;
	class UMaterialInstanceDynamic*               StaticMeshMID;
	bool                                          TeleportIn;
	bool                                          IsAthena;
	uint8                                         Pad_34A[0x6];
	class AFortPawn*                              TargetPlayer;
	class UParticleSystemComponent*               CharacterAttached;
	bool                                          InLobby;
	bool                                          isNPC;
	uint8                                         Pad_362[0x2];
	class FName                                   AttachPoint;
	bool                                          isDecoy;
	uint8                                         Pad_369[0x7];
	class USkeletalMeshComponent*                 Mesh_for_Attachment;
	class USoundBase*                             SoundOnNPCDeath;

public:
	void Added_Death_Audio(class USoundBase* Sound_to_Spawn);
	void Decoy_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters);
	void ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint);
	void InitDrone();
	void NotifyTeleportFinishedTriggered();
	void NPC_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters);
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void PlaySpawnAnim();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VictoryDrone_C">();
	}
	static class ABP_VictoryDrone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VictoryDrone_C>();
	}
};
static_assert(alignof(ABP_VictoryDrone_C) == 0x000008, "Wrong alignment on ABP_VictoryDrone_C");
static_assert(sizeof(ABP_VictoryDrone_C) == 0x000380, "Wrong size on ABP_VictoryDrone_C");
static_assert(offsetof(ABP_VictoryDrone_C, UberGraphFrame) == 0x000310, "Member 'ABP_VictoryDrone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, SkeletalMeshComponentBudgeted) == 0x000318, "Member 'ABP_VictoryDrone_C::SkeletalMeshComponentBudgeted' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, Scene) == 0x000320, "Member 'ABP_VictoryDrone_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, SpawnOutAnimEndedDispatcher) == 0x000328, "Member 'ABP_VictoryDrone_C::SpawnOutAnimEndedDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, AnimPlayRate) == 0x000338, "Member 'ABP_VictoryDrone_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, StaticMeshMID) == 0x000340, "Member 'ABP_VictoryDrone_C::StaticMeshMID' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, TeleportIn) == 0x000348, "Member 'ABP_VictoryDrone_C::TeleportIn' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, IsAthena) == 0x000349, "Member 'ABP_VictoryDrone_C::IsAthena' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, TargetPlayer) == 0x000350, "Member 'ABP_VictoryDrone_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, CharacterAttached) == 0x000358, "Member 'ABP_VictoryDrone_C::CharacterAttached' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, InLobby) == 0x000360, "Member 'ABP_VictoryDrone_C::InLobby' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, isNPC) == 0x000361, "Member 'ABP_VictoryDrone_C::isNPC' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, AttachPoint) == 0x000364, "Member 'ABP_VictoryDrone_C::AttachPoint' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, isDecoy) == 0x000368, "Member 'ABP_VictoryDrone_C::isDecoy' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, Mesh_for_Attachment) == 0x000370, "Member 'ABP_VictoryDrone_C::Mesh_for_Attachment' has a wrong offset!");
static_assert(offsetof(ABP_VictoryDrone_C, SoundOnNPCDeath) == 0x000378, "Member 'ABP_VictoryDrone_C::SoundOnNPCDeath' has a wrong offset!");

}
