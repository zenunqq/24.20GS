#pragma once

#include "Basic.hpp"

#include "UIFramework_classes.hpp"
#include "UIFramework_parameters.hpp"

namespace SDK
{

void UUIFrameworkPlayerComponent::AddWidget(const struct FUIFrameworkGameLayerSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "AddWidget");

	Params::UIFrameworkPlayerComponent_AddWidget Parms{};

	Parms.Widget = std::move(Widget);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkPlayerComponent::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "RemoveWidget");

	Params::UIFrameworkPlayerComponent_RemoveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkPlayerComponent::ServerRemoveWidgetRootFromTree(const struct FUIFrameworkWidgetId& WidgetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "ServerRemoveWidgetRootFromTree");

	Params::UIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree Parms{};

	Parms.WidgetId = std::move(WidgetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkWidget::OnRep_IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkWidget", "OnRep_IsEnabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkWidget::OnRep_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkWidget", "OnRep_Visibility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkButton::HandleClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkButton", "HandleClick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkButton::OnRep_Slot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkButton", "OnRep_Slot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkButton::ServerClick(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkButton", "ServerClick");

	Params::UIFrameworkButton_ServerClick Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkButton::SetContent(const struct FUIFrameworkSimpleSlot& Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkButton", "SetContent");

	Params::UIFrameworkButton_SetContent Parms{};

	Parms.Content = std::move(Content);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FUIFrameworkSimpleSlot UUIFrameworkButton::GetContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkButton", "GetContent");

	Params::UIFrameworkButton_GetContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIFrameworkCanvasBox::AddWidget(const struct FUIFrameworkCanvasBoxSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkCanvasBox", "AddWidget");

	Params::UIFrameworkCanvasBox_AddWidget Parms{};

	Parms.Widget = std::move(Widget);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkCanvasBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkCanvasBox", "RemoveWidget");

	Params::UIFrameworkCanvasBox_RemoveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkColorBlock::OnRep_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_Color");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkColorBlock::OnRep_DesiredSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_DesiredSize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkColorBlock::SetColor(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "SetColor");

	Params::UIFrameworkColorBlock_SetColor Parms{};

	Parms.Tint = std::move(Tint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkColorBlock::SetDesiredSize(const struct FVector2f& DesiredSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "SetDesiredSize");

	Params::UIFrameworkColorBlock_SetDesiredSize Parms{};

	Parms.DesiredSize_0 = std::move(DesiredSize_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FLinearColor UUIFrameworkColorBlock::GetColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "GetColor");

	Params::UIFrameworkColorBlock_GetColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2f UUIFrameworkColorBlock::GetDesiredSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkColorBlock", "GetDesiredSize");

	Params::UIFrameworkColorBlock_GetDesiredSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIFrameworkImageBlock::OnRep_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "OnRep_Data");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkImageBlock::SetDesiredSize(const struct FVector2f& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetDesiredSize");

	Params::UIFrameworkImageBlock_SetDesiredSize Parms{};

	Parms.DesiredSize = std::move(DesiredSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkImageBlock::SetMaterial(TSoftObjectPtr<class UMaterialInterface> Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetMaterial");

	Params::UIFrameworkImageBlock_SetMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkImageBlock::SetTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bUseTextureSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTexture");

	Params::UIFrameworkImageBlock_SetTexture Parms{};

	Parms.Texture = Texture;
	Parms.bUseTextureSize = bUseTextureSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkImageBlock::SetTiling(ESlateBrushTileType OverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTiling");

	Params::UIFrameworkImageBlock_SetTiling Parms{};

	Parms.OverflowPolicy = OverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkImageBlock::SetTint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTint");

	Params::UIFrameworkImageBlock_SetTint Parms{};

	Parms.Tint = std::move(Tint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TSoftObjectPtr<class UObject> UUIFrameworkImageBlock::GeResourceObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GeResourceObject");

	Params::UIFrameworkImageBlock_GeResourceObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2f UUIFrameworkImageBlock::GetDesiredSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetDesiredSize");

	Params::UIFrameworkImageBlock_GetDesiredSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateBrushTileType UUIFrameworkImageBlock::GetTiling() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetTiling");

	Params::UIFrameworkImageBlock_GetTiling Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UUIFrameworkImageBlock::GetTint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetTint");

	Params::UIFrameworkImageBlock_GetTint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIFrameworkOverlay::AddWidget(const struct FUIFrameworkOverlaySlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkOverlay", "AddWidget");

	Params::UIFrameworkOverlay_AddWidget Parms{};

	Parms.Widget = std::move(Widget);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkOverlay::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkOverlay", "RemoveWidget");

	Params::UIFrameworkOverlay_RemoveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkSimpleButton::OnClick(const struct FMVVMEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "OnClick");

	Params::UIFrameworkSimpleButton_OnClick Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkSimpleButton::OnRep_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "OnRep_Text");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkSimpleButton::ServerClick(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "ServerClick");

	Params::UIFrameworkSimpleButton_ServerClick Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkSimpleButton::SetText(const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "SetText");

	Params::UIFrameworkSimpleButton_SetText Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkStackBox::AddWidget(const struct FUIFrameworkStackBoxSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkStackBox", "AddWidget");

	Params::UIFrameworkStackBox_AddWidget Parms{};

	Parms.Widget = std::move(Widget);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkStackBox::OnRep_Orientation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkStackBox", "OnRep_Orientation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkStackBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkStackBox", "RemoveWidget");

	Params::UIFrameworkStackBox_RemoveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::OnRep_Justification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Justification");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::OnRep_OverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_OverflowPolicy");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::OnRep_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Text");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::OnRep_TextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_TextColor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::SetJustification(ETextJustify Justification_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetJustification");

	Params::UIFrameworkTextBase_SetJustification Parms{};

	Parms.Justification_0 = Justification_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetOverflowPolicy");

	Params::UIFrameworkTextBase_SetOverflowPolicy Parms{};

	Parms.OverflowPolicy_0 = OverflowPolicy_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::SetText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetText");

	Params::UIFrameworkTextBase_SetText Parms{};

	Parms.Text_0 = std::move(Text_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBase::SetTextColor(const struct FLinearColor& TextColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetTextColor");

	Params::UIFrameworkTextBase_SetTextColor Parms{};

	Parms.TextColor_0 = std::move(TextColor_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ETextJustify UUIFrameworkTextBase::GetJustification() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetJustification");

	Params::UIFrameworkTextBase_GetJustification Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ETextOverflowPolicy UUIFrameworkTextBase::GetOverflowPolicy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetOverflowPolicy");

	Params::UIFrameworkTextBase_GetOverflowPolicy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UUIFrameworkTextBase::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetText");

	Params::UIFrameworkTextBase_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UUIFrameworkTextBase::GetTextColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetTextColor");

	Params::UIFrameworkTextBase_GetTextColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIFrameworkTextBlock::OnRep_ShadowColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowColor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBlock::OnRep_ShadowOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowOffset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBlock::SetShadowColor(const struct FLinearColor& ShadowColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowColor");

	Params::UIFrameworkTextBlock_SetShadowColor Parms{};

	Parms.ShadowColor_0 = std::move(ShadowColor_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkTextBlock::SetShadowOffset(const struct FVector2f& ShadowOffset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowOffset");

	Params::UIFrameworkTextBlock_SetShadowOffset Parms{};

	Parms.ShadowOffset_0 = std::move(ShadowOffset_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FLinearColor UUIFrameworkTextBlock::GetShadowColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowColor");

	Params::UIFrameworkTextBlock_GetShadowColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2f UUIFrameworkTextBlock::GetShadowOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowOffset");

	Params::UIFrameworkTextBlock_GetShadowOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIFrameworkUserWidget::SetNamedSlot(class FName SlotName, class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkUserWidget", "SetNamedSlot");

	Params::UIFrameworkUserWidget_SetNamedSlot Parms{};

	Parms.SlotName = SlotName;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIFrameworkUserWidget::SetWidgetClass(TSoftClassPtr<class UClass> Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIFrameworkUserWidget", "SetWidgetClass");

	Params::UIFrameworkUserWidget_SetWidgetClass Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
