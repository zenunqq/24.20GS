#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EnemyPawn_Interface_C_Orphaned final
{
public:
	bool                                          IsOrphaned;
	uint8                                         Pad_1[0x7];
	class AFortPawn*                              AttachedPawn;
};
static_assert(alignof(EnemyPawn_Interface_C_Orphaned) == 0x000008, "Wrong alignment on EnemyPawn_Interface_C_Orphaned");
static_assert(sizeof(EnemyPawn_Interface_C_Orphaned) == 0x000010, "Wrong size on EnemyPawn_Interface_C_Orphaned");
static_assert(offsetof(EnemyPawn_Interface_C_Orphaned, IsOrphaned) == 0x000000, "Member 'EnemyPawn_Interface_C_Orphaned::IsOrphaned' has a wrong offset!");
static_assert(offsetof(EnemyPawn_Interface_C_Orphaned, AttachedPawn) == 0x000008, "Member 'EnemyPawn_Interface_C_Orphaned::AttachedPawn' has a wrong offset!");

}
