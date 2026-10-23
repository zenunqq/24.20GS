#pragma once

#include "Basic.hpp"

#include "CreativeDataChannelTriggerRuntime_classes.hpp"
#include "CreativeDataChannelTriggerRuntime_parameters.hpp"

namespace SDK
{

void ACreativeDataChannelTarget::FireEvent(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTarget", "FireEvent");

	Params::CreativeDataChannelTarget_FireEvent Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);
}

void ACreativeDataChannelTarget::OnRep_Events()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTarget", "OnRep_Events");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTarget::TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTarget", "TestCreativeDataChannelTarget");

	Params::CreativeDataChannelTarget_TestCreativeDataChannelTarget Parms{};

	Parms.TestEvents = std::move(TestEvents);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_BallCoords()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_BallCoords");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_FinaleState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_FinaleState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_MatchState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MatchState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_MediaStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_MediaStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_Overtime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_Overtime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_PlayerBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoost");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_PlayerBoostCollected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoostCollected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_PlayerCoords()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerCoords");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_PlayerNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerNames");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_ScoreboardBestOf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardBestOf");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_ScoreboardTimeLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardTimeLeft");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_ScoreTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTeam");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_ScoreTotal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTotal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_SeriesState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_SeriesState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_TeamNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_TeamNames");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::OnRep_VersionByte()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_VersionByte");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACreativeDataChannelTargetRL::ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeDataChannelTargetRL", "ReportServerStateStreamError");

	Params::CreativeDataChannelTargetRL_ReportServerStateStreamError Parms{};

	Parms.Error = std::move(Error);
	Parms.UID = std::move(UID);
	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
