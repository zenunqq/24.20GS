#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UUEKittUIPanelWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UFortUEKittWidget*                      KittWidget;
	uint8                                         Pad_3B8[0x10];

public:
	void SetupInput(bool bSetup);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UEKittUIPanelWidget">();
	}
	static class UUEKittUIPanelWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUEKittUIPanelWidget>();
	}
};
static_assert(alignof(UUEKittUIPanelWidget) == 0x000008, "Wrong alignment on UUEKittUIPanelWidget");
static_assert(sizeof(UUEKittUIPanelWidget) == 0x0003C8, "Wrong size on UUEKittUIPanelWidget");
static_assert(offsetof(UUEKittUIPanelWidget, KittWidget) == 0x0003B0, "Member 'UUEKittUIPanelWidget::KittWidget' has a wrong offset!");

}
