#pragma once

#include "Basic.hpp"

#include "MeshDescription_classes.hpp"
#include "MeshDescription_parameters.hpp"

namespace SDK
{

void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");

	Params::MeshDescriptionBase_ComputePolygonTriangulation Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FEdgeID UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdge");

	Params::MeshDescriptionBase_CreateEdge Parms{};

	Parms.VertexID0 = std::move(VertexID0);
	Parms.VertexID1 = std::move(VertexID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");

	Params::MeshDescriptionBase_CreateEdgeWithID Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.VertexID0 = std::move(VertexID0);
	Parms.VertexID1 = std::move(VertexID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FPolygonID UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygon");

	Params::MeshDescriptionBase_CreatePolygon Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;
}

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");

	Params::MeshDescriptionBase_CreatePolygonGroup Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");

	Params::MeshDescriptionBase_CreatePolygonGroupWithID Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");

	Params::MeshDescriptionBase_CreatePolygonWithID Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);
}

struct FTriangleID UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangle");

	Params::MeshDescriptionBase_CreateTriangle Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);
	Parms.VertexInstanceIDs = std::move(VertexInstanceIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");

	Params::MeshDescriptionBase_CreateTriangleWithID Parms{};

	Parms.TriangleID = std::move(TriangleID);
	Parms.PolygonGroupID = std::move(PolygonGroupID);
	Parms.VertexInstanceIDs = std::move(VertexInstanceIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);
}

struct FVertexID UMeshDescriptionBase::CreateVertex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertex");

	Params::MeshDescriptionBase_CreateVertex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstance");

	Params::MeshDescriptionBase_CreateVertexInstance Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");

	Params::MeshDescriptionBase_CreateVertexInstanceWithID Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexWithID");

	Params::MeshDescriptionBase_CreateVertexWithID Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteEdge");

	Params::MeshDescriptionBase_DeleteEdge Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);
}

void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygon");

	Params::MeshDescriptionBase_DeletePolygon Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = std::move(Parms.OrphanedEdges);

	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = std::move(Parms.OrphanedVertexInstances);

	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = std::move(Parms.OrphanedPolygonGroups);
}

void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");

	Params::MeshDescriptionBase_DeletePolygonGroup Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteTriangle");

	Params::MeshDescriptionBase_DeleteTriangle Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = std::move(Parms.OrphanedEdges);

	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = std::move(Parms.OrphanedVertexInstances);

	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = std::move(Parms.OrphanedPolygonGroupsPtr);
}

void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertex");

	Params::MeshDescriptionBase_DeleteVertex Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");

	Params::MeshDescriptionBase_DeleteVertexInstance Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);
}

void UMeshDescriptionBase::Empty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "Empty");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewEdges(int32 NumberOfNewEdges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewEdges");

	Params::MeshDescriptionBase_ReserveNewEdges Parms{};

	Parms.NumberOfNewEdges = NumberOfNewEdges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");

	Params::MeshDescriptionBase_ReserveNewPolygonGroups Parms{};

	Parms.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewPolygons(const int32 NumberOfNewPolygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");

	Params::MeshDescriptionBase_ReserveNewPolygons Parms{};

	Parms.NumberOfNewPolygons = NumberOfNewPolygons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewTriangles(int32 NumberOfNewTriangles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");

	Params::MeshDescriptionBase_ReserveNewTriangles Parms{};

	Parms.NumberOfNewTriangles = NumberOfNewTriangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewVertexInstances(int32 NumberOfNewVertexInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");

	Params::MeshDescriptionBase_ReserveNewVertexInstances Parms{};

	Parms.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReserveNewVertices(int32 NumberOfNewVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertices");

	Params::MeshDescriptionBase_ReserveNewVertices Parms{};

	Parms.NumberOfNewVertices = NumberOfNewVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");

	Params::MeshDescriptionBase_ReversePolygonFacing Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");

	Params::MeshDescriptionBase_SetPolygonPolygonGroup Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::SetPolygonVertexInstances(const struct FPolygonID& PolygonID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstances");

	Params::MeshDescriptionBase_SetPolygonVertexInstances Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.VertexInstanceIDs = std::move(VertexInstanceIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "SetVertexPosition");

	Params::MeshDescriptionBase_SetVertexPosition Parms{};

	Parms.VertexID = std::move(VertexID);
	Parms.Position = std::move(Position);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");

	Params::MeshDescriptionBase_GetEdgeConnectedPolygons Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}

void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");

	Params::MeshDescriptionBase_GetEdgeConnectedTriangles Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);
}

int32 UMeshDescriptionBase::GetEdgeCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeCount");

	Params::MeshDescriptionBase_GetEdgeCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexID UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int32 VertexNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertex");

	Params::MeshDescriptionBase_GetEdgeVertex Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.VertexNumber = VertexNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertices");

	Params::MeshDescriptionBase_GetEdgeVertices Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);
}

int32 UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");

	Params::MeshDescriptionBase_GetNumEdgeConnectedPolygons Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");

	Params::MeshDescriptionBase_GetNumEdgeConnectedTriangles Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");

	Params::MeshDescriptionBase_GetNumPolygonGroupPolygons Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");

	Params::MeshDescriptionBase_GetNumPolygonInternalEdges Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");

	Params::MeshDescriptionBase_GetNumPolygonTriangles Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");

	Params::MeshDescriptionBase_GetNumPolygonVertices Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");

	Params::MeshDescriptionBase_GetNumVertexConnectedEdges Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");

	Params::MeshDescriptionBase_GetNumVertexConnectedPolygons Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");

	Params::MeshDescriptionBase_GetNumVertexConnectedTriangles Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");

	Params::MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");

	Params::MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");

	Params::MeshDescriptionBase_GetNumVertexVertexInstances Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");

	Params::MeshDescriptionBase_GetPolygonAdjacentPolygons Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = std::move(Parms.OutPolygonIDs);
}

