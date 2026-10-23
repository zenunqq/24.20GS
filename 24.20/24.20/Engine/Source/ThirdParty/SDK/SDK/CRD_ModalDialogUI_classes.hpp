#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"
#include "CRD_ModalDialogUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CRD_ModalDialogRuntime_structs.hpp"
#include "ModelViewViewModel_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary
{
public:
	static ECreativeModalDialogViewmodelResponse GetResponseButton1(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseButton2(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseButton3(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseButton4(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseButton5(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseButton6(const struct FWidgetEventField& Field);
	static ECreativeModalDialogViewmodelResponse GetResponseNone(const struct FWidgetEventField& Field);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeModalDialogAllowedConversionFunction">();
	}
	static class UCreativeModalDialogAllowedConversionFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeModalDialogAllowedConversionFunction>();
	}
};
static_assert(alignof(UCreativeModalDialogAllowedConversionFunction) == 0x000008, "Wrong alignment on UCreativeModalDialogAllowedConversionFunction");
static_assert(sizeof(UCreativeModalDialogAllowedConversionFunction) == 0x000028, "Wrong size on UCreativeModalDialogAllowedConversionFunction");

class UCreativeModalDialogConversionFunction final : public UCreativeModalDialogAllowedConversionFunction
{
public:
	static ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(const struct FMVVMEventField& Field, ECreativeModalDialogViewmodelResponse Response);
	static int32 GetColumnIndexForButtonFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const int32 ButtonIndex, const int32 WideMaxColumns, const int32 TallMaxColumns, const int32 DefaultMaxColumns);
	static float GetFloatingValueFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const float TallValue, const float WideValue, const float CenteredFullValue, const float DefaultValue);
	static struct FMargin GetMarginFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const float TallMarginAmount, const float WideMarginAmount, const float CenteredFullMarginAmount, const float DefaultMarginAmount);
	static int32 GetRowIndexForButtonFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const int32 ButtonIndex, const int32 WideMaxColumns, const int32 TallMaxColumns, const int32 DefaultMaxColumns);
	static ECreativeModalDialogViewmodelResponse TranslateResponse(const struct FWidgetEventField& Field, ECreativeModalDialogViewmodelResponse Response);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeModalDialogConversionFunction">();
	}
	static class UCreativeModalDialogConversionFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeModalDialogConversionFunction>();
	}
};
static_assert(alignof(UCreativeModalDialogConversionFunction) == 0x000008, "Wrong alignment on UCreativeModalDialogConversionFunction");
static_assert(sizeof(UCreativeModalDialogConversionFunction) == 0x000028, "Wrong size on UCreativeModalDialogConversionFunction");

