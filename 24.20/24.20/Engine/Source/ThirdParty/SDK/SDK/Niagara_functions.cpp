#pragma once

#include "Basic.hpp"

#include "Niagara_classes.hpp"
#include "Niagara_parameters.hpp"

namespace SDK
{

bool UNiagaraDataChannelReader::InitAccess(class UActorComponent* OwningComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "InitAccess");

	Params::NiagaraDataChannelReader_InitAccess Parms{};

	Parms.OwningComponent = OwningComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraDataChannelReader::Num() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "Num");

	Params::NiagaraDataChannelReader_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraDataChannelReader::ReadBool(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadBool");

	Params::NiagaraDataChannelReader_ReadBool Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UNiagaraDataChannelReader::ReadFloat(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadFloat");

	Params::NiagaraDataChannelReader_ReadFloat Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraDataChannelReader::ReadInt(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadInt");

	Params::NiagaraDataChannelReader_ReadInt Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UNiagaraDataChannelReader::ReadLinearColor(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadLinearColor");

	Params::NiagaraDataChannelReader_ReadLinearColor Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuat UNiagaraDataChannelReader::ReadQuat(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadQuat");

	Params::NiagaraDataChannelReader_ReadQuat Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UNiagaraDataChannelReader::ReadVector(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector");

	Params::NiagaraDataChannelReader_ReadVector Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UNiagaraDataChannelReader::ReadVector2D(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector2D");

	Params::NiagaraDataChannelReader_ReadVector2D Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector4 UNiagaraDataChannelReader::ReadVector4(class FName VarName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelReader", "ReadVector4");

	Params::NiagaraDataChannelReader_ReadVector4 Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraDataChannelWriter::InitWrite(class UActorComponent* OwningComponent, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "InitWrite");

	Params::NiagaraDataChannelWriter_InitWrite Parms{};

	Parms.OwningComponent = OwningComponent;
	Parms.Count = Count;
	Parms.bVisibleToGame = bVisibleToGame;
	Parms.bVisibleToCPU = bVisibleToCPU;
	Parms.bVisibleToGPU = bVisibleToGPU;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraDataChannelWriter::WriteBool(class FName VarName, int32 Index_0, bool InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteBool");

	Params::NiagaraDataChannelWriter_WriteBool Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteFloat(class FName VarName, int32 Index_0, double InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteFloat");

	Params::NiagaraDataChannelWriter_WriteFloat Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteInt(class FName VarName, int32 Index_0, int32 InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteInt");

	Params::NiagaraDataChannelWriter_WriteInt Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteLinearColor(class FName VarName, int32 Index_0, const struct FLinearColor& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteLinearColor");

	Params::NiagaraDataChannelWriter_WriteLinearColor Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteQuat(class FName VarName, int32 Index_0, const struct FQuat& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteQuat");

	Params::NiagaraDataChannelWriter_WriteQuat Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteSpawnInfo(class FName VarName, int32 Index_0, const struct FNiagaraSpawnInfo& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteSpawnInfo");

	Params::NiagaraDataChannelWriter_WriteSpawnInfo Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteVector(class FName VarName, int32 Index_0, const struct FVector& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector");

	Params::NiagaraDataChannelWriter_WriteVector Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteVector2D(class FName VarName, int32 Index_0, const struct FVector2D& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector2D");

	Params::NiagaraDataChannelWriter_WriteVector2D Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataChannelWriter::WriteVector4(class FName VarName, int32 Index_0, const struct FVector4& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "WriteVector4");

	Params::NiagaraDataChannelWriter_WriteVector4 Parms{};

	Parms.VarName = VarName;
	Parms.Index_0 = Index_0;
	Parms.InData = std::move(InData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UNiagaraDataChannelWriter::Num() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelWriter", "Num");

	Params::NiagaraDataChannelWriter_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraDataChannelReader* UNiagaraDataChannelHandler::GetDataChannelReader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelHandler", "GetDataChannelReader");

	Params::NiagaraDataChannelHandler_GetDataChannelReader Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraDataChannelWriter* UNiagaraDataChannelHandler::GetDataChannelWriter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataChannelHandler", "GetDataChannelWriter");

	Params::NiagaraDataChannelHandler_GetDataChannelWriter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceStaticMesh", "OnSourceEndPlay");

	Params::NiagaraDataInterfaceStaticMesh_OnSourceEndPlay Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceUObjectPropertyReader", "SetUObjectReaderPropertyRemap");

	Params::NiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap Parms{};

	Parms.NiagaraComponent = NiagaraComponent;
	Parms.UserParameterName = UserParameterName;
	Parms.GraphName = GraphName;
	Parms.RemapName = RemapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraActor", "OnNiagaraSystemFinished");

	Params::NiagaraActor_OnNiagaraSystemFinished Parms{};

	Parms.FinishedComponent = FinishedComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraActor", "SetDestroyOnSystemFinish");

	Params::NiagaraActor_SetDestroyOnSystemFinish Parms{};

	Parms.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulation");

	Params::NiagaraComponent_AdvanceSimulation Parms{};

	Parms.TickCount = TickCount;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");

	Params::NiagaraComponent_AdvanceSimulationByTime Parms{};

	Parms.SimulateTime = SimulateTime;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::ClearEmitterFixedBounds(class FName EmitterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "ClearEmitterFixedBounds");

	Params::NiagaraComponent_ClearEmitterFixedBounds Parms{};

	Parms.EmitterName = EmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::ClearSimCache(bool bResetSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "ClearSimCache");

	Params::NiagaraComponent_ClearSimCache Parms{};

	Parms.bResetSystem = bResetSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::ClearSystemFixedBounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "ClearSystemFixedBounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetDataInterface");

	Params::NiagaraComponent_GetDataInterface Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");

	Params::NiagaraComponent_GetNiagaraParticlePositions_DebugOnly Parms{};

	Parms.InEmitterName = std::move(InEmitterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");

	Params::NiagaraComponent_GetNiagaraParticleValues_DebugOnly Parms{};

	Parms.InEmitterName = std::move(InEmitterName);
	Parms.InValueName = std::move(InValueName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");

	Params::NiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly Parms{};

	Parms.InEmitterName = std::move(InEmitterName);
	Parms.InValueName = std::move(InValueName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraComponent::InitForPerformanceBaseline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "InitForPerformanceBaseline");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::ReinitializeSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "ReinitializeSystem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::ResetSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "ResetSystem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SeekToDesiredAge");

	Params::NiagaraComponent_SeekToDesiredAge Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetAgeUpdateMode");

	Params::NiagaraComponent_SetAgeUpdateMode Parms{};

	Parms.InAgeUpdateMode = InAgeUpdateMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetAllowScalability");

	Params::NiagaraComponent_SetAllowScalability Parms{};

	Parms.bAllow = bAllow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetAsset");

	Params::NiagaraComponent_SetAsset Parms{};

	Parms.InAsset = InAsset;
	Parms.bResetExistingOverrideParameters = bResetExistingOverrideParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetAutoDestroy");

	Params::NiagaraComponent_SetAutoDestroy Parms{};

	Parms.bInAutoDestroy = bInAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");

	Params::NiagaraComponent_SetCanRenderWhileSeeking Parms{};

	Parms.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetCustomTimeDilation(float Dilation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetCustomTimeDilation");

	Params::NiagaraComponent_SetCustomTimeDilation Parms{};

	Parms.Dilation = Dilation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetDesiredAge");

	Params::NiagaraComponent_SetDesiredAge Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetEmitterFixedBounds(class FName EmitterName, const struct FBox& LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetEmitterFixedBounds");

	Params::NiagaraComponent_SetEmitterFixedBounds Parms{};

	Parms.EmitterName = EmitterName;
	Parms.LocalBounds = std::move(LocalBounds);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetForceLocalPlayerEffect(bool bIsPlayerEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetForceLocalPlayerEffect");

	Params::NiagaraComponent_SetForceLocalPlayerEffect Parms{};

	Parms.bIsPlayerEffect = bIsPlayerEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetForceSolo");

	Params::NiagaraComponent_SetForceSolo Parms{};

	Parms.bInForceSolo = bInForceSolo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetGpuComputeDebug");

	Params::NiagaraComponent_SetGpuComputeDebug Parms{};

	Parms.bEnableDebug = bEnableDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::NiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta Parms{};

	Parms.bLock = bLock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetMaxSimTime");

	Params::NiagaraComponent_SetMaxSimTime Parms{};

	Parms.InMaxTime = InMaxTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");

	Params::NiagaraComponent_SetNiagaraVariableActor Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");

	Params::NiagaraComponent_SetNiagaraVariableBool Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");

	Params::NiagaraComponent_SetNiagaraVariableFloat Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");

	Params::NiagaraComponent_SetNiagaraVariableInt Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");

	Params::NiagaraComponent_SetNiagaraVariableLinearColor Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableMatrix(const class FString& InVariableName, const struct FMatrix& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableMatrix");

	Params::NiagaraComponent_SetNiagaraVariableMatrix Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableObject");

	Params::NiagaraComponent_SetNiagaraVariableObject Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariablePosition(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariablePosition");

	Params::NiagaraComponent_SetNiagaraVariablePosition Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");

	Params::NiagaraComponent_SetNiagaraVariableQuat Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");

	Params::NiagaraComponent_SetNiagaraVariableVec2 Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");

	Params::NiagaraComponent_SetNiagaraVariableVec3 Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");

	Params::NiagaraComponent_SetNiagaraVariableVec4 Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetPaused");

	Params::NiagaraComponent_SetPaused Parms{};

	Parms.bInPaused = bInPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetPreviewLODDistance");

	Params::NiagaraComponent_SetPreviewLODDistance Parms{};

	Parms.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	Parms.PreviewLODDistance = PreviewLODDistance;
	Parms.PreviewMaxDistance = PreviewMaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetRandomSeedOffset(int32 NewRandomSeedOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetRandomSeedOffset");

	Params::NiagaraComponent_SetRandomSeedOffset Parms{};

	Parms.NewRandomSeedOffset = NewRandomSeedOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetRenderingEnabled");

	Params::NiagaraComponent_SetRenderingEnabled Parms{};

	Parms.bInRenderingEnabled = bInRenderingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetSeekDelta");

	Params::NiagaraComponent_SetSeekDelta Parms{};

	Parms.InSeekDelta = InSeekDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetSimCache(class UNiagaraSimCache* SimCache_0, bool bResetSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetSimCache");

	Params::NiagaraComponent_SetSimCache Parms{};

	Parms.SimCache_0 = SimCache_0;
	Parms.bResetSystem = bResetSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetSystemFixedBounds(const struct FBox& LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetSystemFixedBounds");

	Params::NiagaraComponent_SetSystemFixedBounds Parms{};

	Parms.LocalBounds = std::move(LocalBounds);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetTickBehavior");

	Params::NiagaraComponent_SetTickBehavior Parms{};

	Parms.NewTickBehavior = NewTickBehavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableActor(class FName InVariableName, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableActor");

	Params::NiagaraComponent_SetVariableActor Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableBool(class FName InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableBool");

	Params::NiagaraComponent_SetVariableBool Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableFloat(class FName InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableFloat");

	Params::NiagaraComponent_SetVariableFloat Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableInt(class FName InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableInt");

	Params::NiagaraComponent_SetVariableInt Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableLinearColor(class FName InVariableName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableLinearColor");

	Params::NiagaraComponent_SetVariableLinearColor Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMaterial");

	Params::NiagaraComponent_SetVariableMaterial Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableMatrix(class FName InVariableName, const struct FMatrix& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMatrix");

	Params::NiagaraComponent_SetVariableMatrix Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableObject(class FName InVariableName, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableObject");

	Params::NiagaraComponent_SetVariableObject Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariablePosition(class FName InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariablePosition");

	Params::NiagaraComponent_SetVariablePosition Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableQuat(class FName InVariableName, const struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableQuat");

	Params::NiagaraComponent_SetVariableQuat Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableStaticMesh(class FName InVariableName, class UStaticMesh* InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableStaticMesh");

	Params::NiagaraComponent_SetVariableStaticMesh Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableTexture(class FName InVariableName, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTexture");

	Params::NiagaraComponent_SetVariableTexture Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTextureRenderTarget");

	Params::NiagaraComponent_SetVariableTextureRenderTarget Parms{};

	Parms.InVariableName = InVariableName;
	Parms.TextureRenderTarget = TextureRenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec2");

	Params::NiagaraComponent_SetVariableVec2 Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableVec3(class FName InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec3");

	Params::NiagaraComponent_SetVariableVec3 Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraComponent::SetVariableVec4(class FName InVariableName, const struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec4");

	Params::NiagaraComponent_SetVariableVec4 Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetAgeUpdateMode");

	Params::NiagaraComponent_GetAgeUpdateMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::GetAllowScalability() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetAllowScalability");

	Params::NiagaraComponent_GetAllowScalability Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraSystem* UNiagaraComponent::GetAsset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetAsset");

	Params::NiagaraComponent_GetAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraComponent::GetCustomTimeDilation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetCustomTimeDilation");

	Params::NiagaraComponent_GetCustomTimeDilation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraComponent::GetDesiredAge() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetDesiredAge");

	Params::NiagaraComponent_GetDesiredAge Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBox UNiagaraComponent::GetEmitterFixedBounds(class FName EmitterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetEmitterFixedBounds");

	Params::NiagaraComponent_GetEmitterFixedBounds Parms{};

	Parms.EmitterName = EmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::GetForceLocalPlayerEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetForceLocalPlayerEffect");

	Params::NiagaraComponent_GetForceLocalPlayerEffect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::GetForceSolo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetForceSolo");

	Params::NiagaraComponent_GetForceSolo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::NiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraComponent::GetMaxSimTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetMaxSimTime");

	Params::NiagaraComponent_GetMaxSimTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraComponent::GetPreviewLODDistance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistance");

	Params::NiagaraComponent_GetPreviewLODDistance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::GetPreviewLODDistanceEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistanceEnabled");

	Params::NiagaraComponent_GetPreviewLODDistanceEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraComponent::GetRandomSeedOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetRandomSeedOffset");

	Params::NiagaraComponent_GetRandomSeedOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraComponent::GetSeekDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetSeekDelta");

	Params::NiagaraComponent_GetSeekDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraSimCache* UNiagaraComponent::GetSimCache() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetSimCache");

	Params::NiagaraComponent_GetSimCache Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBox UNiagaraComponent::GetSystemFixedBounds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetSystemFixedBounds");

	Params::NiagaraComponent_GetSystemFixedBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "GetTickBehavior");

	Params::NiagaraComponent_GetTickBehavior Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraComponent::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraComponent", "IsPaused");

	Params::NiagaraComponent_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraDataChannelHandler* UNiagaraDataChannelLibrary::GetNiagaraDataChannel(const class UObject* WorldContextObject, class FName Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataChannelLibrary", "GetNiagaraDataChannel");

	Params::NiagaraDataChannelLibrary_GetNiagaraDataChannel Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBool");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBoolValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColor");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColorValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloat");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloatValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPosition");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPositionValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuat");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuatValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2D");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2DValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVectorValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<bool>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBool");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const bool& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBoolValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FLinearColor>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColor");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FLinearColor& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColorValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<float>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloat");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, float Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloatValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<int32>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, int32 Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPosition");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPositionValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FQuat>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuat");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FQuat& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuatValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<int32>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, int32 Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector2D>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2D");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector2D& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2DValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector4>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4 Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = std::move(ArrayData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector4& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4Value");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVectorValue");

	Params::NiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index_0 = Index_0;
	Parms.Value = std::move(Value);
	Parms.bSizeToFit = bSizeToFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void INiagaraParticleCallbackHandler::ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParticleCallbackHandler", "ReceiveParticleData");

	Params::NiagaraParticleCallbackHandler_ReceiveParticleData Parms{};

	Parms.Data = std::move(Data);
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = std::move(SimulationPositionOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillRawTexture2D");

	Params::NiagaraDataInterfaceGrid2DCollection_FillRawTexture2D Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TilesY != nullptr)
		*TilesY = Parms.TilesY;

	return Parms.ReturnValue;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillTexture2D");

	Params::NiagaraDataInterfaceGrid2DCollection_FillTexture2D Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;
	Parms.AttributeIndex = AttributeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetRawTextureSize");

	Params::NiagaraDataInterfaceGrid2DCollection_GetRawTextureSize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;
}

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetTextureSize");

	Params::NiagaraDataInterfaceGrid2DCollection_GetTextureSize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillRawVolumeTexture");

	Params::NiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TilesY != nullptr)
		*TilesY = Parms.TilesY;

	if (TileZ != nullptr)
		*TileZ = Parms.TileZ;

	return Parms.ReturnValue;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillVolumeTexture");

	Params::NiagaraDataInterfaceGrid3DCollection_FillVolumeTexture Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;
	Parms.AttributeIndex = AttributeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetRawTextureSize");

	Params::NiagaraDataInterfaceGrid3DCollection_GetRawTextureSize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	if (SizeZ != nullptr)
		*SizeZ = Parms.SizeZ;
}

void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetTextureSize");

	Params::NiagaraDataInterfaceGrid3DCollection_GetTextureSize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	if (SizeZ != nullptr)
		*SizeZ = Parms.SizeZ;
}

void UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<class AActor*>& SourceActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraDIRigidMeshCollisionFunctionLibrary", "SetSourceActors");

	Params::NiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.SourceActors = std::move(SourceActors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraDataInterfaceSkeletalMesh::OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraDataInterfaceSkeletalMesh", "OnSourceEndPlay");

	Params::NiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "AcquireNiagaraGPURayTracedCollisionGroup");

	Params::NiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");

	Params::NiagaraFunctionLibrary_GetNiagaraParameterCollection Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Collection = Collection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableSkeletalMeshComponent");

	Params::NiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMesh");

	Params::NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.StaticMesh = StaticMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMeshComponent");

	Params::NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "ReleaseNiagaraGPURayTracedCollisionGroup");

	Params::NiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CollisionGroup = CollisionGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetActorNiagaraGPURayTracedCollisionGroup");

	Params::NiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;
	Parms.CollisionGroup = CollisionGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetComponentNiagaraGPURayTracedCollisionGroup");

	Params::NiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Primitive = Primitive;
	Parms.CollisionGroup = CollisionGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& FilteredBones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredBones");

	Params::NiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.FilteredBones = std::move(FilteredBones);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& FilteredSockets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredSockets");

	Params::NiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.FilteredSockets = std::move(FilteredSockets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& SamplingRegions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceSamplingRegions");

	Params::NiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.SamplingRegions = std::move(SamplingRegions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetTexture2DArrayObject");

	Params::NiagaraFunctionLibrary_SetTexture2DArrayObject Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetTextureObject");

	Params::NiagaraFunctionLibrary_SetTextureObject Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraFunctionLibrary::SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetVolumeTextureObject");

	Params::NiagaraFunctionLibrary_SetVolumeTextureObject Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");

	Params::NiagaraFunctionLibrary_SpawnSystemAtLocation Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SystemTemplate = SystemTemplate;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.Scale = std::move(Scale);
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;
	Parms.bPreCullCheck = bPreCullCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocationWithParams");

	Params::NiagaraFunctionLibrary_SpawnSystemAtLocationWithParams Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnParams != nullptr)
		*SpawnParams = std::move(Parms.SpawnParams);

	return Parms.ReturnValue;
}

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");

	Params::NiagaraFunctionLibrary_SpawnSystemAttached Parms{};

	Parms.SystemTemplate = SystemTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;
	Parms.bPreCullCheck = bPreCullCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttachedWithParams");

	Params::NiagaraFunctionLibrary_SpawnSystemAttachedWithParams Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnParams != nullptr)
		*SpawnParams = std::move(Parms.SpawnParams);

	return Parms.ReturnValue;
}

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");

	Params::NiagaraParameterCollectionInstance_GetBoolParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");

	Params::NiagaraParameterCollectionInstance_GetColorParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraParameterCollectionInstance::GetFloatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");

	Params::NiagaraParameterCollectionInstance_GetFloatParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraParameterCollectionInstance::GetIntParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");

	Params::NiagaraParameterCollectionInstance_GetIntParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");

	Params::NiagaraParameterCollectionInstance_GetQuatParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");

	Params::NiagaraParameterCollectionInstance_GetVector2DParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");

	Params::NiagaraParameterCollectionInstance_GetVector4Parameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");

	Params::NiagaraParameterCollectionInstance_GetVectorParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraParameterCollectionInstance::SetBoolParameter(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");

	Params::NiagaraParameterCollectionInstance_SetBoolParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");

	Params::NiagaraParameterCollectionInstance_SetColorParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetFloatParameter(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");

	Params::NiagaraParameterCollectionInstance_SetFloatParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetIntParameter(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");

	Params::NiagaraParameterCollectionInstance_SetIntParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");

	Params::NiagaraParameterCollectionInstance_SetQuatParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");

	Params::NiagaraParameterCollectionInstance_SetVector2DParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");

	Params::NiagaraParameterCollectionInstance_SetVector4Parameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraParameterCollectionInstance::SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");

	Params::NiagaraParameterCollectionInstance_SetVectorParameter Parms{};

	Parms.InVariableName = std::move(InVariableName);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UNiagaraSystem* UNiagaraBaselineController::GetSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraBaselineController", "GetSystem");

	Params::NiagaraBaselineController_GetSystem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraBaselineController::OnBeginTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraBaselineController", "OnBeginTest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNiagaraBaselineController::OnEndTest(const struct FNiagaraPerfBaselineStats& Stats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraBaselineController", "OnEndTest");

	Params::NiagaraBaselineController_OnEndTest Parms{};

	Parms.Stats = std::move(Stats);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraBaselineController::OnOwnerTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraBaselineController", "OnOwnerTick");

	Params::NiagaraBaselineController_OnOwnerTick Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UNiagaraBaselineController::OnTickTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraBaselineController", "OnTickTest");

	Params::NiagaraBaselineController_OnTickTest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ANiagaraPreviewBase::SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetLabelText");

	Params::NiagaraPreviewBase_SetLabelText Parms{};

	Parms.InXAxisText = std::move(InXAxisText);
	Parms.InYAxisText = std::move(InYAxisText);

	UObject::ProcessEvent(Func, &Parms);
}

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetSystem");

	Params::NiagaraPreviewBase_SetSystem Parms{};

	Parms.InSystem = InSystem;

	UObject::ProcessEvent(Func, &Parms);
}

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewAxis", "ApplyToPreview");

	Params::NiagaraPreviewAxis_ApplyToPreview Parms{};

	Parms.PreviewComponent = PreviewComponent;
	Parms.PreviewIndex = PreviewIndex;
	Parms.bIsXAxis = bIsXAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLabelText != nullptr)
		*OutLabelText = std::move(Parms.OutLabelText);
}

int32 UNiagaraPreviewAxis::Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewAxis", "Num");

	Params::NiagaraPreviewAxis_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewGrid", "ActivatePreviews");

	Params::NiagaraPreviewGrid_ActivatePreviews Parms{};

	Parms.bReset = bReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewGrid", "DeactivatePreviews");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewGrid", "GetPreviews");

	Params::NiagaraPreviewGrid_GetPreviews Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPreviews != nullptr)
		*OutPreviews = std::move(Parms.OutPreviews);
}

void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraPreviewGrid", "SetPaused");

	Params::NiagaraPreviewGrid_SetPaused Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraScript", "RaiseOnGPUCompilationComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

ENiagaraSimCacheAttributeCaptureMode UNiagaraSimCache::GetAttributeCaptureMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetAttributeCaptureMode");

	Params::NiagaraSimCache_GetAttributeCaptureMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UNiagaraSimCache::GetEmitterName(int32 EmitterIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterName");

	Params::NiagaraSimCache_GetEmitterName Parms{};

	Parms.EmitterIndex = EmitterIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UNiagaraSimCache::GetEmitterNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterNames");

	Params::NiagaraSimCache_GetEmitterNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraSimCache::GetNumEmitters() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumEmitters");

	Params::NiagaraSimCache_GetNumEmitters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNiagaraSimCache::GetNumFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumFrames");

	Params::NiagaraSimCache_GetNumFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNiagaraSimCache::GetStartSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "GetStartSeconds");

	Params::NiagaraSimCache_GetStartSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraSimCache::IsCacheValid() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "IsCacheValid");

	Params::NiagaraSimCache_IsCacheValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNiagaraSimCache::IsEmpty() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "IsEmpty");

	Params::NiagaraSimCache_IsEmpty Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNiagaraSimCache::ReadColorAttribute(TArray<struct FLinearColor>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadColorAttribute");

	Params::NiagaraSimCache_ReadColorAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadFloatAttribute(TArray<float>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadFloatAttribute");

	Params::NiagaraSimCache_ReadFloatAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadIntAttribute(TArray<int32>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadIntAttribute");

	Params::NiagaraSimCache_ReadIntAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadPositionAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttribute");

	Params::NiagaraSimCache_ReadPositionAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadPositionAttributeWithRebase(TArray<struct FVector>* OutValues, const struct FTransform& Transform, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttributeWithRebase");

	Params::NiagaraSimCache_ReadPositionAttributeWithRebase Parms{};

	Parms.Transform = std::move(Transform);
	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadQuatAttribute(TArray<struct FQuat>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttribute");

	Params::NiagaraSimCache_ReadQuatAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadQuatAttributeWithRebase(TArray<struct FQuat>* OutValues, const struct FQuat& Quat, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttributeWithRebase");

	Params::NiagaraSimCache_ReadQuatAttributeWithRebase Parms{};

	Parms.Quat = std::move(Quat);
	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadVector2Attribute(TArray<struct FVector2D>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector2Attribute");

	Params::NiagaraSimCache_ReadVector2Attribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadVector4Attribute(TArray<struct FVector4>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector4Attribute");

	Params::NiagaraSimCache_ReadVector4Attribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

void UNiagaraSimCache::ReadVectorAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVectorAttribute");

	Params::NiagaraSimCache_ReadVectorAttribute Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation_0, float AdvanceDeltaTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheMultiFrame");

	Params::AsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = std::move(CreateParameters);
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.NumFrames = NumFrames;
	Parms.CaptureRate = CaptureRate;
	Parms.bAdvanceSimulation_0 = bAdvanceSimulation_0;
	Parms.AdvanceDeltaTime_0 = AdvanceDeltaTime_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;
}

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation_0, float AdvanceDeltaTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheUntilComplete");

	Params::AsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = std::move(CreateParameters);
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.CaptureRate = CaptureRate;
	Parms.bAdvanceSimulation_0 = bAdvanceSimulation_0;
	Parms.AdvanceDeltaTime_0 = AdvanceDeltaTime_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;
}

bool UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraSimCacheFunctionLibrary", "CaptureNiagaraSimCacheImmediate");

	Params::NiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = std::move(CreateParameters);
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.bAdvanceSimulation = bAdvanceSimulation;
	Parms.AdvanceDeltaTime = AdvanceDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;
}

class UNiagaraSimCache* UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraSimCacheFunctionLibrary", "CreateNiagaraSimCache");

	Params::NiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
