#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_PurpleStuff_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class APlayerPawn_Athena_Generic_C*           PlayerActor;

public:
	void ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_PurpleStuff_C">();
	}
	static class AGCNL_PurpleStuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_PurpleStuff_C>();
	}
};
static_assert(alignof(AGCNL_PurpleStuff_C) == 0x000008, "Wrong alignment on AGCNL_PurpleStuff_C");
static_assert(sizeof(AGCNL_PurpleStuff_C) == 0x000378, "Wrong size on AGCNL_PurpleStuff_C");
static_assert(offsetof(AGCNL_PurpleStuff_C, UberGraphFrame) == 0x000368, "Member 'AGCNL_PurpleStuff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_PurpleStuff_C, PlayerActor) == 0x000370, "Member 'AGCNL_PurpleStuff_C::PlayerActor' has a wrong offset!");

}
