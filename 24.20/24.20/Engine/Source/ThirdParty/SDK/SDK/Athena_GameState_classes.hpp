#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AAthena_GameState_C final : public AFortGameStateBR
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	class USoundBase*                             Victory_Royale_Sound;

public:
	void ExecuteUbergraph_Athena_GameState(int32 EntryPoint);
	void OnWinnerAnnounced();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_GameState_C">();
	}
	static class AAthena_GameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_GameState_C>();
	}
};
static_assert(alignof(AAthena_GameState_C) == 0x000010, "Wrong alignment on AAthena_GameState_C");
static_assert(sizeof(AAthena_GameState_C) == 0x003250, "Wrong size on AAthena_GameState_C");
static_assert(offsetof(AAthena_GameState_C, UberGraphFrame) == 0x003230, "Member 'AAthena_GameState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_GameState_C, DefaultSceneRoot) == 0x003238, "Member 'AAthena_GameState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAthena_GameState_C, Victory_Royale_Sound) == 0x003240, "Member 'AAthena_GameState_C::Victory_Royale_Sound' has a wrong offset!");

}
