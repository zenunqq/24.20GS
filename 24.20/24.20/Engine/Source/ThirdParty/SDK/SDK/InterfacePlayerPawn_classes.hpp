#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IInterfacePlayerPawn_C final : public IInterface
{
public:
	void FootStepLeft();
	void FootStepRight();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingLeft_End();
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingRight_End();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InterfacePlayerPawn_C">();
	}
	static class IInterfacePlayerPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterfacePlayerPawn_C>();
	}
};
static_assert(alignof(IInterfacePlayerPawn_C) == 0x000008, "Wrong alignment on IInterfacePlayerPawn_C");
static_assert(sizeof(IInterfacePlayerPawn_C) == 0x000028, "Wrong size on IInterfacePlayerPawn_C");

}
