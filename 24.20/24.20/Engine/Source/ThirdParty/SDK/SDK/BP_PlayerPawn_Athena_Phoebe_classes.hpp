#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerPawn_Athena_classes.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) ABP_PlayerPawn_Athena_Phoebe_C : public APlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerPawn_Athena_Phoebe_C;
	class FName                                   AIEvaluator_CharacterLaunchedKeyName;
	bool                                          bUseCosmeticVariants;
	uint8                                         Pad_605D[0x3];
	int32                                         CosmeticVariantID;

public:
	void AssignCosmeticVariant();
	void ComputeCosmeticVariantID();
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int32 EntryPoint);
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPawn_Athena_Phoebe_C">();
	}
	static class ABP_PlayerPawn_Athena_Phoebe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerPawn_Athena_Phoebe_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_PlayerPawn_Athena_Phoebe_C) == 0x000010, "Wrong alignment on ABP_PlayerPawn_Athena_Phoebe_C");
static_assert(sizeof(ABP_PlayerPawn_Athena_Phoebe_C) == 0x006070, "Wrong size on ABP_PlayerPawn_Athena_Phoebe_C");
static_assert(offsetof(ABP_PlayerPawn_Athena_Phoebe_C, UberGraphFrame_BP_PlayerPawn_Athena_Phoebe_C) == 0x006050, "Member 'ABP_PlayerPawn_Athena_Phoebe_C::UberGraphFrame_BP_PlayerPawn_Athena_Phoebe_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Athena_Phoebe_C, AIEvaluator_CharacterLaunchedKeyName) == 0x006058, "Member 'ABP_PlayerPawn_Athena_Phoebe_C::AIEvaluator_CharacterLaunchedKeyName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Athena_Phoebe_C, bUseCosmeticVariants) == 0x00605C, "Member 'ABP_PlayerPawn_Athena_Phoebe_C::bUseCosmeticVariants' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_Athena_Phoebe_C, CosmeticVariantID) == 0x006060, "Member 'ABP_PlayerPawn_Athena_Phoebe_C::CosmeticVariantID' has a wrong offset!");

}
