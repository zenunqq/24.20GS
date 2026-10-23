#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CommonUI_structs.hpp"

namespace SDK
{

class ICommonBoundActionButtonInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonBoundActionButtonInterface">();
	}
	static class ICommonBoundActionButtonInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICommonBoundActionButtonInterface>();
	}
};
static_assert(alignof(ICommonBoundActionButtonInterface) == 0x000008, "Wrong alignment on ICommonBoundActionButtonInterface");
static_assert(sizeof(ICommonBoundActionButtonInterface) == 0x000028, "Wrong size on ICommonBoundActionButtonInterface");

class UCommonStyleSheetTypeBase : public UObject
{
public:
	bool                                          bIsEnabled;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeBase">();
	}
	static class UCommonStyleSheetTypeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeBase>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeBase) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeBase");
static_assert(sizeof(UCommonStyleSheetTypeBase) == 0x000030, "Wrong size on UCommonStyleSheetTypeBase");
static_assert(offsetof(UCommonStyleSheetTypeBase, bIsEnabled) == 0x000028, "Member 'UCommonStyleSheetTypeBase::bIsEnabled' has a wrong offset!");

class UCommonUIVisibilitySubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_30[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIVisibilitySubsystem">();
	}
	static class UCommonUIVisibilitySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIVisibilitySubsystem>();
	}
};
static_assert(alignof(UCommonUIVisibilitySubsystem) == 0x000008, "Wrong alignment on UCommonUIVisibilitySubsystem");
static_assert(sizeof(UCommonUIVisibilitySubsystem) == 0x000088, "Wrong size on UCommonUIVisibilitySubsystem");

class UCommonStyleSheetTypeColor final : public UCommonStyleSheetTypeBase
{
public:
	struct FLinearColor                           Color;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeColor">();
	}
	static class UCommonStyleSheetTypeColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeColor>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeColor) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeColor");
static_assert(sizeof(UCommonStyleSheetTypeColor) == 0x000040, "Wrong size on UCommonStyleSheetTypeColor");
static_assert(offsetof(UCommonStyleSheetTypeColor, Color) == 0x000030, "Member 'UCommonStyleSheetTypeColor::Color' has a wrong offset!");

class UCommonWidgetCarouselNavBar final : public UWidget
{
public:
	TSubclassOf<class UCommonButtonBase>          ButtonWidgetType;
	struct FMargin                                ButtonPadding;
	uint8                                         Pad_160[0x10];
	class UCommonWidgetCarousel*                  LinkedCarousel;
	class UCommonButtonGroupBase*                 ButtonGroup;
	TArray<class UCommonButtonBase*>              Buttons;

public:
	void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonWidgetCarouselNavBar">();
	}
	static class UCommonWidgetCarouselNavBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWidgetCarouselNavBar>();
	}
};
static_assert(alignof(UCommonWidgetCarouselNavBar) == 0x000008, "Wrong alignment on UCommonWidgetCarouselNavBar");
static_assert(sizeof(UCommonWidgetCarouselNavBar) == 0x000190, "Wrong size on UCommonWidgetCarouselNavBar");
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonWidgetType) == 0x000148, "Member 'UCommonWidgetCarouselNavBar::ButtonWidgetType' has a wrong offset!");
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonPadding) == 0x000150, "Member 'UCommonWidgetCarouselNavBar::ButtonPadding' has a wrong offset!");
static_assert(offsetof(UCommonWidgetCarouselNavBar, LinkedCarousel) == 0x000170, "Member 'UCommonWidgetCarouselNavBar::LinkedCarousel' has a wrong offset!");
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonGroup) == 0x000178, "Member 'UCommonWidgetCarouselNavBar::ButtonGroup' has a wrong offset!");
static_assert(offsetof(UCommonWidgetCarouselNavBar, Buttons) == 0x000180, "Member 'UCommonWidgetCarouselNavBar::Buttons' has a wrong offset!");

class UCommonStyleSheetTypeOpacity final : public UCommonStyleSheetTypeBase
{
public:
	float                                         Opacity;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeOpacity">();
	}
	static class UCommonStyleSheetTypeOpacity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeOpacity>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeOpacity) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeOpacity");
static_assert(sizeof(UCommonStyleSheetTypeOpacity) == 0x000038, "Wrong size on UCommonStyleSheetTypeOpacity");
static_assert(offsetof(UCommonStyleSheetTypeOpacity, Opacity) == 0x000030, "Member 'UCommonStyleSheetTypeOpacity::Opacity' has a wrong offset!");

class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_30[0x128];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIActionRouterBase">();
	}
	static class UCommonUIActionRouterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIActionRouterBase>();
	}
};
static_assert(alignof(UCommonUIActionRouterBase) == 0x000008, "Wrong alignment on UCommonUIActionRouterBase");
static_assert(sizeof(UCommonUIActionRouterBase) == 0x000158, "Wrong size on UCommonUIActionRouterBase");

class UCommonStyleSheetTypeLineHeightPercentage final : public UCommonStyleSheetTypeBase
{
public:
	float                                         LineHeightPercentage;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeLineHeightPercentage">();
	}
	static class UCommonStyleSheetTypeLineHeightPercentage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeLineHeightPercentage>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeLineHeightPercentage) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeLineHeightPercentage");
static_assert(sizeof(UCommonStyleSheetTypeLineHeightPercentage) == 0x000038, "Wrong size on UCommonStyleSheetTypeLineHeightPercentage");
static_assert(offsetof(UCommonStyleSheetTypeLineHeightPercentage, LineHeightPercentage) == 0x000030, "Member 'UCommonStyleSheetTypeLineHeightPercentage::LineHeightPercentage' has a wrong offset!");

class UCommonStyleSheetTypeFontTypeface final : public UCommonStyleSheetTypeBase
{
public:
	struct FSlateFontInfo                         Typeface;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeFontTypeface">();
	}
	static class UCommonStyleSheetTypeFontTypeface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeFontTypeface>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeFontTypeface) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeFontTypeface");
static_assert(sizeof(UCommonStyleSheetTypeFontTypeface) == 0x000088, "Wrong size on UCommonStyleSheetTypeFontTypeface");
static_assert(offsetof(UCommonStyleSheetTypeFontTypeface, Typeface) == 0x000030, "Member 'UCommonStyleSheetTypeFontTypeface::Typeface' has a wrong offset!");

class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>         style;
	bool                                          bReducePaddingBySafezone;
	uint8                                         Pad_2D9[0x3];
	struct FMargin                                MinimumPadding;
	uint8                                         Pad_2EC[0x4];

public:
	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonBorder">();
	}
	static class UCommonBorder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBorder>();
	}
};
static_assert(alignof(UCommonBorder) == 0x000010, "Wrong alignment on UCommonBorder");
static_assert(sizeof(UCommonBorder) == 0x0002F0, "Wrong size on UCommonBorder");
static_assert(offsetof(UCommonBorder, style) == 0x0002D0, "Member 'UCommonBorder::style' has a wrong offset!");
static_assert(offsetof(UCommonBorder, bReducePaddingBySafezone) == 0x0002D8, "Member 'UCommonBorder::bReducePaddingBySafezone' has a wrong offset!");
static_assert(offsetof(UCommonBorder, MinimumPadding) == 0x0002DC, "Member 'UCommonBorder::MinimumPadding' has a wrong offset!");

class UUCommonVisibilityWidgetBase final : public UCommonBorder
{
public:
	TMap<class FName, bool>                       VisibilityControls;
	bool                                          bShowForGamepad;
	bool                                          bShowForMouseAndKeyboard;
	bool                                          bShowForTouch;
	ESlateVisibility                              VisibleType;
	ESlateVisibility                              HiddenType;
	uint8                                         Pad_345[0xB];

public:
	static const TArray<class FName> GetRegisteredPlatforms();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UCommonVisibilityWidgetBase">();
	}
	static class UUCommonVisibilityWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUCommonVisibilityWidgetBase>();
	}
};
static_assert(alignof(UUCommonVisibilityWidgetBase) == 0x000010, "Wrong alignment on UUCommonVisibilityWidgetBase");
static_assert(sizeof(UUCommonVisibilityWidgetBase) == 0x000350, "Wrong size on UUCommonVisibilityWidgetBase");
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibilityControls) == 0x0002F0, "Member 'UUCommonVisibilityWidgetBase::VisibilityControls' has a wrong offset!");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForGamepad) == 0x000340, "Member 'UUCommonVisibilityWidgetBase::bShowForGamepad' has a wrong offset!");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForMouseAndKeyboard) == 0x000341, "Member 'UUCommonVisibilityWidgetBase::bShowForMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForTouch) == 0x000342, "Member 'UUCommonVisibilityWidgetBase::bShowForTouch' has a wrong offset!");
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibleType) == 0x000343, "Member 'UUCommonVisibilityWidgetBase::VisibleType' has a wrong offset!");
static_assert(offsetof(UUCommonVisibilityWidgetBase, HiddenType) == 0x000344, "Member 'UUCommonVisibilityWidgetBase::HiddenType' has a wrong offset!");

class UCommonStyleSheetTypeFontSize final : public UCommonStyleSheetTypeBase
{
public:
	int32                                         Size;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeFontSize">();
	}
	static class UCommonStyleSheetTypeFontSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeFontSize>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeFontSize) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeFontSize");
static_assert(sizeof(UCommonStyleSheetTypeFontSize) == 0x000038, "Wrong size on UCommonStyleSheetTypeFontSize");
static_assert(offsetof(UCommonStyleSheetTypeFontSize, Size) == 0x000030, "Member 'UCommonStyleSheetTypeFontSize::Size' has a wrong offset!");

class UCommonStyleSheetTypeFontLetterSpacing final : public UCommonStyleSheetTypeBase
{
public:
	int32                                         LetterSpacing;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeFontLetterSpacing">();
	}
	static class UCommonStyleSheetTypeFontLetterSpacing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeFontLetterSpacing>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeFontLetterSpacing) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeFontLetterSpacing");
static_assert(sizeof(UCommonStyleSheetTypeFontLetterSpacing) == 0x000038, "Wrong size on UCommonStyleSheetTypeFontLetterSpacing");
static_assert(offsetof(UCommonStyleSheetTypeFontLetterSpacing, LetterSpacing) == 0x000030, "Member 'UCommonStyleSheetTypeFontLetterSpacing::LetterSpacing' has a wrong offset!");

class UCommonStyleSheetTypeMarginLeft final : public UCommonStyleSheetTypeBase
{
public:
	float                                         Left;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeMarginLeft">();
	}
	static class UCommonStyleSheetTypeMarginLeft* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeMarginLeft>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeMarginLeft) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeMarginLeft");
static_assert(sizeof(UCommonStyleSheetTypeMarginLeft) == 0x000038, "Wrong size on UCommonStyleSheetTypeMarginLeft");
static_assert(offsetof(UCommonStyleSheetTypeMarginLeft, Left) == 0x000030, "Member 'UCommonStyleSheetTypeMarginLeft::Left' has a wrong offset!");

