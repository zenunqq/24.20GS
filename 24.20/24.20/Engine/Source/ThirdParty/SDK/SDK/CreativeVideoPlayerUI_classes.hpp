#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UCreativeVideoPlayerFullScreenWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class USoundSourceBus*                        SourceBus;
	class USoundClass*                            SoundClass;
	struct FDataTableRowHandle                    HoldToSkipAction;
	class UCommonButtonLegacy*                    Button_Skip;
	float                                         SkipButtonTimeout;
	uint8                                         Pad_3EC[0x14];
	class UAudioComponent*                        SoundComponent;
	uint8                                         Pad_408[0x8];

public:
	void OnSkipButtonActionComplete();
	void OnSkipButtonActionProgress(float HeldPercent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeVideoPlayerFullScreenWidget">();
	}
	static class UCreativeVideoPlayerFullScreenWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeVideoPlayerFullScreenWidget>();
	}
};
static_assert(alignof(UCreativeVideoPlayerFullScreenWidget) == 0x000008, "Wrong alignment on UCreativeVideoPlayerFullScreenWidget");
static_assert(sizeof(UCreativeVideoPlayerFullScreenWidget) == 0x000410, "Wrong size on UCreativeVideoPlayerFullScreenWidget");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SourceBus) == 0x0003C0, "Member 'UCreativeVideoPlayerFullScreenWidget::SourceBus' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SoundClass) == 0x0003C8, "Member 'UCreativeVideoPlayerFullScreenWidget::SoundClass' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, HoldToSkipAction) == 0x0003D0, "Member 'UCreativeVideoPlayerFullScreenWidget::HoldToSkipAction' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, Button_Skip) == 0x0003E0, "Member 'UCreativeVideoPlayerFullScreenWidget::Button_Skip' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SkipButtonTimeout) == 0x0003E8, "Member 'UCreativeVideoPlayerFullScreenWidget::SkipButtonTimeout' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SoundComponent) == 0x000400, "Member 'UCreativeVideoPlayerFullScreenWidget::SoundComponent' has a wrong offset!");

}
