#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_19;
	class FName                                   __NameProperty_20;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_21;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData, __NameProperty_19) == 0x000004, "Member 'Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData::__NameProperty_19' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData, __NameProperty_20) == 0x000008, "Member 'Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData::__NameProperty_20' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData, __StructProperty_21) == 0x000010, "Member 'Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData::__StructProperty_21' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'Blueprint_Paper_VIM::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