class UCommonStyleSheetTypeMarginRight final : public UCommonStyleSheetTypeBase
{
public:
	float                                         Right;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeMarginRight">();
	}
	static class UCommonStyleSheetTypeMarginRight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeMarginRight>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeMarginRight) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeMarginRight");
static_assert(sizeof(UCommonStyleSheetTypeMarginRight) == 0x000038, "Wrong size on UCommonStyleSheetTypeMarginRight");
static_assert(offsetof(UCommonStyleSheetTypeMarginRight, Right) == 0x000030, "Member 'UCommonStyleSheetTypeMarginRight::Right' has a wrong offset!");

class UCommonWidgetGroupBase : public UObject
{
public:
	void AddWidget(class UWidget* InWidget);
	void RemoveAll();
	void RemoveWidget(class UWidget* InWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonWidgetGroupBase">();
	}
	static class UCommonWidgetGroupBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWidgetGroupBase>();
	}
};
static_assert(alignof(UCommonWidgetGroupBase) == 0x000008, "Wrong alignment on UCommonWidgetGroupBase");
static_assert(sizeof(UCommonWidgetGroupBase) == 0x000028, "Wrong size on UCommonWidgetGroupBase");

class UCommonStyleSheetTypeMarginTop final : public UCommonStyleSheetTypeBase
{
public:
	float                                         Top;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeMarginTop">();
	}
	static class UCommonStyleSheetTypeMarginTop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeMarginTop>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeMarginTop) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeMarginTop");
static_assert(sizeof(UCommonStyleSheetTypeMarginTop) == 0x000038, "Wrong size on UCommonStyleSheetTypeMarginTop");
static_assert(offsetof(UCommonStyleSheetTypeMarginTop, Top) == 0x000030, "Member 'UCommonStyleSheetTypeMarginTop::Top' has a wrong offset!");

class UCommonUIInputSettings final : public UObject
{
public:
	bool                                          bLinkCursorToGamepadFocus;
	uint8                                         Pad_29[0x3];
	int32                                         UIActionProcessingPriority;
	TArray<struct FUIInputAction>                 InputActions;
	TArray<struct FUIInputAction>                 ActionOverrides;
	struct FCommonAnalogCursorSettings            AnalogCursorSettings;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIInputSettings">();
	}
	static class UCommonUIInputSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIInputSettings>();
	}
};
static_assert(alignof(UCommonUIInputSettings) == 0x000008, "Wrong alignment on UCommonUIInputSettings");
static_assert(sizeof(UCommonUIInputSettings) == 0x000078, "Wrong size on UCommonUIInputSettings");
static_assert(offsetof(UCommonUIInputSettings, bLinkCursorToGamepadFocus) == 0x000028, "Member 'UCommonUIInputSettings::bLinkCursorToGamepadFocus' has a wrong offset!");
static_assert(offsetof(UCommonUIInputSettings, UIActionProcessingPriority) == 0x00002C, "Member 'UCommonUIInputSettings::UIActionProcessingPriority' has a wrong offset!");
static_assert(offsetof(UCommonUIInputSettings, InputActions) == 0x000030, "Member 'UCommonUIInputSettings::InputActions' has a wrong offset!");
static_assert(offsetof(UCommonUIInputSettings, ActionOverrides) == 0x000040, "Member 'UCommonUIInputSettings::ActionOverrides' has a wrong offset!");
static_assert(offsetof(UCommonUIInputSettings, AnalogCursorSettings) == 0x000050, "Member 'UCommonUIInputSettings::AnalogCursorSettings' has a wrong offset!");

class UCommonStyleSheetTypeMarginBottom final : public UCommonStyleSheetTypeBase
{
public:
	float                                         Bottom;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheetTypeMarginBottom">();
	}
	static class UCommonStyleSheetTypeMarginBottom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheetTypeMarginBottom>();
	}
};
static_assert(alignof(UCommonStyleSheetTypeMarginBottom) == 0x000008, "Wrong alignment on UCommonStyleSheetTypeMarginBottom");
static_assert(sizeof(UCommonStyleSheetTypeMarginBottom) == 0x000038, "Wrong size on UCommonStyleSheetTypeMarginBottom");
static_assert(offsetof(UCommonStyleSheetTypeMarginBottom, Bottom) == 0x000030, "Member 'UCommonStyleSheetTypeMarginBottom::Bottom' has a wrong offset!");

class UAnalogSlider : public USlider
{
public:
	TMulticastInlineDelegate<void(float Value)>   OnAnalogCapture;
	uint8                                         Pad_6A0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnalogSlider">();
	}
	static class UAnalogSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnalogSlider>();
	}
};
static_assert(alignof(UAnalogSlider) == 0x000010, "Wrong alignment on UAnalogSlider");
static_assert(sizeof(UAnalogSlider) == 0x0006B0, "Wrong size on UAnalogSlider");
static_assert(offsetof(UAnalogSlider, OnAnalogCapture) == 0x000690, "Member 'UAnalogSlider::OnAnalogCapture' has a wrong offset!");

class ICommonActionHandlerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActionHandlerInterface">();
	}
	static class ICommonActionHandlerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICommonActionHandlerInterface>();
	}
};
static_assert(alignof(ICommonActionHandlerInterface) == 0x000008, "Wrong alignment on ICommonActionHandlerInterface");
static_assert(sizeof(ICommonActionHandlerInterface) == 0x000028, "Wrong size on ICommonActionHandlerInterface");

class UCommonGenericInputActionDataTable final : public UDataTable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGenericInputActionDataTable">();
	}
	static class UCommonGenericInputActionDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGenericInputActionDataTable>();
	}
};
static_assert(alignof(UCommonGenericInputActionDataTable) == 0x000008, "Wrong alignment on UCommonGenericInputActionDataTable");
static_assert(sizeof(UCommonGenericInputActionDataTable) == 0x0000B0, "Wrong size on UCommonGenericInputActionDataTable");

class UCommonActionWidget final : public UWidget
{
public:
	TMulticastInlineDelegate<void(bool bUsingGamepad)> OnInputMethodChanged;
	uint8                                         Pad_158[0x8];
	struct FSlateBrush                            ProgressMaterialBrush;
	class FName                                   ProgressMaterialParam;
	uint8                                         Pad_224[0xC];
	struct FSlateBrush                            IconRimBrush;
	TArray<struct FDataTableRowHandle>            InputActions;
	class UInputAction*                           EnhancedInputAction;
	uint8                                         Pad_308[0x8];
	class UMaterialInstanceDynamic*               ProgressDynamicMaterial;
	uint8                                         Pad_318[0x118];

public:
	void SetEnhancedInputAction(class UInputAction* InInputAction);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetInputActions(const TArray<struct FDataTableRowHandle>& NewInputActions);

	class FText GetDisplayText() const;
	struct FSlateBrush GetIcon() const;
	bool IsHeldAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActionWidget">();
	}
	static class UCommonActionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActionWidget>();
	}
};
static_assert(alignof(UCommonActionWidget) == 0x000010, "Wrong alignment on UCommonActionWidget");
static_assert(sizeof(UCommonActionWidget) == 0x000430, "Wrong size on UCommonActionWidget");
static_assert(offsetof(UCommonActionWidget, OnInputMethodChanged) == 0x000148, "Member 'UCommonActionWidget::OnInputMethodChanged' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, ProgressMaterialBrush) == 0x000160, "Member 'UCommonActionWidget::ProgressMaterialBrush' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, ProgressMaterialParam) == 0x000220, "Member 'UCommonActionWidget::ProgressMaterialParam' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, IconRimBrush) == 0x000230, "Member 'UCommonActionWidget::IconRimBrush' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, InputActions) == 0x0002F0, "Member 'UCommonActionWidget::InputActions' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, EnhancedInputAction) == 0x000300, "Member 'UCommonActionWidget::EnhancedInputAction' has a wrong offset!");
static_assert(offsetof(UCommonActionWidget, ProgressDynamicMaterial) == 0x000310, "Member 'UCommonActionWidget::ProgressDynamicMaterial' has a wrong offset!");

class UCommonUserWidget : public UUserWidget
{
public:
	bool                                          bDisplayInActionBar;
	bool                                          bConsumePointerInput;
	uint8                                         Pad_26A[0x26];

public:
	void SetConsumePointerInput(bool bInConsumePointerInput);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUserWidget">();
	}
	static class UCommonUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUserWidget>();
	}
};
static_assert(alignof(UCommonUserWidget) == 0x000008, "Wrong alignment on UCommonUserWidget");
static_assert(sizeof(UCommonUserWidget) == 0x000290, "Wrong size on UCommonUserWidget");
static_assert(offsetof(UCommonUserWidget, bDisplayInActionBar) == 0x000268, "Member 'UCommonUserWidget::bDisplayInActionBar' has a wrong offset!");
static_assert(offsetof(UCommonUserWidget, bConsumePointerInput) == 0x000269, "Member 'UCommonUserWidget::bConsumePointerInput' has a wrong offset!");

class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                          bIsBackHandler;
	bool                                          bIsBackActionDisplayedInActionBar;
	bool                                          bAutoActivate;
	bool                                          bSupportsActivationFocus;
	bool                                          bIsModal;
	bool                                          bAutoRestoreFocus;
	bool                                          bOverrideActionDomain;
	uint8                                         Pad_297[0x1];
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainOverride;
	TMulticastInlineDelegate<void()>              BP_OnWidgetActivated;
	TMulticastInlineDelegate<void()>              BP_OnWidgetDeactivated;
	bool                                          bIsActive;
	uint8                                         Pad_2E1[0x7];
	TArray<TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets;
	uint8                                         Pad_2F8[0xA8];
	bool                                          bSetVisibilityOnActivated;
	ESlateVisibility                              ActivatedVisibility;
	bool                                          bSetVisibilityOnDeactivated;
	ESlateVisibility                              DeactivatedVisibility;
	uint8                                         Pad_3A4[0x4];

