#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FStaticMeshMaterialArrayCombo final
{
public:
	class AStaticMeshActor*                       StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D;
	TArray<class UMaterialInterface*>             MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C;
};
static_assert(alignof(FStaticMeshMaterialArrayCombo) == 0x000008, "Wrong alignment on FStaticMeshMaterialArrayCombo");
static_assert(sizeof(FStaticMeshMaterialArrayCombo) == 0x000018, "Wrong size on FStaticMeshMaterialArrayCombo");
static_assert(offsetof(FStaticMeshMaterialArrayCombo, StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D) == 0x000000, "Member 'FStaticMeshMaterialArrayCombo::StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D' has a wrong offset!");
static_assert(offsetof(FStaticMeshMaterialArrayCombo, MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C) == 0x000008, "Member 'FStaticMeshMaterialArrayCombo::MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C' has a wrong offset!");

}
