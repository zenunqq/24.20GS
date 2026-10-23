#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"
#include "VictoryCrownsRuntime_parameters.hpp"

namespace SDK
{

void UFortVictoryCrownViewModel::HandleOnHasWonCrownInMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVictoryCrownViewModel", "HandleOnHasWonCrownInMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortVictoryCrownViewModel::HandleOnHasWonRoyalRoyale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVictoryCrownViewModel", "HandleOnHasWonRoyalRoyale");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::CacheAccountItemData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "CacheAccountItemData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "DebugForceSetRoyalRoyaleAchievedCount");

	Params::FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount Parms{};

	Parms.NewRoyalRoyaleCount = NewRoyalRoyaleCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::HandleEnterAircraft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandleEnterAircraft");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::HandleExitAircraft(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandleExitAircraft");

	Params::FortControllerComponent_VictoryCrowns_HandleExitAircraft Parms{};

	Parms.ExitingController = ExitingController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandlePawnChanged");

	Params::FortControllerComponent_VictoryCrowns_HandlePawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::OnAthenaProfileInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnAthenaProfileInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::OnRep_VictoryCrownAccountData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_VictoryCrownAccountData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::OnRep_WonCrownInMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonCrownInMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_VictoryCrowns::OnRep_WonRoyalRoyale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonRoyalRoyale");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortControllerComponent_VictoryCrowns::AuthorityHasDroppedCrownItem(const class UFortItem* CrownItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasDroppedCrownItem");

	Params::FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::AuthorityHasHeldCrownItem(const class UFortItem* CrownItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasHeldCrownItem");

	Params::FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadDroppedCrownItem(const class UFortItem* CrownItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadDroppedCrownItem");

	Params::FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadHeldCrownItem(const class UFortItem* CrownItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadHeldCrownItem");

	Params::FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::AuthoritySquadHasSeenCrownItem(const class UFortItem* CrownItem, const bool bDropped) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthoritySquadHasSeenCrownItem");

	Params::FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem Parms{};

	Parms.CrownItem = CrownItem;
	Parms.bDropped = bDropped;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UFortWorldItem* UFortControllerComponent_VictoryCrowns::GetCrownInPlayerInventory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetCrownInPlayerInventory");

	Params::FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const int32 UFortControllerComponent_VictoryCrowns::GetRoyalRoyaleAchievedCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetRoyalRoyaleAchievedCount");

	Params::FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const int32 UFortControllerComponent_VictoryCrowns::GetVictoryCrownsBestowedCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetVictoryCrownsBestowedCount");

	Params::FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::HasWonCrownInMatch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonCrownInMatch");

	Params::FortControllerComponent_VictoryCrowns_HasWonCrownInMatch Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::HasWonRoyalRoyale() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonRoyalRoyale");

	Params::FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortControllerComponent_VictoryCrowns::IsCrownInPlayerInventory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "IsCrownInPlayerInventory");

	Params::FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGameStateComponent_VictoryCrowns::ClientKillFeedMessage(const class AFortPlayerStateAthena* FortPSA, bool bAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "ClientKillFeedMessage");

	Params::FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage Parms{};

	Parms.FortPSA = FortPSA;
	Parms.bAdded = bAdded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameStateComponent_VictoryCrowns::HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, const class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "HandleCrownStatusChanged");

	Params::FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged Parms{};

	Parms.FortPlayerControllerAthena = FortPlayerControllerAthena;
	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameStateComponent_VictoryCrowns::OnRep_CrownBearerPlayerStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "OnRep_CrownBearerPlayerStates");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortGameStateComponent_VictoryCrowns::IsCrownBearer(const class AFortPlayerStateAthena* FortPSA) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "IsCrownBearer");

	Params::FortGameStateComponent_VictoryCrowns_IsCrownBearer Parms{};

	Parms.FortPSA = FortPSA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPawnComponent_VictoryCrownsFrontEnd::PlaylistChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_VictoryCrownsFrontEnd", "PlaylistChanged");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortPlayerStateComponent_VictoryCrowns::GetWonRoyalRoyale() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerStateComponent_VictoryCrowns", "GetWonRoyalRoyale");

	Params::FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