public:
	void ActivateWidget();
	void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
	void BP_OnActivated();
	void BP_OnDeactivated();
	bool BP_OnHandleBackAction();
	void DeactivateWidget();
	void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);

	class UWidget* BP_GetDesiredFocusTarget() const;
	class UWidget* GetDesiredFocusTarget() const;
	bool IsActivated() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatableWidget">();
	}
	static class UCommonActivatableWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatableWidget>();
	}
};
static_assert(alignof(UCommonActivatableWidget) == 0x000008, "Wrong alignment on UCommonActivatableWidget");
static_assert(sizeof(UCommonActivatableWidget) == 0x0003A8, "Wrong size on UCommonActivatableWidget");
static_assert(offsetof(UCommonActivatableWidget, bIsBackHandler) == 0x000290, "Member 'UCommonActivatableWidget::bIsBackHandler' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bIsBackActionDisplayedInActionBar) == 0x000291, "Member 'UCommonActivatableWidget::bIsBackActionDisplayedInActionBar' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bAutoActivate) == 0x000292, "Member 'UCommonActivatableWidget::bAutoActivate' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bSupportsActivationFocus) == 0x000293, "Member 'UCommonActivatableWidget::bSupportsActivationFocus' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bIsModal) == 0x000294, "Member 'UCommonActivatableWidget::bIsModal' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bAutoRestoreFocus) == 0x000295, "Member 'UCommonActivatableWidget::bAutoRestoreFocus' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bOverrideActionDomain) == 0x000296, "Member 'UCommonActivatableWidget::bOverrideActionDomain' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, ActionDomainOverride) == 0x000298, "Member 'UCommonActivatableWidget::ActionDomainOverride' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, BP_OnWidgetActivated) == 0x0002C0, "Member 'UCommonActivatableWidget::BP_OnWidgetActivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, BP_OnWidgetDeactivated) == 0x0002D0, "Member 'UCommonActivatableWidget::BP_OnWidgetDeactivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bIsActive) == 0x0002E0, "Member 'UCommonActivatableWidget::bIsActive' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, VisibilityBoundWidgets) == 0x0002E8, "Member 'UCommonActivatableWidget::VisibilityBoundWidgets' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bSetVisibilityOnActivated) == 0x0003A0, "Member 'UCommonActivatableWidget::bSetVisibilityOnActivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, ActivatedVisibility) == 0x0003A1, "Member 'UCommonActivatableWidget::ActivatedVisibility' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, bSetVisibilityOnDeactivated) == 0x0003A2, "Member 'UCommonActivatableWidget::bSetVisibilityOnDeactivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidget, DeactivatedVisibility) == 0x0003A3, "Member 'UCommonActivatableWidget::DeactivatedVisibility' has a wrong offset!");

class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	uint8                                         Pad_178[0x30];
	ECommonSwitcherTransition                     TransitionType;
	ETransitionCurve                              TransitionCurveType;
	uint8                                         Pad_1AA[0x2];
	float                                         TransitionDuration;
	uint8                                         Pad_1B0[0x38];

public:
	void ActivateNextWidget(bool bCanWrap);
	void ActivatePreviousWidget(bool bCanWrap);
	void SetDisableTransitionAnimation(bool bDisableAnimation);

	bool HasWidgets() const;
	bool IsCurrentlySwitching() const;
	bool IsTransitionPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonAnimatedSwitcher">();
	}
	static class UCommonAnimatedSwitcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonAnimatedSwitcher>();
	}
};
static_assert(alignof(UCommonAnimatedSwitcher) == 0x000008, "Wrong alignment on UCommonAnimatedSwitcher");
static_assert(sizeof(UCommonAnimatedSwitcher) == 0x0001E8, "Wrong size on UCommonAnimatedSwitcher");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionType) == 0x0001A8, "Member 'UCommonAnimatedSwitcher::TransitionType' has a wrong offset!");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionCurveType) == 0x0001A9, "Member 'UCommonAnimatedSwitcher::TransitionCurveType' has a wrong offset!");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionDuration) == 0x0001AC, "Member 'UCommonAnimatedSwitcher::TransitionDuration' has a wrong offset!");

class UCommonActivatableWidgetSwitcher final : public UCommonAnimatedSwitcher
{
public:
	uint8                                         Pad_1E8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatableWidgetSwitcher">();
	}
	static class UCommonActivatableWidgetSwitcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatableWidgetSwitcher>();
	}
};
static_assert(alignof(UCommonActivatableWidgetSwitcher) == 0x000008, "Wrong alignment on UCommonActivatableWidgetSwitcher");
static_assert(sizeof(UCommonActivatableWidgetSwitcher) == 0x0001F8, "Wrong size on UCommonActivatableWidgetSwitcher");

class UCommonBorderStyle : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FSlateBrush                            Background;

public:
	void GetBackgroundBrush(struct FSlateBrush* Brush) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonBorderStyle">();
	}
	static class UCommonBorderStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBorderStyle>();
	}
};
static_assert(alignof(UCommonBorderStyle) == 0x000010, "Wrong alignment on UCommonBorderStyle");
static_assert(sizeof(UCommonBorderStyle) == 0x0000F0, "Wrong size on UCommonBorderStyle");
static_assert(offsetof(UCommonBorderStyle, Background) == 0x000030, "Member 'UCommonBorderStyle::Background' has a wrong offset!");

class UCommonButtonBase : public UCommonUserWidget
{
public:
	struct FWidgetEventField                      ClickEvent;
	uint8                                         Pad_291[0x3];
	int32                                         MinWidth;
	int32                                         MinHeight;
	uint8                                         Pad_29C[0x4];
	TSubclassOf<class UCommonButtonStyle>         style;
	bool                                          bHideInputAction;
	uint8                                         Pad_2A9[0x7];
	struct FSlateSound                            PressedSlateSoundOverride;
	struct FSlateSound                            HoveredSlateSoundOverride;
	struct FSlateSound                            SelectedPressedSlateSoundOverride;
	struct FSlateSound                            SelectedHoveredSlateSoundOverride;
	struct FSlateSound                            LockedPressedSlateSoundOverride;
	struct FSlateSound                            LockedHoveredSlateSoundOverride;
	uint8                                         bApplyAlphaOnDisable : 1;
	uint8                                         bLocked : 1;
	uint8                                         bSelectable : 1;
	uint8                                         bShouldSelectUponReceivingFocus : 1;
	uint8                                         bInteractableWhenSelected : 1;
	uint8                                         bToggleable : 1;
	uint8                                         bTriggerClickedAfterSelection : 1;
	uint8                                         bDisplayInputActionWhenNotInteractable : 1;
	uint8                                         bHideInputActionWithKeyboard : 1;
	uint8                                         bShouldUseFallbackDefaultInputAction : 1;
	EButtonClickMethod                            ClickMethod;
	EButtonTouchMethod                            TouchMethod;
	EButtonPressMethod                            PressMethod;
	uint8                                         Pad_345[0x3];
	int32                                         InputPriority;
	uint8                                         Pad_34C[0x4];
	struct FDataTableRowHandle                    TriggeringInputAction;
	uint8                                         Pad_360[0x10];
	TMulticastInlineDelegate<void(class UCommonButtonBase* Button, bool Selected)> OnSelectedChangedBase;
	TMulticastInlineDelegate<void(class UCommonButtonBase* Button)> OnButtonBaseClicked;
	TMulticastInlineDelegate<void(class UCommonButtonBase* Button)> OnButtonBaseDoubleClicked;
	TMulticastInlineDelegate<void(class UCommonButtonBase* Button)> OnButtonBaseHovered;
	TMulticastInlineDelegate<void(class UCommonButtonBase* Button)> OnButtonBaseUnhovered;
	uint8                                         Pad_3C0[0x4];
	bool                                          bIsPersistentBinding;
	ECommonInputMode                              InputModeOverride;
	uint8                                         Pad_3C6[0x32];
	class UMaterialInstanceDynamic*               SingleMaterialStyleMID;
	struct FButtonStyle                           NormalStyle;
	struct FButtonStyle                           SelectedStyle;
	struct FButtonStyle                           DisabledStyle;
	struct FButtonStyle                           LockedStyle;
	uint8                                         bStopDoubleClickPropagation : 1;
	uint8                                         Pad_12C1[0x117];
	class UCommonActionWidget*                    InputActionWidget;

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnDoubleClicked();
	void BP_OnEnabled();
	void BP_OnFocusLost();
	void BP_OnFocusReceived();
	void BP_OnHovered();
	void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);
	void BP_OnLockClicked();
	void BP_OnLockDoubleClicked();
	void BP_OnLockedChanged(bool bIsLocked);
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ClearSelection();
	void DisableButtonWithReason(const class FText& DisabledReason);
	void HandleButtonClicked();
	void HandleButtonPressed();
	void HandleButtonReleased();
	void HandleFocusLost();
	void HandleFocusReceived();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void NativeOnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnCurrentTextStyleChanged();
	void OnInputMethodChanged(ECommonInputType CurrentInputType);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnTriggeringInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void SetClickMethod(EButtonClickMethod InClickMethod);
	void SetHideInputAction(bool bInHideInputAction);
	void SetHoveredSoundOverride(class USoundBase* sound);
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const class FName& InProgressMaterialParam);
	void SetIsFocusable(bool bInIsFocusable);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsLocked(bool bInIsLocked);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsToggleable(bool bInIsToggleable);
	void SetLockedHoveredSoundOverride(class USoundBase* sound);
	void SetLockedPressedSoundOverride(class USoundBase* sound);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetPressedSoundOverride(class USoundBase* sound);
	void SetPressMethod(EButtonPressMethod InPressMethod);
	void SetSelectedHoveredSoundOverride(class USoundBase* sound);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetSelectedPressedSoundOverride(class USoundBase* sound);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetTouchMethod(EButtonTouchMethod InTouchMethod);
	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);
	void StopDoubleClickPropagation();

	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding) const;
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding) const;
	class UCommonTextStyle* GetCurrentTextStyle() const;
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass() const;
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow) const;
	bool GetIsFocusable() const;
	bool GetLocked() const;
	bool GetSelected() const;
	bool GetShouldSelectUponReceivingFocus() const;
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID() const;
	class UCommonButtonStyle* GetStyle() const;
	bool IsInteractionEnabled() const;
	bool IsPressed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonBase">();
	}
	static class UCommonButtonBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonBase>();
	}
};
static_assert(alignof(UCommonButtonBase) == 0x000010, "Wrong alignment on UCommonButtonBase");
static_assert(sizeof(UCommonButtonBase) == 0x0013E0, "Wrong size on UCommonButtonBase");
static_assert(offsetof(UCommonButtonBase, ClickEvent) == 0x000290, "Member 'UCommonButtonBase::ClickEvent' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, MinWidth) == 0x000294, "Member 'UCommonButtonBase::MinWidth' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, MinHeight) == 0x000298, "Member 'UCommonButtonBase::MinHeight' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, style) == 0x0002A0, "Member 'UCommonButtonBase::style' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, bHideInputAction) == 0x0002A8, "Member 'UCommonButtonBase::bHideInputAction' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, PressedSlateSoundOverride) == 0x0002B0, "Member 'UCommonButtonBase::PressedSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, HoveredSlateSoundOverride) == 0x0002C8, "Member 'UCommonButtonBase::HoveredSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, SelectedPressedSlateSoundOverride) == 0x0002E0, "Member 'UCommonButtonBase::SelectedPressedSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, SelectedHoveredSlateSoundOverride) == 0x0002F8, "Member 'UCommonButtonBase::SelectedHoveredSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, LockedPressedSlateSoundOverride) == 0x000310, "Member 'UCommonButtonBase::LockedPressedSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, LockedHoveredSlateSoundOverride) == 0x000328, "Member 'UCommonButtonBase::LockedHoveredSlateSoundOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, ClickMethod) == 0x000342, "Member 'UCommonButtonBase::ClickMethod' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, TouchMethod) == 0x000343, "Member 'UCommonButtonBase::TouchMethod' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, PressMethod) == 0x000344, "Member 'UCommonButtonBase::PressMethod' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, InputPriority) == 0x000348, "Member 'UCommonButtonBase::InputPriority' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, TriggeringInputAction) == 0x000350, "Member 'UCommonButtonBase::TriggeringInputAction' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, OnSelectedChangedBase) == 0x000370, "Member 'UCommonButtonBase::OnSelectedChangedBase' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseClicked) == 0x000380, "Member 'UCommonButtonBase::OnButtonBaseClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDoubleClicked) == 0x000390, "Member 'UCommonButtonBase::OnButtonBaseDoubleClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseHovered) == 0x0003A0, "Member 'UCommonButtonBase::OnButtonBaseHovered' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseUnhovered) == 0x0003B0, "Member 'UCommonButtonBase::OnButtonBaseUnhovered' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, bIsPersistentBinding) == 0x0003C4, "Member 'UCommonButtonBase::bIsPersistentBinding' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, InputModeOverride) == 0x0003C5, "Member 'UCommonButtonBase::InputModeOverride' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, SingleMaterialStyleMID) == 0x0003F8, "Member 'UCommonButtonBase::SingleMaterialStyleMID' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, NormalStyle) == 0x000400, "Member 'UCommonButtonBase::NormalStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, SelectedStyle) == 0x0007B0, "Member 'UCommonButtonBase::SelectedStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, DisabledStyle) == 0x000B60, "Member 'UCommonButtonBase::DisabledStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, LockedStyle) == 0x000F10, "Member 'UCommonButtonBase::LockedStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonBase, InputActionWidget) == 0x0013D8, "Member 'UCommonButtonBase::InputActionWidget' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UCommonRotator : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x10];
	TMulticastInlineDelegate<void(int32 Value)>   OnRotated;
	uint8                                         Pad_1400[0x18];
	class UCommonTextBlock*                       MyText;
	uint8                                         Pad_1420[0x18];

