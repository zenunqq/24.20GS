#pragma once

#include "Basic.hpp"

#include "Creative_CommonDeviceFunctionLibrary_classes.hpp"
#include "Creative_CommonDeviceFunctionLibrary_parameters.hpp"

namespace SDK
{

void UCreative_CommonDeviceFunctionLibrary_C::ActorCanTrigger(class AActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class AController** Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "ActorCanTrigger");

	Params::Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger Parms{};

	Parms.Actor_To_Check = Actor_To_Check;
	Parms.Overlap_Component = Overlap_Component;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CanTrigger != nullptr)
		*CanTrigger = Parms.CanTrigger;

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}

void UCreative_CommonDeviceFunctionLibrary_C::Animate_Float_Curve(double Delta_Time, double& Current_Time, class UCurveFloat* FCurve, double Animation_Time, bool Invert_Time, class UObject* __WorldContext, double* Value, bool* bIsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Animate Float Curve");

	Params::Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve Parms{};

	Parms.Delta_Time = Delta_Time;
	Parms.Current_Time = Current_Time;
	Parms.FCurve = FCurve;
	Parms.Animation_Time = Animation_Time;
	Parms.Invert_Time = Invert_Time;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Current_Time = Parms.Current_Time;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (bIsComplete != nullptr)
		*bIsComplete = Parms.bIsComplete;
}

void UCreative_CommonDeviceFunctionLibrary_C::Apply_Vent_Recently_Launched_Tag_or_Abort_Launch(class AActor* Actor_To_Launch, class AActor* Vent_Actor, class UObject* __WorldContext, bool* ShouldLaunch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Apply Vent Recently Launched Tag or Abort Launch");

	Params::Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch Parms{};

	Parms.Actor_To_Launch = Actor_To_Launch;
	Parms.Vent_Actor = Vent_Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ShouldLaunch != nullptr)
		*ShouldLaunch = Parms.ShouldLaunch;
}

void UCreative_CommonDeviceFunctionLibrary_C::AwardScore(class AActor* Actor, int32 Score, EAwardScoreType Type, class AController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "AwardScore");

	Params::Creative_CommonDeviceFunctionLibrary_C_AwardScore Parms{};

	Parms.Actor = Actor;
	Parms.Score = Score;
	Parms.Type = Type;
	Parms.Controller = Controller;
	Parms.Minigame_Logic = Minigame_Logic;
	Parms.TargetTags = std::move(TargetTags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UCreative_CommonDeviceFunctionLibrary_C::Bool_to_Bool_with_Unset(bool Input, class UObject* __WorldContext, EBoolWithUnset* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Bool to Bool with Unset");

	Params::Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset Parms{};

	Parms.Input = Input;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}

void UCreative_CommonDeviceFunctionLibrary_C::Current_Material_Matches_Base(class UStaticMeshComponent* Static_Mesh_Component, int32 MatID, class UObject* __WorldContext, bool* Material_Matches, class UMaterialInterface** Base_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Current Material Matches Base");

	Params::Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base Parms{};

	Parms.Static_Mesh_Component = Static_Mesh_Component;
	Parms.MatID = MatID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Material_Matches != nullptr)
		*Material_Matches = Parms.Material_Matches;

	if (Base_Material != nullptr)
		*Base_Material = Parms.Base_Material;
}

void UCreative_CommonDeviceFunctionLibrary_C::GenerateUniqueMaterialName(class UPrimitiveComponent* PrimitiveComponent, const class FString& Name_0, class UObject* __WorldContext, class FName* UniqueName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GenerateUniqueMaterialName");

	Params::Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.Name_0 = std::move(Name_0);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (UniqueName != nullptr)
		*UniqueName = Parms.UniqueName;
}

void UCreative_CommonDeviceFunctionLibrary_C::Get_Driver_or_Pawn_Controller(class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class AController** Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Driver or Pawn Controller");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller Parms{};

	Parms.Actor_To_Check = Actor_To_Check;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Valid_Controller != nullptr)
		*Valid_Controller = Parms.Valid_Controller;

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}

