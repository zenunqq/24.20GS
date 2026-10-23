#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFuelIndicator_C final : public ABuildingGameplayActor
{
public:
	class UAthenaSpecialActorComponent*           AthenaSpecialActor;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FuelIndicator_C">();
	}
	static class AFuelIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFuelIndicator_C>();
	}
};
static_assert(alignof(AFuelIndicator_C) == 0x000008, "Wrong alignment on AFuelIndicator_C");
static_assert(sizeof(AFuelIndicator_C) == 0x000A40, "Wrong size on AFuelIndicator_C");
static_assert(offsetof(AFuelIndicator_C, AthenaSpecialActor) == 0x000A30, "Member 'AFuelIndicator_C::AthenaSpecialActor' has a wrong offset!");
static_assert(offsetof(AFuelIndicator_C, DefaultSceneRoot) == 0x000A38, "Member 'AFuelIndicator_C::DefaultSceneRoot' has a wrong offset!");

}
