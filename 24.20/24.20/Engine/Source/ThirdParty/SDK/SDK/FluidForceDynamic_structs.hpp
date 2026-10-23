#pragma once

#include "Basic.hpp"

#include "FluidDynamicForceMeshType_structs.hpp"
#include "FluidForceSocketInfo_structs.hpp"

namespace SDK
{

struct FFluidForceDynamic final
{
public:
	EFluidDynamicForceMeshType                    ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C;
	uint8                                         Pad_1[0x3];
	float                                         ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234;
	float                                         ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF;
	uint8                                         Pad_C[0x4];
	class USceneComponent*                        ForceComponent_34_ABF6640F40D37677EF6F809E09046055;
	class UMaterialInterface*                     MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A;
	struct FFluidForceSocketInfo                  SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A;
};
static_assert(alignof(FFluidForceDynamic) == 0x000008, "Wrong alignment on FFluidForceDynamic");
static_assert(sizeof(FFluidForceDynamic) == 0x000070, "Wrong size on FFluidForceDynamic");
static_assert(offsetof(FFluidForceDynamic, ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C) == 0x000000, "Member 'FFluidForceDynamic::ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C' has a wrong offset!");
static_assert(offsetof(FFluidForceDynamic, ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234) == 0x000004, "Member 'FFluidForceDynamic::ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234' has a wrong offset!");
static_assert(offsetof(FFluidForceDynamic, ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF) == 0x000008, "Member 'FFluidForceDynamic::ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF' has a wrong offset!");
static_assert(offsetof(FFluidForceDynamic, ForceComponent_34_ABF6640F40D37677EF6F809E09046055) == 0x000010, "Member 'FFluidForceDynamic::ForceComponent_34_ABF6640F40D37677EF6F809E09046055' has a wrong offset!");
static_assert(offsetof(FFluidForceDynamic, MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A) == 0x000018, "Member 'FFluidForceDynamic::MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A' has a wrong offset!");
static_assert(offsetof(FFluidForceDynamic, SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A) == 0x000020, "Member 'FFluidForceDynamic::SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A' has a wrong offset!");

}
