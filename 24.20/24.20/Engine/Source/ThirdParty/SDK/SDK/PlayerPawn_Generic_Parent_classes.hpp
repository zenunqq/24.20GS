#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharacterPartMidArrayStruct_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;
	class UPostProcessComponent*                  PlayerPostProcessFX;
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;
	int32                                         WaterCounter;
	uint8                                         Pad_44C4[0x4];
	class AActor*                                 CurrentWaterMeshActor;
	bool                                          IsInWater;
	uint8                                         Pad_44D1[0x7];
	double                                        Time_when_you_ll_be_able_to_splash_again;
	TMulticastInlineDelegate<void(bool bIsInWater, class AFortPlayerPawn* Pawn, class AActor* Water)> OnOverlapWaterVolume;
	TArray<struct FCharacterPartMidArrayStruct>   PawnPartMaterials;

public:
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint);
	void Entered_Water_Volume();
	void Find_Stored_Char_Part_Materials(EFortCustomPartType PartType, bool* Found, int32* Index_0, TArray<class UMaterialInstanceDynamic*>* MIDs);
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ReceiveBeginPlay();
	void ReinitializeWeaponMaterials();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Generic_Parent_C">();
	}
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Generic_Parent_C) == 0x004500, "Wrong size on APlayerPawn_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, UberGraphFrame) == 0x004420, "Member 'APlayerPawn_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Default_Weapon_Materials) == 0x004428, "Member 'APlayerPawn_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBackpackMaterials) == 0x004438, "Member 'APlayerPawn_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHatMaterials) == 0x004448, "Member 'APlayerPawn_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHeadMaterials) == 0x004458, "Member 'APlayerPawn_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBodyMaterials) == 0x004468, "Member 'APlayerPawn_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnCharmMaterials) == 0x004478, "Member 'APlayerPawn_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnFaceMaterials) == 0x004488, "Member 'APlayerPawn_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PlayerPostProcessFX) == 0x004498, "Member 'APlayerPawn_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, SkeletalMeshes) == 0x0044A0, "Member 'APlayerPawn_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnMaterials_ALL) == 0x0044B0, "Member 'APlayerPawn_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, WaterCounter) == 0x0044C0, "Member 'APlayerPawn_Generic_Parent_C::WaterCounter' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, CurrentWaterMeshActor) == 0x0044C8, "Member 'APlayerPawn_Generic_Parent_C::CurrentWaterMeshActor' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, IsInWater) == 0x0044D0, "Member 'APlayerPawn_Generic_Parent_C::IsInWater' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Time_when_you_ll_be_able_to_splash_again) == 0x0044D8, "Member 'APlayerPawn_Generic_Parent_C::Time_when_you_ll_be_able_to_splash_again' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, OnOverlapWaterVolume) == 0x0044E0, "Member 'APlayerPawn_Generic_Parent_C::OnOverlapWaterVolume' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnPartMaterials) == 0x0044F0, "Member 'APlayerPawn_Generic_Parent_C::PawnPartMaterials' has a wrong offset!");

}
