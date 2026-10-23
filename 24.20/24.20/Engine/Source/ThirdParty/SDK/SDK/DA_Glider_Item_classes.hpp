#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ADA_Glider_Item_C final : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  ErrorReason;

public:
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint);
	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DA_Glider_Item_C">();
	}
	static class ADA_Glider_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADA_Glider_Item_C>();
	}
};
static_assert(alignof(ADA_Glider_Item_C) == 0x000008, "Wrong alignment on ADA_Glider_Item_C");
static_assert(sizeof(ADA_Glider_Item_C) == 0x001168, "Wrong size on ADA_Glider_Item_C");
static_assert(offsetof(ADA_Glider_Item_C, UberGraphFrame) == 0x001140, "Member 'ADA_Glider_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADA_Glider_Item_C, ErrorReason) == 0x001148, "Member 'ADA_Glider_Item_C::ErrorReason' has a wrong offset!");

}