public:
	void BP_OnOptionSelected(int32 Index_0);
	void BP_OnOptionsPopulated(int32 Count);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	void SetSelectedItem(int32 InValue);
	void ShiftTextLeft();
	void ShiftTextRight();

	int32 GetSelectedIndex() const;
	class FText GetSelectedText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonRotator">();
	}
	static class UCommonRotator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonRotator>();
	}
};
#pragma pack(pop)
static_assert(alignof(UCommonRotator) == 0x000010, "Wrong alignment on UCommonRotator");
static_assert(sizeof(UCommonRotator) == 0x001440, "Wrong size on UCommonRotator");
static_assert(offsetof(UCommonRotator, OnRotated) == 0x0013F0, "Member 'UCommonRotator::OnRotated' has a wrong offset!");
static_assert(offsetof(UCommonRotator, MyText) == 0x001418, "Member 'UCommonRotator::MyText' has a wrong offset!");

class UCommonButtonStyle : public UObject
{
public:
	bool                                          bSingleMaterial;
	uint8                                         Pad_29[0x7];
	struct FSlateBrush                            SingleMaterialBrush;
	struct FSlateBrush                            NormalBase;
	struct FSlateBrush                            NormalHovered;
	struct FSlateBrush                            NormalPressed;
	struct FSlateBrush                            SelectedBase;
	struct FSlateBrush                            SelectedHovered;
	struct FSlateBrush                            SelectedPressed;
	struct FSlateBrush                            Disabled;
	struct FMargin                                ButtonPadding;
	struct FMargin                                CustomPadding;
	int32                                         MinWidth;
	int32                                         MinHeight;
	TSubclassOf<class UCommonTextStyle>           NormalTextStyle;
	TSubclassOf<class UCommonTextStyle>           NormalHoveredTextStyle;
	TSubclassOf<class UCommonTextStyle>           SelectedTextStyle;
	TSubclassOf<class UCommonTextStyle>           SelectedHoveredTextStyle;
	TSubclassOf<class UCommonTextStyle>           DisabledTextStyle;
	struct FSlateSound                            PressedSlateSound;
	struct FCommonButtonStyleOptionalSlateSound   SelectedPressedSlateSound;
	struct FCommonButtonStyleOptionalSlateSound   LockedPressedSlateSound;
	struct FSlateSound                            HoveredSlateSound;
	struct FCommonButtonStyleOptionalSlateSound   SelectedHoveredSlateSound;
	struct FCommonButtonStyleOptionalSlateSound   LockedHoveredSlateSound;

public:
	void GetButtonPadding(struct FMargin* OutButtonPadding) const;
	void GetCustomPadding(struct FMargin* OutCustomPadding) const;
	void GetDisabledBrush(struct FSlateBrush* Brush) const;
	class UCommonTextStyle* GetDisabledTextStyle() const;
	void GetMaterialBrush(struct FSlateBrush* Brush) const;
	void GetNormalBaseBrush(struct FSlateBrush* Brush) const;
	void GetNormalHoveredBrush(struct FSlateBrush* Brush) const;
	class UCommonTextStyle* GetNormalHoveredTextStyle() const;
	void GetNormalPressedBrush(struct FSlateBrush* Brush) const;
	class UCommonTextStyle* GetNormalTextStyle() const;
	void GetSelectedBaseBrush(struct FSlateBrush* Brush) const;
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush) const;
	class UCommonTextStyle* GetSelectedHoveredTextStyle() const;
	void GetSelectedPressedBrush(struct FSlateBrush* Brush) const;
	class UCommonTextStyle* GetSelectedTextStyle() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonStyle">();
	}
	static class UCommonButtonStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonStyle>();
	}
};
static_assert(alignof(UCommonButtonStyle) == 0x000010, "Wrong alignment on UCommonButtonStyle");
static_assert(sizeof(UCommonButtonStyle) == 0x000730, "Wrong size on UCommonButtonStyle");
static_assert(offsetof(UCommonButtonStyle, bSingleMaterial) == 0x000028, "Member 'UCommonButtonStyle::bSingleMaterial' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SingleMaterialBrush) == 0x000030, "Member 'UCommonButtonStyle::SingleMaterialBrush' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, NormalBase) == 0x0000F0, "Member 'UCommonButtonStyle::NormalBase' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, NormalHovered) == 0x0001B0, "Member 'UCommonButtonStyle::NormalHovered' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, NormalPressed) == 0x000270, "Member 'UCommonButtonStyle::NormalPressed' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedBase) == 0x000330, "Member 'UCommonButtonStyle::SelectedBase' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedHovered) == 0x0003F0, "Member 'UCommonButtonStyle::SelectedHovered' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedPressed) == 0x0004B0, "Member 'UCommonButtonStyle::SelectedPressed' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, Disabled) == 0x000570, "Member 'UCommonButtonStyle::Disabled' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, ButtonPadding) == 0x000630, "Member 'UCommonButtonStyle::ButtonPadding' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, CustomPadding) == 0x000640, "Member 'UCommonButtonStyle::CustomPadding' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, MinWidth) == 0x000650, "Member 'UCommonButtonStyle::MinWidth' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, MinHeight) == 0x000654, "Member 'UCommonButtonStyle::MinHeight' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, NormalTextStyle) == 0x000658, "Member 'UCommonButtonStyle::NormalTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, NormalHoveredTextStyle) == 0x000660, "Member 'UCommonButtonStyle::NormalHoveredTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedTextStyle) == 0x000668, "Member 'UCommonButtonStyle::SelectedTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredTextStyle) == 0x000670, "Member 'UCommonButtonStyle::SelectedHoveredTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, DisabledTextStyle) == 0x000678, "Member 'UCommonButtonStyle::DisabledTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, PressedSlateSound) == 0x000680, "Member 'UCommonButtonStyle::PressedSlateSound' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedPressedSlateSound) == 0x000698, "Member 'UCommonButtonStyle::SelectedPressedSlateSound' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, LockedPressedSlateSound) == 0x0006B8, "Member 'UCommonButtonStyle::LockedPressedSlateSound' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, HoveredSlateSound) == 0x0006D8, "Member 'UCommonButtonStyle::HoveredSlateSound' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredSlateSound) == 0x0006F0, "Member 'UCommonButtonStyle::SelectedHoveredSlateSound' has a wrong offset!");
static_assert(offsetof(UCommonButtonStyle, LockedHoveredSlateSound) == 0x000710, "Member 'UCommonButtonStyle::LockedHoveredSlateSound' has a wrong offset!");

class UCommonButtonInternalBase : public UButton
{
public:
	uint8                                         Pad_598[0x10];
	TMulticastInlineDelegate<void()>              OnDoubleClicked;
	uint8                                         Pad_5B8[0x20];
	int32                                         MinWidth;
	int32                                         MinHeight;
	bool                                          bButtonEnabled;
	bool                                          bInteractionEnabled;
	uint8                                         Pad_5E2[0x2E];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonInternalBase">();
	}
	static class UCommonButtonInternalBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonInternalBase>();
	}
};
static_assert(alignof(UCommonButtonInternalBase) == 0x000010, "Wrong alignment on UCommonButtonInternalBase");
static_assert(sizeof(UCommonButtonInternalBase) == 0x000610, "Wrong size on UCommonButtonInternalBase");
static_assert(offsetof(UCommonButtonInternalBase, OnDoubleClicked) == 0x0005A8, "Member 'UCommonButtonInternalBase::OnDoubleClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonInternalBase, MinWidth) == 0x0005D8, "Member 'UCommonButtonInternalBase::MinWidth' has a wrong offset!");
static_assert(offsetof(UCommonButtonInternalBase, MinHeight) == 0x0005DC, "Member 'UCommonButtonInternalBase::MinHeight' has a wrong offset!");
static_assert(offsetof(UCommonButtonInternalBase, bButtonEnabled) == 0x0005E0, "Member 'UCommonButtonInternalBase::bButtonEnabled' has a wrong offset!");
static_assert(offsetof(UCommonButtonInternalBase, bInteractionEnabled) == 0x0005E1, "Member 'UCommonButtonInternalBase::bInteractionEnabled' has a wrong offset!");

class UCommonCustomNavigation final : public UBorder
{
public:
	TDelegate<void(EUINavigation NavigationType)> OnNavigationEvent;
	uint8                                         Pad_2DC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonCustomNavigation">();
	}
	static class UCommonCustomNavigation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonCustomNavigation>();
	}
};
static_assert(alignof(UCommonCustomNavigation) == 0x000010, "Wrong alignment on UCommonCustomNavigation");
static_assert(sizeof(UCommonCustomNavigation) == 0x0002E0, "Wrong size on UCommonCustomNavigation");
static_assert(offsetof(UCommonCustomNavigation, OnNavigationEvent) == 0x0002D0, "Member 'UCommonCustomNavigation::OnNavigationEvent' has a wrong offset!");

class UCommonTileView : public UTileView
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTileView">();
	}
	static class UCommonTileView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTileView>();
	}
};
static_assert(alignof(UCommonTileView) == 0x000010, "Wrong alignment on UCommonTileView");
static_assert(sizeof(UCommonTileView) == 0x000BB0, "Wrong size on UCommonTileView");

