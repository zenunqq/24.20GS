#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct InterfacePlayerPawn_C_Melee_Effect_Color final
{
public:
	struct FVector                                Melee_Color_Set;
};
static_assert(alignof(InterfacePlayerPawn_C_Melee_Effect_Color) == 0x000008, "Wrong alignment on InterfacePlayerPawn_C_Melee_Effect_Color");
static_assert(sizeof(InterfacePlayerPawn_C_Melee_Effect_Color) == 0x000018, "Wrong size on InterfacePlayerPawn_C_Melee_Effect_Color");
static_assert(offsetof(InterfacePlayerPawn_C_Melee_Effect_Color, Melee_Color_Set) == 0x000000, "Member 'InterfacePlayerPawn_C_Melee_Effect_Color::Melee_Color_Set' has a wrong offset!");

struct InterfacePlayerPawn_C_MeleeSwingLeft final
{
public:
	bool                                          First_Left;
};
static_assert(alignof(InterfacePlayerPawn_C_MeleeSwingLeft) == 0x000001, "Wrong alignment on InterfacePlayerPawn_C_MeleeSwingLeft");
static_assert(sizeof(InterfacePlayerPawn_C_MeleeSwingLeft) == 0x000001, "Wrong size on InterfacePlayerPawn_C_MeleeSwingLeft");
static_assert(offsetof(InterfacePlayerPawn_C_MeleeSwingLeft, First_Left) == 0x000000, "Member 'InterfacePlayerPawn_C_MeleeSwingLeft::First_Left' has a wrong offset!");

struct InterfacePlayerPawn_C_MeleeSwingRight final
{
public:
	bool                                          First_Right;
};
static_assert(alignof(InterfacePlayerPawn_C_MeleeSwingRight) == 0x000001, "Wrong alignment on InterfacePlayerPawn_C_MeleeSwingRight");
static_assert(sizeof(InterfacePlayerPawn_C_MeleeSwingRight) == 0x000001, "Wrong size on InterfacePlayerPawn_C_MeleeSwingRight");
static_assert(offsetof(InterfacePlayerPawn_C_MeleeSwingRight, First_Right) == 0x000000, "Member 'InterfacePlayerPawn_C_MeleeSwingRight::First_Right' has a wrong offset!");

}
