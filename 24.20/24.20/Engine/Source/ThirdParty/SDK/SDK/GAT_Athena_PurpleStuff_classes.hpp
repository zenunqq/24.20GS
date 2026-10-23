#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"

namespace SDK
{

class UGAT_Athena_PurpleStuff_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Athena_PurpleStuff_C;
	class AFortPlayerPawn*                        PlayerPawn;

public:
	void ExecuteUbergraph_GAT_Athena_PurpleStuff(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Athena_PurpleStuff_C">();
	}
	static class UGAT_Athena_PurpleStuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Athena_PurpleStuff_C>();
	}
};
static_assert(alignof(UGAT_Athena_PurpleStuff_C) == 0x000008, "Wrong alignment on UGAT_Athena_PurpleStuff_C");
static_assert(sizeof(UGAT_Athena_PurpleStuff_C) == 0x000B48, "Wrong size on UGAT_Athena_PurpleStuff_C");
static_assert(offsetof(UGAT_Athena_PurpleStuff_C, UberGraphFrame_GAT_Athena_PurpleStuff_C) == 0x000B38, "Member 'UGAT_Athena_PurpleStuff_C::UberGraphFrame_GAT_Athena_PurpleStuff_C' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_PurpleStuff_C, PlayerPawn) == 0x000B40, "Member 'UGAT_Athena_PurpleStuff_C::PlayerPawn' has a wrong offset!");

}
