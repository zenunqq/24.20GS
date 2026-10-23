#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABehaviorTreeActor final : public AActor
{
public:
	class UBehaviorTree*                          BehaviorTree;
	uint8                                         Pad_290[0x10];

public:
	class UBlackboardComponent* GetBlackboard();
	bool RunBehaviorTree();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BehaviorTreeActor">();
	}
	static class ABehaviorTreeActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABehaviorTreeActor>();
	}
};
static_assert(alignof(ABehaviorTreeActor) == 0x000008, "Wrong alignment on ABehaviorTreeActor");
static_assert(sizeof(ABehaviorTreeActor) == 0x0002A0, "Wrong size on ABehaviorTreeActor");
static_assert(offsetof(ABehaviorTreeActor, BehaviorTree) == 0x000288, "Member 'ABehaviorTreeActor::BehaviorTree' has a wrong offset!");

class UHmxBPFL final : public UBlueprintFunctionLibrary
{
public:
	static bool IsNone(const class FName& Name_0);
	static int32 LoopDecrement(int32 Value, int32 min_0, int32 max_0);
	static int32 LoopIncrement(int32 Value, int32 min_0, int32 max_0);
	static int32 Modulo(int32 Value, int32 Mod);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxBPFL">();
	}
	static class UHmxBPFL* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxBPFL>();
	}
};
static_assert(alignof(UHmxBPFL) == 0x000008, "Wrong alignment on UHmxBPFL");
static_assert(sizeof(UHmxBPFL) == 0x000028, "Wrong size on UHmxBPFL");

}
