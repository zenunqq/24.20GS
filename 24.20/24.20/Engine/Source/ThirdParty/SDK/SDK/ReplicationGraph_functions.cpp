#pragma once

#include "Basic.hpp"

#include "ReplicationGraph_classes.hpp"
#include "ReplicationGraph_parameters.hpp"

namespace SDK
{

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, const TArray<class AActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");

	Params::ReplicationGraphDebugActor_ClientCellInfo Parms{};

	Parms.CellLocation = std::move(CellLocation);
	Parms.CellExtent = std::move(CellExtent);
	Parms.Actors = std::move(Actors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");

	Params::ReplicationGraphDebugActor_ServerPrintAllActorInfo Parms{};

	Parms.Str = std::move(Str);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintCullDistances");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetConditionalActorBreakpoint");

	Params::ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class_0, float CullDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetCullDistanceForClass");

	Params::ReplicationGraphDebugActor_ServerSetCullDistanceForClass Parms{};

	Parms.Class_0 = Class_0;
	Parms.CullDistance = CullDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class_0, int32 PeriodFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetPeriodFrameForClass");

	Params::ReplicationGraphDebugActor_ServerSetPeriodFrameForClass Parms{};

	Parms.Class_0 = Class_0;
	Parms.PeriodFrame = PeriodFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
