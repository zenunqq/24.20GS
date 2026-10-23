#pragma once

#include "Basic.hpp"

#include "B_Athena_PartModifier_Generic_classes.hpp"
#include "B_Athena_PartModifier_Generic_parameters.hpp"

namespace SDK
{

void AB_Athena_PartModifier_Generic_C::ActuallyChangedWeaponType(const EFortItemType& New_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "ActuallyChangedWeaponType");

	Params::B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType Parms{};

	Parms.New_Type = New_Type;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::DEBUG_Print_String(const class FString& Input_String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "DEBUG Print String");

	Params::B_Athena_PartModifier_Generic_C_DEBUG_Print_String Parms{};

	Parms.Input_String = std::move(Input_String);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::ExecuteUbergraph_B_Athena_PartModifier_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "ExecuteUbergraph_B_Athena_PartModifier_Generic");

	Params::B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::Handle_Potential_New_Weapon_Type(EFortItemType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "Handle Potential New Weapon Type");

	Params::B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::Hidden_Hand_Check(const TArray<class UFXSystemComponent*>& FX_Systems_associated_with_Hands, const class AFortWeapon* New_Weapon, const class AFortWeapon* Old_Weapon, const bool Only_Set_Niagara_Bool_Variable, bool* isHandHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "Hidden Hand Check");

	Params::B_Athena_PartModifier_Generic_C_Hidden_Hand_Check Parms{};

	Parms.FX_Systems_associated_with_Hands = std::move(FX_Systems_associated_with_Hands);
	Parms.New_Weapon = New_Weapon;
	Parms.Old_Weapon = Old_Weapon;
	Parms.Only_Set_Niagara_Bool_Variable = Only_Set_Niagara_Bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (isHandHidden != nullptr)
		*isHandHidden = Parms.isHandHidden;
}

void AB_Athena_PartModifier_Generic_C::Intermediate_Cosmetic_Stat_Changed(class FName Stat_Name, int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "Intermediate Cosmetic Stat Changed");

	Params::B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed Parms{};

	Parms.Stat_Name = Stat_Name;
	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::Is_Stage_Stat_Requirements_Met(int32 In_Stage_Number_Begin_Tested, int32 In_Stage_Threshold, int32 In_Stat_Value, int32 Current_Active_Stage_Number_0, bool* Passed_Requirements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "Is Stage Stat Requirements Met");

	Params::B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met Parms{};

	Parms.In_Stage_Number_Begin_Tested = In_Stage_Number_Begin_Tested;
	Parms.In_Stage_Threshold = In_Stage_Threshold;
	Parms.In_Stat_Value = In_Stat_Value;
	Parms.Current_Active_Stage_Number_0 = Current_Active_Stage_Number_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Passed_Requirements != nullptr)
		*Passed_Requirements = Parms.Passed_Requirements;
}

bool AB_Athena_PartModifier_Generic_C::IsPartModifierHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "IsPartModifierHidden");

	Params::B_Athena_PartModifier_Generic_C_IsPartModifierHidden Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AB_Athena_PartModifier_Generic_C::On_Begin_Emote(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On Begin Emote");

	Params::B_Athena_PartModifier_Generic_C_On_Begin_Emote Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::On_Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On Character Movement Updated");

	Params::B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = std::move(OldLocation);
	Parms.OldVelocity = std::move(OldVelocity);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::On_Cosmetic_State_Activated(class FName Stat_Name, int32 Stat_Value, int32 STAGE_Num_Being_Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On Cosmetic State Activated");

	Params::B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated Parms{};

	Parms.Stat_Name = Stat_Name;
	Parms.Stat_Value = Stat_Value;
	Parms.STAGE_Num_Being_Activated = STAGE_Num_Being_Activated;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::On_End_Emote(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On End Emote");

	Params::B_Athena_PartModifier_Generic_C_On_End_Emote Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::On_Players_Left_Changed(int32 Total_Players_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On Players Left Changed");

	Params::B_Athena_PartModifier_Generic_C_On_Players_Left_Changed Parms{};

	Parms.Total_Players_Left = Total_Players_Left;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::On_Stat_Changed(class FName State_Name, int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "On Stat Changed");

	Params::B_Athena_PartModifier_Generic_C_On_Stat_Changed Parms{};

	Parms.State_Name = State_Name;
	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::OnBeginSkydiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnBeginSkydiving");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnDelayExpired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnDelayExpired");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnEndSkydiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnEndSkydiving");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& VehicleEntered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnEnterVehicle");

	Params::B_Athena_PartModifier_Generic_C_OnEnterVehicle Parms{};

	Parms.VehicleEntered = VehicleEntered;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnExitVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnNewPlayerWeaponType(EFortItemType NewType, EFortItemType OldType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnNewPlayerWeaponType");

	Params::B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType Parms{};

	Parms.NewType = NewType;
	Parms.OldType = OldType;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnPawnAndPartChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnPostResIn");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F");

	Params::B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::PlayLibrarySound(class FName StatName, int32 StatValue, const struct FFortStatManagerTag& StatTag, bool* Success, class UAudioComponent** Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "PlayLibrarySound");

	Params::B_Athena_PartModifier_Generic_C_PlayLibrarySound Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;
	Parms.StatTag = std::move(StatTag);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Output != nullptr)
		*Output = Parms.Output;
}

void AB_Athena_PartModifier_Generic_C::PreDestruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "PreDestruction");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Generic_C::Track_Players_Left(int32 NumPlayersLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "Track Players Left");

	Params::B_Athena_PartModifier_Generic_C_Track_Players_Left Parms{};

	Parms.NumPlayersLeft = NumPlayersLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Generic_C::UpdateAudioStatValue(class UAudioComponent* AudioComponent, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Generic_C", "UpdateAudioStatValue");

	Params::B_Athena_PartModifier_Generic_C_UpdateAudioStatValue Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
