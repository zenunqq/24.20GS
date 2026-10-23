#pragma once

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

enum class ETaskObjectStateChangeType : uint8
{
	None                                     = 0,
	BeginState                               = 1,
	EndState                                 = 2,
	ETaskObjectStateChangeType_MAX           = 3,
};

struct alignas(0x08) FComponentCacheHelper final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FComponentCacheHelper) == 0x000008, "Wrong alignment on FComponentCacheHelper");
static_assert(sizeof(FComponentCacheHelper) == 0x000058, "Wrong size on FComponentCacheHelper");

struct FActorOwnedStateTreeConfig final
{
public:
	TSoftObjectPtr<class UStateTree>              StateTreeAsset;
	bool                                          bShouldReplicate;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FActorOwnedStateTreeConfig) == 0x000008, "Wrong alignment on FActorOwnedStateTreeConfig");
static_assert(sizeof(FActorOwnedStateTreeConfig) == 0x000030, "Wrong size on FActorOwnedStateTreeConfig");
static_assert(offsetof(FActorOwnedStateTreeConfig, StateTreeAsset) == 0x000000, "Member 'FActorOwnedStateTreeConfig::StateTreeAsset' has a wrong offset!");
static_assert(offsetof(FActorOwnedStateTreeConfig, bShouldReplicate) == 0x000028, "Member 'FActorOwnedStateTreeConfig::bShouldReplicate' has a wrong offset!");

struct FStateTreeRuntimeData final
{
public:
	class UObject*                                Owner;
	class UStateTree*                             StateTree;
	struct FStateTreeInstanceData                 StateTreeInstanceData;
	uint8                                         Pad_20[0x10];
};
static_assert(alignof(FStateTreeRuntimeData) == 0x000008, "Wrong alignment on FStateTreeRuntimeData");
static_assert(sizeof(FStateTreeRuntimeData) == 0x000030, "Wrong size on FStateTreeRuntimeData");
static_assert(offsetof(FStateTreeRuntimeData, Owner) == 0x000000, "Member 'FStateTreeRuntimeData::Owner' has a wrong offset!");
static_assert(offsetof(FStateTreeRuntimeData, StateTree) == 0x000008, "Member 'FStateTreeRuntimeData::StateTree' has a wrong offset!");
static_assert(offsetof(FStateTreeRuntimeData, StateTreeInstanceData) == 0x000010, "Member 'FStateTreeRuntimeData::StateTreeInstanceData' has a wrong offset!");

struct FStateChangeData final : public FFastArraySerializerItem
{
public:
	int32                                         StateTreeDataHandle;
	int32                                         Handle;
	int32                                         StateIdentifier;
	class UStateTreeTaskObject*                   StateObject;
	ETaskObjectStateChangeType                    StateChangeType;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateChangeData) == 0x000008, "Wrong alignment on FStateChangeData");
static_assert(sizeof(FStateChangeData) == 0x000028, "Wrong size on FStateChangeData");
static_assert(offsetof(FStateChangeData, StateTreeDataHandle) == 0x00000C, "Member 'FStateChangeData::StateTreeDataHandle' has a wrong offset!");
static_assert(offsetof(FStateChangeData, Handle) == 0x000010, "Member 'FStateChangeData::Handle' has a wrong offset!");
static_assert(offsetof(FStateChangeData, StateIdentifier) == 0x000014, "Member 'FStateChangeData::StateIdentifier' has a wrong offset!");
static_assert(offsetof(FStateChangeData, StateObject) == 0x000018, "Member 'FStateChangeData::StateObject' has a wrong offset!");
static_assert(offsetof(FStateChangeData, StateChangeType) == 0x000020, "Member 'FStateChangeData::StateChangeType' has a wrong offset!");

struct FStateChangeDataArray final : public FFastArraySerializer
{
public:
	TArray<struct FStateChangeData>               StateChangeDataList;
	class UStateTreeManagerComponent*             StateTreeManagerComponent;
};
static_assert(alignof(FStateChangeDataArray) == 0x000008, "Wrong alignment on FStateChangeDataArray");
static_assert(sizeof(FStateChangeDataArray) == 0x000120, "Wrong size on FStateChangeDataArray");
static_assert(offsetof(FStateChangeDataArray, StateChangeDataList) == 0x000108, "Member 'FStateChangeDataArray::StateChangeDataList' has a wrong offset!");
static_assert(offsetof(FStateChangeDataArray, StateTreeManagerComponent) == 0x000118, "Member 'FStateChangeDataArray::StateTreeManagerComponent' has a wrong offset!");

struct alignas(0x08) FStateTreeClientSimulationData final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FStateTreeClientSimulationData) == 0x000008, "Wrong alignment on FStateTreeClientSimulationData");
static_assert(sizeof(FStateTreeClientSimulationData) == 0x000028, "Wrong size on FStateTreeClientSimulationData");

}
