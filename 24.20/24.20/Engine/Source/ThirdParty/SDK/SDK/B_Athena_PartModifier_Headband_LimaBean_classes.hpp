#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Athena_PartModifier_Headband_Collection_classes.hpp"

namespace SDK
{

class AB_Athena_PartModifier_Headband_LimaBean_C final : public AB_Athena_PartModifier_Headband_Collection_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Athena_PartModifier_Headband_LimaBean_C;
	bool                                          IsDBNO;

public:
	void ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean(int32 EntryPoint);
	void On_Player_Start_DBNO();
	void OnPawnAndPartChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_PartModifier_Headband_LimaBean_C">();
	}
	static class AB_Athena_PartModifier_Headband_LimaBean_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_PartModifier_Headband_LimaBean_C>();
	}
};
static_assert(alignof(AB_Athena_PartModifier_Headband_LimaBean_C) == 0x000008, "Wrong alignment on AB_Athena_PartModifier_Headband_LimaBean_C");
static_assert(sizeof(AB_Athena_PartModifier_Headband_LimaBean_C) == 0x0005F8, "Wrong size on AB_Athena_PartModifier_Headband_LimaBean_C");
static_assert(offsetof(AB_Athena_PartModifier_Headband_LimaBean_C, UberGraphFrame_B_Athena_PartModifier_Headband_LimaBean_C) == 0x0005E8, "Member 'AB_Athena_PartModifier_Headband_LimaBean_C::UberGraphFrame_B_Athena_PartModifier_Headband_LimaBean_C' has a wrong offset!");
static_assert(offsetof(AB_Athena_PartModifier_Headband_LimaBean_C, IsDBNO) == 0x0005F0, "Member 'AB_Athena_PartModifier_Headband_LimaBean_C::IsDBNO' has a wrong offset!");

}
