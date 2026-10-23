#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Athena_PartModifier_Generic_classes.hpp"

namespace SDK
{

class AB_Athena_PartModifier_Headband_Collection_C : public AB_Athena_PartModifier_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Athena_PartModifier_Headband_Collection_C;
	class UMaterialInstanceDynamic*               NewVar_0;

public:
	void ExecuteUbergraph_B_Athena_PartModifier_Headband_Collection(int32 EntryPoint);
	void OnPostResIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_PartModifier_Headband_Collection_C">();
	}
	static class AB_Athena_PartModifier_Headband_Collection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_PartModifier_Headband_Collection_C>();
	}
};
static_assert(alignof(AB_Athena_PartModifier_Headband_Collection_C) == 0x000008, "Wrong alignment on AB_Athena_PartModifier_Headband_Collection_C");
static_assert(sizeof(AB_Athena_PartModifier_Headband_Collection_C) == 0x0005E8, "Wrong size on AB_Athena_PartModifier_Headband_Collection_C");
static_assert(offsetof(AB_Athena_PartModifier_Headband_Collection_C, UberGraphFrame_B_Athena_PartModifier_Headband_Collection_C) == 0x0005D8, "Member 'AB_Athena_PartModifier_Headband_Collection_C::UberGraphFrame_B_Athena_PartModifier_Headband_Collection_C' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Headband_Collection_C, NewVar_0) == 0x0005E0, "Member 'AB_Athena_PartModifier_Headband_Collection_C::NewVar_0' has a wrong offset!");

}