int32 UMeshDescriptionBase::GetPolygonCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonCount");

	Params::MeshDescriptionBase_GetPolygonCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMeshDescriptionBase::GetPolygonGroupCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupCount");

	Params::MeshDescriptionBase_GetPolygonGroupCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");

	Params::MeshDescriptionBase_GetPolygonGroupPolygons Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = std::move(Parms.OutPolygonIDs);
}

void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");

	Params::MeshDescriptionBase_GetPolygonInternalEdges Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);
}

void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");

	Params::MeshDescriptionBase_GetPolygonPerimeterEdges Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);
}

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");

	Params::MeshDescriptionBase_GetPolygonPolygonGroup Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");

	Params::MeshDescriptionBase_GetPolygonTriangles Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = std::move(Parms.OutTriangleIDs);
}

void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");

	Params::MeshDescriptionBase_GetPolygonVertexInstances Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);
}

void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertices");

	Params::MeshDescriptionBase_GetPolygonVertices Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);
}

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");

	Params::MeshDescriptionBase_GetTriangleAdjacentTriangles Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = std::move(Parms.OutTriangleIDs);
}

int32 UMeshDescriptionBase::GetTriangleCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleCount");

	Params::MeshDescriptionBase_GetTriangleCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleEdges");

	Params::MeshDescriptionBase_GetTriangleEdges Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);
}

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");

	Params::MeshDescriptionBase_GetTrianglePolygon Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");

	Params::MeshDescriptionBase_GetTrianglePolygonGroup Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");

	Params::MeshDescriptionBase_GetTriangleVertexInstance Parms{};

	Parms.TriangleID = std::move(TriangleID);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");

	Params::MeshDescriptionBase_GetTriangleVertexInstances Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);
}

void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertices");

	Params::MeshDescriptionBase_GetTriangleVertices Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = std::move(Parms.OutVertexIDs);
}

void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");

	Params::MeshDescriptionBase_GetVertexAdjacentVertices Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = std::move(Parms.OutAdjacentVertexIDs);
}

void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");

	Params::MeshDescriptionBase_GetVertexConnectedEdges Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = std::move(Parms.OutEdgeIDs);
}

void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");

	Params::MeshDescriptionBase_GetVertexConnectedPolygons Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}

void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");

	Params::MeshDescriptionBase_GetVertexConnectedTriangles Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);
}

int32 UMeshDescriptionBase::GetVertexCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexCount");

	Params::MeshDescriptionBase_GetVertexCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");

	Params::MeshDescriptionBase_GetVertexInstanceConnectedPolygons Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");

	Params::MeshDescriptionBase_GetVertexInstanceConnectedTriangles Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = std::move(Parms.OutConnectedTriangleIDs);
}

int32 UMeshDescriptionBase::GetVertexInstanceCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceCount");

	Params::MeshDescriptionBase_GetVertexInstanceCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");

	Params::MeshDescriptionBase_GetVertexInstanceForPolygonVertex Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");

	Params::MeshDescriptionBase_GetVertexInstanceForTriangleVertex Parms{};

	Parms.TriangleID = std::move(TriangleID);
	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");

	Params::MeshDescriptionBase_GetVertexInstancePairEdge Parms{};

	Parms.VertexInstanceID0 = std::move(VertexInstanceID0);
	Parms.VertexInstanceID1 = std::move(VertexInstanceID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");

	Params::MeshDescriptionBase_GetVertexInstanceVertex Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");

	Params::MeshDescriptionBase_GetVertexPairEdge Parms{};

	Parms.VertexID0 = std::move(VertexID0);
	Parms.VertexID1 = std::move(VertexID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPosition");

	Params::MeshDescriptionBase_GetVertexPosition Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");

	Params::MeshDescriptionBase_GetVertexVertexInstances Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = std::move(Parms.OutVertexInstanceIDs);
}

bool UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternal");

	Params::MeshDescriptionBase_IsEdgeInternal Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");

	Params::MeshDescriptionBase_IsEdgeInternalToPolygon Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeValid");

	Params::MeshDescriptionBase_IsEdgeValid Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsEmpty() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEmpty");

	Params::MeshDescriptionBase_IsEmpty Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");

	Params::MeshDescriptionBase_IsPolygonGroupValid Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonValid");

	Params::MeshDescriptionBase_IsPolygonValid Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");

	Params::MeshDescriptionBase_IsTrianglePartOfNgon Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTriangleValid");

	Params::MeshDescriptionBase_IsTriangleValid Parms{};

	Parms.TriangleID = std::move(TriangleID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");

	Params::MeshDescriptionBase_IsVertexInstanceValid Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");

	Params::MeshDescriptionBase_IsVertexOrphaned Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexValid");

	Params::MeshDescriptionBase_IsVertexValid Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
