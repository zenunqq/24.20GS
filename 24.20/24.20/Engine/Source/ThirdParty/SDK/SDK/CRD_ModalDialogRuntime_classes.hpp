#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UModalDialogVariant final : public UCommonActivatableWidget
{
public:
	class UWidgetAnimation*                       BoundAnim_Open;
	class UWidgetAnimation*                       BoundAnim_Response;
	TMulticastInlineDelegate<void()>              OnResponseAnimationFinished;

public:
	static bool ShouldUseModalDialogTemplateWidgets();

	void AttemptToPlayOpenAnimation();
	void AttemptToPlayResponseAnimation();
	void HandleResponseAnimationFinished();

	bool HasResponseAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModalDialogVariant">();
	}
	static class UModalDialogVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModalDialogVariant>();
	}
};
static_assert(alignof(UModalDialogVariant) == 0x000008, "Wrong alignment on UModalDialogVariant");
static_assert(sizeof(UModalDialogVariant) == 0x0003C8, "Wrong size on UModalDialogVariant");
static_assert(offsetof(UModalDialogVariant, BoundAnim_Open) == 0x0003A8, "Member 'UModalDialogVariant::BoundAnim_Open' has a wrong offset!");
static_assert(offsetof(UModalDialogVariant, BoundAnim_Response) == 0x0003B0, "Member 'UModalDialogVariant::BoundAnim_Response' has a wrong offset!");
static_assert(offsetof(UModalDialogVariant, OnResponseAnimationFinished) == 0x0003B8, "Member 'UModalDialogVariant::OnResponseAnimationFinished' has a wrong offset!");

}