void UCreative_CommonDeviceFunctionLibrary_C::Get_Dynamic_Team_Color(class AActor* Actor, class AFortMinigame* Minigame, ECreativeColorSetType Color_Type, class UObject* __WorldContext, int32* Array_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Dynamic Team Color");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color Parms{};

	Parms.Actor = Actor;
	Parms.Minigame = Minigame;
	Parms.Color_Type = Color_Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;
}

void UCreative_CommonDeviceFunctionLibrary_C::Get_PlayerState_from_NetID(const struct FUniqueNetIdRepl& Unique_Net_Id, class UObject* __WorldContext, class AFortPlayerState** Fort_Player_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get PlayerState from NetID");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID Parms{};

	Parms.Unique_Net_Id = std::move(Unique_Net_Id);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Fort_Player_State != nullptr)
		*Fort_Player_State = Parms.Fort_Player_State;
}

void UCreative_CommonDeviceFunctionLibrary_C::Get_Team_Color_For_Team_Option(class AActor* ContextActor, const struct FCreativeTeamOption& TeamOption, class UObject* __WorldContext, struct FLinearColor* Base_Color, struct FLinearColor* Light_Color, struct FLinearColor* Bold_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Team Color For Team Option");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option Parms{};

	Parms.ContextActor = ContextActor;
	Parms.TeamOption = std::move(TeamOption);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Base_Color != nullptr)
		*Base_Color = std::move(Parms.Base_Color);

	if (Light_Color != nullptr)
		*Light_Color = std::move(Parms.Light_Color);

	if (Bold_Color != nullptr)
		*Bold_Color = std::move(Parms.Bold_Color);
}

void UCreative_CommonDeviceFunctionLibrary_C::Get_Team_Color_Index_from_Tag(class AActor* Actor_with_Tag, class AFortMinigame* Minigame, class UObject* __WorldContext, int32* Array_Index, ECreativeColorSetType* Color_Type_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Team Color Index from Tag");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag Parms{};

	Parms.Actor_with_Tag = Actor_with_Tag;
	Parms.Minigame = Minigame;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;

	if (Color_Type_Out != nullptr)
		*Color_Type_Out = Parms.Color_Type_Out;
}

int32 UCreative_CommonDeviceFunctionLibrary_C::Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int32 Team_Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Team Color Index or Team Index");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Team_Index = Team_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCreative_CommonDeviceFunctionLibrary_C::GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GetMID");

	Params::Creative_CommonDeviceFunctionLibrary_C_GetMID Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mid != nullptr)
		*Mid = Parms.Mid;
}

void UCreative_CommonDeviceFunctionLibrary_C::GetMID_FromMaterial(class UPrimitiveComponent* Target, int32 Index_0, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GetMID_FromMaterial");

	Params::Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial Parms{};

	Parms.Target = Target;
	Parms.Index_0 = Index_0;
	Parms.SourceMaterial = SourceMaterial;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mid != nullptr)
		*Mid = Parms.Mid;
}

