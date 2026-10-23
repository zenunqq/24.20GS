#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ReplicationGraphDebugActor_ClientCellInfo final
{
public:
	struct FVector                                CellLocation;
	struct FVector                                CellExtent;
	TArray<class AActor*>                         Actors;
};
static_assert(alignof(ReplicationGraphDebugActor_ClientCellInfo) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ClientCellInfo");
static_assert(sizeof(ReplicationGraphDebugActor_ClientCellInfo) == 0x000040, "Wrong size on ReplicationGraphDebugActor_ClientCellInfo");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, CellLocation) == 0x000000, "Member 'ReplicationGraphDebugActor_ClientCellInfo::CellLocation' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, CellExtent) == 0x000018, "Member 'ReplicationGraphDebugActor_ClientCellInfo::CellExtent' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, Actors) == 0x000030, "Member 'ReplicationGraphDebugActor_ClientCellInfo::Actors' has a wrong offset!");

struct ReplicationGraphDebugActor_ServerPrintAllActorInfo final
{
public:
	class FString                                 Str;
};
static_assert(alignof(ReplicationGraphDebugActor_ServerPrintAllActorInfo) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerPrintAllActorInfo");
static_assert(sizeof(ReplicationGraphDebugActor_ServerPrintAllActorInfo) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerPrintAllActorInfo");
static_assert(offsetof(ReplicationGraphDebugActor_ServerPrintAllActorInfo, Str) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerPrintAllActorInfo::Str' has a wrong offset!");

struct ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint) == 0x000008, "Wrong size on ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint, Actor) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint::Actor' has a wrong offset!");

struct ReplicationGraphDebugActor_ServerSetCullDistanceForClass final
{
public:
	class UClass*                                 Class_0;
	float                                         CullDistance;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetCullDistanceForClass");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerSetCullDistanceForClass");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass, Class_0) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetCullDistanceForClass::Class_0' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass, CullDistance) == 0x000008, "Member 'ReplicationGraphDebugActor_ServerSetCullDistanceForClass::CullDistance' has a wrong offset!");

struct ReplicationGraphDebugActor_ServerSetPeriodFrameForClass final
{
public:
	class UClass*                                 Class_0;
	int32                                         PeriodFrame;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetPeriodFrameForClass");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerSetPeriodFrameForClass");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass, Class_0) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetPeriodFrameForClass::Class_0' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass, PeriodFrame) == 0x000008, "Member 'ReplicationGraphDebugActor_ServerSetPeriodFrameForClass::PeriodFrame' has a wrong offset!");

}
