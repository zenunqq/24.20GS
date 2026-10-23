#pragma once

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "UIFramework_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ModelViewViewModel_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"

namespace SDK
{

class UUIFrameworkLocalSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UObject>                 ErrorResource;
	TSoftObjectPtr<class UObject>                 LoadingResource;
	uint8                                         Pad_80[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkLocalSettings">();
	}
	static class UUIFrameworkLocalSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkLocalSettings>();
	}
};
static_assert(alignof(UUIFrameworkLocalSettings) == 0x000008, "Wrong alignment on UUIFrameworkLocalSettings");
static_assert(sizeof(UUIFrameworkLocalSettings) == 0x000098, "Wrong size on UUIFrameworkLocalSettings");
static_assert(offsetof(UUIFrameworkLocalSettings, ErrorResource) == 0x000030, "Member 'UUIFrameworkLocalSettings::ErrorResource' has a wrong offset!");
static_assert(offsetof(UUIFrameworkLocalSettings, LoadingResource) == 0x000058, "Member 'UUIFrameworkLocalSettings::LoadingResource' has a wrong offset!");

class UUIFrameworkPlayerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	struct FUIFrameworkGameLayerSlotList          RootList;
	struct FUIFrameworkWidgetTree                 WidgetTree;
	class UUIFrameworkPresenter*                  Presenter;
	TSet<int32>                                   NetReplicationPending;
	TSet<int32>                                   AddPending;
	uint8                                         Pad_468[0x70];

public:
	void AddWidget(const struct FUIFrameworkGameLayerSlot& Widget);
	void RemoveWidget(class UUIFrameworkWidget* Widget);
	void ServerRemoveWidgetRootFromTree(const struct FUIFrameworkWidgetId& WidgetId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkPlayerComponent">();
	}
	static class UUIFrameworkPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkPlayerComponent>();
	}
};
static_assert(alignof(UUIFrameworkPlayerComponent) == 0x000008, "Wrong alignment on UUIFrameworkPlayerComponent");
static_assert(sizeof(UUIFrameworkPlayerComponent) == 0x0004D8, "Wrong size on UUIFrameworkPlayerComponent");
static_assert(offsetof(UUIFrameworkPlayerComponent, RootList) == 0x0000A8, "Member 'UUIFrameworkPlayerComponent::RootList' has a wrong offset!");
static_assert(offsetof(UUIFrameworkPlayerComponent, WidgetTree) == 0x0001C8, "Member 'UUIFrameworkPlayerComponent::WidgetTree' has a wrong offset!");
static_assert(offsetof(UUIFrameworkPlayerComponent, Presenter) == 0x0003C0, "Member 'UUIFrameworkPlayerComponent::Presenter' has a wrong offset!");
static_assert(offsetof(UUIFrameworkPlayerComponent, NetReplicationPending) == 0x0003C8, "Member 'UUIFrameworkPlayerComponent::NetReplicationPending' has a wrong offset!");
static_assert(offsetof(UUIFrameworkPlayerComponent, AddPending) == 0x000418, "Member 'UUIFrameworkPlayerComponent::AddPending' has a wrong offset!");

class UUIFrameworkPresenter : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkPresenter">();
	}
	static class UUIFrameworkPresenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkPresenter>();
	}
};
static_assert(alignof(UUIFrameworkPresenter) == 0x000008, "Wrong alignment on UUIFrameworkPresenter");
static_assert(sizeof(UUIFrameworkPresenter) == 0x000028, "Wrong size on UUIFrameworkPresenter");

class UUIFrameworkGameViewportPresenter : public UUIFrameworkPresenter
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkGameViewportPresenter">();
	}
	static class UUIFrameworkGameViewportPresenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkGameViewportPresenter>();
	}
};
static_assert(alignof(UUIFrameworkGameViewportPresenter) == 0x000008, "Wrong alignment on UUIFrameworkGameViewportPresenter");
static_assert(sizeof(UUIFrameworkGameViewportPresenter) == 0x000038, "Wrong size on UUIFrameworkGameViewportPresenter");

class IUIFrameworkWidgetWrapperInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkWidgetWrapperInterface">();
	}
	static class IUIFrameworkWidgetWrapperInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IUIFrameworkWidgetWrapperInterface>();
	}
};
static_assert(alignof(IUIFrameworkWidgetWrapperInterface) == 0x000008, "Wrong alignment on IUIFrameworkWidgetWrapperInterface");
static_assert(sizeof(IUIFrameworkWidgetWrapperInterface) == 0x000028, "Wrong size on IUIFrameworkWidgetWrapperInterface");

