#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UVictoryCrownFrontEndPawnComponent_C final : public UFortPawnComponent_VictoryCrownsFrontEnd
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           CrownFXCueTag;
	uint8                                         Pad_CC[0x4];
	class APlayerPawn_Athena_C*                   AthenaPawn;
	bool                                          AccountHasCrown;
	bool                                          AppliedCrownFX;

public:
	void ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32 EntryPoint);
	void OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(class FName StatName, int32 StatValue);
	void PlaylistChanged();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void UpdateForGCNL();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryCrownFrontEndPawnComponent_C">();
	}
	static class UVictoryCrownFrontEndPawnComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownFrontEndPawnComponent_C>();
	}
};
static_assert(alignof(UVictoryCrownFrontEndPawnComponent_C) == 0x000008, "Wrong alignment on UVictoryCrownFrontEndPawnComponent_C");
static_assert(sizeof(UVictoryCrownFrontEndPawnComponent_C) == 0x0000E0, "Wrong size on UVictoryCrownFrontEndPawnComponent_C");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UVictoryCrownFrontEndPawnComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, CrownFXCueTag) == 0x0000C8, "Member 'UVictoryCrownFrontEndPawnComponent_C::CrownFXCueTag' has a wrong offset!");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AthenaPawn) == 0x0000D0, "Member 'UVictoryCrownFrontEndPawnComponent_C::AthenaPawn' has a wrong offset!");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AccountHasCrown) == 0x0000D8, "Member 'UVictoryCrownFrontEndPawnComponent_C::AccountHasCrown' has a wrong offset!");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AppliedCrownFX) == 0x0000D9, "Member 'UVictoryCrownFrontEndPawnComponent_C::AppliedCrownFX' has a wrong offset!");

}