class UCommonTextBlock : public UTextBlock
{
public:
	float                                         MobileFontSizeMultiplier;
	uint8                                         Pad_31C[0x4];
	TSubclassOf<class UCommonTextStyle>           style;
	TSubclassOf<class UCommonTextScrollStyle>     ScrollStyle;
	class UCommonStyleSheet*                      StyleSheet;
	bool                                          bIsScrollingEnabled;
	bool                                          bDisplayAllCaps;
	bool                                          bAutoCollapseWithEmptyText;
	uint8                                         Pad_33B[0x15];

public:
	const struct FMargin GetMargin();
	void ResetScrollState();
	void SetLineHeightPercentage(float InLineHeightPercentage);
	void SetMargin(const struct FMargin& InMargin);
	void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);
	void SetScrollingEnabled(bool bInIsScrollingEnabled);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void SetTextCase(bool bUseAllCaps);
	void SetWrapTextWidth(int32 InWrapTextAt);

	float GetMobileFontSizeMultiplier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTextBlock">();
	}
	static class UCommonTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTextBlock>();
	}
};
static_assert(alignof(UCommonTextBlock) == 0x000010, "Wrong alignment on UCommonTextBlock");
static_assert(sizeof(UCommonTextBlock) == 0x000350, "Wrong size on UCommonTextBlock");
static_assert(offsetof(UCommonTextBlock, MobileFontSizeMultiplier) == 0x000318, "Member 'UCommonTextBlock::MobileFontSizeMultiplier' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, style) == 0x000320, "Member 'UCommonTextBlock::style' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, ScrollStyle) == 0x000328, "Member 'UCommonTextBlock::ScrollStyle' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, StyleSheet) == 0x000330, "Member 'UCommonTextBlock::StyleSheet' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, bIsScrollingEnabled) == 0x000338, "Member 'UCommonTextBlock::bIsScrollingEnabled' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, bDisplayAllCaps) == 0x000339, "Member 'UCommonTextBlock::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UCommonTextBlock, bAutoCollapseWithEmptyText) == 0x00033A, "Member 'UCommonTextBlock::bAutoCollapseWithEmptyText' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                         Pad_350[0x58];

public:
	void SetCountDownCompletionText(const class FText& InCompletionText);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetTimespanValue(const struct FTimespan& InTimespan);

	struct FDateTime GetDateTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonDateTimeTextBlock">();
	}
	static class UCommonDateTimeTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonDateTimeTextBlock>();
	}
};
#pragma pack(pop)
static_assert(alignof(UCommonDateTimeTextBlock) == 0x000010, "Wrong alignment on UCommonDateTimeTextBlock");
static_assert(sizeof(UCommonDateTimeTextBlock) == 0x0003B0, "Wrong size on UCommonDateTimeTextBlock");

class UCommonGameViewportClient : public UGameViewportClient
{
public:
	uint8                                         Pad_390[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameViewportClient">();
	}
	static class UCommonGameViewportClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameViewportClient>();
	}
};
static_assert(alignof(UCommonGameViewportClient) == 0x000008, "Wrong alignment on UCommonGameViewportClient");
static_assert(sizeof(UCommonGameViewportClient) == 0x0003D0, "Wrong size on UCommonGameViewportClient");

class UCommonHardwareVisibilityBorder final : public UCommonBorder
{
public:
	struct FGameplayTagQuery                      VisibilityQuery;
	ESlateVisibility                              VisibleType;
	ESlateVisibility                              HiddenType;
	uint8                                         Pad_33A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonHardwareVisibilityBorder">();
	}
	static class UCommonHardwareVisibilityBorder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonHardwareVisibilityBorder>();
	}
};
static_assert(alignof(UCommonHardwareVisibilityBorder) == 0x000010, "Wrong alignment on UCommonHardwareVisibilityBorder");
static_assert(sizeof(UCommonHardwareVisibilityBorder) == 0x000340, "Wrong size on UCommonHardwareVisibilityBorder");
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibilityQuery) == 0x0002F0, "Member 'UCommonHardwareVisibilityBorder::VisibilityQuery' has a wrong offset!");
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibleType) == 0x000338, "Member 'UCommonHardwareVisibilityBorder::VisibleType' has a wrong offset!");
static_assert(offsetof(UCommonHardwareVisibilityBorder, HiddenType) == 0x000339, "Member 'UCommonHardwareVisibilityBorder::HiddenType' has a wrong offset!");

class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                             InlineIconSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIRichTextData">();
	}
	static class UCommonUIRichTextData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIRichTextData>();
	}
};
static_assert(alignof(UCommonUIRichTextData) == 0x000008, "Wrong alignment on UCommonUIRichTextData");
static_assert(sizeof(UCommonUIRichTextData) == 0x000030, "Wrong size on UCommonUIRichTextData");
static_assert(offsetof(UCommonUIRichTextData, InlineIconSet) == 0x000028, "Member 'UCommonUIRichTextData::InlineIconSet' has a wrong offset!");

class UCommonHierarchicalScrollBox final : public UScrollBox
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonHierarchicalScrollBox">();
	}
	static class UCommonHierarchicalScrollBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonHierarchicalScrollBox>();
	}
};
static_assert(alignof(UCommonHierarchicalScrollBox) == 0x000010, "Wrong alignment on UCommonHierarchicalScrollBox");
static_assert(sizeof(UCommonHierarchicalScrollBox) == 0x000BC0, "Wrong size on UCommonHierarchicalScrollBox");

class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                            LoadingBackgroundBrush;
	class FName                                   MaterialTextureParamName;
	uint8                                         Pad_344[0x4];
	TMulticastInlineDelegate<void(bool bIsLoading)> BP_OnLoadingStateChanged;
	uint8                                         Pad_358[0x28];

public:
	void SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	void SetBrushFromLazyMaterial(const TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyTexture(const TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetMaterialTextureParamName(class FName TextureParamName);

	bool IsLoading() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLazyImage">();
	}
	static class UCommonLazyImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLazyImage>();
	}
};
static_assert(alignof(UCommonLazyImage) == 0x000010, "Wrong alignment on UCommonLazyImage");
static_assert(sizeof(UCommonLazyImage) == 0x000380, "Wrong size on UCommonLazyImage");
static_assert(offsetof(UCommonLazyImage, LoadingBackgroundBrush) == 0x000280, "Member 'UCommonLazyImage::LoadingBackgroundBrush' has a wrong offset!");
static_assert(offsetof(UCommonLazyImage, MaterialTextureParamName) == 0x000340, "Member 'UCommonLazyImage::MaterialTextureParamName' has a wrong offset!");
static_assert(offsetof(UCommonLazyImage, BP_OnLoadingStateChanged) == 0x000348, "Member 'UCommonLazyImage::BP_OnLoadingStateChanged' has a wrong offset!");

class UCommonLazyWidget final : public UWidget
{
public:
	uint8                                         Pad_148[0x8];
	struct FSlateBrush                            LoadingBackgroundBrush;
	class UUserWidget*                            Content;
	uint8                                         Pad_218[0x28];
	TMulticastInlineDelegate<void(bool bIsLoading)> BP_OnLoadingStateChanged;
	uint8                                         Pad_250[0x40];

public:
	void SetLazyContent(const TSoftClassPtr<class UClass> SoftWidget);

	class UUserWidget* GetContent() const;
	bool IsLoading() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLazyWidget">();
	}
	static class UCommonLazyWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLazyWidget>();
	}
};
static_assert(alignof(UCommonLazyWidget) == 0x000010, "Wrong alignment on UCommonLazyWidget");
static_assert(sizeof(UCommonLazyWidget) == 0x000290, "Wrong size on UCommonLazyWidget");
static_assert(offsetof(UCommonLazyWidget, LoadingBackgroundBrush) == 0x000150, "Member 'UCommonLazyWidget::LoadingBackgroundBrush' has a wrong offset!");
static_assert(offsetof(UCommonLazyWidget, Content) == 0x000210, "Member 'UCommonLazyWidget::Content' has a wrong offset!");
static_assert(offsetof(UCommonLazyWidget, BP_OnLoadingStateChanged) == 0x000240, "Member 'UCommonLazyWidget::BP_OnLoadingStateChanged' has a wrong offset!");

class UCommonTreeView final : public UTreeView
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTreeView">();
	}
	static class UCommonTreeView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTreeView>();
	}
};
static_assert(alignof(UCommonTreeView) == 0x000010, "Wrong alignment on UCommonTreeView");
static_assert(sizeof(UCommonTreeView) == 0x000BF0, "Wrong size on UCommonTreeView");

class UCommonListView : public UListView
{
public:
	void SetEntrySpacing(float InEntrySpacing);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonListView">();
	}
	static class UCommonListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonListView>();
	}
};
static_assert(alignof(UCommonListView) == 0x000010, "Wrong alignment on UCommonListView");
static_assert(sizeof(UCommonListView) == 0x000B90, "Wrong size on UCommonListView");

