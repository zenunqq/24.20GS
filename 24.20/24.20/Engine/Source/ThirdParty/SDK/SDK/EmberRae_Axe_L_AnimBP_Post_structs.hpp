#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_16;
	class FName                                   __NameProperty_17;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_18;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData, __NameProperty_16) == 0x000004, "Member 'EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData::__NameProperty_16' has a wrong offset!");
static_assert(offsetof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData, __NameProperty_17) == 0x000008, "Member 'EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData::__NameProperty_17' has a wrong offset!");
static_assert(offsetof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData, __StructProperty_18) == 0x000010, "Member 'EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData::__StructProperty_18' has a wrong offset!");
static_assert(offsetof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'EmberRae_Axe_L_AnimBP_Post::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
