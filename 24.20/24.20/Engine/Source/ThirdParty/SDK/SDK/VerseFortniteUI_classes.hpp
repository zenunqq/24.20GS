#pragma once

#include "Basic.hpp"

#include "VerseFortnite_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "VerseFortniteUI_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UIFramework_classes.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{
public:
	uint8                                         Pad_28[0x10];
	struct FHUDElementVisibilityRepData           VisibilityData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortnitePlayspaceHUDController">();
	}
	static class UVerseFortnitePlayspaceHUDController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortnitePlayspaceHUDController>();
	}
};
static_assert(alignof(UVerseFortnitePlayspaceHUDController) == 0x000008, "Wrong alignment on UVerseFortnitePlayspaceHUDController");
static_assert(sizeof(UVerseFortnitePlayspaceHUDController) == 0x0000B0, "Wrong size on UVerseFortnitePlayspaceHUDController");
static_assert(offsetof(UVerseFortnitePlayspaceHUDController, VisibilityData) == 0x000038, "Member 'UVerseFortnitePlayspaceHUDController::VisibilityData' has a wrong offset!");

class UVerseFortniteUIOverlaySlot final : public UOverlaySlot
{
public:
	uint8                                         Pad_58[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIOverlaySlot">();
	}
	static class UVerseFortniteUIOverlaySlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIOverlaySlot>();
	}
};
static_assert(alignof(UVerseFortniteUIOverlaySlot) == 0x000008, "Wrong alignment on UVerseFortniteUIOverlaySlot");
static_assert(sizeof(UVerseFortniteUIOverlaySlot) == 0x000060, "Wrong size on UVerseFortniteUIOverlaySlot");

class UVerseFortniteUIOverlay final : public UOverlay
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIOverlay">();
	}
	static class UVerseFortniteUIOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIOverlay>();
	}
};
static_assert(alignof(UVerseFortniteUIOverlay) == 0x000008, "Wrong alignment on UVerseFortniteUIOverlay");
static_assert(sizeof(UVerseFortniteUIOverlay) == 0x000170, "Wrong size on UVerseFortniteUIOverlay");

class UVerseFortniteUINamedSlot final : public UNamedSlot
{
public:
	uint8                                         Pad_170[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUINamedSlot">();
	}
	static class UVerseFortniteUINamedSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUINamedSlot>();
	}
};
static_assert(alignof(UVerseFortniteUINamedSlot) == 0x000008, "Wrong alignment on UVerseFortniteUINamedSlot");
static_assert(sizeof(UVerseFortniteUINamedSlot) == 0x000180, "Wrong size on UVerseFortniteUINamedSlot");

class UVerseFortniteUIActivableWidgetBase final : public UCommonActivatableWidget
{
public:
	class UVerseFortniteUINamedSlot*              MainSlot;
	uint8                                         Pad_3B0[0x8];
	struct FDataTableRowHandle                    MainMenuInputRowHandle;
	TArray<struct FGameplayTagContainer>          HudToDeactivateOnInitialization;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIActivableWidgetBase">();
	}
	static class UVerseFortniteUIActivableWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIActivableWidgetBase>();
	}
};
static_assert(alignof(UVerseFortniteUIActivableWidgetBase) == 0x000008, "Wrong alignment on UVerseFortniteUIActivableWidgetBase");
static_assert(sizeof(UVerseFortniteUIActivableWidgetBase) == 0x0003D8, "Wrong size on UVerseFortniteUIActivableWidgetBase");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, MainSlot) == 0x0003A8, "Member 'UVerseFortniteUIActivableWidgetBase::MainSlot' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, MainMenuInputRowHandle) == 0x0003B8, "Member 'UVerseFortniteUIActivableWidgetBase::MainMenuInputRowHandle' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, HudToDeactivateOnInitialization) == 0x0003C8, "Member 'UVerseFortniteUIActivableWidgetBase::HudToDeactivateOnInitialization' has a wrong offset!");

class UVerseFortniteUIPresenter final : public UUIFrameworkGameViewportPresenter
{
public:
	TArray<struct FVerseFortniteUIPresenterElement> Pending;
	TArray<struct FVerseFortniteUIPresenterElement> Created;
	class UVerseFortniteUIOverlay*                PlayerGameViewport;
	class UVerseFortniteUIOverlay*                ContentGameViewport;
	class UVerseFortniteUIActivableWidgetBase*    PopupContainer;
	uint8                                         Pad_70[0x8];
	TSoftClassPtr<class UClass>                   WidgetForDynamicUI;
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainForDynamicUI;
	uint8                                         Pad_C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIPresenter">();
	}
	static class UVerseFortniteUIPresenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIPresenter>();
	}
};
static_assert(alignof(UVerseFortniteUIPresenter) == 0x000008, "Wrong alignment on UVerseFortniteUIPresenter");
static_assert(sizeof(UVerseFortniteUIPresenter) == 0x0000D0, "Wrong size on UVerseFortniteUIPresenter");
static_assert(offsetof(UVerseFortniteUIPresenter, Pending) == 0x000038, "Member 'UVerseFortniteUIPresenter::Pending' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, Created) == 0x000048, "Member 'UVerseFortniteUIPresenter::Created' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, PlayerGameViewport) == 0x000058, "Member 'UVerseFortniteUIPresenter::PlayerGameViewport' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, ContentGameViewport) == 0x000060, "Member 'UVerseFortniteUIPresenter::ContentGameViewport' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, PopupContainer) == 0x000068, "Member 'UVerseFortniteUIPresenter::PopupContainer' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, WidgetForDynamicUI) == 0x000078, "Member 'UVerseFortniteUIPresenter::WidgetForDynamicUI' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIPresenter, ActionDomainForDynamicUI) == 0x0000A0, "Member 'UVerseFortniteUIPresenter::ActionDomainForDynamicUI' has a wrong offset!");

