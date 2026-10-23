#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_4;
	class FName                                   __NameProperty_5;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_6;
	ERefPoseType                                  __ByteProperty_7;
	uint8                                         Pad_29[0x7];
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000C8, "Wrong size on Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_4) == 0x000004, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_4' has a wrong offset!");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_5) == 0x000008, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_5' has a wrong offset!");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_6) == 0x000010, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_6' has a wrong offset!");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_7) == 0x000028, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_7' has a wrong offset!");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000030, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B0, "Member 'Player_PropertiesDebug_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
