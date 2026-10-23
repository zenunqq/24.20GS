#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FFlowMapMaterials final
{
public:
	class UMaterialInterface*                     OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97;
	class UMaterialInterface*                     RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88;
};
static_assert(alignof(FFlowMapMaterials) == 0x000008, "Wrong alignment on FFlowMapMaterials");
static_assert(sizeof(FFlowMapMaterials) == 0x000010, "Wrong size on FFlowMapMaterials");
static_assert(offsetof(FFlowMapMaterials, OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97) == 0x000000, "Member 'FFlowMapMaterials::OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97' has a wrong offset!");
static_assert(offsetof(FFlowMapMaterials, RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88) == 0x000008, "Member 'FFlowMapMaterials::RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88' has a wrong offset!");

}