class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{
public:
	class FText                                   Text;
	uint8                                         Pad_E8[0x18];

public:
	void OnRep_Text();
	void ServerClick(class APlayerController* PlayerController);
	void SetText(const class FText& Text_0);

	class FText GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Base">();
	}
	static class UVerseFortniteUIFrameworkButton_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Base>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkButton_Base) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkButton_Base");
static_assert(sizeof(UVerseFortniteUIFrameworkButton_Base) == 0x000100, "Wrong size on UVerseFortniteUIFrameworkButton_Base");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Base, Text) == 0x0000D0, "Member 'UVerseFortniteUIFrameworkButton_Base::Text' has a wrong offset!");

class UVerseFortniteUIFrameworkButton_Loud final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Loud">();
	}
	static class UVerseFortniteUIFrameworkButton_Loud* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Loud>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkButton_Loud) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkButton_Loud");
static_assert(sizeof(UVerseFortniteUIFrameworkButton_Loud) == 0x000100, "Wrong size on UVerseFortniteUIFrameworkButton_Loud");

class UVerseFortniteUIFrameworkButton_Regular final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Regular">();
	}
	static class UVerseFortniteUIFrameworkButton_Regular* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Regular>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkButton_Regular) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkButton_Regular");
static_assert(sizeof(UVerseFortniteUIFrameworkButton_Regular) == 0x000100, "Wrong size on UVerseFortniteUIFrameworkButton_Regular");

class UVerseFortniteUIFrameworkButton_Quiet final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Quiet">();
	}
	static class UVerseFortniteUIFrameworkButton_Quiet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Quiet>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkButton_Quiet) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkButton_Quiet");
static_assert(sizeof(UVerseFortniteUIFrameworkButton_Quiet) == 0x000100, "Wrong size on UVerseFortniteUIFrameworkButton_Quiet");

class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{
public:
	uint8                                         Pad_100[0x18];

public:
	void ExecuteServerTextCommitted(const class FText& InText, ETextCommit InCommitMethod);
	void ServerTextCommitted(class APlayerController* PlayerController, const class FText& NewText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkText_Base">();
	}
	static class UVerseFortniteUIFrameworkText_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkText_Base>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkText_Base) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkText_Base");
static_assert(sizeof(UVerseFortniteUIFrameworkText_Base) == 0x000118, "Wrong size on UVerseFortniteUIFrameworkText_Base");

class UVerseFortniteUIFrameworkTextBlock final : public UUIFrameworkTextBlock
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkTextBlock">();
	}
	static class UVerseFortniteUIFrameworkTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkTextBlock>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkTextBlock) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkTextBlock");
static_assert(sizeof(UVerseFortniteUIFrameworkTextBlock) == 0x000118, "Wrong size on UVerseFortniteUIFrameworkTextBlock");

class UVerseFortniteUIFrameworkEditableText final : public UVerseFortniteUIFrameworkText_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkEditableText">();
	}
	static class UVerseFortniteUIFrameworkEditableText* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkEditableText>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkEditableText) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkEditableText");
static_assert(sizeof(UVerseFortniteUIFrameworkEditableText) == 0x000118, "Wrong size on UVerseFortniteUIFrameworkEditableText");

class UVerseFortniteUIFrameworkEditableTextBox final : public UVerseFortniteUIFrameworkText_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkEditableTextBox">();
	}
	static class UVerseFortniteUIFrameworkEditableTextBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkEditableTextBox>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkEditableTextBox) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkEditableTextBox");
static_assert(sizeof(UVerseFortniteUIFrameworkEditableTextBox) == 0x000118, "Wrong size on UVerseFortniteUIFrameworkEditableTextBox");

class UVerseFortniteUIFrameworkSlider final : public UUIFrameworkWidget
{
public:
	struct FVerseFortniteUIFrameworkSliderValue   Value;
	float                                         MinValue;
	float                                         MaxValue;
	float                                         StepSize;
	uint8                                         Pad_E4[0x24];

public:
	void ExecuteServerValueChanged(float InNewValue, int32 InValueID);
	void HandleValueChanged(float NewValue);
	void OnRep_MaxValue();
	void OnRep_MinValue();
	void OnRep_StepSize();
	void OnRep_Value();
	void ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32 InValueID);
	void SetMaxValue(float InMaxValue);
	void SetMinValue(float InMinValue);
	void SetStepSize(float InMinValue);
	void SetValue(float InValue);

	float GetMaxValue() const;
	float GetMinValue() const;
	float GetStepSize() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkSlider">();
	}
	static class UVerseFortniteUIFrameworkSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkSlider>();
	}
};
static_assert(alignof(UVerseFortniteUIFrameworkSlider) == 0x000008, "Wrong alignment on UVerseFortniteUIFrameworkSlider");
static_assert(sizeof(UVerseFortniteUIFrameworkSlider) == 0x000108, "Wrong size on UVerseFortniteUIFrameworkSlider");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, Value) == 0x0000D0, "Member 'UVerseFortniteUIFrameworkSlider::Value' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, MinValue) == 0x0000D8, "Member 'UVerseFortniteUIFrameworkSlider::MinValue' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, MaxValue) == 0x0000DC, "Member 'UVerseFortniteUIFrameworkSlider::MaxValue' has a wrong offset!");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, StepSize) == 0x0000E0, "Member 'UVerseFortniteUIFrameworkSlider::StepSize' has a wrong offset!");

}
