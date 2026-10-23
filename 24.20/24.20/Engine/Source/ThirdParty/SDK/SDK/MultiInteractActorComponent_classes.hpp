#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMultiInteractActorComponent_C final : public UFortActorComponent_MultiInteract
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           RemoveInteractPlayerTag;
	struct FGameplayTag                           AddInteractPlayerTag;
	struct FGameplayTag                           LoopingMultiInteractTag;
	uint8                                         Pad_16C[0x4];
	double                                        RequiredDuration;
	bool                                          GCNLApplied;

public:
	void AddGCNL();
	void ExecuteGCNFromTag(class AFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32 PreviousInteractPlayerCount);
	void ExecuteUbergraph_MultiInteractActorComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void RemoveGCNL();
	void SetRequiredDuration(double NewRequiredDuration);
	void UpdateForPlayerJustJoinedInteraction(const class AFortPlayerStateAthena* JoinedPlayer);
	void UpdateForPlayerJustLeftInteraction(const class AFortPlayerStateAthena* LeftPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiInteractActorComponent_C">();
	}
	static class UMultiInteractActorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiInteractActorComponent_C>();
	}
};
static_assert(alignof(UMultiInteractActorComponent_C) == 0x000008, "Wrong alignment on UMultiInteractActorComponent_C");
static_assert(sizeof(UMultiInteractActorComponent_C) == 0x000180, "Wrong size on UMultiInteractActorComponent_C");
static_assert(offsetof(UMultiInteractActorComponent_C, UberGraphFrame) == 0x000158, "Member 'UMultiInteractActorComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultiInteractActorComponent_C, RemoveInteractPlayerTag) == 0x000160, "Member 'UMultiInteractActorComponent_C::RemoveInteractPlayerTag' has a wrong offset!");
static_assert(offsetof(UMultiInteractActorComponent_C, AddInteractPlayerTag) == 0x000164, "Member 'UMultiInteractActorComponent_C::AddInteractPlayerTag' has a wrong offset!");
static_assert(offsetof(UMultiInteractActorComponent_C, LoopingMultiInteractTag) == 0x000168, "Member 'UMultiInteractActorComponent_C::LoopingMultiInteractTag' has a wrong offset!");
static_assert(offsetof(UMultiInteractActorComponent_C, RequiredDuration) == 0x000170, "Member 'UMultiInteractActorComponent_C::RequiredDuration' has a wrong offset!");
static_assert(offsetof(UMultiInteractActorComponent_C, GCNLApplied) == 0x000178, "Member 'UMultiInteractActorComponent_C::GCNLApplied' has a wrong offset!");

}