class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                           Video;
	class UMediaPlayer*                           MediaPlayer;
	class UMediaTexture*                          MediaTexture;
	class UMaterial*                              VideoMaterial;
	class UMediaSoundComponent*                   SoundComponent;
	struct FSlateBrush                            VideoBrush;
	uint8                                         Pad_230[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonVideoPlayer">();
	}
	static class UCommonVideoPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonVideoPlayer>();
	}
};
static_assert(alignof(UCommonVideoPlayer) == 0x000010, "Wrong alignment on UCommonVideoPlayer");
static_assert(sizeof(UCommonVideoPlayer) == 0x000290, "Wrong size on UCommonVideoPlayer");
static_assert(offsetof(UCommonVideoPlayer, Video) == 0x000148, "Member 'UCommonVideoPlayer::Video' has a wrong offset!");
static_assert(offsetof(UCommonVideoPlayer, MediaPlayer) == 0x000150, "Member 'UCommonVideoPlayer::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UCommonVideoPlayer, MediaTexture) == 0x000158, "Member 'UCommonVideoPlayer::MediaTexture' has a wrong offset!");
static_assert(offsetof(UCommonVideoPlayer, VideoMaterial) == 0x000160, "Member 'UCommonVideoPlayer::VideoMaterial' has a wrong offset!");
static_assert(offsetof(UCommonVideoPlayer, SoundComponent) == 0x000168, "Member 'UCommonVideoPlayer::SoundComponent' has a wrong offset!");
static_assert(offsetof(UCommonVideoPlayer, VideoBrush) == 0x000170, "Member 'UCommonVideoPlayer::VideoBrush' has a wrong offset!");

class ULoadGuardSlot final : public UPanelSlot
{
public:
	struct FMargin                                Padding;
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_4A[0x16];

public:
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadGuardSlot">();
	}
	static class ULoadGuardSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadGuardSlot>();
	}
};
static_assert(alignof(ULoadGuardSlot) == 0x000008, "Wrong alignment on ULoadGuardSlot");
static_assert(sizeof(ULoadGuardSlot) == 0x000060, "Wrong size on ULoadGuardSlot");
static_assert(offsetof(ULoadGuardSlot, Padding) == 0x000038, "Member 'ULoadGuardSlot::Padding' has a wrong offset!");
static_assert(offsetof(ULoadGuardSlot, HorizontalAlignment) == 0x000048, "Member 'ULoadGuardSlot::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(ULoadGuardSlot, VerticalAlignment) == 0x000049, "Member 'ULoadGuardSlot::VerticalAlignment' has a wrong offset!");

class UCommonLoadGuard final : public UContentWidget
{
public:
	struct FSlateBrush                            LoadingBackgroundBrush;
	EHorizontalAlignment                          ThrobberAlignment;
	uint8                                         Pad_221[0x3];
	struct FMargin                                ThrobberPadding;
	uint8                                         Pad_234[0x4];
	class FText                                   LoadingText;
	TSubclassOf<class UCommonTextStyle>           TextStyle;
	TMulticastInlineDelegate<void(bool bIsLoading)> BP_OnLoadingStateChanged;
	struct FSoftObjectPath                        SpinnerMaterialPath;
	uint8                                         Pad_280[0x30];

public:
	void BP_GuardAndLoadAsset(const TSoftObjectPtr<class UObject>& InLazyAsset, const TDelegate<void(class UObject* Object)>& OnAssetLoaded);
	void SetIsLoading(bool bInIsLoading);
	void SetLoadingText(const class FText& InLoadingText);

	bool IsLoading() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLoadGuard">();
	}
	static class UCommonLoadGuard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLoadGuard>();
	}
};
static_assert(alignof(UCommonLoadGuard) == 0x000010, "Wrong alignment on UCommonLoadGuard");
static_assert(sizeof(UCommonLoadGuard) == 0x0002B0, "Wrong size on UCommonLoadGuard");
static_assert(offsetof(UCommonLoadGuard, LoadingBackgroundBrush) == 0x000160, "Member 'UCommonLoadGuard::LoadingBackgroundBrush' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, ThrobberAlignment) == 0x000220, "Member 'UCommonLoadGuard::ThrobberAlignment' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, ThrobberPadding) == 0x000224, "Member 'UCommonLoadGuard::ThrobberPadding' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, LoadingText) == 0x000238, "Member 'UCommonLoadGuard::LoadingText' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, TextStyle) == 0x000250, "Member 'UCommonLoadGuard::TextStyle' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, BP_OnLoadingStateChanged) == 0x000258, "Member 'UCommonLoadGuard::BP_OnLoadingStateChanged' has a wrong offset!");
static_assert(offsetof(UCommonLoadGuard, SpinnerMaterialPath) == 0x000268, "Member 'UCommonLoadGuard::SpinnerMaterialPath' has a wrong offset!");

class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	TMulticastInlineDelegate<void(class UCommonNumericTextBlock* NumericTextBlock)> OnInterpolationStartedEvent;
	TMulticastInlineDelegate<void(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)> OnInterpolationUpdatedEvent;
	TMulticastInlineDelegate<void(class UCommonNumericTextBlock* NumericTextBlock)> OnOutroEvent;
	TMulticastInlineDelegate<void(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)> OnInterpolationEndedEvent;
	float                                         CurrentNumericValue;
	ECommonNumericType                            NumericType;
	uint8                                         Pad_395[0x3];
	struct FCommonNumberFormattingOptions         FormattingSpecification;
	float                                         EaseOutInterpolationExponent;
	float                                         InterpolationUpdateInterval;
	float                                         PostInterpolationShrinkDuration;
	bool                                          PerformSizeInterpolation;
	bool                                          IsPercentage;
	uint8                                         Pad_3BA[0x36];

public:
	void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	void SetCurrentValue(const float NewValue);
	void SetNumericType(ECommonNumericType InNumericType);

	float GetTargetValue() const;
	bool IsInterpolatingNumericValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonNumericTextBlock">();
	}
	static class UCommonNumericTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonNumericTextBlock>();
	}
};
static_assert(alignof(UCommonNumericTextBlock) == 0x000010, "Wrong alignment on UCommonNumericTextBlock");
static_assert(sizeof(UCommonNumericTextBlock) == 0x0003F0, "Wrong size on UCommonNumericTextBlock");
static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationStartedEvent) == 0x000350, "Member 'UCommonNumericTextBlock::OnInterpolationStartedEvent' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationUpdatedEvent) == 0x000360, "Member 'UCommonNumericTextBlock::OnInterpolationUpdatedEvent' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, OnOutroEvent) == 0x000370, "Member 'UCommonNumericTextBlock::OnOutroEvent' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationEndedEvent) == 0x000380, "Member 'UCommonNumericTextBlock::OnInterpolationEndedEvent' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, CurrentNumericValue) == 0x000390, "Member 'UCommonNumericTextBlock::CurrentNumericValue' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, NumericType) == 0x000394, "Member 'UCommonNumericTextBlock::NumericType' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, FormattingSpecification) == 0x000398, "Member 'UCommonNumericTextBlock::FormattingSpecification' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, EaseOutInterpolationExponent) == 0x0003AC, "Member 'UCommonNumericTextBlock::EaseOutInterpolationExponent' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, InterpolationUpdateInterval) == 0x0003B0, "Member 'UCommonNumericTextBlock::InterpolationUpdateInterval' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, PostInterpolationShrinkDuration) == 0x0003B4, "Member 'UCommonNumericTextBlock::PostInterpolationShrinkDuration' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, PerformSizeInterpolation) == 0x0003B8, "Member 'UCommonNumericTextBlock::PerformSizeInterpolation' has a wrong offset!");
static_assert(offsetof(UCommonNumericTextBlock, IsPercentage) == 0x0003B9, "Member 'UCommonNumericTextBlock::IsPercentage' has a wrong offset!");

class ICommonPoolableWidgetInterface final : public IInterface
{
public:
	void OnAcquireFromPool();
	void OnReleaseToPool();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPoolableWidgetInterface">();
	}
	static class ICommonPoolableWidgetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICommonPoolableWidgetInterface>();
	}
};
static_assert(alignof(ICommonPoolableWidgetInterface) == 0x000008, "Wrong alignment on ICommonPoolableWidgetInterface");
static_assert(sizeof(ICommonPoolableWidgetInterface) == 0x000028, "Wrong size on ICommonPoolableWidgetInterface");

#pragma pack(push, 0x1)
class alignas(0x10) UCommonRichTextBlock : public URichTextBlock
{
public:
	ERichTextInlineIconDisplayMode                InlineIconDisplayMode;
	bool                                          bTintInlineIcon;
	uint8                                         Pad_802[0x6];
	TSubclassOf<class UCommonTextStyle>           DefaultTextStyleOverrideClass;
	float                                         MobileTextBlockScale;
	uint8                                         Pad_814[0x4];
	TSubclassOf<class UCommonTextScrollStyle>     ScrollStyle;
	bool                                          bIsScrollingEnabled;
	bool                                          bDisplayAllCaps;
	bool                                          bAutoCollapseWithEmptyText;
	uint8                                         Pad_823[0x15];

public:
	void SetScrollingEnabled(bool bInIsScrollingEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonRichTextBlock">();
	}
	static class UCommonRichTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonRichTextBlock>();
	}
};
#pragma pack(pop)
static_assert(alignof(UCommonRichTextBlock) == 0x000010, "Wrong alignment on UCommonRichTextBlock");
static_assert(sizeof(UCommonRichTextBlock) == 0x000840, "Wrong size on UCommonRichTextBlock");
static_assert(offsetof(UCommonRichTextBlock, InlineIconDisplayMode) == 0x000800, "Member 'UCommonRichTextBlock::InlineIconDisplayMode' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, bTintInlineIcon) == 0x000801, "Member 'UCommonRichTextBlock::bTintInlineIcon' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, DefaultTextStyleOverrideClass) == 0x000808, "Member 'UCommonRichTextBlock::DefaultTextStyleOverrideClass' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, MobileTextBlockScale) == 0x000810, "Member 'UCommonRichTextBlock::MobileTextBlockScale' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, ScrollStyle) == 0x000818, "Member 'UCommonRichTextBlock::ScrollStyle' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, bIsScrollingEnabled) == 0x000820, "Member 'UCommonRichTextBlock::bIsScrollingEnabled' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, bDisplayAllCaps) == 0x000821, "Member 'UCommonRichTextBlock::bDisplayAllCaps' has a wrong offset!");
static_assert(offsetof(UCommonRichTextBlock, bAutoCollapseWithEmptyText) == 0x000822, "Member 'UCommonRichTextBlock::bAutoCollapseWithEmptyText' has a wrong offset!");

class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void(class FName TabId)> OnTabSelected;
	TMulticastInlineDelegate<void(class FName TabId, class UCommonButtonBase* TabButton)> OnTabButtonCreation;
	TMulticastInlineDelegate<void(class FName TabId, class UCommonButtonBase* TabButton)> OnTabButtonRemoval;
	TMulticastInlineDelegate<void()>              OnTabListRebuilt;
	struct FDataTableRowHandle                    NextTabInputActionData;
	struct FDataTableRowHandle                    PreviousTabInputActionData;
	bool                                          bAutoListenForInput;
	bool                                          bDeferRebuildingTabList;
	uint8                                         Pad_2F2[0x2];
	TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;
	uint8                                         Pad_2FC[0x4];
	class UCommonButtonGroupBase*                 TabButtonGroup;
	uint8                                         Pad_308[0x8];
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;
	uint8                                         Pad_360[0x10];

public:
	void DisableTabWithReason(class FName TabNameID, const class FText& Reason);
	void HandleNextTabInputAction(bool* bPassThrough);
	void HandlePostLinkedSwitcherChanged_BP();
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, const int32 TabIndex);
	void RemoveAllTabs();
	bool RemoveTab(class FName TabNameID);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
	void SetListeningForInput(bool bShouldListen);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetTabInteractionEnabled(class FName TabNameID, bool bEnable);
	void SetTabVisibility(class FName TabNameID, ESlateVisibility NewVisibility);

	class FName GetActiveTab() const;
	class UCommonAnimatedSwitcher* GetLinkedSwitcher() const;
	class FName GetSelectedTabId() const;
	class UCommonButtonBase* GetTabButtonBaseByID(class FName TabNameID) const;
	int32 GetTabCount() const;
	class FName GetTabIdAtIndex(int32 Index_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTabListWidgetBase">();
	}
	static class UCommonTabListWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTabListWidgetBase>();
	}
};
static_assert(alignof(UCommonTabListWidgetBase) == 0x000008, "Wrong alignment on UCommonTabListWidgetBase");
static_assert(sizeof(UCommonTabListWidgetBase) == 0x000370, "Wrong size on UCommonTabListWidgetBase");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabSelected) == 0x000290, "Member 'UCommonTabListWidgetBase::OnTabSelected' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabButtonCreation) == 0x0002A0, "Member 'UCommonTabListWidgetBase::OnTabButtonCreation' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabButtonRemoval) == 0x0002B0, "Member 'UCommonTabListWidgetBase::OnTabButtonRemoval' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabListRebuilt) == 0x0002C0, "Member 'UCommonTabListWidgetBase::OnTabListRebuilt' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, NextTabInputActionData) == 0x0002D0, "Member 'UCommonTabListWidgetBase::NextTabInputActionData' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabInputActionData) == 0x0002E0, "Member 'UCommonTabListWidgetBase::PreviousTabInputActionData' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, bAutoListenForInput) == 0x0002F0, "Member 'UCommonTabListWidgetBase::bAutoListenForInput' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, bDeferRebuildingTabList) == 0x0002F1, "Member 'UCommonTabListWidgetBase::bDeferRebuildingTabList' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, LinkedSwitcher) == 0x0002F4, "Member 'UCommonTabListWidgetBase::LinkedSwitcher' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonGroup) == 0x000300, "Member 'UCommonTabListWidgetBase::TabButtonGroup' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetBase, RegisteredTabsByID) == 0x000310, "Member 'UCommonTabListWidgetBase::RegisteredTabsByID' has a wrong offset!");

