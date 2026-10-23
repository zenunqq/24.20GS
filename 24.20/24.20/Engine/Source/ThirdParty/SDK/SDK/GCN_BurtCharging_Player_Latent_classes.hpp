#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_BurtCharging_Player_Latent_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class APlayerController*                      GCPlayerController;
	class AFortPlayerPawn*                        FortPlayerPawn;
	class USoundBase*                             BoostSound;
	class UAudioComponent*                        BoostAudioComponent;
	class USoundBase*                             BoostEndSound;

public:
	void BoostEndEvent();
	void ExecuteBoostLogic();
	void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32 EntryPoint);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_BurtCharging_Player_Latent_C">();
	}
	static class AGCN_BurtCharging_Player_Latent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_BurtCharging_Player_Latent_C>();
	}
};
static_assert(alignof(AGCN_BurtCharging_Player_Latent_C) == 0x000008, "Wrong alignment on AGCN_BurtCharging_Player_Latent_C");
static_assert(sizeof(AGCN_BurtCharging_Player_Latent_C) == 0x000558, "Wrong size on AGCN_BurtCharging_Player_Latent_C");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, UberGraphFrame) == 0x000528, "Member 'AGCN_BurtCharging_Player_Latent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, GCPlayerController) == 0x000530, "Member 'AGCN_BurtCharging_Player_Latent_C::GCPlayerController' has a wrong offset!");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, FortPlayerPawn) == 0x000538, "Member 'AGCN_BurtCharging_Player_Latent_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, BoostSound) == 0x000540, "Member 'AGCN_BurtCharging_Player_Latent_C::BoostSound' has a wrong offset!");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, BoostAudioComponent) == 0x000548, "Member 'AGCN_BurtCharging_Player_Latent_C::BoostAudioComponent' has a wrong offset!");
static_assert(offsetof(AGCN_BurtCharging_Player_Latent_C, BoostEndSound) == 0x000550, "Member 'AGCN_BurtCharging_Player_Latent_C::BoostEndSound' has a wrong offset!");

}
