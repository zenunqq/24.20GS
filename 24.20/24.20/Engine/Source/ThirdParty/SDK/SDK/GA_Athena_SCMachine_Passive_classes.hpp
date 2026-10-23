#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_Athena_SCMachine_Passive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawnAthena*                  PlayerPawn;
	struct FVector                                SpawnZOffset;
	struct FGameplayTag                           BlockChipSpawnTag;
	uint8                                         Pad_B54[0x4];
	struct FScalableFloat                         DropRebootCards;

public:
	void Check_Resurrection_Active(bool* bEnabled);
	void CheckPlayerChipSpawnEnabled(bool* IsChipSpawnEnabled);
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint);
	void HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void K2_ActivateAbility();
	void SaveOutPlayer();
	void Spawn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_SCMachine_Passive_C">();
	}
	static class UGA_Athena_SCMachine_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_SCMachine_Passive_C>();
	}
};
static_assert(alignof(UGA_Athena_SCMachine_Passive_C) == 0x000008, "Wrong alignment on UGA_Athena_SCMachine_Passive_C");
static_assert(sizeof(UGA_Athena_SCMachine_Passive_C) == 0x000B80, "Wrong size on UGA_Athena_SCMachine_Passive_C");
static_assert(offsetof(UGA_Athena_SCMachine_Passive_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_SCMachine_Passive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_SCMachine_Passive_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_SCMachine_Passive_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_SCMachine_Passive_C, SpawnZOffset) == 0x000B38, "Member 'UGA_Athena_SCMachine_Passive_C::SpawnZOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_SCMachine_Passive_C, BlockChipSpawnTag) == 0x000B50, "Member 'UGA_Athena_SCMachine_Passive_C::BlockChipSpawnTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_SCMachine_Passive_C, DropRebootCards) == 0x000B58, "Member 'UGA_Athena_SCMachine_Passive_C::DropRebootCards' has a wrong offset!");

}
