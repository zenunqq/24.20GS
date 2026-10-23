#pragma once

#include "Basic.hpp"

#include "NearestNeighborModel_classes.hpp"
#include "NearestNeighborModel_parameters.hpp"

namespace SDK
{

void UNearestNeighborModel::SetNeighborCoeffs(int32 PartId, const TArray<float>& NeighborCoeffs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "SetNeighborCoeffs");

	Params::NearestNeighborModel_SetNeighborCoeffs Parms{};

	Parms.PartId = PartId;
	Parms.NeighborCoeffs = std::move(NeighborCoeffs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNearestNeighborModel::SetNeighborOffsets(int32 PartId, const TArray<float>& NeighborOffsets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "SetNeighborOffsets");

	Params::NearestNeighborModel_SetNeighborOffsets Parms{};

	Parms.PartId = PartId;
	Parms.NeighborOffsets = std::move(NeighborOffsets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNearestNeighborModel::SetNumNeighbors(int32 PartId, int32 InNumNeighbors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "SetNumNeighbors");

	Params::NearestNeighborModel_SetNumNeighbors Parms{};

	Parms.PartId = PartId;
	Parms.InNumNeighbors = InNumNeighbors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNearestNeighborModel::SetPCABasis(int32 PartId, const TArray<float>& PCABasis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "SetPCABasis");

	Params::NearestNeighborModel_SetPCABasis Parms{};

	Parms.PartId = PartId;
	Parms.PCABasis = std::move(PCABasis);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNearestNeighborModel::SetVertexMean(int32 PartId, const TArray<float>& VertexMean_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "SetVertexMean");

	Params::NearestNeighborModel_SetVertexMean Parms{};

	Parms.PartId = PartId;
	Parms.VertexMean_0 = std::move(VertexMean_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<float> UNearestNeighborModel::ClipInputs(const TArray<float>& Input) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "ClipInputs");

	Params::NearestNeighborModel_ClipInputs Parms{};

	Parms.Input = std::move(Input);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNearestNeighborModel::GetNumNeighbors(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "GetNumNeighbors");

	Params::NearestNeighborModel_GetNumNeighbors Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNearestNeighborModel::GetNumParts() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "GetNumParts");

	Params::NearestNeighborModel_GetNumParts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNearestNeighborModel::GetPartNumVerts(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "GetPartNumVerts");

	Params::NearestNeighborModel_GetPartNumVerts Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNearestNeighborModel::GetPCACoeffNum(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffNum");

	Params::NearestNeighborModel_GetPCACoeffNum Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UNearestNeighborModel::GetPCACoeffStart(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffStart");

	Params::NearestNeighborModel_GetPCACoeffStart Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<float> UNearestNeighborModel::NeighborCoeffs(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "NeighborCoeffs");

	Params::NearestNeighborModel_NeighborCoeffs Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<float> UNearestNeighborModel::NeighborOffsets(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "NeighborOffsets");

	Params::NearestNeighborModel_NeighborOffsets Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<float> UNearestNeighborModel::PCABasis(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "PCABasis");

	Params::NearestNeighborModel_PCABasis Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<float> UNearestNeighborModel::VertexMean(int32 PartId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NearestNeighborModel", "VertexMean");

	Params::NearestNeighborModel_VertexMean Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
