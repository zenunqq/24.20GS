#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPendingAccountMergeNotification_Legacy_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_1;
	class UCommonActionWidget*                    CommonActionWidget_48;
	class UTextBlock*                             TextBlock_42;
	class UTextBlock*                             TextBlock_45;

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_PendingAccountMergeNotification_Legacy(int32 EntryPoint);
	void Hovered(bool IsHovered_0);
	void OnInputChanged(ECommonInputType bNewInputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PendingAccountMergeNotification_Legacy_C">();
	}
	static class UPendingAccountMergeNotification_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPendingAccountMergeNotification_Legacy_C>();
	}
};
static_assert(alignof(UPendingAccountMergeNotification_Legacy_C) == 0x000010, "Wrong alignment on UPendingAccountMergeNotification_Legacy_C");
static_assert(sizeof(UPendingAccountMergeNotification_Legacy_C) == 0x001460, "Wrong size on UPendingAccountMergeNotification_Legacy_C");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, UberGraphFrame) == 0x001430, "Member 'UPendingAccountMergeNotification_Legacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, Hover) == 0x001438, "Member 'UPendingAccountMergeNotification_Legacy_C::Hover' has a wrong offset!");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, Border_1) == 0x001440, "Member 'UPendingAccountMergeNotification_Legacy_C::Border_1' has a wrong offset!");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, CommonActionWidget_48) == 0x001448, "Member 'UPendingAccountMergeNotification_Legacy_C::CommonActionWidget_48' has a wrong offset!");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, TextBlock_42) == 0x001450, "Member 'UPendingAccountMergeNotification_Legacy_C::TextBlock_42' has a wrong offset!");
static_assert(offsetof(UPendingAccountMergeNotification_Legacy_C, TextBlock_45) == 0x001458, "Member 'UPendingAccountMergeNotification_Legacy_C::TextBlock_45' has a wrong offset!");

}
