#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "UMG_parameters.hpp"

namespace SDK
{

void UWidget::ForceLayoutPrepass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "ForceLayoutPrepass");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::ForceVolatile(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::Widget_ForceVolatile Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::InvalidateLayoutAndVolatility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "InvalidateLayoutAndVolatility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "K2_AddFieldValueChangedDelegate");

	Params::Widget_K2_AddFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "K2_BroadcastFieldValueChanged");

	Params::Widget_K2_BroadcastFieldValueChanged Parms{};

	Parms.FieldId = std::move(FieldId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "K2_RemoveFieldValueChangedDelegate");

	Params::Widget_K2_RemoveFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::RemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "RemoveFromParent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::ResetCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "ResetCursor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetAllNavigationRules(EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::Widget_SetAllNavigationRules Parms{};

	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetClipping(EWidgetClipping InClipping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetClipping");

	Params::Widget_SetClipping Parms{};

	Parms.InClipping = InClipping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetCursor(EMouseCursor InCursor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetCursor");

	Params::Widget_SetCursor Parms{};

	Parms.InCursor = InCursor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::Widget_SetIsEnabled Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetKeyboardFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::Widget_SetNavigationRule Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetNavigationRuleBase");

	Params::Widget_SetNavigationRuleBase Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetNavigationRuleCustom(EUINavigation Direction, TDelegate<void(EUINavigation Navigation)> InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustom");

	Params::Widget_SetNavigationRuleCustom Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, TDelegate<void(EUINavigation Navigation)> InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustomBoundary");

	Params::Widget_SetNavigationRuleCustomBoundary Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetNavigationRuleExplicit");

	Params::Widget_SetNavigationRuleExplicit Parms{};

	Parms.Direction = Direction;
	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderOpacity");

	Params::Widget_SetRenderOpacity Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::Widget_SetRenderScale Parms{};

	Parms.Scale = std::move(Scale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::Widget_SetRenderShear Parms{};

	Parms.Shear = std::move(Shear);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::Widget_SetRenderTransform Parms{};

	Parms.InTransform = std::move(InTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderTransformAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderTransformAngle");

	Params::Widget_SetRenderTransformAngle Parms{};

	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::Widget_SetRenderTransformPivot Parms{};

	Parms.Pivot = std::move(Pivot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::Widget_SetRenderTranslation Parms{};

	Parms.Translation = std::move(Translation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetToolTip(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetToolTip");

	Params::Widget_SetToolTip Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetToolTipText(const class FText& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::Widget_SetToolTipText Parms{};

	Parms.InToolTipText = std::move(InToolTipText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetUserFocus");

	Params::Widget_SetUserFocus Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidget::SetVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "SetVisibility");

	Params::Widget_SetVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UWidget::GetAccessibleSummaryText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetAccessibleSummaryText");

	Params::Widget_GetAccessibleSummaryText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UWidget::GetAccessibleText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetAccessibleText");

	Params::Widget_GetAccessibleText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGeometry UWidget::GetCachedGeometry() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::Widget_GetCachedGeometry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EWidgetClipping UWidget::GetClipping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetClipping");

	Params::Widget_GetClipping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidget::GetDesiredSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::Widget_GetDesiredSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameInstance* UWidget::GetGameInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetGameInstance");

	Params::Widget_GetGameInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::GetIsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::Widget_GetIsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULocalPlayer* UWidget::GetOwningLocalPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetOwningLocalPlayer");

	Params::Widget_GetOwningLocalPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class APlayerController* UWidget::GetOwningPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::Widget_GetOwningPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGeometry UWidget::GetPaintSpaceGeometry() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetPaintSpaceGeometry");

	Params::Widget_GetPaintSpaceGeometry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPanelWidget* UWidget::GetParent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetParent");

	Params::Widget_GetParent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidget::GetRenderOpacity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetRenderOpacity");

	Params::Widget_GetRenderOpacity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidget::GetRenderTransformAngle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetRenderTransformAngle");

	Params::Widget_GetRenderTransformAngle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGeometry UWidget::GetTickSpaceGeometry() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetTickSpaceGeometry");

	Params::Widget_GetTickSpaceGeometry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UWidget::GetVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "GetVisibility");

	Params::Widget_GetVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasAnyUserFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::Widget_HasAnyUserFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasFocusedDescendants() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::Widget_HasFocusedDescendants Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasKeyboardFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::Widget_HasKeyboardFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasMouseCapture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::Widget_HasMouseCapture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasMouseCaptureByUser");

	Params::Widget_HasMouseCaptureByUser Parms{};

	Parms.UserIndex = UserIndex;
	Parms.PointerIndex = PointerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasUserFocus(class APlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::Widget_HasUserFocus Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::Widget_HasUserFocusedDescendants Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::IsHovered() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "IsHovered");

	Params::Widget_IsHovered Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::IsInViewport() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "IsInViewport");

	Params::Widget_IsInViewport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::IsRendered() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "IsRendered");

	Params::Widget_IsRendered Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidget::IsVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget", "IsVisible");

	Params::Widget_IsVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetEntrySpacing");

	Params::DynamicEntryBoxBase_SetEntrySpacing Parms{};

	Parms.InEntrySpacing = std::move(InEntrySpacing);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetRadialSettings");

	Params::DynamicEntryBoxBase_SetRadialSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetAllEntries");

	Params::DynamicEntryBoxBase_GetAllEntries Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UDynamicEntryBoxBase::GetNumEntries() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetNumEntries");

	Params::DynamicEntryBoxBase_GetNumEntries Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntry");

	Params::DynamicEntryBox_BP_CreateEntry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(TSubclassOf<class UUserWidget> EntryClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");

	Params::DynamicEntryBox_BP_CreateEntryOfClass Parms{};

	Parms.EntryClass = EntryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBox", "RemoveEntry");

	Params::DynamicEntryBox_RemoveEntry Parms{};

	Parms.EntryWidget = EntryWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicEntryBox", "Reset");

	Params::DynamicEntryBox_Reset Parms{};

	Parms.bDeleteWidgets = bDeleteWidgets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetFont");

	Params::EditableText_SetFont Parms{};

	Parms.InFontInfo = std::move(InFontInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetFontMaterial");

	Params::EditableText_SetFontMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetFontOutlineMaterial");

	Params::EditableText_SetFontOutlineMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetHintText(const class FText& InHintText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetHintText");

	Params::EditableText_SetHintText Parms{};

	Parms.InHintText = std::move(InHintText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetIsPassword");

	Params::EditableText_SetIsPassword Parms{};

	Parms.InbIsPassword = InbIsPassword;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetIsReadOnly");

	Params::EditableText_SetIsReadOnly Parms{};

	Parms.InbIsReadyOnly = InbIsReadyOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetJustification(ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetJustification");

	Params::EditableText_SetJustification Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetMinimumDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetMinimumDesiredWidth");

	Params::EditableText_SetMinimumDesiredWidth Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetText");

	Params::EditableText_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableText::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "SetTextOverflowPolicy");

	Params::EditableText_SetTextOverflowPolicy Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FSlateFontInfo UEditableText::GetFont() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "GetFont");

	Params::EditableText_GetFont Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UEditableText::GetHintText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "GetHintText");

	Params::EditableText_GetHintText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ETextJustify UEditableText::GetJustification() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "GetJustification");

	Params::EditableText_GetJustification Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UEditableText::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableText", "GetText");

	Params::EditableText_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEditableTextBox::ClearError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "ClearError");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetError(const class FText& InError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::EditableTextBox_SetError Parms{};

	Parms.InError = std::move(InError);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetForegroundColor");

	Params::EditableTextBox_SetForegroundColor Parms{};

	Parms.Color = std::move(Color);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetHintText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetHintText");

	Params::EditableTextBox_SetHintText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetIsPassword");

	Params::EditableTextBox_SetIsPassword Parms{};

	Parms.bIsPassword = bIsPassword;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetIsReadOnly");

	Params::EditableTextBox_SetIsReadOnly Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetJustification(ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetJustification");

	Params::EditableTextBox_SetJustification Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::EditableTextBox_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEditableTextBox::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "SetTextOverflowPolicy");

	Params::EditableTextBox_SetTextOverflowPolicy Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UEditableTextBox::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::EditableTextBox_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEditableTextBox::HasError() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::EditableTextBox_HasError Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UListViewBase::RegenerateAllEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "RegenerateAllEntries");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::RequestRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "RequestRefresh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "ScrollToBottom");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "ScrollToTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::SetScrollbarVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "SetScrollbarVisibility");

	Params::ListViewBase_SetScrollbarVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::SetScrollOffset(const float InScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "SetScrollOffset");

	Params::ListViewBase_SetScrollOffset Parms{};

	Parms.InScrollOffset = InScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "SetWheelScrollMultiplier");

	Params::ListViewBase_SetWheelScrollMultiplier Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");

	Params::ListViewBase_GetDisplayedEntryWidgets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UListViewBase::GetScrollOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListViewBase", "GetScrollOffset");

	Params::ListViewBase_GetScrollOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded");

	Params::ExpandableArea_SetIsExpanded Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded_Animated");

	Params::ExpandableArea_SetIsExpanded_Animated Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UExpandableArea::GetIsExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::ExpandableArea_GetIsExpanded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UListView::AddItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "AddItem");

	Params::ListView_AddItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_CancelScrollIntoView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_CancelScrollIntoView");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_ClearSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_NavigateToItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_NavigateToItem");

	Params::ListView_BP_NavigateToItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_ScrollItemIntoView");

	Params::ListView_BP_ScrollItemIntoView Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_SetItemSelection");

	Params::ListView_BP_SetItemSelection Parms{};

	Parms.Item = Item;
	Parms.bSelected = bSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_SetListItems(const TArray<class UObject*>& InListItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_SetListItems");

	Params::ListView_BP_SetListItems Parms{};

	Parms.InListItems = std::move(InListItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::BP_SetSelectedItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_SetSelectedItem");

	Params::ListView_BP_SetSelectedItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::ClearListItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "ClearListItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UListView::NavigateToIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "NavigateToIndex");

	Params::ListView_NavigateToIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::OnListItemEndPlayed(class AActor* Item, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "OnListItemEndPlayed");

	Params::ListView_OnListItemEndPlayed Parms{};

	Parms.Item = Item;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::OnListItemOuterEndPlayed(class AActor* ItemOuter, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "OnListItemOuterEndPlayed");

	Params::ListView_OnListItemOuterEndPlayed Parms{};

	Parms.ItemOuter = ItemOuter;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::RemoveItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "RemoveItem");

	Params::ListView_RemoveItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::ScrollIndexIntoView(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "ScrollIndexIntoView");

	Params::ListView_ScrollIndexIntoView Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::SetSelectedIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "SetSelectedIndex");

	Params::ListView_SetSelectedIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UListView::SetSelectionMode(ESelectionMode SelectionMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "SetSelectionMode");

	Params::ListView_SetSelectionMode Parms{};

	Parms.SelectionMode_0 = SelectionMode_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UListView::BP_GetNumItemsSelected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_GetNumItemsSelected");

	Params::ListView_BP_GetNumItemsSelected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UListView::BP_GetSelectedItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItem");

	Params::ListView_BP_GetSelectedItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItems");

	Params::ListView_BP_GetSelectedItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

	return Parms.ReturnValue;
}

bool UListView::BP_IsItemVisible(class UObject* Item) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "BP_IsItemVisible");

	Params::ListView_BP_IsItemVisible Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UListView::GetIndexForItem(const class UObject* Item) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "GetIndexForItem");

	Params::ListView_GetIndexForItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UListView::GetItemAt(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "GetItemAt");

	Params::ListView_GetItemAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UObject*> UListView::GetListItems() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "GetListItems");

	Params::ListView_GetListItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UListView::GetNumItems() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "GetNumItems");

	Params::ListView_GetNumItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UListView::IsRefreshPending() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ListView", "IsRefreshPending");

	Params::ListView_IsRefreshPending Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");

	Params::WindowTitleBarAreaSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetPadding");

	Params::WindowTitleBarAreaSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindowTitleBarAreaSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");

	Params::WindowTitleBarAreaSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UUserWidgetExtension* UUserWidget::AddExtension(TSubclassOf<class UUserWidgetExtension> InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "AddExtension");

	Params::UserWidget_AddExtension Parms{};

	Parms.InExtensionType = InExtensionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::AddToPlayerScreen(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UserWidget_AddToPlayerScreen Parms{};

	Parms.ZOrder = ZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserWidget::AddToViewport(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UserWidget_AddToViewport Parms{};

	Parms.ZOrder = ZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, TDelegate<void()> Delegate, EWidgetAnimationEvent AnimationEvent, class FName UserTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "BindToAnimationEvent");

	Params::UserWidget_BindToAnimationEvent Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;
	Parms.AnimationEvent = AnimationEvent;
	Parms.UserTag = UserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "BindToAnimationFinished");

	Params::UserWidget_BindToAnimationFinished Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "BindToAnimationStarted");

	Params::UserWidget_BindToAnimationStarted Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::CancelLatentActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "CancelLatentActions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserWidget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserWidget::FlushAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "FlushAnimations");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UUserWidget::IsAnimationPlayingForward(const class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UserWidget_IsAnimationPlayingForward Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserWidget::ListenForInputAction(class FName ActionName, EInputEvent EventType, bool bConsume, TDelegate<void()> Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UserWidget_ListenForInputAction Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnAddedToFocusPath");

	Params::UserWidget_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UserWidget_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UUserWidget::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UserWidget_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UserWidget_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UserWidget_OnDragCancelled Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UserWidget_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UserWidget_OnDragEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UserWidget_OnDragLeave Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}

bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UserWidget_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UserWidget_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UserWidget_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UserWidget_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UUserWidget::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UserWidget_OnKeyChar Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InCharacterEvent = std::move(InCharacterEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UserWidget_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UserWidget_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UserWidget_OnMotionDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InMotionEvent = std::move(InMotionEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UserWidget_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UserWidget_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UserWidget_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UUserWidget::OnMouseCaptureLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseCaptureLost");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UserWidget_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UserWidget_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UserWidget_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UserWidget_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UserWidget_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UserWidget_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnRemovedFromFocusPath");

	Params::UserWidget_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UserWidget_OnTouchEnded Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnTouchForceChanged");

	Params::UserWidget_OnTouchForceChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UserWidget_OnTouchGesture Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.GestureEvent = std::move(GestureEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UserWidget_OnTouchMoved Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UserWidget_OnTouchStarted Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float UUserWidget::PauseAnimation(const class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UserWidget_PauseAnimation Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UserWidget_PlayAnimation Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PlayAnimationForward");

	Params::UserWidget_PlayAnimationForward Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PlayAnimationReverse");

	Params::UserWidget_PlayAnimationReverse Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PlayAnimationTimeRange");

	Params::UserWidget_PlayAnimationTimeRange Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UserWidget_PlaySound Parms{};

	Parms.SoundToPlay = SoundToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UserWidget_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserWidget::RegisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "RegisterInputComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::RemoveExtension(class UUserWidgetExtension* InExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "RemoveExtension");

	Params::UserWidget_RemoveExtension Parms{};

	Parms.InExtension = InExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::RemoveExtensions(TSubclassOf<class UUserWidgetExtension> InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "RemoveExtensions");

	Params::UserWidget_RemoveExtensions Parms{};

	Parms.InExtensionType = InExtensionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::RemoveFromViewport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "RemoveFromViewport");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::ReverseAnimation(const class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UserWidget_ReverseAnimation Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UserWidget_SetAlignmentInViewport Parms{};

	Parms.Alignment = std::move(Alignment);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetAnchorsInViewport");

	Params::UserWidget_SetAnchorsInViewport Parms{};

	Parms.Anchors = std::move(Anchors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetAnimationCurrentTime(const class UWidgetAnimation* InAnimation, float InTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetAnimationCurrentTime");

	Params::UserWidget_SetAnimationCurrentTime Parms{};

	Parms.InAnimation = InAnimation;
	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UserWidget_SetColorAndOpacity Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetDesiredSizeInViewport");

	Params::UserWidget_SetDesiredSizeInViewport Parms{};

	Parms.Size = std::move(Size);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetForegroundColor");

	Params::UserWidget_SetForegroundColor Parms{};

	Parms.InForegroundColor = std::move(InForegroundColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UserWidget_SetInputActionBlocking Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetInputActionPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UserWidget_SetInputActionPriority Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetNumLoopsToPlay(const class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UserWidget_SetNumLoopsToPlay Parms{};

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetOwningPlayer");

	Params::UserWidget_SetOwningPlayer Parms{};

	Parms.LocalPlayerController = LocalPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetPadding");

	Params::UserWidget_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetPlaybackSpeed(const class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UserWidget_SetPlaybackSpeed Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UserWidget_SetPositionInViewport Parms{};

	Parms.Position = std::move(Position);
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::StopAllAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "StopAllAnimations");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::StopAnimation(const class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UserWidget_StopAnimation Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::StopAnimationsAndLatentActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "StopAnimationsAndLatentActions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::StopListeningForAllInputActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "StopListeningForAllInputActions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::StopListeningForInputAction(class FName ActionName, EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UserWidget_StopListeningForInputAction Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "Tick");

	Params::UserWidget_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");

	Params::UserWidget_UnbindAllFromAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");

	Params::UserWidget_UnbindAllFromAnimationStarted Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationFinished");

	Params::UserWidget_UnbindFromAnimationFinished Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationStarted");

	Params::UserWidget_UnbindFromAnimationStarted Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserWidget::UnregisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "UnregisterInputComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UUserWidget::GetAlignmentInViewport() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UserWidget_GetAlignmentInViewport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAnchors UUserWidget::GetAnchorsInViewport() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UserWidget_GetAnchorsInViewport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UUserWidget::GetAnimationCurrentTime(const class UWidgetAnimation* InAnimation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UserWidget_GetAnimationCurrentTime Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidgetExtension* UUserWidget::GetExtension(TSubclassOf<class UUserWidgetExtension> ExtensionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetExtension");

	Params::UserWidget_GetExtension Parms{};

	Parms.ExtensionType = ExtensionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UUserWidgetExtension*> UUserWidget::GetExtensions(TSubclassOf<class UUserWidgetExtension> ExtensionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetExtensions");

	Params::UserWidget_GetExtensions Parms{};

	Parms.ExtensionType = ExtensionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::GetIsVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UserWidget_GetIsVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerCameraManager");

	Params::UserWidget_GetOwningPlayerCameraManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class APawn* UUserWidget::GetOwningPlayerPawn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UserWidget_GetOwningPlayerPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::IsAnimationPlaying(const class UWidgetAnimation* InAnimation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UserWidget_IsAnimationPlaying Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::IsAnyAnimationPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UserWidget_IsAnyAnimationPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::IsInteractable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UserWidget_IsInteractable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UUserWidget::IsListeningForInputAction(class FName ActionName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UserWidget_IsListeningForInputAction Parms{};

	Parms.ActionName = ActionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserWidget::IsPlayingAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UserWidget_IsPlayingAnimation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserWidget::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UserWidget_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::WidgetBlueprintLibrary_CaptureJoystick Parms{};

	Parms.Reply = std::move(Reply);
	Parms.CapturingWidget = CapturingWidget;
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::WidgetBlueprintLibrary_CaptureMouse Parms{};

	Parms.Reply = std::move(Reply);
	Parms.CapturingWidget = CapturingWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::WidgetBlueprintLibrary_ClearUserFocus Parms{};

	Parms.Reply = std::move(Reply);
	Parms.bInAllUsers = bInAllUsers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::WidgetBlueprintLibrary_Create Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetType = WidgetType;
	Parms.OwningPlayer = OwningPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::WidgetBlueprintLibrary_CreateDragDropOperation Parms{};

	Parms.OperationClass = OperationClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::WidgetBlueprintLibrary_DetectDrag Parms{};

	Parms.Reply = std::move(Reply);
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = std::move(DragKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::WidgetBlueprintLibrary_DetectDragIfPressed Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = std::move(DragKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::WidgetBlueprintLibrary_DrawBox Parms{};

	Parms.Context = std::move(Context);
	Parms.Position = std::move(Position);
	Parms.Size = std::move(Size);
	Parms.Brush = Brush;
	Parms.Tint = std::move(Tint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::WidgetBlueprintLibrary_DrawLine Parms{};

	Parms.Context = std::move(Context);
	Parms.PositionA = std::move(PositionA);
	Parms.PositionB = std::move(PositionB);
	Parms.Tint = std::move(Tint);
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext& Context, const TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::WidgetBlueprintLibrary_DrawLines Parms{};

	Parms.Context = std::move(Context);
	Parms.Points = std::move(Points);
	Parms.Tint = std::move(Tint);
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::DrawSpline(struct FPaintContext& Context, const struct FVector2D& Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir, const struct FLinearColor& Tint, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawSpline");

	Params::WidgetBlueprintLibrary_DrawSpline Parms{};

	Parms.Context = std::move(Context);
	Parms.Start = std::move(Start);
	Parms.StartDir = std::move(StartDir);
	Parms.End = std::move(End);
	Parms.EndDir = std::move(EndDir);
	Parms.Tint = std::move(Tint);
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::DrawText(struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::WidgetBlueprintLibrary_DrawText Parms{};

	Parms.Context = std::move(Context);
	Parms.InString = std::move(InString);
	Parms.Position = std::move(Position);
	Parms.Tint = std::move(Tint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext& Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::WidgetBlueprintLibrary_DrawTextFormatted Parms{};

	Parms.Context = std::move(Context);
	Parms.Text = std::move(Text);
	Parms.Position = std::move(Position);
	Parms.Font = Font;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;
	Parms.Tint = std::move(Tint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::WidgetBlueprintLibrary_EndDragDrop Parms{};

	Parms.Reply = std::move(Reply);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::WidgetBlueprintLibrary_GetAllWidgetsOfClass Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FoundWidgets != nullptr)
		*FoundWidgets = std::move(Parms.FoundWidgets);
}

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class IInterface> Interface, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::WidgetBlueprintLibrary_GetAllWidgetsWithInterface Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Interface = Interface;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FoundWidgets != nullptr)
		*FoundWidgets = std::move(Parms.FoundWidgets);
}

class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::WidgetBlueprintLibrary_GetBrushResource Parms{};

	Parms.Brush = std::move(Brush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::WidgetBlueprintLibrary_GetBrushResourceAsMaterial Parms{};

	Parms.Brush = std::move(Brush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::WidgetBlueprintLibrary_GetBrushResourceAsTexture2D Parms{};

	Parms.Brush = std::move(Brush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::WidgetBlueprintLibrary_GetDragDroppingContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::WidgetBlueprintLibrary_GetDynamicMaterial Parms{};

	Parms.Brush = std::move(Brush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Brush = std::move(Parms.Brush);

	return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::WidgetBlueprintLibrary_GetInputEventFromCharacterEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::WidgetBlueprintLibrary_GetInputEventFromKeyEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::WidgetBlueprintLibrary_GetInputEventFromNavigationEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::WidgetBlueprintLibrary_GetInputEventFromPointerEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::WidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::WidgetBlueprintLibrary_GetSafeZonePadding Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SafePadding != nullptr)
		*SafePadding = std::move(Parms.SafePadding);

	if (SafePaddingScale != nullptr)
		*SafePaddingScale = std::move(Parms.SafePaddingScale);

	if (SpillOverPadding != nullptr)
		*SpillOverPadding = std::move(Parms.SpillOverPadding);
}

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::WidgetBlueprintLibrary_Handled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::WidgetBlueprintLibrary_IsDragDropping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::WidgetBlueprintLibrary_LockMouse Parms{};

	Parms.Reply = std::move(Reply);
	Parms.CapturingWidget = CapturingWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::WidgetBlueprintLibrary_MakeBrushFromAsset Parms{};

	Parms.BrushAsset = BrushAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::WidgetBlueprintLibrary_MakeBrushFromMaterial Parms{};

	Parms.Material = Material;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::WidgetBlueprintLibrary_MakeBrushFromTexture Parms{};

	Parms.Texture = Texture;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::WidgetBlueprintLibrary_NoResourceBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::WidgetBlueprintLibrary_ReleaseJoystickCapture Parms{};

	Parms.Reply = std::move(Reply);
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::WidgetBlueprintLibrary_ReleaseMouseCapture Parms{};

	Parms.Reply = std::move(Reply);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "RestorePreviousWindowTitleBarState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush& Brush, class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::WidgetBlueprintLibrary_SetBrushResourceToMaterial Parms{};

	Parms.Brush = std::move(Brush);
	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Brush = std::move(Parms.Brush);
}

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush& Brush, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::WidgetBlueprintLibrary_SetBrushResourceToTexture Parms{};

	Parms.Brush = std::move(Brush);
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Brush = std::move(Parms.Brush);
}

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");

	Params::WidgetBlueprintLibrary_SetColorVisionDeficiencyType Parms{};

	Parms.Type = Type;
	Parms.Severity = Severity;
	Parms.CorrectDeficiency = CorrectDeficiency;
	Parms.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, class FName CursorName, const struct FVector2D& HotSpot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");

	Params::WidgetBlueprintLibrary_SetHardwareCursor Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CursorShape = CursorShape;
	Parms.CursorName = CursorName;
	Parms.HotSpot = std::move(HotSpot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, const bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::WidgetBlueprintLibrary_SetInputMode_GameAndUIEx Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController, const bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");

	Params::WidgetBlueprintLibrary_SetInputMode_GameOnly Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, const bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::WidgetBlueprintLibrary_SetInputMode_UIOnlyEx Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply& Reply, const struct FVector2D& NewMousePosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::WidgetBlueprintLibrary_SetMousePosition Parms{};

	Parms.Reply = std::move(Reply);
	Parms.NewMousePosition = std::move(NewMousePosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::WidgetBlueprintLibrary_SetUserFocus Parms{};

	Parms.Reply = std::move(Reply);
	Parms.FocusWidget = FocusWidget;
	Parms.bInAllUsers = bInAllUsers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");

	Params::WidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarOnCloseClickedDelegate");

	Params::WidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");

	Params::WidgetBlueprintLibrary_SetWindowTitleBarState Parms{};

	Parms.TitleBarContent = TitleBarContent;
	Parms.Mode = Mode;
	Parms.bTitleBarDragEnabled = bTitleBarDragEnabled;
	Parms.bWindowButtonsVisible = bWindowButtonsVisible;
	Parms.bTitleBarVisible = bTitleBarVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::WidgetBlueprintLibrary_Unhandled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::WidgetBlueprintLibrary_UnlockMouse Parms{};

	Parms.Reply = std::move(Reply);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Reply = std::move(Parms.Reply);

	return Parms.ReturnValue;
}

void UUMGSequencePlayer::SetUserTag(class FName InUserTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMGSequencePlayer", "SetUserTag");

	Params::UMGSequencePlayer_SetUserTag Parms{};

	Parms.InUserTag = InUserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UUMGSequencePlayer::GetUserTag() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMGSequencePlayer", "GetUserTag");

	Params::UMGSequencePlayer_GetUserTag Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationFinished");

	Params::WidgetAnimation_BindToAnimationFinished Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationStarted");

	Params::WidgetAnimation_BindToAnimationStarted Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationFinished");

	Params::WidgetAnimation_UnbindAllFromAnimationFinished Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationStarted");

	Params::WidgetAnimation_UnbindAllFromAnimationStarted Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationFinished");

	Params::WidgetAnimation_UnbindFromAnimationFinished Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, TDelegate<void()> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationStarted");

	Params::WidgetAnimation_UnbindFromAnimationStarted Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UWidgetAnimation::GetEndTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::WidgetAnimation_GetEndTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidgetAnimation::GetStartTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::WidgetAnimation_GetStartTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");

	Params::WidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject Parms{};

	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");

	Params::WidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject Parms{};

	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UBoolBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::BoolBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UBrushBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::BrushBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECheckBoxState UCheckedStateBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::CheckedStateBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UColorBinding::GetLinearValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::ColorBinding_GetLinearValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateColor UColorBinding::GetSlateValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::ColorBinding_GetSlateValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFloatBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::FloatBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UInt32Binding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::Int32Binding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMouseCursor UMouseCursorBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::MouseCursorBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UTextBinding::GetStringValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::TextBinding_GetStringValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UTextBinding::GetTextValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::TextBinding_GetTextValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UVisibilityBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::VisibilityBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidget* UWidgetBinding::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::WidgetBinding_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::AsyncTaskDownloadImage_DownloadImage Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& Slot, const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameViewportSubsystem", "SetWidgetSlotDesiredSize");

	Params::GameViewportSubsystem_SetWidgetSlotDesiredSize Parms{};

	Parms.Slot = std::move(Slot);
	Parms.Size = std::move(Size);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& Slot, const class UWidget* Widget, const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameViewportSubsystem", "SetWidgetSlotPosition");

	Params::GameViewportSubsystem_SetWidgetSlotPosition Parms{};

	Parms.Slot = std::move(Slot);
	Parms.Widget = Widget;
	Parms.Position = std::move(Position);
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameViewportSubsystem::AddWidget(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidget");

	Params::GameViewportSubsystem_AddWidget Parms{};

	Parms.Widget = Widget;
	Parms.Slot = std::move(Slot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameViewportSubsystem::AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidgetForPlayer");

	Params::GameViewportSubsystem_AddWidgetForPlayer Parms{};

	Parms.Widget = Widget;
	Parms.Player = Player;
	Parms.Slot = std::move(Slot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameViewportSubsystem::RemoveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "RemoveWidget");

	Params::GameViewportSubsystem_RemoveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameViewportSubsystem::SetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlot");

	Params::GameViewportSubsystem_SetWidgetSlot Parms{};

	Parms.Widget = Widget;
	Parms.Slot = std::move(Slot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot(const class UWidget* Widget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "GetWidgetSlot");

	Params::GameViewportSubsystem_GetWidgetSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameViewportSubsystem::IsWidgetAdded(const class UWidget* Widget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameViewportSubsystem", "IsWidgetAdded");

	Params::GameViewportSubsystem_IsWidgetAdded Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IUserListEntry::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");

	Params::UserListEntry_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");

	Params::UserListEntry_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

class UListViewBase* UUserListEntryLibrary::GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UserListEntryLibrary", "GetOwningListView");

	Params::UserListEntryLibrary_GetOwningListView Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UserListEntryLibrary", "IsListItemExpanded");

	Params::UserListEntryLibrary_IsListItemExpanded Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserListEntryLibrary::IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UserListEntryLibrary", "IsListItemSelected");

	Params::UserListEntryLibrary_IsListItemSelected Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserObjectListEntry", "OnListItemObjectSet");

	Params::UserObjectListEntry_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

class UObject* UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");

	Params::UserObjectListEntryLibrary_GetListItemObject Parms{};

	Parms.UserObjectListEntry = UserObjectListEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::PanelWidget_AddChild Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPanelWidget::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "ClearChildren");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::PanelWidget_RemoveChild Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPanelWidget::RemoveChildAt(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::PanelWidget_RemoveChildAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UWidget*> UPanelWidget::GetAllChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "GetAllChildren");

	Params::PanelWidget_GetAllChildren Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidget* UPanelWidget::GetChildAt(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::PanelWidget_GetChildAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPanelWidget::GetChildIndex(const class UWidget* Content) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::PanelWidget_GetChildIndex Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPanelWidget::GetChildrenCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::PanelWidget_GetChildrenCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPanelWidget::HasAnyChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::PanelWidget_HasAnyChildren Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPanelWidget::HasChild(class UWidget* Content) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::PanelWidget_HasChild Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::ContentWidget_SetContent Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidget* UContentWidget::GetContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentWidget", "GetContent");

	Params::ContentWidget_GetContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPanelSlot* UContentWidget::GetContentSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::ContentWidget_GetContentSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");

	Params::BackgroundBlur_SetApplyAlphaToBlur Parms{};

	Parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurRadius");

	Params::BackgroundBlur_SetBlurRadius Parms{};

	Parms.InBlurRadius = InBlurRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurStrength");

	Params::BackgroundBlur_SetBlurStrength Parms{};

	Parms.InStrength = InStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetCornerRadius(const struct FVector4& InCornerRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetCornerRadius");

	Params::BackgroundBlur_SetCornerRadius Parms{};

	Parms.InCornerRadius = std::move(InCornerRadius);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetHorizontalAlignment");

	Params::BackgroundBlur_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");

	Params::BackgroundBlur_SetLowQualityFallbackBrush Parms{};

	Parms.InBrush = std::move(InBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetPadding");

	Params::BackgroundBlur_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlur::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlur", "SetVerticalAlignment");

	Params::BackgroundBlur_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlurSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");

	Params::BackgroundBlurSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetPadding");

	Params::BackgroundBlurSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBackgroundBlurSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");

	Params::BackgroundBlurSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::Border_GetDynamicMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetBrush");

	Params::Border_SetBrush Parms{};

	Parms.InBrush = std::move(InBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetBrushColor");

	Params::Border_SetBrushColor Parms{};

	Parms.InBrushColor = std::move(InBrushColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::Border_SetBrushFromAsset Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::Border_SetBrushFromMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::Border_SetBrushFromTexture Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetContentColorAndOpacity");

	Params::Border_SetContentColorAndOpacity Parms{};

	Parms.InContentColorAndOpacity = std::move(InContentColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::Border_SetDesiredSizeScale Parms{};

	Parms.InScale = std::move(InScale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetHorizontalAlignment");

	Params::Border_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetPadding");

	Params::Border_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetShowEffectWhenDisabled");

	Params::Border_SetShowEffectWhenDisabled Parms{};

	Parms.bInShowEffectWhenDisabled = bInShowEffectWhenDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Border", "SetVerticalAlignment");

	Params::Border_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BorderSlot", "SetHorizontalAlignment");

	Params::BorderSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BorderSlot", "SetPadding");

	Params::BorderSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BorderSlot", "SetVerticalAlignment");

	Params::BorderSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UViewport::SetViewLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "SetViewLocation");

	Params::Viewport_SetViewLocation Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "SetViewRotation");

	Params::Viewport_SetViewRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UViewport::Spawn(TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "Spawn");

	Params::Viewport_Spawn Parms{};

	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UViewport::GetViewLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::Viewport_GetViewLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWorld* UViewport::GetViewportWorld() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::Viewport_GetViewportWorld Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator UViewport::GetViewRotation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::Viewport_GetViewRotation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetBackgroundColor");

	Params::Button_SetBackgroundColor Parms{};

	Parms.InBackgroundColor = std::move(InBackgroundColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButton::SetClickMethod(EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetClickMethod");

	Params::Button_SetClickMethod Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::Button_SetColorAndOpacity Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButton::SetPressMethod(EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetPressMethod");

	Params::Button_SetPressMethod Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetStyle");

	Params::Button_SetStyle Parms{};

	Parms.InStyle = std::move(InStyle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButton::SetTouchMethod(EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "SetTouchMethod");

	Params::Button_SetTouchMethod Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UButton::IsPressed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button", "IsPressed");

	Params::Button_IsPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UButtonSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonSlot", "SetHorizontalAlignment");

	Params::ButtonSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonSlot", "SetPadding");

	Params::ButtonSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UButtonSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonSlot", "SetVerticalAlignment");

	Params::ButtonSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::CanvasPanel_AddChildToCanvas Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAlignment");

	Params::CanvasPanelSlot_SetAlignment Parms{};

	Parms.InAlignment = std::move(InAlignment);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAnchors");

	Params::CanvasPanelSlot_SetAnchors Parms{};

	Parms.InAnchors = std::move(InAnchors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAutoSize");

	Params::CanvasPanelSlot_SetAutoSize Parms{};

	Parms.InbAutoSize = InbAutoSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetLayout");

	Params::CanvasPanelSlot_SetLayout Parms{};

	Parms.InLayoutData = std::move(InLayoutData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMaximum");

	Params::CanvasPanelSlot_SetMaximum Parms{};

	Parms.InMaximumAnchors = std::move(InMaximumAnchors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMinimum");

	Params::CanvasPanelSlot_SetMinimum Parms{};

	Parms.InMinimumAnchors = std::move(InMinimumAnchors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetOffsets");

	Params::CanvasPanelSlot_SetOffsets Parms{};

	Parms.InOffset = std::move(InOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::CanvasPanelSlot_SetPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::CanvasPanelSlot_SetSize Parms{};

	Parms.InSize = std::move(InSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCanvasPanelSlot::SetZOrder(int32 InZOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "SetZOrder");

	Params::CanvasPanelSlot_SetZOrder Parms{};

	Parms.InZOrder = InZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UCanvasPanelSlot::GetAlignment() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::CanvasPanelSlot_GetAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAnchors UCanvasPanelSlot::GetAnchors() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::CanvasPanelSlot_GetAnchors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCanvasPanelSlot::GetAutoSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::CanvasPanelSlot_GetAutoSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAnchorData UCanvasPanelSlot::GetLayout() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::CanvasPanelSlot_GetLayout Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMargin UCanvasPanelSlot::GetOffsets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::CanvasPanelSlot_GetOffsets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UCanvasPanelSlot::GetPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::CanvasPanelSlot_GetPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UCanvasPanelSlot::GetSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::CanvasPanelSlot_GetSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCanvasPanelSlot::GetZOrder() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::CanvasPanelSlot_GetZOrder Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetSwitcherSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");

	Params::WidgetSwitcherSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetPadding");

	Params::WidgetSwitcherSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetSwitcherSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");

	Params::WidgetSwitcherSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "SetCheckedState");

	Params::CheckBox_SetCheckedState Parms{};

	Parms.InCheckedState = InCheckedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCheckBox::SetClickMethod(EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "SetClickMethod");

	Params::CheckBox_SetClickMethod Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "SetIsChecked");

	Params::CheckBox_SetIsChecked Parms{};

	Parms.InIsChecked = InIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCheckBox::SetPressMethod(EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "SetPressMethod");

	Params::CheckBox_SetPressMethod Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCheckBox::SetTouchMethod(EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "SetTouchMethod");

	Params::CheckBox_SetTouchMethod Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ECheckBoxState UCheckBox::GetCheckedState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::CheckBox_GetCheckedState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCheckBox::IsChecked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::CheckBox_IsChecked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCheckBox::IsPressed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::CheckBox_IsPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCircularThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircularThrobber", "SetNumberOfPieces");

	Params::CircularThrobber_SetNumberOfPieces Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCircularThrobber::SetPeriod(float InPeriod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircularThrobber", "SetPeriod");

	Params::CircularThrobber_SetPeriod Parms{};

	Parms.InPeriod = InPeriod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCircularThrobber::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircularThrobber", "SetRadius");

	Params::CircularThrobber_SetRadius Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::VerticalBox_AddChildToVerticalBox Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UComboBoxKey::AddOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "AddOption");

	Params::ComboBoxKey_AddOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UComboBoxKey::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "ClearOptions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UComboBoxKey::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "ClearSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UComboBoxKey::RemoveOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "RemoveOption");

	Params::ComboBoxKey_RemoveOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UComboBoxKey::SetSelectedOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "SetSelectedOption");

	Params::ComboBoxKey_SetSelectedOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UComboBoxKey::GetSelectedOption() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "GetSelectedOption");

	Params::ComboBoxKey_GetSelectedOption Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UComboBoxKey::IsOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxKey", "IsOpen");

	Params::ComboBoxKey_IsOpen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UComboBoxString::AddOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::ComboBoxString_AddOption Parms{};

	Parms.Option = std::move(Option);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UComboBoxString::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "ClearOptions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UComboBoxString::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "ClearSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UComboBoxString::RefreshOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "RefreshOptions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UComboBoxString::RemoveOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::ComboBoxString_RemoveOption Parms{};

	Parms.Option = std::move(Option);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UComboBoxString::SetSelectedIndex(const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedIndex");

	Params::ComboBoxString_SetSelectedIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UComboBoxString::SetSelectedOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::ComboBoxString_SetSelectedOption Parms{};

	Parms.Option = std::move(Option);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UComboBoxString::FindOptionIndex(const class FString& Option) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::ComboBoxString_FindOptionIndex Parms{};

	Parms.Option = std::move(Option);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UComboBoxString::GetOptionAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::ComboBoxString_GetOptionAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UComboBoxString::GetOptionCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::ComboBoxString_GetOptionCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UComboBoxString::GetSelectedIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedIndex");

	Params::ComboBoxString_GetSelectedIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UComboBoxString::GetSelectedOption() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::ComboBoxString_GetSelectedOption Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UComboBoxString::IsOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxString", "IsOpen");

	Params::ComboBoxString_IsOpen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::GridPanel_AddChildToGrid Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGridPanel::SetColumnFill(int32 ColumnIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPanel", "SetColumnFill");

	Params::GridPanel_SetColumnFill Parms{};

	Parms.ColumnIndex = ColumnIndex;
	Parms.Coefficient = Coefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridPanel::SetRowFill(int32 RowIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPanel", "SetRowFill");

	Params::GridPanel_SetRowFill Parms{};

	Parms.RowIndex = RowIndex;
	Parms.Coefficient = Coefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::GridSlot_SetColumn Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetColumnSpan(int32 InColumnSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetColumnSpan");

	Params::GridSlot_SetColumnSpan Parms{};

	Parms.InColumnSpan = InColumnSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetHorizontalAlignment");

	Params::GridSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetLayer(int32 InLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetLayer");

	Params::GridSlot_SetLayer Parms{};

	Parms.InLayer = InLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetNudge");

	Params::GridSlot_SetNudge Parms{};

	Parms.InNudge = std::move(InNudge);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetPadding");

	Params::GridSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetRow");

	Params::GridSlot_SetRow Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetRowSpan(int32 InRowSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetRowSpan");

	Params::GridSlot_SetRowSpan Parms{};

	Parms.InRowSpan = InRowSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridSlot", "SetVerticalAlignment");

	Params::GridSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::HorizontalBox_AddChildToHorizontalBox Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");

	Params::HorizontalBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetPadding");

	Params::HorizontalBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::HorizontalBoxSlot_SetSize Parms{};

	Parms.InSize = std::move(InSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");

	Params::HorizontalBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::Image_GetDynamicMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrush");

	Params::Image_SetBrush Parms{};

	Parms.InBrush = std::move(InBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::Image_SetBrushFromAsset Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromAtlasInterface");

	Params::Image_SetBrushFromAtlasInterface Parms{};

	Parms.AtlasRegion = AtlasRegion;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::Image_SetBrushFromMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromSoftMaterial");

	Params::Image_SetBrushFromSoftMaterial Parms{};

	Parms.SoftMaterial = SoftMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromSoftTexture");

	Params::Image_SetBrushFromSoftTexture Parms{};

	Parms.SoftTexture = SoftTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::Image_SetBrushFromTexture Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::Image_SetBrushFromTextureDynamic Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushResourceObject(class UObject* ResourceObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushResourceObject");

	Params::Image_SetBrushResourceObject Parms{};

	Parms.ResourceObject = ResourceObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetBrushTintColor");

	Params::Image_SetBrushTintColor Parms{};

	Parms.TintColor = std::move(TintColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::Image_SetColorAndOpacity Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetDesiredSizeOverride(const struct FVector2D& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetDesiredSizeOverride");

	Params::Image_SetDesiredSizeOverride Parms{};

	Parms.DesiredSize = std::move(DesiredSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UImage::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Image", "SetOpacity");

	Params::Image_SetOpacity Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetAllowGamepadKeys");

	Params::InputKeySelector_SetAllowGamepadKeys Parms{};

	Parms.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetAllowModifierKeys");

	Params::InputKeySelector_SetAllowModifierKeys Parms{};

	Parms.bInAllowModifierKeys = bInAllowModifierKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetEscapeKeys(const TArray<struct FKey>& InKeys)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetEscapeKeys");

	Params::InputKeySelector_SetEscapeKeys Parms{};

	Parms.InKeys = std::move(InKeys);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetKeySelectionText(const class FText& InKeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetKeySelectionText");

	Params::InputKeySelector_SetKeySelectionText Parms{};

	Parms.InKeySelectionText = std::move(InKeySelectionText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetNoKeySpecifiedText");

	Params::InputKeySelector_SetNoKeySpecifiedText Parms{};

	Parms.InNoKeySpecifiedText = std::move(InNoKeySpecifiedText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetSelectedKey");

	Params::InputKeySelector_SetSelectedKey Parms{};

	Parms.InSelectedKey = std::move(InSelectedKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputKeySelector::SetTextBlockVisibility(const ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "SetTextBlockVisibility");

	Params::InputKeySelector_SetTextBlockVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UInputKeySelector::GetIsSelectingKey() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::InputKeySelector_GetIsSelectingKey Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UInvalidationBox::InvalidateCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvalidationBox", "InvalidateCache");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvalidationBox", "SetCanCache");

	Params::InvalidationBox_SetCanCache Parms{};

	Parms.CanCache = CanCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UInvalidationBox::GetCanCache() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::InvalidationBox_GetCanCache Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMenuAnchor::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "Close");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMenuAnchor::FitInWindow(bool bFit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "FitInWindow");

	Params::MenuAnchor_FitInWindow Parms{};

	Parms.bFit = bFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMenuAnchor::Open(bool bFocusMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "Open");

	Params::MenuAnchor_Open Parms{};

	Parms.bFocusMenu = bFocusMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMenuAnchor::SetPlacement(EMenuPlacement InPlacement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "SetPlacement");

	Params::MenuAnchor_SetPlacement Parms{};

	Parms.InPlacement = InPlacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "ToggleOpen");

	Params::MenuAnchor_ToggleOpen Parms{};

	Parms.bFocusOnOpen = bFocusOnOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UMenuAnchor::GetMenuPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::MenuAnchor_GetMenuPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMenuAnchor::HasOpenSubMenus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::MenuAnchor_HasOpenSubMenus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMenuAnchor::IsOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::MenuAnchor_IsOpen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMenuAnchor::ShouldOpenDueToClick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::MenuAnchor_ShouldOpenDueToClick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTextLayoutWidget::SetJustification(ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextLayoutWidget", "SetJustification");

	Params::TextLayoutWidget_SetJustification Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetFont");

	Params::MultiLineEditableText_SetFont Parms{};

	Parms.InFontInfo = std::move(InFontInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontMaterial");

	Params::MultiLineEditableText_SetFontMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontOutlineMaterial");

	Params::MultiLineEditableText_SetFontOutlineMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetHintText(const class FText& InHintText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetHintText");

	Params::MultiLineEditableText_SetHintText Parms{};

	Parms.InHintText = std::move(InHintText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetIsReadOnly");

	Params::MultiLineEditableText_SetIsReadOnly Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::MultiLineEditableText_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "SetWidgetStyle");

	Params::MultiLineEditableText_SetWidgetStyle Parms{};

	Parms.InWidgetStyle = std::move(InWidgetStyle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FSlateFontInfo UMultiLineEditableText::GetFont() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "GetFont");

	Params::MultiLineEditableText_GetFont Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMultiLineEditableText::GetHintText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "GetHintText");

	Params::MultiLineEditableText_GetHintText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMultiLineEditableText::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::MultiLineEditableText_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMultiLineEditableTextBox::SetError(const class FText& InError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::MultiLineEditableTextBox_SetError Parms{};

	Parms.InError = std::move(InError);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetForegroundColor");

	Params::MultiLineEditableTextBox_SetForegroundColor Parms{};

	Parms.Color = std::move(Color);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableTextBox::SetHintText(const class FText& InHintText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetHintText");

	Params::MultiLineEditableTextBox_SetHintText Parms{};

	Parms.InHintText = std::move(InHintText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");

	Params::MultiLineEditableTextBox_SetIsReadOnly Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableTextBox::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::MultiLineEditableTextBox_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetTextStyle");

	Params::MultiLineEditableTextBox_SetTextStyle Parms{};

	Parms.InTextStyle = std::move(InTextStyle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UMultiLineEditableTextBox::GetHintText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetHintText");

	Params::MultiLineEditableTextBox_GetHintText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMultiLineEditableTextBox::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::MultiLineEditableTextBox_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::Overlay_AddChildToOverlay Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOverlay::ReplaceOverlayChildAt(int32 Index_0, class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Overlay", "ReplaceOverlayChildAt");

	Params::Overlay_ReplaceOverlayChildAt Parms{};

	Parms.Index_0 = Index_0;
	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlaySlot", "SetHorizontalAlignment");

	Params::OverlaySlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlaySlot", "SetPadding");

	Params::OverlaySlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlaySlot", "SetVerticalAlignment");

	Params::OverlaySlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressBar", "SetFillColorAndOpacity");

	Params::ProgressBar_SetFillColorAndOpacity Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::ProgressBar_SetIsMarquee Parms{};

	Parms.InbIsMarquee = InbIsMarquee;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProgressBar::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressBar", "SetPercent");

	Params::ProgressBar_SetPercent Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URetainerBox::RequestRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "RequestRender");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "SetEffectMaterial");

	Params::RetainerBox_SetEffectMaterial Parms{};

	Parms.EffectMaterial_0 = EffectMaterial_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "SetRenderingPhase");

	Params::RetainerBox_SetRenderingPhase Parms{};

	Parms.RenderPhase = RenderPhase;
	Parms.TotalPhases = TotalPhases;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URetainerBox::SetRetainRendering(bool bInRetainRendering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "SetRetainRendering");

	Params::RetainerBox_SetRetainRendering Parms{};

	Parms.bInRetainRendering = bInRetainRendering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URetainerBox::SetTextureParameter(class FName TextureParameter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "SetTextureParameter");

	Params::RetainerBox_SetTextureParameter Parms{};

	Parms.TextureParameter_0 = TextureParameter_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::RetainerBox_GetEffectMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "ClearAllDefaultStyleOverrides");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> DecoratorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "GetDecoratorByClass");

	Params::RichTextBlock_GetDecoratorByClass Parms{};

	Parms.DecoratorClass = DecoratorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* URichTextBlock::GetDefaultDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "GetDefaultDynamicMaterial");

	Params::RichTextBlock_GetDefaultDynamicMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URichTextBlock::RefreshTextLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "RefreshTextLayout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetAutoWrapText");

	Params::RichTextBlock_SetAutoWrapText Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDecorators(const TArray<TSubclassOf<class URichTextBlockDecorator>>& InDecoratorClasses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDecorators");

	Params::RichTextBlock_SetDecorators Parms{};

	Parms.InDecoratorClasses = std::move(InDecoratorClasses);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");

	Params::RichTextBlock_SetDefaultColorAndOpacity Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultFont");

	Params::RichTextBlock_SetDefaultFont Parms{};

	Parms.InFontInfo = std::move(InFontInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultMaterial");

	Params::RichTextBlock_SetDefaultMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowColorAndOpacity");

	Params::RichTextBlock_SetDefaultShadowColorAndOpacity Parms{};

	Parms.InShadowColorAndOpacity = std::move(InShadowColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowOffset");

	Params::RichTextBlock_SetDefaultShadowOffset Parms{};

	Parms.InShadowOffset = std::move(InShadowOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultStrikeBrush");

	Params::RichTextBlock_SetDefaultStrikeBrush Parms{};

	Parms.InStrikeBrush = std::move(InStrikeBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultTextStyle");

	Params::RichTextBlock_SetDefaultTextStyle Parms{};

	Parms.InDefaultTextStyle = std::move(InDefaultTextStyle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetMinDesiredWidth");

	Params::RichTextBlock_SetMinDesiredWidth Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetText");

	Params::RichTextBlock_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetTextOverflowPolicy");

	Params::RichTextBlock_SetTextOverflowPolicy Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetTextStyleSet");

	Params::RichTextBlock_SetTextStyleSet Parms{};

	Parms.NewTextStyleSet = NewTextStyleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "SetTextTransformPolicy");

	Params::RichTextBlock_SetTextTransformPolicy Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText URichTextBlock::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "GetText");

	Params::RichTextBlock_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDataTable* URichTextBlock::GetTextStyleSet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextBlock", "GetTextStyleSet");

	Params::RichTextBlock_GetTextStyleSet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZone", "SetSidesToPad");

	Params::SafeZone_SetSidesToPad Parms{};

	Parms.InPadLeft = InPadLeft;
	Parms.InPadRight = InPadRight;
	Parms.InPadTop = InPadTop;
	Parms.InPadBottom = InPadBottom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBox", "SetIgnoreInheritedScale");

	Params::ScaleBox_SetIgnoreInheritedScale Parms{};

	Parms.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBox::SetStretch(EStretch InStretch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::ScaleBox_SetStretch Parms{};

	Parms.InStretch = InStretch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBox::SetStretchDirection(EStretchDirection InStretchDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::ScaleBox_SetStretchDirection Parms{};

	Parms.InStretchDirection = InStretchDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::ScaleBox_SetUserSpecifiedScale Parms{};

	Parms.InUserSpecifiedScale = InUserSpecifiedScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");

	Params::ScaleBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBoxSlot", "SetPadding");

	Params::ScaleBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");

	Params::ScaleBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBar", "SetState");

	Params::ScrollBar_SetState Parms{};

	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::EndInertialScrolling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "EndInertialScrolling");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::ScrollToEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "ScrollToEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::ScrollToStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "ScrollToStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::ScrollBox_ScrollWidgetIntoView Parms{};

	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;
	Parms.ScrollDestination = ScrollDestination;
	Parms.Padding = Padding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetAllowOverscroll");

	Params::ScrollBox_SetAllowOverscroll Parms{};

	Parms.NewAllowOverscroll = NewAllowOverscroll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");

	Params::ScrollBox_SetAlwaysShowScrollbar Parms{};

	Parms.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetAnimateWheelScrolling");

	Params::ScrollBox_SetAnimateWheelScrolling Parms{};

	Parms.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetConsumeMouseWheel");

	Params::ScrollBox_SetConsumeMouseWheel Parms{};

	Parms.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetNavigationDestination(const EDescendantScrollDestination NewNavigationDestination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetNavigationDestination");

	Params::ScrollBox_SetNavigationDestination Parms{};

	Parms.NewNavigationDestination = NewNavigationDestination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetOrientation(EOrientation NewOrientation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetOrientation");

	Params::ScrollBox_SetOrientation Parms{};

	Parms.NewOrientation = NewOrientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarPadding");

	Params::ScrollBox_SetScrollbarPadding Parms{};

	Parms.NewScrollbarPadding = std::move(NewScrollbarPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarThickness");

	Params::ScrollBox_SetScrollbarThickness Parms{};

	Parms.NewScrollbarThickness = std::move(NewScrollbarThickness);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarVisibility");

	Params::ScrollBox_SetScrollbarVisibility Parms{};

	Parms.NewScrollBarVisibility = NewScrollBarVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetScrollOffset");

	Params::ScrollBox_SetScrollOffset Parms{};

	Parms.NewScrollOffset = NewScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetScrollWhenFocusChanges");

	Params::ScrollBox_SetScrollWhenFocusChanges Parms{};

	Parms.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "SetWheelScrollMultiplier");

	Params::ScrollBox_SetWheelScrollMultiplier Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UScrollBox::GetScrollOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::ScrollBox_GetScrollOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UScrollBox::GetScrollOffsetOfEnd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");

	Params::ScrollBox_GetScrollOffsetOfEnd Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UScrollBox::GetViewFraction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "GetViewFraction");

	Params::ScrollBox_GetViewFraction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UScrollBox::GetViewOffsetFraction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBox", "GetViewOffsetFraction");

	Params::ScrollBox_GetViewOffsetFraction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UScrollBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");

	Params::ScrollBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBoxSlot", "SetPadding");

	Params::ScrollBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UScrollBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollBoxSlot", "SetVerticalAlignment");

	Params::ScrollBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearHeightOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearHeightOverride");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMaxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMaxAspectRatio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMaxDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredHeight");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMaxDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredWidth");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMinAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMinAspectRatio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMinDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredHeight");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredWidth");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::ClearWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "ClearWidthOverride");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetHeightOverride");

	Params::SizeBox_SetHeightOverride Parms{};

	Parms.InHeightOverride = InHeightOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMaxAspectRatio");

	Params::SizeBox_SetMaxAspectRatio Parms{};

	Parms.InMaxAspectRatio = InMaxAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredHeight");

	Params::SizeBox_SetMaxDesiredHeight Parms{};

	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredWidth");

	Params::SizeBox_SetMaxDesiredWidth Parms{};

	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMinAspectRatio");

	Params::SizeBox_SetMinAspectRatio Parms{};

	Parms.InMinAspectRatio = InMinAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredHeight");

	Params::SizeBox_SetMinDesiredHeight Parms{};

	Parms.InMinDesiredHeight = InMinDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredWidth");

	Params::SizeBox_SetMinDesiredWidth Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBox", "SetWidthOverride");

	Params::SizeBox_SetWidthOverride Parms{};

	Parms.InWidthOverride = InWidthOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");

	Params::SizeBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBoxSlot", "SetPadding");

	Params::SizeBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USizeBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SizeBoxSlot", "SetVerticalAlignment");

	Params::SizeBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetIndentHandle");

	Params::Slider_SetIndentHandle Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetLocked");

	Params::Slider_SetLocked Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetMaxValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetMaxValue");

	Params::Slider_SetMaxValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetMinValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetMinValue");

	Params::Slider_SetMinValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetSliderBarColor");

	Params::Slider_SetSliderBarColor Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetSliderHandleColor");

	Params::Slider_SetSliderHandleColor Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetStepSize");

	Params::Slider_SetStepSize Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "SetValue");

	Params::Slider_SetValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float USlider::GetNormalizedValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "GetNormalizedValue");

	Params::Slider_GetNormalizedValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USlider::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider", "GetValue");

	Params::Slider_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spacer", "SetSize");

	Params::Spacer_SetSize Parms{};

	Parms.InSize = std::move(InSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "ClearMaxSliderValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USpinBox::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "ClearMaxValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USpinBox::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "ClearMinSliderValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USpinBox::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "ClearMinValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetAlwaysUsesDeltaSnap");

	Params::SpinBox_SetAlwaysUsesDeltaSnap Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetDelta(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetDelta");

	Params::SpinBox_SetDelta Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetForegroundColor");

	Params::SpinBox_SetForegroundColor Parms{};

	Parms.InForegroundColor = std::move(InForegroundColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMaxFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMaxFractionalDigits");

	Params::SpinBox_SetMaxFractionalDigits Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::SpinBox_SetMaxSliderValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMaxValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::SpinBox_SetMaxValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMinFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMinFractionalDigits");

	Params::SpinBox_SetMinFractionalDigits Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMinSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::SpinBox_SetMinSliderValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetMinValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::SpinBox_SetMinValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpinBox::SetValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "SetValue");

	Params::SpinBox_SetValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USpinBox::GetAlwaysUsesDeltaSnap() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetAlwaysUsesDeltaSnap");

	Params::SpinBox_GetAlwaysUsesDeltaSnap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetDelta");

	Params::SpinBox_GetDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USpinBox::GetMaxFractionalDigits() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMaxFractionalDigits");

	Params::SpinBox_GetMaxFractionalDigits Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetMaxSliderValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::SpinBox_GetMaxSliderValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetMaxValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::SpinBox_GetMaxValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USpinBox::GetMinFractionalDigits() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMinFractionalDigits");

	Params::SpinBox_GetMinFractionalDigits Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetMinSliderValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::SpinBox_GetMinSliderValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetMinValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::SpinBox_GetMinValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USpinBox::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpinBox", "GetValue");

	Params::SpinBox_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UStackBoxSlot* UStackBox::AddChildToStackBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBox", "AddChildToStackBox");

	Params::StackBox_AddChildToStackBox Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStackBox::ReplaceStackBoxChildAt(int32 Index_0, class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBox", "ReplaceStackBoxChildAt");

	Params::StackBox_ReplaceStackBoxChildAt Parms{};

	Parms.Index_0 = Index_0;
	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::TextBlock_GetDynamicFontMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::TextBlock_GetDynamicOutlineMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetAutoWrapText");

	Params::TextBlock_SetAutoWrapText Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::TextBlock_SetColorAndOpacity Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetFont");

	Params::TextBlock_SetFont Parms{};

	Parms.InFontInfo = std::move(InFontInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetFontMaterial");

	Params::TextBlock_SetFontMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetFontOutlineMaterial");

	Params::TextBlock_SetFontOutlineMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetMinDesiredWidth");

	Params::TextBlock_SetMinDesiredWidth Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::TextBlock_SetOpacity Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetShadowColorAndOpacity");

	Params::TextBlock_SetShadowColorAndOpacity Parms{};

	Parms.InShadowColorAndOpacity = std::move(InShadowColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetShadowOffset");

	Params::TextBlock_SetShadowOffset Parms{};

	Parms.InShadowOffset = std::move(InShadowOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetStrikeBrush");

	Params::TextBlock_SetStrikeBrush Parms{};

	Parms.InStrikeBrush = std::move(InStrikeBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetText");

	Params::TextBlock_SetText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetTextOverflowPolicy");

	Params::TextBlock_SetTextOverflowPolicy Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "SetTextTransformPolicy");

	Params::TextBlock_SetTextTransformPolicy Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UTextBlock::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock", "GetText");

	Params::TextBlock_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Throbber", "SetAnimateHorizontally");

	Params::Throbber_SetAnimateHorizontally Parms{};

	Parms.bInAnimateHorizontally = bInAnimateHorizontally;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Throbber", "SetAnimateOpacity");

	Params::Throbber_SetAnimateOpacity Parms{};

	Parms.bInAnimateOpacity = bInAnimateOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Throbber", "SetAnimateVertically");

	Params::Throbber_SetAnimateVertically Parms{};

	Parms.bInAnimateVertically = bInAnimateVertically;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Throbber", "SetNumberOfPieces");

	Params::Throbber_SetNumberOfPieces Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTileView::SetEntryHeight(float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TileView", "SetEntryHeight");

	Params::TileView_SetEntryHeight Parms{};

	Parms.NewHeight = NewHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTileView::SetEntryWidth(float NewWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TileView", "SetEntryWidth");

	Params::TileView_SetEntryWidth Parms{};

	Parms.NewWidth = NewWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UTileView::GetEntryHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TileView", "GetEntryHeight");

	Params::TileView_GetEntryHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTileView::GetEntryWidth() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TileView", "GetEntryWidth");

	Params::TileView_GetEntryWidth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTreeView::CollapseAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TreeView", "CollapseAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UTreeView::ExpandAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TreeView", "ExpandAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TreeView", "SetItemExpansion");

	Params::TreeView_SetItemExpansion Parms{};

	Parms.Item = Item;
	Parms.bExpandItem = bExpandItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UniformGridPanel_AddChildToUniformGrid Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");

	Params::UniformGridPanel_SetMinDesiredSlotHeight Parms{};

	Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");

	Params::UniformGridPanel_SetMinDesiredSlotWidth Parms{};

	Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridPanel", "SetSlotPadding");

	Params::UniformGridPanel_SetSlotPadding Parms{};

	Parms.InSlotPadding = std::move(InSlotPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UniformGridSlot_SetColumn Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridSlot", "SetHorizontalAlignment");

	Params::UniformGridSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UniformGridSlot_SetRow Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformGridSlot", "SetVerticalAlignment");

	Params::UniformGridSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");

	Params::VerticalBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerticalBoxSlot", "SetPadding");

	Params::VerticalBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::VerticalBoxSlot_SetSize Parms{};

	Parms.InSize = std::move(InSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");

	Params::VerticalBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::RequestRedraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "RequestRedraw");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::RequestRenderUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "RequestRenderUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetBackgroundColor");

	Params::WidgetComponent_SetBackgroundColor Parms{};

	Parms.NewBackgroundColor = std::move(NewBackgroundColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetCylinderArcAngle(const float InCylinderArcAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetCylinderArcAngle");

	Params::WidgetComponent_SetCylinderArcAngle Parms{};

	Parms.InCylinderArcAngle = InCylinderArcAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");

	Params::WidgetComponent_SetDrawAtDesiredSize Parms{};

	Parms.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetDrawSize");

	Params::WidgetComponent_SetDrawSize Parms{};

	Parms.Size = std::move(Size);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetGeometryMode");

	Params::WidgetComponent_SetGeometryMode Parms{};

	Parms.InGeometryMode = InGeometryMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetManuallyRedraw");

	Params::WidgetComponent_SetManuallyRedraw Parms{};

	Parms.bUseManualRedraw = bUseManualRedraw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::WidgetComponent_SetOwnerPlayer Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetPivot");

	Params::WidgetComponent_SetPivot Parms{};

	Parms.InPivot = std::move(InPivot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetRedrawTime");

	Params::WidgetComponent_SetRedrawTime Parms{};

	Parms.InRedrawTime = InRedrawTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetTickMode(ETickMode InTickMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetTickMode");

	Params::WidgetComponent_SetTickMode Parms{};

	Parms.InTickMode = InTickMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetTickWhenOffscreen(const bool bWantTickWhenOffscreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetTickWhenOffscreen");

	Params::WidgetComponent_SetTickWhenOffscreen Parms{};

	Parms.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetTintColorAndOpacity");

	Params::WidgetComponent_SetTintColorAndOpacity Parms{};

	Parms.NewTintColorAndOpacity = std::move(NewTintColorAndOpacity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetTwoSided(const bool bWantTwoSided)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetTwoSided");

	Params::WidgetComponent_SetTwoSided Parms{};

	Parms.bWantTwoSided = bWantTwoSided;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetWidget(class UUserWidget* Widget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetWidget");

	Params::WidgetComponent_SetWidget Parms{};

	Parms.Widget_0 = Widget_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetWidgetSpace");

	Params::WidgetComponent_SetWidgetSpace Parms{};

	Parms.NewSpace = NewSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetWindowFocusable");

	Params::WidgetComponent_SetWindowFocusable Parms{};

	Parms.bInWindowFocusable = bInWindowFocusable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "SetWindowVisibility");

	Params::WidgetComponent_SetWindowVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UWidgetComponent::GetCurrentDrawSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetCurrentDrawSize");

	Params::WidgetComponent_GetCurrentDrawSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidgetComponent::GetCylinderArcAngle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetCylinderArcAngle");

	Params::WidgetComponent_GetCylinderArcAngle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::GetDrawAtDesiredSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");

	Params::WidgetComponent_GetDrawAtDesiredSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent::GetDrawSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::WidgetComponent_GetDrawSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EWidgetGeometryMode UWidgetComponent::GetGeometryMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetGeometryMode");

	Params::WidgetComponent_GetGeometryMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::GetManuallyRedraw() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetManuallyRedraw");

	Params::WidgetComponent_GetManuallyRedraw Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::WidgetComponent_GetMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::WidgetComponent_GetOwnerPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent::GetPivot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetPivot");

	Params::WidgetComponent_GetPivot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidgetComponent::GetRedrawTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetRedrawTime");

	Params::WidgetComponent_GetRedrawTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::WidgetComponent_GetRenderTarget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::GetTickWhenOffscreen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetTickWhenOffscreen");

	Params::WidgetComponent_GetTickWhenOffscreen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::GetTwoSided() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetTwoSided");

	Params::WidgetComponent_GetTwoSided Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UWidgetComponent::GetUserWidgetObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::WidgetComponent_GetUserWidgetObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UWidgetComponent::GetWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetWidget");

	Params::WidgetComponent_GetWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EWidgetSpace UWidgetComponent::GetWidgetSpace() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetWidgetSpace");

	Params::WidgetComponent_GetWidgetSpace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::GetWindowFocusable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetWindowFocusable");

	Params::WidgetComponent_GetWindowFocusable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EWindowVisibility UWidgetComponent::GetWindowVisiblility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "GetWindowVisiblility");

	Params::WidgetComponent_GetWindowVisiblility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetComponent::IsWidgetVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetComponent", "IsWidgetVisible");

	Params::WidgetComponent_IsWidgetVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::WidgetInteractionComponent_PressAndReleaseKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::WidgetInteractionComponent_PressKey Parms{};

	Parms.Key = std::move(Key);
	Parms.bRepeat = bRepeat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::WidgetInteractionComponent_PressPointerKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::WidgetInteractionComponent_ReleaseKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::WidgetInteractionComponent_ReleasePointerKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "ScrollWheel");

	Params::WidgetInteractionComponent_ScrollWheel Parms{};

	Parms.ScrollDelta = ScrollDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::WidgetInteractionComponent_SendKeyChar Parms{};

	Parms.Characters = std::move(Characters);
	Parms.bRepeat = bRepeat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::WidgetInteractionComponent_SetCustomHitResult Parms{};

	Parms.HitResult = std::move(HitResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetFocus");

	Params::WidgetInteractionComponent_SetFocus Parms{};

	Parms.FocusWidget = FocusWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::WidgetInteractionComponent_Get2DHitLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::WidgetInteractionComponent_GetHoveredWidgetComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FHitResult UWidgetInteractionComponent::GetLastHitResult() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::WidgetInteractionComponent_GetLastHitResult Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetInteractionComponent::IsOverFocusableWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::WidgetInteractionComponent_IsOverFocusableWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::WidgetInteractionComponent_IsOverHitTestVisibleWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetInteractionComponent::IsOverInteractableWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::WidgetInteractionComponent_IsOverInteractableWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidget");

	Params::WidgetSwitcher_SetActiveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWidgetSwitcher::SetActiveWidgetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::WidgetSwitcher_SetActiveWidgetIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UWidget* UWidgetSwitcher::GetActiveWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidget");

	Params::WidgetSwitcher_GetActiveWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UWidgetSwitcher::GetActiveWidgetIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::WidgetSwitcher_GetActiveWidgetIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UWidgetSwitcher::GetNumWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::WidgetSwitcher_GetNumWidgets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::WidgetSwitcher_GetWidgetAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWindowTitleBarArea::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");

	Params::WindowTitleBarArea_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarArea", "SetPadding");

	Params::WindowTitleBarArea_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindowTitleBarArea::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");

	Params::WindowTitleBarArea_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBox", "AddChildToWrapBox");

	Params::WrapBox_AddChildToWrapBox Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWrapBox::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBox", "SetHorizontalAlignment");

	Params::WrapBox_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBox", "SetInnerSlotPadding");

	Params::WrapBox_SetInnerSlotPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillEmptySpace");

	Params::WrapBoxSlot_SetFillEmptySpace Parms{};

	Parms.InbFillEmptySpace = InbFillEmptySpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");

	Params::WrapBoxSlot_SetFillSpanWhenLessThan Parms{};

	Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");

	Params::WrapBoxSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetNewLine(bool InForceNewLine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetNewLine");

	Params::WrapBoxSlot_SetNewLine Parms{};

	Parms.InForceNewLine = InForceNewLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetPadding");

	Params::WrapBoxSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapBoxSlot", "SetVerticalAlignment");

	Params::WrapBoxSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::DragDropOperation_DragCancelled Parms{};

	Parms.PointerEvent = std::move(PointerEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::DragDropOperation_Dragged Parms{};

	Parms.PointerEvent = std::move(PointerEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::DragDropOperation_Drop Parms{};

	Parms.PointerEvent = std::move(PointerEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::SlateBlueprintLibrary_AbsoluteToLocal Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.AbsoluteCoordinate = std::move(AbsoluteCoordinate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");

	Params::SlateBlueprintLibrary_AbsoluteToViewport Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AbsoluteDesktopCoordinate = std::move(AbsoluteDesktopCoordinate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PixelPosition != nullptr)
		*PixelPosition = std::move(Parms.PixelPosition);

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);
}

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::SlateBlueprintLibrary_EqualEqual_SlateBrush Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");

	Params::SlateBlueprintLibrary_GetAbsoluteSize Parms{};

	Parms.Geometry = std::move(Geometry);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::SlateBlueprintLibrary_GetLocalSize Parms{};

	Parms.Geometry = std::move(Geometry);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");

	Params::SlateBlueprintLibrary_GetLocalTopLeft Parms{};

	Parms.Geometry = std::move(Geometry);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::SlateBlueprintLibrary_IsUnderLocation Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.AbsoluteCoordinate = std::move(AbsoluteCoordinate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::SlateBlueprintLibrary_LocalToAbsolute Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.LocalCoordinate = std::move(LocalCoordinate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::SlateBlueprintLibrary_LocalToViewport Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = std::move(Geometry);
	Parms.LocalCoordinate = std::move(LocalCoordinate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PixelPosition != nullptr)
		*PixelPosition = std::move(Parms.PixelPosition);

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);
}

void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");

	Params::SlateBlueprintLibrary_ScreenToViewport Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = std::move(ScreenPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);
}

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");

	Params::SlateBlueprintLibrary_ScreenToWidgetAbsolute Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = std::move(ScreenPosition);
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = std::move(Parms.AbsoluteCoordinate);
}

void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::SlateBlueprintLibrary_ScreenToWidgetLocal Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = std::move(Geometry);
	Parms.ScreenPosition = std::move(ScreenPosition);
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = std::move(Parms.LocalCoordinate);
}

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");

	Params::SlateBlueprintLibrary_TransformScalarAbsoluteToLocal Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.AbsoluteScalar = AbsoluteScalar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");

	Params::SlateBlueprintLibrary_TransformScalarLocalToAbsolute Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.LocalScalar = LocalScalar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");

	Params::SlateBlueprintLibrary_TransformVectorAbsoluteToLocal Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.AbsoluteVector = std::move(AbsoluteVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");

	Params::SlateBlueprintLibrary_TransformVectorLocalToAbsolute Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.LocalVector = std::move(LocalVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");

	Params::WidgetLayoutLibrary_GetMousePositionOnPlatform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");

	Params::WidgetLayoutLibrary_GetMousePositionOnViewport Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::WidgetLayoutLibrary_GetMousePositionScaledByDPI Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LocationX != nullptr)
		*LocationX = Parms.LocationX;

	if (LocationY != nullptr)
		*LocationY = Parms.LocationY;

	return Parms.ReturnValue;
}

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");

	Params::WidgetLayoutLibrary_GetPlayerScreenWidgetGeometry Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWidgetLayoutLibrary::GetViewportScale(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::WidgetLayoutLibrary_GetViewportScale Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::WidgetLayoutLibrary_GetViewportSize Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");

	Params::WidgetLayoutLibrary_GetViewportWidgetGeometry Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::WidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition Parms{};

	Parms.PlayerController = PlayerController;
	Parms.WorldLocation = std::move(WorldLocation);
	Parms.bPlayerViewportRelative = bPlayerViewportRelative;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;
}

void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");

	Params::WidgetLayoutLibrary_RemoveAllWidgets Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::WidgetLayoutLibrary_SlotAsBorderSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::WidgetLayoutLibrary_SlotAsCanvasSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::WidgetLayoutLibrary_SlotAsGridSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsHorizontalBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::WidgetLayoutLibrary_SlotAsOverlaySlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsSafeBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsScaleBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsScrollBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsSizeBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::WidgetLayoutLibrary_SlotAsUniformGridSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsVerticalBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");

	Params::WidgetLayoutLibrary_SlotAsWidgetSwitcherSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");

	Params::WidgetLayoutLibrary_SlotAsWrapBoxSlot Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