class UCreativeModalDialogViewmodel final : public UMVVMViewModelBase
{
public:
	class FText                                   Title;
	class FText                                   Body;
	class UDataTable*                             TextStyleSet;
	class FText                                   Button01_MainText;
	class FText                                   Button02_MainText;
	class FText                                   Button03_MainText;
	class FText                                   Button04_MainText;
	class FText                                   Button05_MainText;
	class FText                                   Button06_MainText;
	class FText                                   Button01_SubText;
	class FText                                   Button02_SubText;
	class FText                                   Button03_SubText;
	class FText                                   Button04_SubText;
	class FText                                   Button05_SubText;
	class FText                                   Button06_SubText;
	class UTexture2D*                             Art01_Image;
	class UTexture2D*                             Art02_Image;
	ECreativeModalDialogAlignmentOption           ContentAlignment;
	bool                                          bShowBackground;
	uint8                                         Pad_1D2[0x2];
	float                                         DialogBackgroundAlpha;
	ECreativeModalDialogTimerOption               TimerOption;
	uint8                                         Pad_1D9[0x3];
	float                                         Timeout;
	float                                         RemainingTimeForTimeout;
	int32                                         NumberOfButtons;
	ECreativeModalBackActionBoundButtonOption     BackActionBoundButton;
	ECreativeModalDialogViewmodelResponse         Response;
	uint8                                         Pad_1EA[0x6];

public:
	ESlateVisibility GetBackgroundVisibility() const;
	struct FDataTableRowHandle GetButton1TriggeringInputAction() const;
	ESlateVisibility GetButton1Visibility() const;
	struct FDataTableRowHandle GetButton2TriggeringInputAction() const;
	ESlateVisibility GetButton2Visibility() const;
	struct FDataTableRowHandle GetButton3TriggeringInputAction() const;
	ESlateVisibility GetButton3Visibility() const;
	struct FDataTableRowHandle GetButton4TriggeringInputAction() const;
	ESlateVisibility GetButton4Visibility() const;
	struct FDataTableRowHandle GetButton5TriggeringInputAction() const;
	ESlateVisibility GetButton5Visibility() const;
	struct FDataTableRowHandle GetButton6TriggeringInputAction() const;
	ESlateVisibility GetButton6Visibility() const;
	EHorizontalAlignment GetHorizontalAlignment() const;
	float GetTimeoutProgress() const;
	ESlateVisibility GetTimerVisibility() const;
	EVerticalAlignment GetVerticalAlignment() const;
	bool IsButton1Visible() const;
	bool IsButton2Visible() const;
	bool IsButton3Visible() const;
	bool IsButton4Visible() const;
	bool IsButton5Visible() const;
	bool IsButton6Visible() const;
	bool IsTimerVisible() const;
	bool ShouldButton1UseFallbackDefaultInputAction() const;
	bool ShouldButton2UseFallbackDefaultInputAction() const;
	bool ShouldButton3UseFallbackDefaultInputAction() const;
	bool ShouldButton4UseFallbackDefaultInputAction() const;
	bool ShouldButton5UseFallbackDefaultInputAction() const;
	bool ShouldButton6UseFallbackDefaultInputAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeModalDialogViewmodel">();
	}
	static class UCreativeModalDialogViewmodel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeModalDialogViewmodel>();
	}
};
static_assert(alignof(UCreativeModalDialogViewmodel) == 0x000008, "Wrong alignment on UCreativeModalDialogViewmodel");
static_assert(sizeof(UCreativeModalDialogViewmodel) == 0x0001F0, "Wrong size on UCreativeModalDialogViewmodel");
static_assert(offsetof(UCreativeModalDialogViewmodel, Title) == 0x000068, "Member 'UCreativeModalDialogViewmodel::Title' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Body) == 0x000080, "Member 'UCreativeModalDialogViewmodel::Body' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, TextStyleSet) == 0x000098, "Member 'UCreativeModalDialogViewmodel::TextStyleSet' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button01_MainText) == 0x0000A0, "Member 'UCreativeModalDialogViewmodel::Button01_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button02_MainText) == 0x0000B8, "Member 'UCreativeModalDialogViewmodel::Button02_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button03_MainText) == 0x0000D0, "Member 'UCreativeModalDialogViewmodel::Button03_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button04_MainText) == 0x0000E8, "Member 'UCreativeModalDialogViewmodel::Button04_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button05_MainText) == 0x000100, "Member 'UCreativeModalDialogViewmodel::Button05_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button06_MainText) == 0x000118, "Member 'UCreativeModalDialogViewmodel::Button06_MainText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button01_SubText) == 0x000130, "Member 'UCreativeModalDialogViewmodel::Button01_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button02_SubText) == 0x000148, "Member 'UCreativeModalDialogViewmodel::Button02_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button03_SubText) == 0x000160, "Member 'UCreativeModalDialogViewmodel::Button03_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button04_SubText) == 0x000178, "Member 'UCreativeModalDialogViewmodel::Button04_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button05_SubText) == 0x000190, "Member 'UCreativeModalDialogViewmodel::Button05_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button06_SubText) == 0x0001A8, "Member 'UCreativeModalDialogViewmodel::Button06_SubText' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art01_Image) == 0x0001C0, "Member 'UCreativeModalDialogViewmodel::Art01_Image' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art02_Image) == 0x0001C8, "Member 'UCreativeModalDialogViewmodel::Art02_Image' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, ContentAlignment) == 0x0001D0, "Member 'UCreativeModalDialogViewmodel::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, bShowBackground) == 0x0001D1, "Member 'UCreativeModalDialogViewmodel::bShowBackground' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, DialogBackgroundAlpha) == 0x0001D4, "Member 'UCreativeModalDialogViewmodel::DialogBackgroundAlpha' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, TimerOption) == 0x0001D8, "Member 'UCreativeModalDialogViewmodel::TimerOption' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Timeout) == 0x0001DC, "Member 'UCreativeModalDialogViewmodel::Timeout' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, RemainingTimeForTimeout) == 0x0001E0, "Member 'UCreativeModalDialogViewmodel::RemainingTimeForTimeout' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, NumberOfButtons) == 0x0001E4, "Member 'UCreativeModalDialogViewmodel::NumberOfButtons' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, BackActionBoundButton) == 0x0001E8, "Member 'UCreativeModalDialogViewmodel::BackActionBoundButton' has a wrong offset!");
static_assert(offsetof(UCreativeModalDialogViewmodel, Response) == 0x0001E9, "Member 'UCreativeModalDialogViewmodel::Response' has a wrong offset!");

class UCreativeModalDialogWidget final : public UCommonActivatableWidget
{
public:
	struct FDataTableRowHandle                    MainMenuInputRowHandle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeModalDialogWidget">();
	}
	static class UCreativeModalDialogWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeModalDialogWidget>();
	}
};
static_assert(alignof(UCreativeModalDialogWidget) == 0x000008, "Wrong alignment on UCreativeModalDialogWidget");
static_assert(sizeof(UCreativeModalDialogWidget) == 0x0003B8, "Wrong size on UCreativeModalDialogWidget");
static_assert(offsetof(UCreativeModalDialogWidget, MainMenuInputRowHandle) == 0x0003A8, "Member 'UCreativeModalDialogWidget::MainMenuInputRowHandle' has a wrong offset!");

}
