#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_WilliePete_WaterBodyChild_C final : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UArrowComponent*                        Debug;

public:
	void ExecuteUbergraph_B_WilliePete_WaterBodyChild(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WilliePete_WaterBodyChild_C">();
	}
	static class AB_WilliePete_WaterBodyChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WilliePete_WaterBodyChild_C>();
	}
};
static_assert(alignof(AB_WilliePete_WaterBodyChild_C) == 0x000008, "Wrong alignment on AB_WilliePete_WaterBodyChild_C");
static_assert(sizeof(AB_WilliePete_WaterBodyChild_C) == 0x0003B8, "Wrong size on AB_WilliePete_WaterBodyChild_C");
static_assert(offsetof(AB_WilliePete_WaterBodyChild_C, UberGraphFrame) == 0x0003A8, "Member 'AB_WilliePete_WaterBodyChild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_WilliePete_WaterBodyChild_C, Debug) == 0x0003B0, "Member 'AB_WilliePete_WaterBodyChild_C::Debug' has a wrong offset!");

}
