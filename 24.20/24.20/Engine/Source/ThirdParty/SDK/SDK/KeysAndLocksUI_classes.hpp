#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UKeyPlayerInfoWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x8];
	struct FGameplayTag                           KeyStatusTag;
	uint8                                         Pad_2DC[0x1C];

public:
	void HandleGameplayTagEvent(const struct FGameplayTag& UpdatedTag, int32 TagCount);
	void OnKeyStatusActivated(class AFortPlayerStateAthena* InPlayerState, bool bActivated);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyPlayerInfoWidget">();
	}
	static class UKeyPlayerInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyPlayerInfoWidget>();
	}
};
static_assert(alignof(UKeyPlayerInfoWidget) == 0x000008, "Wrong alignment on UKeyPlayerInfoWidget");
static_assert(sizeof(UKeyPlayerInfoWidget) == 0x0002F8, "Wrong size on UKeyPlayerInfoWidget");
static_assert(offsetof(UKeyPlayerInfoWidget, KeyStatusTag) == 0x0002D8, "Member 'UKeyPlayerInfoWidget::KeyStatusTag' has a wrong offset!");

}
