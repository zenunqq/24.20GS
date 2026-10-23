#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class URewardInfoSimpleWidget_Legacy_C final : public UFortRewardInfoButton_Legacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       ItemCount;
	class UCommonLazyImage*                       ItemIcon;

public:
	void ExecuteUbergraph_RewardInfoSimpleWidget_Legacy(int32 EntryPoint);
	void GetDisplayName(class FText* DisplayName);
	void HandleDifferentItemOrQuantitySetBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardInfoSimpleWidget_Legacy_C">();
	}
	static class URewardInfoSimpleWidget_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardInfoSimpleWidget_Legacy_C>();
	}
};
static_assert(alignof(URewardInfoSimpleWidget_Legacy_C) == 0x000010, "Wrong alignment on URewardInfoSimpleWidget_Legacy_C");
static_assert(sizeof(URewardInfoSimpleWidget_Legacy_C) == 0x001470, "Wrong size on URewardInfoSimpleWidget_Legacy_C");
static_assert(offsetof(URewardInfoSimpleWidget_Legacy_C, UberGraphFrame) == 0x001450, "Member 'URewardInfoSimpleWidget_Legacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewardInfoSimpleWidget_Legacy_C, ItemCount) == 0x001458, "Member 'URewardInfoSimpleWidget_Legacy_C::ItemCount' has a wrong offset!");
static_assert(offsetof(URewardInfoSimpleWidget_Legacy_C, ItemIcon) == 0x001460, "Member 'URewardInfoSimpleWidget_Legacy_C::ItemIcon' has a wrong offset!");

}
