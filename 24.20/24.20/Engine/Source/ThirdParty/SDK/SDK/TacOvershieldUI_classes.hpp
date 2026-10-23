#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTacOvershieldPlayerInfoWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x10];

public:
	void OnOvershieldStateChanged(float Overshield, float OvershieldMax);
	void OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TacOvershieldPlayerInfoWidget">();
	}
	static class UTacOvershieldPlayerInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTacOvershieldPlayerInfoWidget>();
	}
};
static_assert(alignof(UTacOvershieldPlayerInfoWidget) == 0x000008, "Wrong alignment on UTacOvershieldPlayerInfoWidget");
static_assert(sizeof(UTacOvershieldPlayerInfoWidget) == 0x0002E0, "Wrong size on UTacOvershieldPlayerInfoWidget");

}
