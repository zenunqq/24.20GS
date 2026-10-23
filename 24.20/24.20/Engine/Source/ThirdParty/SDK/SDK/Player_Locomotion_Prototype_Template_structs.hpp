#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_4;
	class FName                                   __NameProperty_5;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_6;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData, __NameProperty_4) == 0x000004, "Member 'Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData::__NameProperty_4' has a wrong offset!");
static_assert(offsetof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData, __NameProperty_5) == 0x000008, "Member 'Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData::__NameProperty_5' has a wrong offset!");
static_assert(offsetof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData, __StructProperty_6) == 0x000010, "Member 'Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData::__StructProperty_6' has a wrong offset!");
static_assert(offsetof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'Player_Locomotion_Prototype_Template::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
