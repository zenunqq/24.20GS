#pragma once

#include "Basic.hpp"

#include "MeshNetwork_classes.hpp"
#include "MeshNetwork_parameters.hpp"

namespace SDK
{

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "OnRep_ConnectedToRoot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AMeshBeaconClient::OnRep_MeshPingTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "OnRep_MeshPingTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AMeshBeaconClient::OnRep_ParentIds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "OnRep_ParentIds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AMeshBeaconClient::ServerSetClientId(const class FString& NewClientId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "ServerSetClientId");

	Params::MeshBeaconClient_ServerSetClientId Parms{};

	Parms.NewClientId = std::move(NewClientId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AMeshBeaconClient::ServerUpdateLevelVisibility(const struct FUpdateLevelVisibilityLevelInfo& LevelVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateLevelVisibility");

	Params::MeshBeaconClient_ServerUpdateLevelVisibility Parms{};

	Parms.LevelVisibility = std::move(LevelVisibility);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(const TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateMultipleLevelsVisibility");

	Params::MeshBeaconClient_ServerUpdateMultipleLevelsVisibility Parms{};

	Parms.LevelVisibilities = std::move(LevelVisibilities);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkComponent", "GetMeshNetworkNodeType");

	Params::MeshNetworkComponent_GetMeshNetworkNodeType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshNetworkComponent::IsConnectedToMeshRoot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkComponent", "IsConnectedToMeshRoot");

	Params::MeshNetworkComponent_IsConnectedToMeshRoot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshNetworkSubsystem::DisableMeshReplication(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "DisableMeshReplication");

	Params::MeshNetworkSubsystem_DisableMeshReplication Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshNetworkSubsystem::EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "EnableMeshReplication");

	Params::MeshNetworkSubsystem_EnableMeshReplication Parms{};

	Parms.Actor = Actor;
	Parms.MeshComponentClass = MeshComponentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetadata");

	Params::MeshNetworkSubsystem_GetMetadata Parms{};

	Parms.MetaData = std::move(MetaData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	MetaData = std::move(Parms.MetaData);
}

bool UMeshNetworkSubsystem::GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetaDataWithKey");

	Params::MeshNetworkSubsystem_GetMetaDataWithKey Parms{};

	Parms.Key = Key;
	Parms.MetaData = std::move(MetaData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	MetaData = std::move(Parms.MetaData);

	return Parms.ReturnValue;
}

void UMeshNetworkSubsystem::SetMetaData(const struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaData");

	Params::MeshNetworkSubsystem_SetMetaData Parms{};

	Parms.MetaData = std::move(MetaData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshNetworkSubsystem::SetMetaDataWithKey(class FName Key, const struct FMeshMetaDataStruct& MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaDataWithKey");

	Params::MeshNetworkSubsystem_SetMetaDataWithKey Parms{};

	Parms.Key = Key;
	Parms.MetaData = std::move(MetaData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMeshNetworkSubsystem::GetConnectedToRoot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetConnectedToRoot");

	Params::MeshNetworkSubsystem_GetConnectedToRoot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetGameServerNodeType");

	Params::MeshNetworkSubsystem_GetGameServerNodeType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshNetworkSubsystem", "GetMeshNetworkNodeType");

	Params::MeshNetworkSubsystem_GetMeshNetworkNodeType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