class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                         Font;
	struct FLinearColor                           Color;
	bool                                          bUsesDropShadow;
	uint8                                         Pad_91[0x7];
	struct FVector2D                              ShadowOffset;
	struct FLinearColor                           ShadowColor;
	struct FMargin                                Margin;
	uint8                                         Pad_C8[0x8];
	struct FSlateBrush                            StrikeBrush;
	float                                         LineHeightPercentage;
	uint8                                         Pad_194[0xC];

public:
	void GetColor(struct FLinearColor* OutColor) const;
	void GetFont(struct FSlateFontInfo* OutFont) const;
	float GetLineHeightPercentage() const;
	void GetMargin(struct FMargin* OutMargin) const;
	void GetShadowColor(struct FLinearColor* OutColor) const;
	void GetShadowOffset(struct FVector2D* OutShadowOffset) const;
	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTextStyle">();
	}
	static class UCommonTextStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTextStyle>();
	}
};
static_assert(alignof(UCommonTextStyle) == 0x000010, "Wrong alignment on UCommonTextStyle");
static_assert(sizeof(UCommonTextStyle) == 0x0001A0, "Wrong size on UCommonTextStyle");
static_assert(offsetof(UCommonTextStyle, Font) == 0x000028, "Member 'UCommonTextStyle::Font' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, Color) == 0x000080, "Member 'UCommonTextStyle::Color' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, bUsesDropShadow) == 0x000090, "Member 'UCommonTextStyle::bUsesDropShadow' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, ShadowOffset) == 0x000098, "Member 'UCommonTextStyle::ShadowOffset' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, ShadowColor) == 0x0000A8, "Member 'UCommonTextStyle::ShadowColor' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, Margin) == 0x0000B8, "Member 'UCommonTextStyle::Margin' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, StrikeBrush) == 0x0000D0, "Member 'UCommonTextStyle::StrikeBrush' has a wrong offset!");
static_assert(offsetof(UCommonTextStyle, LineHeightPercentage) == 0x000190, "Member 'UCommonTextStyle::LineHeightPercentage' has a wrong offset!");

class UCommonTextScrollStyle : public UObject
{
public:
	float                                         Speed;
	float                                         StartDelay;
	float                                         EndDelay;
	float                                         FadeInDelay;
	float                                         FadeOutDelay;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTextScrollStyle">();
	}
	static class UCommonTextScrollStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTextScrollStyle>();
	}
};
static_assert(alignof(UCommonTextScrollStyle) == 0x000008, "Wrong alignment on UCommonTextScrollStyle");
static_assert(sizeof(UCommonTextScrollStyle) == 0x000040, "Wrong size on UCommonTextScrollStyle");
static_assert(offsetof(UCommonTextScrollStyle, Speed) == 0x000028, "Member 'UCommonTextScrollStyle::Speed' has a wrong offset!");
static_assert(offsetof(UCommonTextScrollStyle, StartDelay) == 0x00002C, "Member 'UCommonTextScrollStyle::StartDelay' has a wrong offset!");
static_assert(offsetof(UCommonTextScrollStyle, EndDelay) == 0x000030, "Member 'UCommonTextScrollStyle::EndDelay' has a wrong offset!");
static_assert(offsetof(UCommonTextScrollStyle, FadeInDelay) == 0x000034, "Member 'UCommonTextScrollStyle::FadeInDelay' has a wrong offset!");
static_assert(offsetof(UCommonTextScrollStyle, FadeOutDelay) == 0x000038, "Member 'UCommonTextScrollStyle::FadeOutDelay' has a wrong offset!");

class UCommonUIEditorSettings final : public UObject
{
public:
	TSoftClassPtr<class UClass>                   TemplateTextStyle;
	TSoftClassPtr<class UClass>                   TemplateButtonStyle;
	TSoftClassPtr<class UClass>                   TemplateBorderStyle;
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIEditorSettings">();
	}
	static class UCommonUIEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIEditorSettings>();
	}
};
static_assert(alignof(UCommonUIEditorSettings) == 0x000008, "Wrong alignment on UCommonUIEditorSettings");
static_assert(sizeof(UCommonUIEditorSettings) == 0x0000A8, "Wrong size on UCommonUIEditorSettings");
static_assert(offsetof(UCommonUIEditorSettings, TemplateTextStyle) == 0x000028, "Member 'UCommonUIEditorSettings::TemplateTextStyle' has a wrong offset!");
static_assert(offsetof(UCommonUIEditorSettings, TemplateButtonStyle) == 0x000050, "Member 'UCommonUIEditorSettings::TemplateButtonStyle' has a wrong offset!");
static_assert(offsetof(UCommonUIEditorSettings, TemplateBorderStyle) == 0x000078, "Member 'UCommonUIEditorSettings::TemplateBorderStyle' has a wrong offset!");

class UCommonUILibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUILibrary">();
	}
	static class UCommonUILibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUILibrary>();
	}
};
static_assert(alignof(UCommonUILibrary) == 0x000008, "Wrong alignment on UCommonUILibrary");
static_assert(sizeof(UCommonUILibrary) == 0x000028, "Wrong size on UCommonUILibrary");

class UCommonUISettings final : public UObject
{
public:
	bool                                          bAutoLoadData;
	uint8                                         Pad_29[0x7];
	TSoftObjectPtr<class UObject>                 DefaultImageResourceObject;
	TSoftObjectPtr<class UMaterialInterface>      DefaultThrobberMaterial;
	TSoftClassPtr<class UClass>                   DefaultRichTextDataClass;
	TArray<struct FGameplayTag>                   PlatformTraits;
	uint8                                         Pad_B8[0x28];
	class UObject*                                DefaultImageResourceObjectInstance;
	class UMaterialInterface*                     DefaultThrobberMaterialInstance;
	struct FSlateBrush                            DefaultThrobberBrush;
	class UCommonUIRichTextData*                  RichTextDataInstance;
	uint8                                         Pad_1B8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUISettings">();
	}
	static class UCommonUISettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUISettings>();
	}
};
static_assert(alignof(UCommonUISettings) == 0x000010, "Wrong alignment on UCommonUISettings");
static_assert(sizeof(UCommonUISettings) == 0x0001C0, "Wrong size on UCommonUISettings");
static_assert(offsetof(UCommonUISettings, bAutoLoadData) == 0x000028, "Member 'UCommonUISettings::bAutoLoadData' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObject) == 0x000030, "Member 'UCommonUISettings::DefaultImageResourceObject' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterial) == 0x000058, "Member 'UCommonUISettings::DefaultThrobberMaterial' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultRichTextDataClass) == 0x000080, "Member 'UCommonUISettings::DefaultRichTextDataClass' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, PlatformTraits) == 0x0000A8, "Member 'UCommonUISettings::PlatformTraits' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObjectInstance) == 0x0000E0, "Member 'UCommonUISettings::DefaultImageResourceObjectInstance' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterialInstance) == 0x0000E8, "Member 'UCommonUISettings::DefaultThrobberMaterialInstance' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, DefaultThrobberBrush) == 0x0000F0, "Member 'UCommonUISettings::DefaultThrobberBrush' has a wrong offset!");
static_assert(offsetof(UCommonUISettings, RichTextDataInstance) == 0x0001B0, "Member 'UCommonUISettings::RichTextDataInstance' has a wrong offset!");

class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x10];

public:
	struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const class FName& GamepadName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUISubsystemBase">();
	}
	static class UCommonUISubsystemBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUISubsystemBase>();
	}
};
static_assert(alignof(UCommonUISubsystemBase) == 0x000008, "Wrong alignment on UCommonUISubsystemBase");
static_assert(sizeof(UCommonUISubsystemBase) == 0x000040, "Wrong size on UCommonUISubsystemBase");

class UCommonVisibilitySwitcher : public UOverlay
{
public:
	ESlateVisibility                              ShownVisibility;
	uint8                                         Pad_171[0x3];
	int32                                         ActiveWidgetIndex;
	bool                                          bAutoActivateSlot;
	bool                                          bActivateFirstSlotOnAdding;
	uint8                                         Pad_17A[0x1E];

public:
	void ActivateVisibleSlot();
	void DeactivateVisibleSlot();
	void DecrementActiveWidgetIndex(bool bAllowWrapping);
	void IncrementActiveWidgetIndex(bool bAllowWrapping);
	void SetActiveWidget(const class UWidget* Widget);
	void SetActiveWidgetIndex(int32 Index_0);

	class UWidget* GetActiveWidget() const;
	int32 GetActiveWidgetIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonVisibilitySwitcher">();
	}
	static class UCommonVisibilitySwitcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonVisibilitySwitcher>();
	}
};
static_assert(alignof(UCommonVisibilitySwitcher) == 0x000008, "Wrong alignment on UCommonVisibilitySwitcher");
static_assert(sizeof(UCommonVisibilitySwitcher) == 0x000198, "Wrong size on UCommonVisibilitySwitcher");
static_assert(offsetof(UCommonVisibilitySwitcher, ShownVisibility) == 0x000170, "Member 'UCommonVisibilitySwitcher::ShownVisibility' has a wrong offset!");
static_assert(offsetof(UCommonVisibilitySwitcher, ActiveWidgetIndex) == 0x000174, "Member 'UCommonVisibilitySwitcher::ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(UCommonVisibilitySwitcher, bAutoActivateSlot) == 0x000178, "Member 'UCommonVisibilitySwitcher::bAutoActivateSlot' has a wrong offset!");
static_assert(offsetof(UCommonVisibilitySwitcher, bActivateFirstSlotOnAdding) == 0x000179, "Member 'UCommonVisibilitySwitcher::bActivateFirstSlotOnAdding' has a wrong offset!");

class UCommonVisibilitySwitcherSlot final : public UOverlaySlot
{
public:
	uint8                                         Pad_58[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonVisibilitySwitcherSlot">();
	}
	static class UCommonVisibilitySwitcherSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonVisibilitySwitcherSlot>();
	}
};
static_assert(alignof(UCommonVisibilitySwitcherSlot) == 0x000008, "Wrong alignment on UCommonVisibilitySwitcherSlot");
static_assert(sizeof(UCommonVisibilitySwitcherSlot) == 0x000068, "Wrong size on UCommonVisibilitySwitcherSlot");

