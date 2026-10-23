#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETargetingAOEShape : uint8
{
	Box                                      = 0,
	Cylinder                                 = 1,
	Sphere                                   = 2,
	Capsule                                  = 3,
	SourceComponent                          = 4,
	ETargetingAOEShape_MAX                   = 5,
};

enum class ETargetingTraceType : uint8
{
	Line                                     = 0,
	Sweep                                    = 1,
	ETargetingTraceType_MAX                  = 2,
};

struct FTargetingSourceContext final
{
public:
	class AActor*                                 SourceActor;
	class AActor*                                 InstigatorActor;
	struct FVector                                SourceLocation;
	class FName                                   SourceSocketName;
	uint8                                         Pad_2C[0x4];
	class UObject*                                SourceObject;
};
static_assert(alignof(FTargetingSourceContext) == 0x000008, "Wrong alignment on FTargetingSourceContext");
static_assert(sizeof(FTargetingSourceContext) == 0x000038, "Wrong size on FTargetingSourceContext");
static_assert(offsetof(FTargetingSourceContext, SourceActor) == 0x000000, "Member 'FTargetingSourceContext::SourceActor' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, InstigatorActor) == 0x000008, "Member 'FTargetingSourceContext::InstigatorActor' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceLocation) == 0x000010, "Member 'FTargetingSourceContext::SourceLocation' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceSocketName) == 0x000028, "Member 'FTargetingSourceContext::SourceSocketName' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceObject) == 0x000030, "Member 'FTargetingSourceContext::SourceObject' has a wrong offset!");

struct alignas(0x04) FTargetingRequestHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FTargetingRequestHandle) == 0x000004, "Wrong alignment on FTargetingRequestHandle");
static_assert(sizeof(FTargetingRequestHandle) == 0x000004, "Wrong size on FTargetingRequestHandle");

struct FTargetingTaskSet final
{
public:
	TArray<class UTargetingTask*>                 Tasks;
};
static_assert(alignof(FTargetingTaskSet) == 0x000008, "Wrong alignment on FTargetingTaskSet");
static_assert(sizeof(FTargetingTaskSet) == 0x000010, "Wrong size on FTargetingTaskSet");
static_assert(offsetof(FTargetingTaskSet, Tasks) == 0x000000, "Member 'FTargetingTaskSet::Tasks' has a wrong offset!");

struct FTargetingDefaultResultData final
{
public:
	struct FHitResult                             HitResult;
	uint8                                         Pad_E0[0x8];
};
static_assert(alignof(FTargetingDefaultResultData) == 0x000008, "Wrong alignment on FTargetingDefaultResultData");
static_assert(sizeof(FTargetingDefaultResultData) == 0x0000E8, "Wrong size on FTargetingDefaultResultData");
static_assert(offsetof(FTargetingDefaultResultData, HitResult) == 0x000000, "Member 'FTargetingDefaultResultData::HitResult' has a wrong offset!");

struct FTargetingDefaultResultsSet final
{
public:
	TArray<struct FTargetingDefaultResultData>    TargetResults;
};
static_assert(alignof(FTargetingDefaultResultsSet) == 0x000008, "Wrong alignment on FTargetingDefaultResultsSet");
static_assert(sizeof(FTargetingDefaultResultsSet) == 0x000010, "Wrong size on FTargetingDefaultResultsSet");
static_assert(offsetof(FTargetingDefaultResultsSet, TargetResults) == 0x000000, "Member 'FTargetingDefaultResultsSet::TargetResults' has a wrong offset!");

struct alignas(0x08) FTargetingRequestData final
{
public:
	uint8                                         Pad_0[0x18];
	TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> TargetingRequestDynamicDelegate;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FTargetingRequestData) == 0x000008, "Wrong alignment on FTargetingRequestData");
static_assert(sizeof(FTargetingRequestData) == 0x000028, "Wrong size on FTargetingRequestData");
static_assert(offsetof(FTargetingRequestData, TargetingRequestDynamicDelegate) == 0x000018, "Member 'FTargetingRequestData::TargetingRequestDynamicDelegate' has a wrong offset!");

struct alignas(0x04) FTargetingAsyncTaskData final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FTargetingAsyncTaskData) == 0x000004, "Wrong alignment on FTargetingAsyncTaskData");
static_assert(sizeof(FTargetingAsyncTaskData) == 0x000008, "Wrong size on FTargetingAsyncTaskData");

struct FTargetingImmediateTaskData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FTargetingImmediateTaskData) == 0x000001, "Wrong alignment on FTargetingImmediateTaskData");
static_assert(sizeof(FTargetingImmediateTaskData) == 0x000001, "Wrong size on FTargetingImmediateTaskData");

struct FTargetingDebugData final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FTargetingDebugData) == 0x000001, "Wrong alignment on FTargetingDebugData");
static_assert(sizeof(FTargetingDebugData) == 0x000001, "Wrong size on FTargetingDebugData");

}
