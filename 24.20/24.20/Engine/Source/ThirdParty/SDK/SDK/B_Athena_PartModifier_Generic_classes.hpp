#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Athena_PartModifier_Generic_C : public ACustomCharacterPartModifier
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	bool                                          Is_Pet_Part_Modifier;
	bool                                          Sprint_Reactive;
	uint8                                         Pad_492[0x6];
	class UAthenaPetItemDefinition*               PetClassToSpawn;
	bool                                          Emote_Reactive;
	bool                                          uses_Weapon_Controlled_Variant_Switcher;
	uint8                                         Pad_4A2[0x6];
	TSoftObjectPtr<class UAthenaCosmeticItemDefinition> Target_Cosmetic;
	struct FGameplayTag                           Channel_Tag;
	uint8                                         Pad_4D4[0x4];
	TMap<EFortItemType, struct FGameplayTag>      ForcedVariantsByItemType;
	double                                        Delay_Between_Activations;
	EFortItemType                                 Delayed_Weapon_Type;
	uint8                                         Pad_531[0x7];
	struct FTimerHandle                           WeaponVariantSwitcherDelay;
	bool                                          Watch_Cosmetic_Stat;
	uint8                                         Pad_541[0x3];
	struct FFortStatManagerTag                    Watch_Cosmetic_Stat_Tag;
	bool                                          Stage_Based_Stat_Changes;
	uint8                                         Pad_549[0x7];
	TArray<int32>                                 Stat_Thresholds;
	bool                                          Watch_Initial_Stat_Value;
	uint8                                         Pad_561[0x3];
	int32                                         Current_Active_Stage_Number;
	bool                                          Players_Left_Stat_Watch;
	bool                                          Stage_Based_Player_Left_Changes;
	uint8                                         Pad_56A[0x6];
	TArray<int32>                                 Player_Left_Thresholds;
	struct FGameplayTag                           Type_Tag;
	struct FGameplayTag                           Last_Tag;
	TMap<struct FFortStatManagerTag, struct FGameplayTag> StatCosmeticMapping;

public:
	void ActuallyChangedWeaponType(const EFortItemType& New_Type);
	void DEBUG_Print_String(const class FString& Input_String);
	void ExecuteUbergraph_B_Athena_PartModifier_Generic(int32 EntryPoint);
	void Handle_Potential_New_Weapon_Type(EFortItemType Type);
	void Hidden_Hand_Check(const TArray<class UFXSystemComponent*>& FX_Systems_associated_with_Hands, const class AFortWeapon* New_Weapon, const class AFortWeapon* Old_Weapon, const bool Only_Set_Niagara_Bool_Variable, bool* isHandHidden);
	void Intermediate_Cosmetic_Stat_Changed(class FName Stat_Name, int32 Stat_Value);
	void Is_Stage_Stat_Requirements_Met(int32 In_Stage_Number_Begin_Tested, int32 In_Stage_Threshold, int32 In_Stat_Value, int32 Current_Active_Stage_Number_0, bool* Passed_Requirements);
	bool IsPartModifierHidden();
	void On_Begin_Emote(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void On_Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void On_Cosmetic_State_Activated(class FName Stat_Name, int32 Stat_Value, int32 STAGE_Num_Being_Activated);
	void On_End_Emote(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void On_Players_Left_Changed(int32 Total_Players_Left);
	void On_Stat_Changed(class FName State_Name, int32 Stat_Value);
	void OnBeginSkydiving();
	void OnDelayExpired();
	void OnEndSkydiving();
	void OnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& VehicleEntered);
	void OnExitVehicle();
	void OnNewPlayerWeaponType(EFortItemType NewType, EFortItemType OldType);
	void OnPawnAndPartChanged();
	void OnPostResIn();
	void OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F(class FName StatName, int32 StatValue);
	void PlayLibrarySound(class FName StatName, int32 StatValue, const struct FFortStatManagerTag& StatTag, bool* Success, class UAudioComponent** Output);
	void PreDestruction();
	void Track_Players_Left(int32 NumPlayersLeft);
	void UpdateAudioStatValue(class UAudioComponent* AudioComponent, int32 StatValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_PartModifier_Generic_C">();
	}
	static class AB_Athena_PartModifier_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_PartModifier_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_PartModifier_Generic_C) == 0x000008, "Wrong alignment on AB_Athena_PartModifier_Generic_C");