class UCommonVisualAttachment final : public USizeBox
{
public:
	struct FVector2D                              ContentAnchor;
	uint8                                         Pad_1A8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonVisualAttachment">();
	}
	static class UCommonVisualAttachment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonVisualAttachment>();
	}
};
static_assert(alignof(UCommonVisualAttachment) == 0x000008, "Wrong alignment on UCommonVisualAttachment");
static_assert(sizeof(UCommonVisualAttachment) == 0x0001B8, "Wrong size on UCommonVisualAttachment");
static_assert(offsetof(UCommonVisualAttachment, ContentAnchor) == 0x000198, "Member 'UCommonVisualAttachment::ContentAnchor' has a wrong offset!");

class UCommonWidgetCarousel final : public UPanelWidget
{
public:
	int32                                         ActiveWidgetIndex;
	uint8                                         Pad_164[0x4];
	TMulticastInlineDelegate<void(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)> OnCurrentPageIndexChanged;
	uint8                                         Pad_178[0x30];

public:
	void BeginAutoScrolling(float ScrollInterval);
	void EndAutoScrolling();
	void NextPage();
	void PreviousPage();
	void SetActiveWidget(class UWidget* Widget);
	void SetActiveWidgetIndex(int32 Index_0);

	int32 GetActiveWidgetIndex() const;
	class UWidget* GetWidgetAtIndex(int32 Index_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonWidgetCarousel">();
	}
	static class UCommonWidgetCarousel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWidgetCarousel>();
	}
};
static_assert(alignof(UCommonWidgetCarousel) == 0x000008, "Wrong alignment on UCommonWidgetCarousel");
static_assert(sizeof(UCommonWidgetCarousel) == 0x0001A8, "Wrong size on UCommonWidgetCarousel");
static_assert(offsetof(UCommonWidgetCarousel, ActiveWidgetIndex) == 0x000160, "Member 'UCommonWidgetCarousel::ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(UCommonWidgetCarousel, OnCurrentPageIndexChanged) == 0x000168, "Member 'UCommonWidgetCarousel::OnCurrentPageIndexChanged' has a wrong offset!");

class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	TMulticastInlineDelegate<void(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)> OnSelectedButtonBaseChanged;
	uint8                                         Pad_38[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)> OnHoveredButtonBaseChanged;
	uint8                                         Pad_60[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)> OnButtonBaseClicked;
	uint8                                         Pad_88[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)> OnButtonBaseDoubleClicked;
	uint8                                         Pad_B0[0x18];
	TMulticastInlineDelegate<void()>              OnSelectionCleared;
	uint8                                         Pad_D8[0x18];
	bool                                          bSelectionRequired;
	uint8                                         Pad_F1[0x1F];

public:
	void DeselectAll();
	void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
	void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
	void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
	void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
	void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
	void SelectNextButton(bool bAllowWrap);
	void SelectPreviousButton(bool bAllowWrap);
	void SetSelectionRequired(bool bRequireSelection);

	int32 FindButtonIndex(const class UCommonButtonBase* ButtonToFind) const;
	class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index_0) const;
	int32 GetButtonCount() const;
	int32 GetHoveredButtonIndex() const;
	class UCommonButtonBase* GetSelectedButtonBase() const;
	int32 GetSelectedButtonIndex() const;
	bool HasAnyButtons() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonGroupBase">();
	}
	static class UCommonButtonGroupBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonGroupBase>();
	}
};
static_assert(alignof(UCommonButtonGroupBase) == 0x000008, "Wrong alignment on UCommonButtonGroupBase");
static_assert(sizeof(UCommonButtonGroupBase) == 0x000110, "Wrong size on UCommonButtonGroupBase");
static_assert(offsetof(UCommonButtonGroupBase, OnSelectedButtonBaseChanged) == 0x000028, "Member 'UCommonButtonGroupBase::OnSelectedButtonBaseChanged' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupBase, OnHoveredButtonBaseChanged) == 0x000050, "Member 'UCommonButtonGroupBase::OnHoveredButtonBaseChanged' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseClicked) == 0x000078, "Member 'UCommonButtonGroupBase::OnButtonBaseClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseDoubleClicked) == 0x0000A0, "Member 'UCommonButtonGroupBase::OnButtonBaseDoubleClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupBase, OnSelectionCleared) == 0x0000C8, "Member 'UCommonButtonGroupBase::OnSelectionCleared' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupBase, bSelectionRequired) == 0x0000F0, "Member 'UCommonButtonGroupBase::bSelectionRequired' has a wrong offset!");

class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	TSubclassOf<class UCommonButtonBase>          ActionButtonClass;
	bool                                          bDisplayOwningPlayerActionsOnly;
	bool                                          bIgnoreDuplicateActions;
	uint8                                         Pad_232[0x6];

public:
	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonBoundActionBar">();
	}
	static class UCommonBoundActionBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBoundActionBar>();
	}
};
static_assert(alignof(UCommonBoundActionBar) == 0x000008, "Wrong alignment on UCommonBoundActionBar");
static_assert(sizeof(UCommonBoundActionBar) == 0x000238, "Wrong size on UCommonBoundActionBar");
static_assert(offsetof(UCommonBoundActionBar, ActionButtonClass) == 0x000228, "Member 'UCommonBoundActionBar::ActionButtonClass' has a wrong offset!");
static_assert(offsetof(UCommonBoundActionBar, bDisplayOwningPlayerActionsOnly) == 0x000230, "Member 'UCommonBoundActionBar::bDisplayOwningPlayerActionsOnly' has a wrong offset!");
static_assert(offsetof(UCommonBoundActionBar, bIgnoreDuplicateActions) == 0x000231, "Member 'UCommonBoundActionBar::bIgnoreDuplicateActions' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UCommonBoundActionButton : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x8];
	class UCommonTextBlock*                       Text_ActionName;
	uint8                                         Pad_13F0[0x8];

public:
	void OnUpdateInputAction();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonBoundActionButton">();
	}
	static class UCommonBoundActionButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBoundActionButton>();
	}
};
#pragma pack(pop)
static_assert(alignof(UCommonBoundActionButton) == 0x000010, "Wrong alignment on UCommonBoundActionButton");
static_assert(sizeof(UCommonBoundActionButton) == 0x001400, "Wrong size on UCommonBoundActionButton");
static_assert(offsetof(UCommonBoundActionButton, Text_ActionName) == 0x0013E8, "Member 'UCommonBoundActionButton::Text_ActionName' has a wrong offset!");

class UCommonInputActionDataProcessor final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionDataProcessor">();
	}
	static class UCommonInputActionDataProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionDataProcessor>();
	}
};
static_assert(alignof(UCommonInputActionDataProcessor) == 0x000008, "Wrong alignment on UCommonInputActionDataProcessor");
static_assert(sizeof(UCommonInputActionDataProcessor) == 0x000028, "Wrong size on UCommonInputActionDataProcessor");

class UCommonStyleSheet final : public UDataAsset
{
public:
	TArray<class UCommonStyleSheetTypeBase*>      Properties;
	TArray<class UCommonStyleSheet*>              ImportedStyleSheets;
	uint8                                         Pad_50[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonStyleSheet">();
	}
	static class UCommonStyleSheet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonStyleSheet>();
	}
};
static_assert(alignof(UCommonStyleSheet) == 0x000008, "Wrong alignment on UCommonStyleSheet");
static_assert(sizeof(UCommonStyleSheet) == 0x000058, "Wrong size on UCommonStyleSheet");
static_assert(offsetof(UCommonStyleSheet, Properties) == 0x000030, "Member 'UCommonStyleSheet::Properties' has a wrong offset!");
static_assert(offsetof(UCommonStyleSheet, ImportedStyleSheets) == 0x000040, "Member 'UCommonStyleSheet::ImportedStyleSheets' has a wrong offset!");

class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	uint8                                         Pad_148[0x18];
	ECommonSwitcherTransition                     TransitionType;
	ETransitionCurve                              TransitionCurveType;
	uint8                                         Pad_162[0x2];
	float                                         TransitionDuration;
	TArray<class UCommonActivatableWidget*>       WidgetList;
	class UCommonActivatableWidget*               DisplayedWidget;
	struct FUserWidgetPool                        GeneratedWidgetsPool;
	uint8                                         Pad_208[0x60];

public:
	class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
	void ClearWidgets();
	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
	void SetTransitionDuration(float Duration);

	class UCommonActivatableWidget* GetActiveWidget() const;
	float GetTransitionDuration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatableWidgetContainerBase">();
	}
	static class UCommonActivatableWidgetContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatableWidgetContainerBase>();
	}
};
static_assert(alignof(UCommonActivatableWidgetContainerBase) == 0x000008, "Wrong alignment on UCommonActivatableWidgetContainerBase");
static_assert(sizeof(UCommonActivatableWidgetContainerBase) == 0x000268, "Wrong size on UCommonActivatableWidgetContainerBase");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionType) == 0x000160, "Member 'UCommonActivatableWidgetContainerBase::TransitionType' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionCurveType) == 0x000161, "Member 'UCommonActivatableWidgetContainerBase::TransitionCurveType' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionDuration) == 0x000164, "Member 'UCommonActivatableWidgetContainerBase::TransitionDuration' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, WidgetList) == 0x000168, "Member 'UCommonActivatableWidgetContainerBase::WidgetList' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, DisplayedWidget) == 0x000178, "Member 'UCommonActivatableWidgetContainerBase::DisplayedWidget' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool) == 0x000180, "Member 'UCommonActivatableWidgetContainerBase::GeneratedWidgetsPool' has a wrong offset!");

class UCommonActivatableWidgetStack final : public UCommonActivatableWidgetContainerBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>   RootContentWidgetClass;
	class UCommonActivatableWidget*               RootContentWidget;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatableWidgetStack">();
	}
	static class UCommonActivatableWidgetStack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatableWidgetStack>();
	}
};
static_assert(alignof(UCommonActivatableWidgetStack) == 0x000008, "Wrong alignment on UCommonActivatableWidgetStack");
static_assert(sizeof(UCommonActivatableWidgetStack) == 0x000278, "Wrong size on UCommonActivatableWidgetStack");
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidgetClass) == 0x000268, "Member 'UCommonActivatableWidgetStack::RootContentWidgetClass' has a wrong offset!");
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidget) == 0x000270, "Member 'UCommonActivatableWidgetStack::RootContentWidget' has a wrong offset!");

class UCommonActivatableWidgetQueue final : public UCommonActivatableWidgetContainerBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatableWidgetQueue">();
	}
	static class UCommonActivatableWidgetQueue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatableWidgetQueue>();
	}
};
static_assert(alignof(UCommonActivatableWidgetQueue) == 0x000008, "Wrong alignment on UCommonActivatableWidgetQueue");
static_assert(sizeof(UCommonActivatableWidgetQueue) == 0x000268, "Wrong size on UCommonActivatableWidgetQueue");

}