class UUIFrameworkWidget : public UMVVMViewModelBase
{
public:
	bool                                          bIsEnabled;
	ESlateVisibility                              Visibility;
	uint8                                         Pad_6A[0x6];
	TSoftClassPtr<class UClass>                   WidgetClass;
	struct FUIFrameworkWidgetId                   ID;
	TScriptInterface<class IUIFrameworkWidgetWrapperInterface> Wrapper;
	uint8                                         Pad_B0[0x8];
	struct FUIFrameworkParentWidget               AuthorityParent;
	class UWidget*                                LocalUMGWidget;

public:
	void OnRep_IsEnabled();
	void OnRep_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkWidget">();
	}
	static class UUIFrameworkWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkWidget>();
	}
};
static_assert(alignof(UUIFrameworkWidget) == 0x000008, "Wrong alignment on UUIFrameworkWidget");
static_assert(sizeof(UUIFrameworkWidget) == 0x0000D0, "Wrong size on UUIFrameworkWidget");
static_assert(offsetof(UUIFrameworkWidget, bIsEnabled) == 0x000068, "Member 'UUIFrameworkWidget::bIsEnabled' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, Visibility) == 0x000069, "Member 'UUIFrameworkWidget::Visibility' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, WidgetClass) == 0x000070, "Member 'UUIFrameworkWidget::WidgetClass' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, ID) == 0x000098, "Member 'UUIFrameworkWidget::ID' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, Wrapper) == 0x0000A0, "Member 'UUIFrameworkWidget::Wrapper' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, AuthorityParent) == 0x0000B8, "Member 'UUIFrameworkWidget::AuthorityParent' has a wrong offset!");
static_assert(offsetof(UUIFrameworkWidget, LocalUMGWidget) == 0x0000C8, "Member 'UUIFrameworkWidget::LocalUMGWidget' has a wrong offset!");

class UUIFrameworkButton final : public UUIFrameworkWidget
{
public:
	uint8                                         Pad_D0[0x18];
	struct FUIFrameworkSimpleSlot                 Slot;

public:
	void HandleClick();
	void OnRep_Slot();
	void ServerClick(class APlayerController* PlayerController);
	void SetContent(const struct FUIFrameworkSimpleSlot& Content);

	struct FUIFrameworkSimpleSlot GetContent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkButton">();
	}
	static class UUIFrameworkButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkButton>();
	}
};
static_assert(alignof(UUIFrameworkButton) == 0x000008, "Wrong alignment on UUIFrameworkButton");
static_assert(sizeof(UUIFrameworkButton) == 0x000128, "Wrong size on UUIFrameworkButton");
static_assert(offsetof(UUIFrameworkButton, Slot) == 0x0000E8, "Member 'UUIFrameworkButton::Slot' has a wrong offset!");

class UUIFrameworkButtonWidget final : public UButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkButtonWidget">();
	}
	static class UUIFrameworkButtonWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkButtonWidget>();
	}
};
static_assert(alignof(UUIFrameworkButtonWidget) == 0x000010, "Wrong alignment on UUIFrameworkButtonWidget");
static_assert(sizeof(UUIFrameworkButtonWidget) == 0x0005A0, "Wrong size on UUIFrameworkButtonWidget");

class UUIFrameworkCanvasBox final : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkCanvasBoxSlotList          ReplicatedSlotList;

public:
	void AddWidget(const struct FUIFrameworkCanvasBoxSlot& Widget);
	void RemoveWidget(class UUIFrameworkWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkCanvasBox">();
	}
	static class UUIFrameworkCanvasBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkCanvasBox>();
	}
};
static_assert(alignof(UUIFrameworkCanvasBox) == 0x000008, "Wrong alignment on UUIFrameworkCanvasBox");
static_assert(sizeof(UUIFrameworkCanvasBox) == 0x0001F0, "Wrong size on UUIFrameworkCanvasBox");
static_assert(offsetof(UUIFrameworkCanvasBox, ReplicatedSlotList) == 0x0000D0, "Member 'UUIFrameworkCanvasBox::ReplicatedSlotList' has a wrong offset!");

class UUIFrameworkColorBlock final : public UUIFrameworkWidget
{
public:
	struct FLinearColor                           Color;
	struct FVector2f                              DesiredSize;

public:
	void OnRep_Color();
	void OnRep_DesiredSize();
	void SetColor(const struct FLinearColor& Tint);
	void SetDesiredSize(const struct FVector2f& DesiredSize_0);