static_assert(sizeof(AB_Athena_PartModifier_Generic_C) == 0x0005D8, "Wrong size on AB_Athena_PartModifier_Generic_C");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, UberGraphFrame) == 0x000480, "Member 'AB_Athena_PartModifier_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, DefaultSceneRoot) == 0x000488, "Member 'AB_Athena_PartModifier_Generic_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Is_Pet_Part_Modifier) == 0x000490, "Member 'AB_Athena_PartModifier_Generic_C::Is_Pet_Part_Modifier' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Sprint_Reactive) == 0x000491, "Member 'AB_Athena_PartModifier_Generic_C::Sprint_Reactive' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, PetClassToSpawn) == 0x000498, "Member 'AB_Athena_PartModifier_Generic_C::PetClassToSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Emote_Reactive) == 0x0004A0, "Member 'AB_Athena_PartModifier_Generic_C::Emote_Reactive' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, uses_Weapon_Controlled_Variant_Switcher) == 0x0004A1, "Member 'AB_Athena_PartModifier_Generic_C::uses_Weapon_Controlled_Variant_Switcher' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Target_Cosmetic) == 0x0004A8, "Member 'AB_Athena_PartModifier_Generic_C::Target_Cosmetic' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Channel_Tag) == 0x0004D0, "Member 'AB_Athena_PartModifier_Generic_C::Channel_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, ForcedVariantsByItemType) == 0x0004D8, "Member 'AB_Athena_PartModifier_Generic_C::ForcedVariantsByItemType' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Delay_Between_Activations) == 0x000528, "Member 'AB_Athena_PartModifier_Generic_C::Delay_Between_Activations' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Delayed_Weapon_Type) == 0x000530, "Member 'AB_Athena_PartModifier_Generic_C::Delayed_Weapon_Type' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, WeaponVariantSwitcherDelay) == 0x000538, "Member 'AB_Athena_PartModifier_Generic_C::WeaponVariantSwitcherDelay' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Watch_Cosmetic_Stat) == 0x000540, "Member 'AB_Athena_PartModifier_Generic_C::Watch_Cosmetic_Stat' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Watch_Cosmetic_Stat_Tag) == 0x000544, "Member 'AB_Athena_PartModifier_Generic_C::Watch_Cosmetic_Stat_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Stage_Based_Stat_Changes) == 0x000548, "Member 'AB_Athena_PartModifier_Generic_C::Stage_Based_Stat_Changes' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Stat_Thresholds) == 0x000550, "Member 'AB_Athena_PartModifier_Generic_C::Stat_Thresholds' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Watch_Initial_Stat_Value) == 0x000560, "Member 'AB_Athena_PartModifier_Generic_C::Watch_Initial_Stat_Value' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Current_Active_Stage_Number) == 0x000564, "Member 'AB_Athena_PartModifier_Generic_C::Current_Active_Stage_Number' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Players_Left_Stat_Watch) == 0x000568, "Member 'AB_Athena_PartModifier_Generic_C::Players_Left_Stat_Watch' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Stage_Based_Player_Left_Changes) == 0x000569, "Member 'AB_Athena_PartModifier_Generic_C::Stage_Based_Player_Left_Changes' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Player_Left_Thresholds) == 0x000570, "Member 'AB_Athena_PartModifier_Generic_C::Player_Left_Thresholds' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Type_Tag) == 0x000580, "Member 'AB_Athena_PartModifier_Generic_C::Type_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, Last_Tag) == 0x000584, "Member 'AB_Athena_PartModifier_Generic_C::Last_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Generic_C, StatCosmeticMapping) == 0x000588, "Member 'AB_Athena_PartModifier_Generic_C::StatCosmeticMapping' has a wrong offset!");

}
