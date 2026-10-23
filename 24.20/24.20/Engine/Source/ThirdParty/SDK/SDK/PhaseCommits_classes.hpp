#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IPhaseCommitFlow_Coordinator final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhaseCommitFlow_Coordinator">();
	}
	static class IPhaseCommitFlow_Coordinator* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPhaseCommitFlow_Coordinator>();
	}
};
static_assert(alignof(IPhaseCommitFlow_Coordinator) == 0x000008, "Wrong alignment on IPhaseCommitFlow_Coordinator");
static_assert(sizeof(IPhaseCommitFlow_Coordinator) == 0x000028, "Wrong size on IPhaseCommitFlow_Coordinator");

class IPhaseCommitFlow_Participant final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhaseCommitFlow_Participant">();
	}
	static class IPhaseCommitFlow_Participant* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPhaseCommitFlow_Participant>();
	}
};
static_assert(alignof(IPhaseCommitFlow_Participant) == 0x000008, "Wrong alignment on IPhaseCommitFlow_Participant");
static_assert(sizeof(IPhaseCommitFlow_Participant) == 0x000028, "Wrong size on IPhaseCommitFlow_Participant");

}
