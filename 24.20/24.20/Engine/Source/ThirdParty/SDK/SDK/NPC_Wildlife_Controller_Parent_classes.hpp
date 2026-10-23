#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class ANPC_Wildlife_Controller_Parent_C final : public AAthenaAIController
{
public:
	class UAthenaMarkerComponent*                 AthenaMarker;
	class UFortAthenaNpcPatrollingComponent*      FortAthenaNpcPatrolling;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Wildlife_Controller_Parent_C">();
	}
	static class ANPC_Wildlife_Controller_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Wildlife_Controller_Parent_C>();
	}
};
static_assert(alignof(ANPC_Wildlife_Controller_Parent_C) == 0x000008, "Wrong alignment on ANPC_Wildlife_Controller_Parent_C");
static_assert(sizeof(ANPC_Wildlife_Controller_Parent_C) == 0x0005C0, "Wrong size on ANPC_Wildlife_Controller_Parent_C");
static_assert(offsetof(ANPC_Wildlife_Controller_Parent_C, AthenaMarker) == 0x0005B0, "Member 'ANPC_Wildlife_Controller_Parent_C::AthenaMarker' has a wrong offset!");
static_assert(offsetof(ANPC_Wildlife_Controller_Parent_C, FortAthenaNpcPatrolling) == 0x0005B8, "Member 'ANPC_Wildlife_Controller_Parent_C::FortAthenaNpcPatrolling' has a wrong offset!");

}
