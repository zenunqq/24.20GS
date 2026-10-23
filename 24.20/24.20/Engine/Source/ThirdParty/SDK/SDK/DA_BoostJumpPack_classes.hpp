#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CommonInput_structs.hpp"

namespace SDK
{

class ADA_BoostJumpPack_C final : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  ErrorReason;
	struct FGameplayTagContainer                  ErrorReasonGamepad;

public:
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_BoostJumpPack(int32 EntryPoint);
	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DA_BoostJumpPack_C">();
	}
	static class ADA_BoostJumpPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADA_BoostJumpPack_C>();
	}
};
static_assert(alignof(ADA_BoostJumpPack_C) == 0x000008, "Wrong alignment on ADA_BoostJumpPack_C");
static_assert(sizeof(ADA_BoostJumpPack_C) == 0x001188, "Wrong size on ADA_BoostJumpPack_C");
static_assert(offsetof(ADA_BoostJumpPack_C, UberGraphFrame) == 0x001140, "Member 'ADA_BoostJumpPack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADA_BoostJumpPack_C, ErrorReason) == 0x001148, "Member 'ADA_BoostJumpPack_C::ErrorReason' has a wrong offset!");
static_assert(offsetof(ADA_BoostJumpPack_C, ErrorReasonGamepad) == 0x001168, "Member 'ADA_BoostJumpPack_C::ErrorReasonGamepad' has a wrong offset!");

}
