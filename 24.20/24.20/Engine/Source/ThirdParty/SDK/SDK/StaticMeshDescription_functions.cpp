#pragma once

#include "Basic.hpp"

#include "StaticMeshDescription_classes.hpp"
#include "StaticMeshDescription_parameters.hpp"

namespace SDK
{

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::StaticMeshDescription_CreateCube Parms{};

	Parms.Center = std::move(Center);
	Parms.HalfExtents = std::move(HalfExtents);
	Parms.PolygonGroup = std::move(PolygonGroup);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = std::move(Parms.PolygonID_PlusX);

	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = std::move(Parms.PolygonID_MinusX);

	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = std::move(Parms.PolygonID_PlusY);

	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = std::move(Parms.PolygonID_MinusY);

	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = std::move(Parms.PolygonID_PlusZ);

	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = std::move(Parms.PolygonID_MinusZ);
}

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::StaticMeshDescription_SetPolygonGroupMaterialSlotName Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::StaticMeshDescription_SetVertexInstanceUV Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.UV = std::move(UV);
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::StaticMeshDescription_GetVertexInstanceUV Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