void UCreative_CommonDeviceFunctionLibrary_C::Give_Ammo_To_Inventory_Owner(TScriptInterface<class IFortInventoryOwnerInterface> Inventory_Owner, class UFortWorldItemDefinition* World_Item_Definition, int32 Pickup_Instigator_Handle, const TMap<TSoftObjectPtr<class UFortWorldItemDefinition>, int32>& AmmoToGiveItemDefinitionMap, int32 DefaultAmmoToGive, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Give Ammo To Inventory Owner");

	Params::Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner Parms{};

	Parms.Inventory_Owner = Inventory_Owner;
	Parms.World_Item_Definition = World_Item_Definition;
	Parms.Pickup_Instigator_Handle = Pickup_Instigator_Handle;
	Parms.AmmoToGiveItemDefinitionMap = std::move(AmmoToGiveItemDefinitionMap);
	Parms.DefaultAmmoToGive = DefaultAmmoToGive;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UCreative_CommonDeviceFunctionLibrary_C::IndexToTeam(int32 Index_0, class UObject* __WorldContext, uint8* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IndexToTeam");

	Params::Creative_CommonDeviceFunctionLibrary_C_IndexToTeam Parms{};

	Parms.Index_0 = Index_0;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}

void UCreative_CommonDeviceFunctionLibrary_C::Is_Matching_Channel_ID(class UFortGameplayMessageComponentBase* A, class UFortGameplayMessageComponentBase* B, class UObject* __WorldContext, bool* Matches)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Is Matching Channel ID");

	Params::Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Matches != nullptr)
		*Matches = Parms.Matches;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsActivatedOnPhase(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsActivatedOnPhase");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase Parms{};

	Parms.State = State;
	Parms.PhaseIndex = PhaseIndex;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsEnabledPhaseMatch(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsEnabledPhaseMatch");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch Parms{};

	Parms.State = State;
	Parms.PhaseIndex = PhaseIndex;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsInEditor(class UObject* __WorldContext, bool* TRUE_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsInEditor");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsInEditor Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TRUE_0 != nullptr)
		*TRUE_0 = Parms.TRUE_0;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsInPlayMode(const class AActor*& Actor, class UObject* __WorldContext, bool* Play_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsInPlayMode");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Play_Mode != nullptr)
		*Play_Mode = Parms.Play_Mode;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsLocalPawn(class AActor* Actor, class UObject* __WorldContext, bool* IsLocalPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsLocalPawn");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsLocalPawn_0 != nullptr)
		*IsLocalPawn_0 = Parms.IsLocalPawn_0;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsLogicInPlayMode(const class UFortMinigameLogicComponent*& Logic, class UObject* __WorldContext, bool* Play_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsLogicInPlayMode");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode Parms{};

	Parms.Logic = Logic;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Play_Mode != nullptr)
		*Play_Mode = Parms.Play_Mode;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsOnUnpublishedIsland(const class AActor* Actor, class UObject* __WorldContext, bool* Edit_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsOnUnpublishedIsland");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Edit_Mode != nullptr)
		*Edit_Mode = Parms.Edit_Mode;
}

void UCreative_CommonDeviceFunctionLibrary_C::IsValidTeam(int32 Team_to_Check, const class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsValidTeam");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsValidTeam Parms{};

	Parms.Team_to_Check = Team_to_Check;
	Parms.Actor_To_Check = Actor_To_Check;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

void UCreative_CommonDeviceFunctionLibrary_C::MatchesTagReturnMatch(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& tag, bool ExactMatch, class UObject* __WorldContext, bool* TagFound, struct FGameplayTag* FirstMatchingTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "MatchesTagReturnMatch");

	Params::Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch Parms{};

	Parms.TagContainer = std::move(TagContainer);
	Parms.tag = std::move(tag);
	Parms.ExactMatch = ExactMatch;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TagFound != nullptr)
		*TagFound = Parms.TagFound;

	if (FirstMatchingTag != nullptr)
		*FirstMatchingTag = std::move(Parms.FirstMatchingTag);
}

void UCreative_CommonDeviceFunctionLibrary_C::Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, class UMaterialInstanceDynamic*& Target_MID, int32 MatID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Reattach or Create MID");

	Params::Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID Parms{};

	Parms.Mesh = Mesh;
	Parms.Target_MID = Target_MID;
	Parms.MatID = MatID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Target_MID = Parms.Target_MID;
}

void UCreative_CommonDeviceFunctionLibrary_C::Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, const TDelegate<void()>& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Refresh Team Change Binding");

	Params::Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Unbind = Unbind;
	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UCreative_CommonDeviceFunctionLibrary_C::Simple_Apply_Gameplay_Effect_to_Actor(class UClass* GameplayEffect, class AActor* Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Simple Apply Gameplay Effect to Actor");

	Params::Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UCreative_CommonDeviceFunctionLibrary_C::TeamToIndex(uint8 Team, class UObject* __WorldContext, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "TeamToIndex");

	Params::Creative_CommonDeviceFunctionLibrary_C_TeamToIndex Parms{};

	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}

void UCreative_CommonDeviceFunctionLibrary_C::Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int32 Team, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Update Team Color");

	Params::Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Mesh = Mesh;
	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UCreative_CommonDeviceFunctionLibrary_C::Wrapping_Modulo(int32 A, int32 B, class UObject* __WorldContext, int32* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Wrapping Modulo");

	Params::Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}

}
