#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGAB_CarryPlayer_C final : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	class FName                                   DBNOCarryHolster;
	bool                                          bCompletedPickup;
	uint8                                         Pad_B6D[0x3];
	struct FVector                                PickupLocation;
	int32                                         CarryLongDistanceThreshold;

public:
	void ExecuteUbergraph_GAB_CarryPlayer(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824();
	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824();
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824();
	void OnFortPlayerHitByVehicle_Event(class AFortAthenaVehicle* InstigatingVehicle);
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_CarryPlayer_C">();
	}
	static class UGAB_CarryPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_CarryPlayer_C>();
	}
};
static_assert(alignof(UGAB_CarryPlayer_C) == 0x000008, "Wrong alignment on UGAB_CarryPlayer_C");
static_assert(sizeof(UGAB_CarryPlayer_C) == 0x000B90, "Wrong size on UGAB_CarryPlayer_C");
static_assert(offsetof(UGAB_CarryPlayer_C, UberGraphFrame) == 0x000B58, "Member 'UGAB_CarryPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PlayerPawn) == 0x000B60, "Member 'UGAB_CarryPlayer_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, DBNOCarryHolster) == 0x000B68, "Member 'UGAB_CarryPlayer_C::DBNOCarryHolster' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, bCompletedPickup) == 0x000B6C, "Member 'UGAB_CarryPlayer_C::bCompletedPickup' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PickupLocation) == 0x000B70, "Member 'UGAB_CarryPlayer_C::PickupLocation' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, CarryLongDistanceThreshold) == 0x000B88, "Member 'UGAB_CarryPlayer_C::CarryLongDistanceThreshold' has a wrong offset!");

}