	struct FLinearColor GetColor() const;
	struct FVector2f GetDesiredSize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkColorBlock">();
	}
	static class UUIFrameworkColorBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkColorBlock>();
	}
};
static_assert(alignof(UUIFrameworkColorBlock) == 0x000008, "Wrong alignment on UUIFrameworkColorBlock");
static_assert(sizeof(UUIFrameworkColorBlock) == 0x0000E8, "Wrong size on UUIFrameworkColorBlock");
static_assert(offsetof(UUIFrameworkColorBlock, Color) == 0x0000D0, "Member 'UUIFrameworkColorBlock::Color' has a wrong offset!");
static_assert(offsetof(UUIFrameworkColorBlock, DesiredSize) == 0x0000E0, "Member 'UUIFrameworkColorBlock::DesiredSize' has a wrong offset!");

class UUIFrameworkImageBlock final : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkImageBlockData             Data;
	bool                                          bWaitForResourceToBeLoaded;
	uint8                                         Pad_119[0x1F];

public:
	void OnRep_Data();
	void SetDesiredSize(const struct FVector2f& DesiredSize);
	void SetMaterial(TSoftObjectPtr<class UMaterialInterface> Material);
	void SetTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bUseTextureSize);
	void SetTiling(ESlateBrushTileType OverflowPolicy);
	void SetTint(const struct FLinearColor& Tint);

	TSoftObjectPtr<class UObject> GeResourceObject() const;
	struct FVector2f GetDesiredSize() const;
	ESlateBrushTileType GetTiling() const;
	struct FLinearColor GetTint() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkImageBlock">();
	}
	static class UUIFrameworkImageBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkImageBlock>();
	}
};
static_assert(alignof(UUIFrameworkImageBlock) == 0x000008, "Wrong alignment on UUIFrameworkImageBlock");
static_assert(sizeof(UUIFrameworkImageBlock) == 0x000138, "Wrong size on UUIFrameworkImageBlock");
static_assert(offsetof(UUIFrameworkImageBlock, Data) == 0x0000D0, "Member 'UUIFrameworkImageBlock::Data' has a wrong offset!");
static_assert(offsetof(UUIFrameworkImageBlock, bWaitForResourceToBeLoaded) == 0x000118, "Member 'UUIFrameworkImageBlock::bWaitForResourceToBeLoaded' has a wrong offset!");

class UUIFrameworkOverlay final : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkOverlaySlotList            ReplicatedSlotList;

public:
	void AddWidget(const struct FUIFrameworkOverlaySlot& Widget);
	void RemoveWidget(class UUIFrameworkWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkOverlay">();
	}
	static class UUIFrameworkOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkOverlay>();
	}
};
static_assert(alignof(UUIFrameworkOverlay) == 0x000008, "Wrong alignment on UUIFrameworkOverlay");
static_assert(sizeof(UUIFrameworkOverlay) == 0x0001F0, "Wrong size on UUIFrameworkOverlay");
static_assert(offsetof(UUIFrameworkOverlay, ReplicatedSlotList) == 0x0000D0, "Member 'UUIFrameworkOverlay::ReplicatedSlotList' has a wrong offset!");

class UUIFrameworkSimpleButton final : public UUIFrameworkWidget
{
public:
	class FText                                   Text;
	struct FUIFrameworkClickEventArgument         ClickEvent;

public:
	void OnClick(const struct FMVVMEventField& Field);
	void OnRep_Text();
	void ServerClick(class APlayerController* PlayerController);
	void SetText(const class FText& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkSimpleButton">();
	}
	static class UUIFrameworkSimpleButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkSimpleButton>();
	}
};
static_assert(alignof(UUIFrameworkSimpleButton) == 0x000008, "Wrong alignment on UUIFrameworkSimpleButton");
static_assert(sizeof(UUIFrameworkSimpleButton) == 0x0000F8, "Wrong size on UUIFrameworkSimpleButton");
static_assert(offsetof(UUIFrameworkSimpleButton, Text) == 0x0000D0, "Member 'UUIFrameworkSimpleButton::Text' has a wrong offset!");
static_assert(offsetof(UUIFrameworkSimpleButton, ClickEvent) == 0x0000E8, "Member 'UUIFrameworkSimpleButton::ClickEvent' has a wrong offset!");

class UUIFrameworkStackBox final : public UUIFrameworkWidget
{
public:
	EOrientation                                  Orientation;
	uint8                                         Pad_D1[0x7];
	struct FUIFrameworkStackBoxSlotList           ReplicatedSlotList;

public:
	void AddWidget(const struct FUIFrameworkStackBoxSlot& Widget);
	void OnRep_Orientation();
	void RemoveWidget(class UUIFrameworkWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkStackBox">();
	}
	static class UUIFrameworkStackBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkStackBox>();
	}
};
static_assert(alignof(UUIFrameworkStackBox) == 0x000008, "Wrong alignment on UUIFrameworkStackBox");
static_assert(sizeof(UUIFrameworkStackBox) == 0x0001F8, "Wrong size on UUIFrameworkStackBox");
static_assert(offsetof(UUIFrameworkStackBox, Orientation) == 0x0000D0, "Member 'UUIFrameworkStackBox::Orientation' has a wrong offset!");
static_assert(offsetof(UUIFrameworkStackBox, ReplicatedSlotList) == 0x0000D8, "Member 'UUIFrameworkStackBox::ReplicatedSlotList' has a wrong offset!");

class UUIFrameworkTextBase : public UUIFrameworkWidget
{
public:
	class FText                                   Text;
	struct FLinearColor                           TextColor;
	ETextJustify                                  Justification;
	ETextOverflowPolicy                           OverflowPolicy;
	uint8                                         Pad_FA[0x6];

public:
	void OnRep_Justification();
	void OnRep_OverflowPolicy();
	void OnRep_Text();
	void OnRep_TextColor();
	void SetJustification(ETextJustify Justification_0);
	void SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy_0);
	void SetText(const class FText& Text_0);
	void SetTextColor(const struct FLinearColor& TextColor_0);

	ETextJustify GetJustification() const;
	ETextOverflowPolicy GetOverflowPolicy() const;
	class FText GetText() const;
	struct FLinearColor GetTextColor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkTextBase">();
	}
	static class UUIFrameworkTextBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkTextBase>();
	}
};
static_assert(alignof(UUIFrameworkTextBase) == 0x000008, "Wrong alignment on UUIFrameworkTextBase");
static_assert(sizeof(UUIFrameworkTextBase) == 0x000100, "Wrong size on UUIFrameworkTextBase");
static_assert(offsetof(UUIFrameworkTextBase, Text) == 0x0000D0, "Member 'UUIFrameworkTextBase::Text' has a wrong offset!");
static_assert(offsetof(UUIFrameworkTextBase, TextColor) == 0x0000E8, "Member 'UUIFrameworkTextBase::TextColor' has a wrong offset!");
static_assert(offsetof(UUIFrameworkTextBase, Justification) == 0x0000F8, "Member 'UUIFrameworkTextBase::Justification' has a wrong offset!");
static_assert(offsetof(UUIFrameworkTextBase, OverflowPolicy) == 0x0000F9, "Member 'UUIFrameworkTextBase::OverflowPolicy' has a wrong offset!");

class UUIFrameworkTextBlock : public UUIFrameworkTextBase
{
public:
	struct FVector2f                              ShadowOffset;
	struct FLinearColor                           ShadowColor;

public:
	void OnRep_ShadowColor();
	void OnRep_ShadowOffset();
	void SetShadowColor(const struct FLinearColor& ShadowColor_0);
	void SetShadowOffset(const struct FVector2f& ShadowOffset_0);

	struct FLinearColor GetShadowColor() const;
	struct FVector2f GetShadowOffset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkTextBlock">();
	}
	static class UUIFrameworkTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkTextBlock>();
	}
};
static_assert(alignof(UUIFrameworkTextBlock) == 0x000008, "Wrong alignment on UUIFrameworkTextBlock");
static_assert(sizeof(UUIFrameworkTextBlock) == 0x000118, "Wrong size on UUIFrameworkTextBlock");
static_assert(offsetof(UUIFrameworkTextBlock, ShadowOffset) == 0x000100, "Member 'UUIFrameworkTextBlock::ShadowOffset' has a wrong offset!");
static_assert(offsetof(UUIFrameworkTextBlock, ShadowColor) == 0x000108, "Member 'UUIFrameworkTextBlock::ShadowColor' has a wrong offset!");

class UUIFrameworkUserWidget final : public UUIFrameworkWidget
{
public:
	struct FUIFrameworkUserWidgetSlotList         ReplicatedSlotList;

public:
	void SetNamedSlot(class FName SlotName, class UUIFrameworkWidget* Widget);
	void SetWidgetClass(TSoftClassPtr<class UClass> Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIFrameworkUserWidget">();
	}
	static class UUIFrameworkUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIFrameworkUserWidget>();
	}
};
static_assert(alignof(UUIFrameworkUserWidget) == 0x000008, "Wrong alignment on UUIFrameworkUserWidget");
static_assert(sizeof(UUIFrameworkUserWidget) == 0x0001F0, "Wrong size on UUIFrameworkUserWidget");
static_assert(offsetof(UUIFrameworkUserWidget, ReplicatedSlotList) == 0x0000D0, "Member 'UUIFrameworkUserWidget::ReplicatedSlotList' has a wrong offset!");

}
