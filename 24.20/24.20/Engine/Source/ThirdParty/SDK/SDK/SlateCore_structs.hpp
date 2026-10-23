#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EUINavigationRule : uint8
{
	Escape                                   = 0,
	Explicit                                 = 1,
	Wrap                                     = 2,
	Stop                                     = 3,
	Custom                                   = 4,
	CustomBoundary                           = 5,
	Invalid                                  = 6,
	EUINavigationRule_MAX                    = 7,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                             = 0,
	Deuteranope                              = 1,
	Protanope                                = 2,
	Tritanope                                = 3,
	EColorVisionDeficiency_MAX               = 4,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                                = 0,
	MouseDown                                = 1,
	MouseUp                                  = 2,
	PreciseClick                             = 3,
	EButtonClickMethod_MAX                   = 4,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                                = 0,
	Down                                     = 1,
	PreciseTap                               = 2,
	EButtonTouchMethod_MAX                   = 3,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                                = 0,
	ButtonPress                              = 1,
	ButtonRelease                            = 2,
	EButtonPressMethod_MAX                   = 3,
};

enum class EUINavigation : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Up                                       = 2,
	Down                                     = 3,
	Next                                     = 4,
	Previous                                 = 5,
	Num                                      = 6,
	Invalid                                  = 7,
	EUINavigation_MAX                        = 8,
};

enum class EUINavigationAction : uint8
{
	Accept                                   = 0,
	Back                                     = 1,
	Num                                      = 2,
	Invalid                                  = 3,
	EUINavigationAction_MAX                  = 4,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                            = 0,
	WidgetUnderCursor                        = 1,
	ENavigationSource_MAX                    = 2,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                                 = 0,
	Controller                               = 1,
	User                                     = 2,
	ENavigationGenesis_MAX                   = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                              = 0,
	HAlign_Left                              = 1,
	HAlign_Center                            = 2,
	HAlign_Right                             = 3,
	HAlign_MAX                               = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                              = 0,
	VAlign_Top                               = 1,
	VAlign_Center                            = 2,
	VAlign_Bottom                            = 3,
	VAlign_MAX                               = 4,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor                = 0,
	MenuPlacement_CenteredBelowAnchor        = 1,
	MenuPlacement_BelowRightAnchor           = 2,
	MenuPlacement_ComboBox                   = 3,
	MenuPlacement_ComboBoxRight              = 4,
	MenuPlacement_MenuRight                  = 5,
	MenuPlacement_AboveAnchor                = 6,
	MenuPlacement_CenteredAboveAnchor        = 7,
	MenuPlacement_AboveRightAnchor           = 8,
	MenuPlacement_MenuLeft                   = 9,
	MenuPlacement_Center                     = 10,
	MenuPlacement_RightLeftCenter            = 11,
	MenuPlacement_MatchBottomLeft            = 12,
	MenuPlacement_MAX                        = 13,
};

enum class EOrientation : uint8
{
	Orient_Horizontal                        = 0,
	Orient_Vertical                          = 1,
	Orient_MAX                               = 2,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                              = 0,
	Scroll_Up                                = 1,
	Scroll_MAX                               = 2,
};

enum class ETextCommit : uint8
{
	Default                                  = 0,
	OnEnter                                  = 1,
	OnUserMovedFocus                         = 2,
	OnCleared                                = 3,
	ETextCommit_MAX                          = 4,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                               = 0,
	OnNavigation                             = 1,
	OnMouseClick                             = 2,
	Direct                                   = 3,
	ESelectInfo_MAX                          = 4,
};

enum class ESlateDebuggingInputEvent : uint8
{
	MouseMove                                = 0,
	MouseEnter                               = 1,
	MouseLeave                               = 2,
	PreviewMouseButtonDown                   = 3,
	MouseButtonDown                          = 4,
	MouseButtonUp                            = 5,
	MouseButtonDoubleClick                   = 6,
	MouseWheel                               = 7,
	TouchStart                               = 8,
	TouchEnd                                 = 9,
	TouchForceChanged                        = 10,
	TouchFirstMove                           = 11,
	TouchMoved                               = 12,
	DragDetected                             = 13,
	DragEnter                                = 14,
	DragLeave                                = 15,
	DragOver                                 = 16,
	DragDrop                                 = 17,
	DropMessage                              = 18,
	PreviewKeyDown                           = 19,
	KeyDown                                  = 20,
	KeyUp                                    = 21,
	KeyChar                                  = 22,
	AnalogInput                              = 23,
	TouchGesture                             = 24,
	MotionDetected                           = 25,
	MAX                                      = 26,
};

enum class ESlateDebuggingStateChangeEvent : uint8
{
	MouseCaptureGained                       = 0,
	MouseCaptureLost                         = 1,
	ESlateDebuggingStateChangeEvent_MAX      = 2,
};

enum class ESlateDebuggingNavigationMethod : uint8
{
	Unknown                                  = 0,
	Explicit                                 = 1,
	CustomDelegateBound                      = 2,
	CustomDelegateUnbound                    = 3,
	NextOrPrevious                           = 4,
	HitTestGrid                              = 5,
	ESlateDebuggingNavigationMethod_MAX      = 6,
};

enum class ESlateDebuggingFocusEvent : uint8
{
	FocusChanging                            = 0,
	FocusLost                                = 1,
	FocusReceived                            = 2,
	MAX                                      = 3,
};

enum class EFontHinting : uint8
{
	Default                                  = 0,
	Auto                                     = 1,
	AutoLight                                = 2,
	Monochrome                               = 3,
	None                                     = 4,
	EFontHinting_MAX                         = 5,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                                 = 0,
	Stream                                   = 1,
	Inline                                   = 2,
	EFontLoadingPolicy_MAX                   = 3,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                                  = 0,
	BoundingBox                              = 1,
	EFontLayoutMethod_MAX                    = 2,
};

enum class ETextShapingMethod : uint8
{
	Auto                                     = 0,
	KerningOnly                              = 1,
	FullShaping                              = 2,
	ETextShapingMethod_MAX                   = 3,
};

enum class EFocusCause : uint8
{
	Mouse                                    = 0,
	Navigation                               = 1,
	SetDirectly                              = 2,
	Cleared                                  = 3,
	OtherWidgetLostFocus                     = 4,
	WindowActivate                           = 5,
	EFocusCause_MAX                          = 6,
};

enum class EWidgetClipping : uint8
{
	Inherit                                  = 0,
	ClipToBounds                             = 1,
	ClipToBoundsWithoutIntersecting          = 2,
	ClipToBoundsAlways                       = 3,
	OnDemand                                 = 4,
	EWidgetClipping_MAX                      = 5,
};

enum class EFlowDirectionPreference : uint8
{
	Inherit                                  = 0,
	Culture                                  = 1,
	LeftToRight                              = 2,
	RightToLeft                              = 3,
	EFlowDirectionPreference_MAX             = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                               = 0,
	Box                                      = 1,
	Border                                   = 2,
	Image                                    = 3,
	RoundedBox                               = 4,
	ESlateBrushDrawType_MAX                  = 5,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                                   = 0,
	Horizontal                               = 1,
	Vertical                                 = 2,
	Both                                     = 3,
	ESlateBrushTileType_MAX                  = 4,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                                 = 0,
	Horizontal                               = 1,
	Vertical                                 = 2,
	Both                                     = 3,
	ESlateBrushMirrorType_MAX                = 4,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                                  = 0,
	FullColor                                = 1,
	Linear                                   = 2,
	Vector                                   = 3,
	ESlateBrushImageType_MAX                 = 4,
};

enum class ESlateBrushRoundingType : uint8
{
	FixedRadius                              = 0,
	HalfHeightRadius                         = 1,
	ESlateBrushRoundingType_MAX              = 2,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified                       = 0,
	UseColor_ColorTable                      = 1,
	UseColor_Foreground                      = 2,
	UseColor_Foreground_Subdued              = 3,
	UseColor_UseStyle                        = 4,
	UseColor_MAX                             = 5,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible                    = 0,
	Always                                   = 1,
	Never                                    = 2,
	EConsumeMouseWheel_MAX                   = 3,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                             = 0,
	MainWindow                               = 1,
	ESlateParentWindowSearchMethod_MAX       = 2,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                                 = 0,
	ToggleButton                             = 1,
	ESlateCheckBoxType_MAX                   = 2,
};

enum class ECheckBoxState : uint8
{
	Unchecked                                = 0,
	Checked                                  = 1,
	Undetermined                             = 2,
	ECheckBoxState_MAX                       = 3,
};

enum class ETextOverflowPolicy : uint8
{
	Clip                                     = 0,
	Ellipsis                                 = 1,
	ETextOverflowPolicy_MAX                  = 2,
};

enum class ETextTransformPolicy : uint8
{
	None                                     = 0,
	ToLower                                  = 1,
	ToUpper                                  = 2,
	ETextTransformPolicy_MAX                 = 3,
};

enum class EStyleColor : uint8
{
	Black                                    = 0,
	Background                               = 1,
	Title                                    = 2,
	WindowBorder                             = 3,
	Foldout                                  = 4,
	Input                                    = 5,
	InputOutline                             = 6,
	Recessed                                 = 7,
	Panel                                    = 8,
	Header                                   = 9,
	Dropdown                                 = 10,
	DropdownOutline                          = 11,
	Hover                                    = 12,
	Hover2                                   = 13,
	White                                    = 14,
	White25                                  = 15,
	Highlight                                = 16,
	Primary                                  = 17,
	PrimaryHover                             = 18,
	PrimaryPress                             = 19,
	Secondary                                = 20,
	Foreground                               = 21,
	ForegroundHover                          = 22,
	ForegroundInverted                       = 23,
	ForegroundHeader                         = 24,
	Select                                   = 25,
	SelectInactive                           = 26,
	SelectParent                             = 27,
	SelectHover                              = 28,
	Notifications                            = 29,
	AccentBlue                               = 30,
	AccentPurple                             = 31,
	AccentPink                               = 32,
	AccentRed                                = 33,
	AccentOrange                             = 34,
	AccentYellow                             = 35,
	AccentGreen                              = 36,
	AccentBrown                              = 37,
	AccentBlack                              = 38,
	AccentGray                               = 39,
	AccentWhite                              = 40,
	AccentFolder                             = 41,
	Warning                                  = 42,
	Error                                    = 43,
	Success                                  = 44,
	User1                                    = 45,
	User2                                    = 46,
	User3                                    = 47,
	User4                                    = 48,
	User5                                    = 49,
	User6                                    = 50,
	User7                                    = 51,
	User8                                    = 52,
	User9                                    = 53,
	User10                                   = 54,
	User11                                   = 55,
	User12                                   = 56,
	User13                                   = 57,
	User14                                   = 58,
	User15                                   = 59,
	User16                                   = 60,
	MAX                                      = 61,
};

struct alignas(0x08) FInputEvent
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FInputEvent) == 0x000008, "Wrong alignment on FInputEvent");
static_assert(sizeof(FInputEvent) == 0x000020, "Wrong size on FInputEvent");

struct FPointerEvent final : public FInputEvent
{
public:
	uint8                                         Pad_20[0x78];
};
static_assert(alignof(FPointerEvent) == 0x000008, "Wrong alignment on FPointerEvent");
static_assert(sizeof(FPointerEvent) == 0x000098, "Wrong size on FPointerEvent");

struct alignas(0x08) FGeometry final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FGeometry) == 0x000008, "Wrong alignment on FGeometry");
static_assert(sizeof(FGeometry) == 0x000040, "Wrong size on FGeometry");

struct FFontData final
{
public:
	class FString                                 FontFilename;
	uint8                                         Pad_10[0x4];
	EFontHinting                                  Hinting;
	EFontLoadingPolicy                            LoadingPolicy;
	uint8                                         Pad_16[0x2];
	int32                                         SubFaceIndex;
	uint8                                         Pad_1C[0x4];
	class UObject*                                FontFaceAsset;
};
static_assert(alignof(FFontData) == 0x000008, "Wrong alignment on FFontData");
static_assert(sizeof(FFontData) == 0x000028, "Wrong size on FFontData");
static_assert(offsetof(FFontData, FontFilename) == 0x000000, "Member 'FFontData::FontFilename' has a wrong offset!");
static_assert(offsetof(FFontData, Hinting) == 0x000014, "Member 'FFontData::Hinting' has a wrong offset!");
static_assert(offsetof(FFontData, LoadingPolicy) == 0x000015, "Member 'FFontData::LoadingPolicy' has a wrong offset!");
static_assert(offsetof(FFontData, SubFaceIndex) == 0x000018, "Member 'FFontData::SubFaceIndex' has a wrong offset!");
static_assert(offsetof(FFontData, FontFaceAsset) == 0x000020, "Member 'FFontData::FontFaceAsset' has a wrong offset!");

struct FTypefaceEntry final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	struct FFontData                              Font;
};
static_assert(alignof(FTypefaceEntry) == 0x000008, "Wrong alignment on FTypefaceEntry");
static_assert(sizeof(FTypefaceEntry) == 0x000030, "Wrong size on FTypefaceEntry");
static_assert(offsetof(FTypefaceEntry, Name) == 0x000000, "Member 'FTypefaceEntry::Name' has a wrong offset!");
static_assert(offsetof(FTypefaceEntry, Font) == 0x000008, "Member 'FTypefaceEntry::Font' has a wrong offset!");

struct FTypeface final
{
public:
	TArray<struct FTypefaceEntry>                 Fonts;
};
static_assert(alignof(FTypeface) == 0x000008, "Wrong alignment on FTypeface");
static_assert(sizeof(FTypeface) == 0x000010, "Wrong size on FTypeface");
static_assert(offsetof(FTypeface, Fonts) == 0x000000, "Member 'FTypeface::Fonts' has a wrong offset!");

struct FCompositeFallbackFont
{
public:
	struct FTypeface                              Typeface;
	float                                         ScalingFactor;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FCompositeFallbackFont) == 0x000008, "Wrong alignment on FCompositeFallbackFont");
static_assert(sizeof(FCompositeFallbackFont) == 0x000018, "Wrong size on FCompositeFallbackFont");
static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0x000000, "Member 'FCompositeFallbackFont::Typeface' has a wrong offset!");
static_assert(offsetof(FCompositeFallbackFont, ScalingFactor) == 0x000010, "Member 'FCompositeFallbackFont::ScalingFactor' has a wrong offset!");

struct FCompositeSubFont final : public FCompositeFallbackFont
{
public:
	TArray<struct FInt32Range>                    CharacterRanges;
	class FString                                 Cultures;
};
static_assert(alignof(FCompositeSubFont) == 0x000008, "Wrong alignment on FCompositeSubFont");
static_assert(sizeof(FCompositeSubFont) == 0x000038, "Wrong size on FCompositeSubFont");
static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 0x000018, "Member 'FCompositeSubFont::CharacterRanges' has a wrong offset!");
static_assert(offsetof(FCompositeSubFont, Cultures) == 0x000028, "Member 'FCompositeSubFont::Cultures' has a wrong offset!");

struct FCompositeFont final
{
public:
	struct FTypeface                              DefaultTypeface;
	struct FCompositeFallbackFont                 FallbackTypeface;
	TArray<struct FCompositeSubFont>              SubTypefaces;
};
static_assert(alignof(FCompositeFont) == 0x000008, "Wrong alignment on FCompositeFont");
static_assert(sizeof(FCompositeFont) == 0x000038, "Wrong size on FCompositeFont");
static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0x000000, "Member 'FCompositeFont::DefaultTypeface' has a wrong offset!");
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 0x000010, "Member 'FCompositeFont::FallbackTypeface' has a wrong offset!");
static_assert(offsetof(FCompositeFont, SubTypefaces) == 0x000028, "Member 'FCompositeFont::SubTypefaces' has a wrong offset!");

struct FSlateColor final
{
public:
	struct FLinearColor                           SpecifiedColor;
	ESlateColorStylingMode                        ColorUseRule;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FSlateColor) == 0x000004, "Wrong alignment on FSlateColor");
static_assert(sizeof(FSlateColor) == 0x000014, "Wrong size on FSlateColor");
static_assert(offsetof(FSlateColor, SpecifiedColor) == 0x000000, "Member 'FSlateColor::SpecifiedColor' has a wrong offset!");
static_assert(offsetof(FSlateColor, ColorUseRule) == 0x000010, "Member 'FSlateColor::ColorUseRule' has a wrong offset!");

struct FSlateBrushOutlineSettings final
{
public:
	struct FVector4                               CornerRadii;
	struct FSlateColor                            Color;
	float                                         Width;
	ESlateBrushRoundingType                       RoundingType;
	bool                                          bUseBrushTransparency;
	uint8                                         Pad_3A[0x6];
};
static_assert(alignof(FSlateBrushOutlineSettings) == 0x000010, "Wrong alignment on FSlateBrushOutlineSettings");
static_assert(sizeof(FSlateBrushOutlineSettings) == 0x000040, "Wrong size on FSlateBrushOutlineSettings");
static_assert(offsetof(FSlateBrushOutlineSettings, CornerRadii) == 0x000000, "Member 'FSlateBrushOutlineSettings::CornerRadii' has a wrong offset!");
static_assert(offsetof(FSlateBrushOutlineSettings, Color) == 0x000020, "Member 'FSlateBrushOutlineSettings::Color' has a wrong offset!");
static_assert(offsetof(FSlateBrushOutlineSettings, Width) == 0x000034, "Member 'FSlateBrushOutlineSettings::Width' has a wrong offset!");
static_assert(offsetof(FSlateBrushOutlineSettings, RoundingType) == 0x000038, "Member 'FSlateBrushOutlineSettings::RoundingType' has a wrong offset!");
static_assert(offsetof(FSlateBrushOutlineSettings, bUseBrushTransparency) == 0x000039, "Member 'FSlateBrushOutlineSettings::bUseBrushTransparency' has a wrong offset!");

struct FMargin final
{
public:
	float                                         Left;
	float                                         Top;
	float                                         Right;
	float                                         Bottom;
};
static_assert(alignof(FMargin) == 0x000004, "Wrong alignment on FMargin");
static_assert(sizeof(FMargin) == 0x000010, "Wrong size on FMargin");
static_assert(offsetof(FMargin, Left) == 0x000000, "Member 'FMargin::Left' has a wrong offset!");
static_assert(offsetof(FMargin, Top) == 0x000004, "Member 'FMargin::Top' has a wrong offset!");
static_assert(offsetof(FMargin, Right) == 0x000008, "Member 'FMargin::Right' has a wrong offset!");
static_assert(offsetof(FMargin, Bottom) == 0x00000C, "Member 'FMargin::Bottom' has a wrong offset!");

struct FSlateBrush final
{
public:
	uint8                                         Pad_0[0x10];
	uint8                                         bIsDynamicallyLoaded : 1;
	uint8                                         bHasUObject : 1;
	ESlateBrushDrawType                           DrawAs;
	ESlateBrushTileType                           Tiling;
	ESlateBrushMirrorType                         Mirroring;
	ESlateBrushImageType                          ImageType;
	uint8                                         Pad_15[0x3];
	struct FVector2D                              ImageSize;
	struct FMargin                                Margin;
	struct FSlateColor                            TintColor;
	uint8                                         Pad_4C[0x4];
	struct FSlateBrushOutlineSettings             OutlineSettings;
	class UObject*                                ResourceObject;
	class FName                                   ResourceName;
	struct FBox2f                                 UVRegion;
	uint8                                         Pad_B0[0x10];
};
static_assert(alignof(FSlateBrush) == 0x000010, "Wrong alignment on FSlateBrush");
static_assert(sizeof(FSlateBrush) == 0x0000C0, "Wrong size on FSlateBrush");
static_assert(offsetof(FSlateBrush, DrawAs) == 0x000011, "Member 'FSlateBrush::DrawAs' has a wrong offset!");
static_assert(offsetof(FSlateBrush, Tiling) == 0x000012, "Member 'FSlateBrush::Tiling' has a wrong offset!");
static_assert(offsetof(FSlateBrush, Mirroring) == 0x000013, "Member 'FSlateBrush::Mirroring' has a wrong offset!");
static_assert(offsetof(FSlateBrush, ImageType) == 0x000014, "Member 'FSlateBrush::ImageType' has a wrong offset!");
static_assert(offsetof(FSlateBrush, ImageSize) == 0x000018, "Member 'FSlateBrush::ImageSize' has a wrong offset!");
static_assert(offsetof(FSlateBrush, Margin) == 0x000028, "Member 'FSlateBrush::Margin' has a wrong offset!");
static_assert(offsetof(FSlateBrush, TintColor) == 0x000038, "Member 'FSlateBrush::TintColor' has a wrong offset!");
static_assert(offsetof(FSlateBrush, OutlineSettings) == 0x000050, "Member 'FSlateBrush::OutlineSettings' has a wrong offset!");
static_assert(offsetof(FSlateBrush, ResourceObject) == 0x000090, "Member 'FSlateBrush::ResourceObject' has a wrong offset!");
static_assert(offsetof(FSlateBrush, ResourceName) == 0x000098, "Member 'FSlateBrush::ResourceName' has a wrong offset!");
static_assert(offsetof(FSlateBrush, UVRegion) == 0x00009C, "Member 'FSlateBrush::UVRegion' has a wrong offset!");

struct alignas(0x08) FSlateWidgetStyle
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FSlateWidgetStyle) == 0x000008, "Wrong alignment on FSlateWidgetStyle");
static_assert(sizeof(FSlateWidgetStyle) == 0x000008, "Wrong size on FSlateWidgetStyle");

struct FKeyEvent : public FInputEvent
{
public:
	uint8                                         Pad_20[0x20];
};
static_assert(alignof(FKeyEvent) == 0x000008, "Wrong alignment on FKeyEvent");
static_assert(sizeof(FKeyEvent) == 0x000040, "Wrong size on FKeyEvent");

struct FAnalogInputEvent final : public FKeyEvent
{
public:
	uint8                                         Pad_40[0x8];
};
static_assert(alignof(FAnalogInputEvent) == 0x000008, "Wrong alignment on FAnalogInputEvent");
static_assert(sizeof(FAnalogInputEvent) == 0x000048, "Wrong size on FAnalogInputEvent");

struct FScrollBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            HorizontalBackgroundImage;
	struct FSlateBrush                            VerticalBackgroundImage;
	struct FSlateBrush                            VerticalTopSlotImage;
	struct FSlateBrush                            HorizontalTopSlotImage;
	struct FSlateBrush                            VerticalBottomSlotImage;
	struct FSlateBrush                            HorizontalBottomSlotImage;
	struct FSlateBrush                            NormalThumbImage;
	struct FSlateBrush                            HoveredThumbImage;
	struct FSlateBrush                            DraggedThumbImage;
	float                                         Thickness;
	uint8                                         Pad_6D4[0xC];
};
static_assert(alignof(FScrollBarStyle) == 0x000010, "Wrong alignment on FScrollBarStyle");
static_assert(sizeof(FScrollBarStyle) == 0x0006E0, "Wrong size on FScrollBarStyle");
static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 0x000010, "Member 'FScrollBarStyle::HorizontalBackgroundImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 0x0000D0, "Member 'FScrollBarStyle::VerticalBackgroundImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 0x000190, "Member 'FScrollBarStyle::VerticalTopSlotImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 0x000250, "Member 'FScrollBarStyle::HorizontalTopSlotImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 0x000310, "Member 'FScrollBarStyle::VerticalBottomSlotImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 0x0003D0, "Member 'FScrollBarStyle::HorizontalBottomSlotImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 0x000490, "Member 'FScrollBarStyle::NormalThumbImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 0x000550, "Member 'FScrollBarStyle::HoveredThumbImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 0x000610, "Member 'FScrollBarStyle::DraggedThumbImage' has a wrong offset!");
static_assert(offsetof(FScrollBarStyle, Thickness) == 0x0006D0, "Member 'FScrollBarStyle::Thickness' has a wrong offset!");

struct FSpinBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundBrush;
	struct FSlateBrush                            ActiveBackgroundBrush;
	struct FSlateBrush                            HoveredBackgroundBrush;
	struct FSlateBrush                            ActiveFillBrush;
	struct FSlateBrush                            HoveredFillBrush;
	struct FSlateBrush                            InactiveFillBrush;
	struct FSlateBrush                            ArrowsImage;
	struct FSlateColor                            ForegroundColor;
	struct FMargin                                TextPadding;
	struct FMargin                                InsetPadding;
	uint8                                         Pad_584[0xC];
};
static_assert(alignof(FSpinBoxStyle) == 0x000010, "Wrong alignment on FSpinBoxStyle");
static_assert(sizeof(FSpinBoxStyle) == 0x000590, "Wrong size on FSpinBoxStyle");
static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 0x000010, "Member 'FSpinBoxStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, ActiveBackgroundBrush) == 0x0000D0, "Member 'FSpinBoxStyle::ActiveBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 0x000190, "Member 'FSpinBoxStyle::HoveredBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 0x000250, "Member 'FSpinBoxStyle::ActiveFillBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, HoveredFillBrush) == 0x000310, "Member 'FSpinBoxStyle::HoveredFillBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 0x0003D0, "Member 'FSpinBoxStyle::InactiveFillBrush' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 0x000490, "Member 'FSpinBoxStyle::ArrowsImage' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 0x000550, "Member 'FSpinBoxStyle::ForegroundColor' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 0x000564, "Member 'FSpinBoxStyle::TextPadding' has a wrong offset!");
static_assert(offsetof(FSpinBoxStyle, InsetPadding) == 0x000574, "Member 'FSpinBoxStyle::InsetPadding' has a wrong offset!");

struct FTableRowStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            SelectorFocusedBrush;
	struct FSlateBrush                            ActiveHoveredBrush;
	struct FSlateBrush                            ActiveBrush;
	struct FSlateBrush                            InactiveHoveredBrush;
	struct FSlateBrush                            InactiveBrush;
	bool                                          bUseParentRowBrush;
	uint8                                         Pad_3D1[0xF];
	struct FSlateBrush                            ParentRowBackgroundBrush;
	struct FSlateBrush                            ParentRowBackgroundHoveredBrush;
	struct FSlateBrush                            EvenRowBackgroundHoveredBrush;
	struct FSlateBrush                            EvenRowBackgroundBrush;
	struct FSlateBrush                            OddRowBackgroundHoveredBrush;
	struct FSlateBrush                            OddRowBackgroundBrush;
	struct FSlateColor                            TextColor;
	struct FSlateColor                            SelectedTextColor;
	uint8                                         Pad_888[0x8];
	struct FSlateBrush                            DropIndicator_Above;
	struct FSlateBrush                            DropIndicator_Onto;
	struct FSlateBrush                            DropIndicator_Below;
	struct FSlateBrush                            ActiveHighlightedBrush;
	struct FSlateBrush                            InactiveHighlightedBrush;
};
static_assert(alignof(FTableRowStyle) == 0x000010, "Wrong alignment on FTableRowStyle");
static_assert(sizeof(FTableRowStyle) == 0x000C50, "Wrong size on FTableRowStyle");
static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 0x000010, "Member 'FTableRowStyle::SelectorFocusedBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 0x0000D0, "Member 'FTableRowStyle::ActiveHoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 0x000190, "Member 'FTableRowStyle::ActiveBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 0x000250, "Member 'FTableRowStyle::InactiveHoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 0x000310, "Member 'FTableRowStyle::InactiveBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, bUseParentRowBrush) == 0x0003D0, "Member 'FTableRowStyle::bUseParentRowBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundBrush) == 0x0003E0, "Member 'FTableRowStyle::ParentRowBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundHoveredBrush) == 0x0004A0, "Member 'FTableRowStyle::ParentRowBackgroundHoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 0x000560, "Member 'FTableRowStyle::EvenRowBackgroundHoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 0x000620, "Member 'FTableRowStyle::EvenRowBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 0x0006E0, "Member 'FTableRowStyle::OddRowBackgroundHoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 0x0007A0, "Member 'FTableRowStyle::OddRowBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, TextColor) == 0x000860, "Member 'FTableRowStyle::TextColor' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 0x000874, "Member 'FTableRowStyle::SelectedTextColor' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 0x000890, "Member 'FTableRowStyle::DropIndicator_Above' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 0x000950, "Member 'FTableRowStyle::DropIndicator_Onto' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 0x000A10, "Member 'FTableRowStyle::DropIndicator_Below' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 0x000AD0, "Member 'FTableRowStyle::ActiveHighlightedBrush' has a wrong offset!");
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 0x000B90, "Member 'FTableRowStyle::InactiveHighlightedBrush' has a wrong offset!");

struct FFontOutlineSettings final
{
public:
	int32                                         OutlineSize;
	bool                                          bSeparateFillAlpha;
	bool                                          bApplyOutlineToDropShadows;
	uint8                                         Pad_6[0x2];
	class UObject*                                OutlineMaterial;
	struct FLinearColor                           OutlineColor;
};
static_assert(alignof(FFontOutlineSettings) == 0x000008, "Wrong alignment on FFontOutlineSettings");
static_assert(sizeof(FFontOutlineSettings) == 0x000020, "Wrong size on FFontOutlineSettings");
static_assert(offsetof(FFontOutlineSettings, OutlineSize) == 0x000000, "Member 'FFontOutlineSettings::OutlineSize' has a wrong offset!");
static_assert(offsetof(FFontOutlineSettings, bSeparateFillAlpha) == 0x000004, "Member 'FFontOutlineSettings::bSeparateFillAlpha' has a wrong offset!");
static_assert(offsetof(FFontOutlineSettings, bApplyOutlineToDropShadows) == 0x000005, "Member 'FFontOutlineSettings::bApplyOutlineToDropShadows' has a wrong offset!");
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 0x000008, "Member 'FFontOutlineSettings::OutlineMaterial' has a wrong offset!");
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 0x000010, "Member 'FFontOutlineSettings::OutlineColor' has a wrong offset!");

struct FSlateFontInfo final
{
public:
	class UObject*                                FontObject;
	class UObject*                                FontMaterial;
	struct FFontOutlineSettings                   OutlineSettings;
	uint8                                         Pad_30[0x10];
	class FName                                   TypefaceFontName;
	int32                                         Size;
	int32                                         LetterSpacing;
	float                                         SkewAmount;
	uint8                                         Pad_50[0x8];
};
static_assert(alignof(FSlateFontInfo) == 0x000008, "Wrong alignment on FSlateFontInfo");
static_assert(sizeof(FSlateFontInfo) == 0x000058, "Wrong size on FSlateFontInfo");
static_assert(offsetof(FSlateFontInfo, FontObject) == 0x000000, "Member 'FSlateFontInfo::FontObject' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 0x000008, "Member 'FSlateFontInfo::FontMaterial' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 0x000010, "Member 'FSlateFontInfo::OutlineSettings' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 0x000040, "Member 'FSlateFontInfo::TypefaceFontName' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, Size) == 0x000044, "Member 'FSlateFontInfo::Size' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, LetterSpacing) == 0x000048, "Member 'FSlateFontInfo::LetterSpacing' has a wrong offset!");
static_assert(offsetof(FSlateFontInfo, SkewAmount) == 0x00004C, "Member 'FSlateFontInfo::SkewAmount' has a wrong offset!");

struct FTextBlockStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                         Font;
	struct FSlateColor                            ColorAndOpacity;
	uint8                                         Pad_74[0x4];
	struct FVector2D                              ShadowOffset;
	struct FLinearColor                           ShadowColorAndOpacity;
	struct FSlateColor                            SelectedBackgroundColor;
	struct FSlateColor                            HighlightColor;
	struct FSlateBrush                            HighlightShape;
	struct FSlateBrush                            StrikeBrush;
	struct FSlateBrush                            UnderlineBrush;
	ETextTransformPolicy                          TransformPolicy;
	ETextOverflowPolicy                           OverflowPolicy;
	uint8                                         Pad_302[0xE];
};
static_assert(alignof(FTextBlockStyle) == 0x000010, "Wrong alignment on FTextBlockStyle");
static_assert(sizeof(FTextBlockStyle) == 0x000310, "Wrong size on FTextBlockStyle");
static_assert(offsetof(FTextBlockStyle, Font) == 0x000008, "Member 'FTextBlockStyle::Font' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 0x000060, "Member 'FTextBlockStyle::ColorAndOpacity' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 0x000078, "Member 'FTextBlockStyle::ShadowOffset' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 0x000088, "Member 'FTextBlockStyle::ShadowColorAndOpacity' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 0x000098, "Member 'FTextBlockStyle::SelectedBackgroundColor' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 0x0000AC, "Member 'FTextBlockStyle::HighlightColor' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 0x0000C0, "Member 'FTextBlockStyle::HighlightShape' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 0x000180, "Member 'FTextBlockStyle::StrikeBrush' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 0x000240, "Member 'FTextBlockStyle::UnderlineBrush' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, TransformPolicy) == 0x000300, "Member 'FTextBlockStyle::TransformPolicy' has a wrong offset!");
static_assert(offsetof(FTextBlockStyle, OverflowPolicy) == 0x000301, "Member 'FTextBlockStyle::OverflowPolicy' has a wrong offset!");

struct FEditableTextBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundImageNormal;
	struct FSlateBrush                            BackgroundImageHovered;
	struct FSlateBrush                            BackgroundImageFocused;
	struct FSlateBrush                            BackgroundImageReadOnly;
	struct FMargin                                Padding;
	struct FTextBlockStyle                        TextStyle;
	struct FSlateColor                            ForegroundColor;
	struct FSlateColor                            BackgroundColor;
	struct FSlateColor                            ReadOnlyForegroundColor;
	struct FSlateColor                            FocusedForegroundColor;
	struct FMargin                                HScrollBarPadding;
	struct FMargin                                VScrollBarPadding;
	struct FScrollBarStyle                        ScrollBarStyle;
};
static_assert(alignof(FEditableTextBoxStyle) == 0x000010, "Wrong alignment on FEditableTextBoxStyle");
static_assert(sizeof(FEditableTextBoxStyle) == 0x000D80, "Wrong size on FEditableTextBoxStyle");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 0x000010, "Member 'FEditableTextBoxStyle::BackgroundImageNormal' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 0x0000D0, "Member 'FEditableTextBoxStyle::BackgroundImageHovered' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 0x000190, "Member 'FEditableTextBoxStyle::BackgroundImageFocused' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 0x000250, "Member 'FEditableTextBoxStyle::BackgroundImageReadOnly' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 0x000310, "Member 'FEditableTextBoxStyle::Padding' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, TextStyle) == 0x000320, "Member 'FEditableTextBoxStyle::TextStyle' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 0x000630, "Member 'FEditableTextBoxStyle::ForegroundColor' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 0x000644, "Member 'FEditableTextBoxStyle::BackgroundColor' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 0x000658, "Member 'FEditableTextBoxStyle::ReadOnlyForegroundColor' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, FocusedForegroundColor) == 0x00066C, "Member 'FEditableTextBoxStyle::FocusedForegroundColor' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 0x000680, "Member 'FEditableTextBoxStyle::HScrollBarPadding' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 0x000690, "Member 'FEditableTextBoxStyle::VScrollBarPadding' has a wrong offset!");
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 0x0006A0, "Member 'FEditableTextBoxStyle::ScrollBarStyle' has a wrong offset!");

struct FSearchBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FEditableTextBoxStyle                  TextBoxStyle;
	struct FSlateFontInfo                         ActiveFontInfo;
	uint8                                         Pad_DE8[0x8];
	struct FSlateBrush                            UpArrowImage;
	struct FSlateBrush                            DownArrowImage;
	struct FSlateBrush                            GlassImage;
	struct FSlateBrush                            ClearImage;
	struct FMargin                                ImagePadding;
	bool                                          bLeftAlignButtons;
	bool                                          bLeftAlignSearchResultButtons;
	bool                                          bLeftAlignGlassImageAndClearButton;
	uint8                                         Pad_1103[0xD];
};
static_assert(alignof(FSearchBoxStyle) == 0x000010, "Wrong alignment on FSearchBoxStyle");
static_assert(sizeof(FSearchBoxStyle) == 0x001110, "Wrong size on FSearchBoxStyle");
static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 0x000010, "Member 'FSearchBoxStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 0x000D90, "Member 'FSearchBoxStyle::ActiveFontInfo' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 0x000DF0, "Member 'FSearchBoxStyle::UpArrowImage' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 0x000EB0, "Member 'FSearchBoxStyle::DownArrowImage' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 0x000F70, "Member 'FSearchBoxStyle::GlassImage' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 0x001030, "Member 'FSearchBoxStyle::ClearImage' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 0x0010F0, "Member 'FSearchBoxStyle::ImagePadding' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignButtons) == 0x001100, "Member 'FSearchBoxStyle::bLeftAlignButtons' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignSearchResultButtons) == 0x001101, "Member 'FSearchBoxStyle::bLeftAlignSearchResultButtons' has a wrong offset!");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignGlassImageAndClearButton) == 0x001102, "Member 'FSearchBoxStyle::bLeftAlignGlassImageAndClearButton' has a wrong offset!");

struct FSlateSound final
{
public:
	class UObject*                                ResourceObject;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FSlateSound) == 0x000008, "Wrong alignment on FSlateSound");
static_assert(sizeof(FSlateSound) == 0x000018, "Wrong size on FSlateSound");
static_assert(offsetof(FSlateSound, ResourceObject) == 0x000000, "Member 'FSlateSound::ResourceObject' has a wrong offset!");

struct FButtonStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            Normal;
	struct FSlateBrush                            Hovered;
	struct FSlateBrush                            Pressed;
	struct FSlateBrush                            Disabled;
	struct FSlateColor                            NormalForeground;
	struct FSlateColor                            HoveredForeground;
	struct FSlateColor                            PressedForeground;
	struct FSlateColor                            DisabledForeground;
	struct FMargin                                NormalPadding;
	struct FMargin                                PressedPadding;
	struct FSlateSound                            PressedSlateSound;
	struct FSlateSound                            HoveredSlateSound;
};
static_assert(alignof(FButtonStyle) == 0x000010, "Wrong alignment on FButtonStyle");
static_assert(sizeof(FButtonStyle) == 0x0003B0, "Wrong size on FButtonStyle");
static_assert(offsetof(FButtonStyle, Normal) == 0x000010, "Member 'FButtonStyle::Normal' has a wrong offset!");
static_assert(offsetof(FButtonStyle, Hovered) == 0x0000D0, "Member 'FButtonStyle::Hovered' has a wrong offset!");
static_assert(offsetof(FButtonStyle, Pressed) == 0x000190, "Member 'FButtonStyle::Pressed' has a wrong offset!");
static_assert(offsetof(FButtonStyle, Disabled) == 0x000250, "Member 'FButtonStyle::Disabled' has a wrong offset!");
static_assert(offsetof(FButtonStyle, NormalForeground) == 0x000310, "Member 'FButtonStyle::NormalForeground' has a wrong offset!");
static_assert(offsetof(FButtonStyle, HoveredForeground) == 0x000324, "Member 'FButtonStyle::HoveredForeground' has a wrong offset!");
static_assert(offsetof(FButtonStyle, PressedForeground) == 0x000338, "Member 'FButtonStyle::PressedForeground' has a wrong offset!");
static_assert(offsetof(FButtonStyle, DisabledForeground) == 0x00034C, "Member 'FButtonStyle::DisabledForeground' has a wrong offset!");
static_assert(offsetof(FButtonStyle, NormalPadding) == 0x000360, "Member 'FButtonStyle::NormalPadding' has a wrong offset!");
static_assert(offsetof(FButtonStyle, PressedPadding) == 0x000370, "Member 'FButtonStyle::PressedPadding' has a wrong offset!");
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 0x000380, "Member 'FButtonStyle::PressedSlateSound' has a wrong offset!");
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 0x000398, "Member 'FButtonStyle::HoveredSlateSound' has a wrong offset!");

struct FComboButtonStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FButtonStyle                           ButtonStyle;
	struct FSlateBrush                            DownArrowImage;
	struct FVector2D                              ShadowOffset;
	struct FLinearColor                           ShadowColorAndOpacity;
	struct FSlateBrush                            MenuBorderBrush;
	struct FMargin                                MenuBorderPadding;
	struct FMargin                                ContentPadding;
	struct FMargin                                DownArrowPadding;
	EVerticalAlignment                            DownArrowAlign;
	uint8                                         Pad_591[0xF];
};
static_assert(alignof(FComboButtonStyle) == 0x000010, "Wrong alignment on FComboButtonStyle");
static_assert(sizeof(FComboButtonStyle) == 0x0005A0, "Wrong size on FComboButtonStyle");
static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 0x000010, "Member 'FComboButtonStyle::ButtonStyle' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 0x0003C0, "Member 'FComboButtonStyle::DownArrowImage' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 0x000480, "Member 'FComboButtonStyle::ShadowOffset' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 0x000490, "Member 'FComboButtonStyle::ShadowColorAndOpacity' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 0x0004A0, "Member 'FComboButtonStyle::MenuBorderBrush' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 0x000560, "Member 'FComboButtonStyle::MenuBorderPadding' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, ContentPadding) == 0x000570, "Member 'FComboButtonStyle::ContentPadding' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, DownArrowPadding) == 0x000580, "Member 'FComboButtonStyle::DownArrowPadding' has a wrong offset!");
static_assert(offsetof(FComboButtonStyle, DownArrowAlign) == 0x000590, "Member 'FComboButtonStyle::DownArrowAlign' has a wrong offset!");

struct FComboBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FComboButtonStyle                      ComboButtonStyle;
	struct FSlateSound                            PressedSlateSound;
	struct FSlateSound                            SelectionChangeSlateSound;
	struct FMargin                                ContentPadding;
	struct FMargin                                MenuRowPadding;
};
static_assert(alignof(FComboBoxStyle) == 0x000010, "Wrong alignment on FComboBoxStyle");
static_assert(sizeof(FComboBoxStyle) == 0x000600, "Wrong size on FComboBoxStyle");
static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 0x000010, "Member 'FComboBoxStyle::ComboButtonStyle' has a wrong offset!");
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 0x0005B0, "Member 'FComboBoxStyle::PressedSlateSound' has a wrong offset!");
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 0x0005C8, "Member 'FComboBoxStyle::SelectionChangeSlateSound' has a wrong offset!");
static_assert(offsetof(FComboBoxStyle, ContentPadding) == 0x0005E0, "Member 'FComboBoxStyle::ContentPadding' has a wrong offset!");
static_assert(offsetof(FComboBoxStyle, MenuRowPadding) == 0x0005F0, "Member 'FComboBoxStyle::MenuRowPadding' has a wrong offset!");

struct FNavigationEvent final : public FInputEvent
{
public:
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FNavigationEvent) == 0x000008, "Wrong alignment on FNavigationEvent");
static_assert(sizeof(FNavigationEvent) == 0x000028, "Wrong size on FNavigationEvent");

struct FInlineEditableTextBlockStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FEditableTextBoxStyle                  EditableTextBoxStyle;
	struct FTextBlockStyle                        TextStyle;
};
static_assert(alignof(FInlineEditableTextBlockStyle) == 0x000010, "Wrong alignment on FInlineEditableTextBlockStyle");
static_assert(sizeof(FInlineEditableTextBlockStyle) == 0x0010A0, "Wrong size on FInlineEditableTextBlockStyle");
static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 0x000010, "Member 'FInlineEditableTextBlockStyle::EditableTextBoxStyle' has a wrong offset!");
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 0x000D90, "Member 'FInlineEditableTextBlockStyle::TextStyle' has a wrong offset!");

struct FScrollBoxStyle final : public FSlateWidgetStyle
{
public:
	float                                         BarThickness;
	uint8                                         Pad_C[0x4];
	struct FSlateBrush                            TopShadowBrush;
	struct FSlateBrush                            BottomShadowBrush;
	struct FSlateBrush                            LeftShadowBrush;
	struct FSlateBrush                            RightShadowBrush;
};
static_assert(alignof(FScrollBoxStyle) == 0x000010, "Wrong alignment on FScrollBoxStyle");
static_assert(sizeof(FScrollBoxStyle) == 0x000310, "Wrong size on FScrollBoxStyle");
static_assert(offsetof(FScrollBoxStyle, BarThickness) == 0x000008, "Member 'FScrollBoxStyle::BarThickness' has a wrong offset!");
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 0x000010, "Member 'FScrollBoxStyle::TopShadowBrush' has a wrong offset!");
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 0x0000D0, "Member 'FScrollBoxStyle::BottomShadowBrush' has a wrong offset!");
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 0x000190, "Member 'FScrollBoxStyle::LeftShadowBrush' has a wrong offset!");
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 0x000250, "Member 'FScrollBoxStyle::RightShadowBrush' has a wrong offset!");

struct FEditableTextStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                         Font;
	struct FSlateColor                            ColorAndOpacity;
	uint8                                         Pad_74[0xC];
	struct FSlateBrush                            BackgroundImageSelected;
	struct FSlateBrush                            BackgroundImageComposing;
	struct FSlateBrush                            CaretImage;
};
static_assert(alignof(FEditableTextStyle) == 0x000010, "Wrong alignment on FEditableTextStyle");
static_assert(sizeof(FEditableTextStyle) == 0x0002C0, "Wrong size on FEditableTextStyle");
static_assert(offsetof(FEditableTextStyle, Font) == 0x000008, "Member 'FEditableTextStyle::Font' has a wrong offset!");
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 0x000060, "Member 'FEditableTextStyle::ColorAndOpacity' has a wrong offset!");
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 0x000080, "Member 'FEditableTextStyle::BackgroundImageSelected' has a wrong offset!");
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 0x000140, "Member 'FEditableTextStyle::BackgroundImageComposing' has a wrong offset!");
static_assert(offsetof(FEditableTextStyle, CaretImage) == 0x000200, "Member 'FEditableTextStyle::CaretImage' has a wrong offset!");

struct FScrollBorderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            TopShadowBrush;
	struct FSlateBrush                            BottomShadowBrush;
};
static_assert(alignof(FScrollBorderStyle) == 0x000010, "Wrong alignment on FScrollBorderStyle");
static_assert(sizeof(FScrollBorderStyle) == 0x000190, "Wrong size on FScrollBorderStyle");
static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 0x000010, "Member 'FScrollBorderStyle::TopShadowBrush' has a wrong offset!");
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 0x0000D0, "Member 'FScrollBorderStyle::BottomShadowBrush' has a wrong offset!");

struct FCharacterEvent final : public FInputEvent
{
public:
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FCharacterEvent) == 0x000008, "Wrong alignment on FCharacterEvent");
static_assert(sizeof(FCharacterEvent) == 0x000028, "Wrong size on FCharacterEvent");

struct FCheckBoxStyle final : public FSlateWidgetStyle
{
public:
	ESlateCheckBoxType                            CheckBoxType;
	uint8                                         Pad_9[0x7];
	struct FSlateBrush                            UncheckedImage;
	struct FSlateBrush                            UncheckedHoveredImage;
	struct FSlateBrush                            UncheckedPressedImage;
	struct FSlateBrush                            CheckedImage;
	struct FSlateBrush                            CheckedHoveredImage;
	struct FSlateBrush                            CheckedPressedImage;
	struct FSlateBrush                            UndeterminedImage;
	struct FSlateBrush                            UndeterminedHoveredImage;
	struct FSlateBrush                            UndeterminedPressedImage;
	struct FMargin                                Padding;
	struct FSlateBrush                            BackgroundImage;
	struct FSlateBrush                            BackgroundHoveredImage;
	struct FSlateBrush                            BackgroundPressedImage;
	struct FSlateColor                            ForegroundColor;
	struct FSlateColor                            HoveredForeground;
	struct FSlateColor                            PressedForeground;
	struct FSlateColor                            CheckedForeground;
	struct FSlateColor                            CheckedHoveredForeground;
	struct FSlateColor                            CheckedPressedForeground;
	struct FSlateColor                            UndeterminedForeground;
	struct FSlateColor                            BorderBackgroundColor;
	struct FSlateSound                            CheckedSlateSound;
	struct FSlateSound                            UncheckedSlateSound;
	struct FSlateSound                            HoveredSlateSound;
	uint8                                         Pad_A08[0x8];
};
static_assert(alignof(FCheckBoxStyle) == 0x000010, "Wrong alignment on FCheckBoxStyle");
static_assert(sizeof(FCheckBoxStyle) == 0x000A10, "Wrong size on FCheckBoxStyle");
static_assert(offsetof(FCheckBoxStyle, CheckBoxType) == 0x000008, "Member 'FCheckBoxStyle::CheckBoxType' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 0x000010, "Member 'FCheckBoxStyle::UncheckedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 0x0000D0, "Member 'FCheckBoxStyle::UncheckedHoveredImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 0x000190, "Member 'FCheckBoxStyle::UncheckedPressedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 0x000250, "Member 'FCheckBoxStyle::CheckedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 0x000310, "Member 'FCheckBoxStyle::CheckedHoveredImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 0x0003D0, "Member 'FCheckBoxStyle::CheckedPressedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 0x000490, "Member 'FCheckBoxStyle::UndeterminedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 0x000550, "Member 'FCheckBoxStyle::UndeterminedHoveredImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 0x000610, "Member 'FCheckBoxStyle::UndeterminedPressedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, Padding) == 0x0006D0, "Member 'FCheckBoxStyle::Padding' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, BackgroundImage) == 0x0006E0, "Member 'FCheckBoxStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, BackgroundHoveredImage) == 0x0007A0, "Member 'FCheckBoxStyle::BackgroundHoveredImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, BackgroundPressedImage) == 0x000860, "Member 'FCheckBoxStyle::BackgroundPressedImage' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 0x000920, "Member 'FCheckBoxStyle::ForegroundColor' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, HoveredForeground) == 0x000934, "Member 'FCheckBoxStyle::HoveredForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, PressedForeground) == 0x000948, "Member 'FCheckBoxStyle::PressedForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedForeground) == 0x00095C, "Member 'FCheckBoxStyle::CheckedForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredForeground) == 0x000970, "Member 'FCheckBoxStyle::CheckedHoveredForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedPressedForeground) == 0x000984, "Member 'FCheckBoxStyle::CheckedPressedForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UndeterminedForeground) == 0x000998, "Member 'FCheckBoxStyle::UndeterminedForeground' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 0x0009AC, "Member 'FCheckBoxStyle::BorderBackgroundColor' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 0x0009C0, "Member 'FCheckBoxStyle::CheckedSlateSound' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 0x0009D8, "Member 'FCheckBoxStyle::UncheckedSlateSound' has a wrong offset!");
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 0x0009F0, "Member 'FCheckBoxStyle::HoveredSlateSound' has a wrong offset!");

struct FToolBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundBrush;
	struct FSlateBrush                            ExpandBrush;
	struct FSlateBrush                            SeparatorBrush;
	struct FTextBlockStyle                        LabelStyle;
	struct FEditableTextBoxStyle                  EditableTextStyle;
	struct FCheckBoxStyle                         ToggleButton;
	struct FComboButtonStyle                      ComboButtonStyle;
	struct FButtonStyle                           SettingsButtonStyle;
	struct FComboButtonStyle                      SettingsComboButton;
	struct FCheckBoxStyle                         SettingsToggleButton;
	struct FButtonStyle                           ButtonStyle;
	struct FMargin                                LabelPadding;
	float                                         UniformBlockWidth;
	float                                         UniformBlockHeight;
	int32                                         NumColumns;
	struct FMargin                                IconPadding;
	struct FMargin                                SeparatorPadding;
	struct FMargin                                ComboButtonPadding;
	struct FMargin                                ButtonPadding;
	struct FMargin                                CheckBoxPadding;
	struct FMargin                                BlockPadding;
	struct FMargin                                IndentedBlockPadding;
	struct FMargin                                BackgroundPadding;
	uint8                                         Pad_3A3C[0x4];
	struct FVector2D                              IconSize;
	bool                                          bShowLabels;
	uint8                                         Pad_3A51[0xF];
};
static_assert(alignof(FToolBarStyle) == 0x000010, "Wrong alignment on FToolBarStyle");
static_assert(sizeof(FToolBarStyle) == 0x003A60, "Wrong size on FToolBarStyle");
static_assert(offsetof(FToolBarStyle, BackgroundBrush) == 0x000010, "Member 'FToolBarStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ExpandBrush) == 0x0000D0, "Member 'FToolBarStyle::ExpandBrush' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, SeparatorBrush) == 0x000190, "Member 'FToolBarStyle::SeparatorBrush' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, LabelStyle) == 0x000250, "Member 'FToolBarStyle::LabelStyle' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, EditableTextStyle) == 0x000560, "Member 'FToolBarStyle::EditableTextStyle' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ToggleButton) == 0x0012E0, "Member 'FToolBarStyle::ToggleButton' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ComboButtonStyle) == 0x001CF0, "Member 'FToolBarStyle::ComboButtonStyle' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, SettingsButtonStyle) == 0x002290, "Member 'FToolBarStyle::SettingsButtonStyle' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, SettingsComboButton) == 0x002640, "Member 'FToolBarStyle::SettingsComboButton' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, SettingsToggleButton) == 0x002BE0, "Member 'FToolBarStyle::SettingsToggleButton' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ButtonStyle) == 0x0035F0, "Member 'FToolBarStyle::ButtonStyle' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, LabelPadding) == 0x0039A0, "Member 'FToolBarStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, UniformBlockWidth) == 0x0039B0, "Member 'FToolBarStyle::UniformBlockWidth' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, UniformBlockHeight) == 0x0039B4, "Member 'FToolBarStyle::UniformBlockHeight' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, NumColumns) == 0x0039B8, "Member 'FToolBarStyle::NumColumns' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, IconPadding) == 0x0039BC, "Member 'FToolBarStyle::IconPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, SeparatorPadding) == 0x0039CC, "Member 'FToolBarStyle::SeparatorPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ComboButtonPadding) == 0x0039DC, "Member 'FToolBarStyle::ComboButtonPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, ButtonPadding) == 0x0039EC, "Member 'FToolBarStyle::ButtonPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, CheckBoxPadding) == 0x0039FC, "Member 'FToolBarStyle::CheckBoxPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, BlockPadding) == 0x003A0C, "Member 'FToolBarStyle::BlockPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, IndentedBlockPadding) == 0x003A1C, "Member 'FToolBarStyle::IndentedBlockPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, BackgroundPadding) == 0x003A2C, "Member 'FToolBarStyle::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, IconSize) == 0x003A40, "Member 'FToolBarStyle::IconSize' has a wrong offset!");
static_assert(offsetof(FToolBarStyle, bShowLabels) == 0x003A50, "Member 'FToolBarStyle::bShowLabels' has a wrong offset!");

struct alignas(0x04) FFocusEvent final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FFocusEvent) == 0x000004, "Wrong alignment on FFocusEvent");
static_assert(sizeof(FFocusEvent) == 0x000008, "Wrong size on FFocusEvent");

struct FMotionEvent final : public FInputEvent
{
public:
	uint8                                         Pad_20[0x60];
};
static_assert(alignof(FMotionEvent) == 0x000008, "Wrong alignment on FMotionEvent");
static_assert(sizeof(FMotionEvent) == 0x000080, "Wrong size on FMotionEvent");

struct alignas(0x08) FStyleTheme final
{
public:
	uint8                                         Pad_0[0x48];
};
static_assert(alignof(FStyleTheme) == 0x000008, "Wrong alignment on FStyleTheme");
static_assert(sizeof(FStyleTheme) == 0x000048, "Wrong size on FStyleTheme");

struct FTableViewStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundBrush;
};
static_assert(alignof(FTableViewStyle) == 0x000010, "Wrong alignment on FTableViewStyle");
static_assert(sizeof(FTableViewStyle) == 0x0000D0, "Wrong size on FTableViewStyle");
static_assert(offsetof(FTableViewStyle, BackgroundBrush) == 0x000010, "Member 'FTableViewStyle::BackgroundBrush' has a wrong offset!");

struct alignas(0x04) FCaptureLostEvent final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FCaptureLostEvent) == 0x000004, "Wrong alignment on FCaptureLostEvent");
static_assert(sizeof(FCaptureLostEvent) == 0x000008, "Wrong size on FCaptureLostEvent");

struct FSegmentedControlStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FCheckBoxStyle                         ControlStyle;
	struct FCheckBoxStyle                         FirstControlStyle;
	struct FCheckBoxStyle                         LastControlStyle;
	struct FSlateBrush                            BackgroundBrush;
	struct FMargin                                UniformPadding;
};
static_assert(alignof(FSegmentedControlStyle) == 0x000010, "Wrong alignment on FSegmentedControlStyle");
static_assert(sizeof(FSegmentedControlStyle) == 0x001F10, "Wrong size on FSegmentedControlStyle");
static_assert(offsetof(FSegmentedControlStyle, ControlStyle) == 0x000010, "Member 'FSegmentedControlStyle::ControlStyle' has a wrong offset!");
static_assert(offsetof(FSegmentedControlStyle, FirstControlStyle) == 0x000A20, "Member 'FSegmentedControlStyle::FirstControlStyle' has a wrong offset!");
static_assert(offsetof(FSegmentedControlStyle, LastControlStyle) == 0x001430, "Member 'FSegmentedControlStyle::LastControlStyle' has a wrong offset!");
static_assert(offsetof(FSegmentedControlStyle, BackgroundBrush) == 0x001E40, "Member 'FSegmentedControlStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FSegmentedControlStyle, UniformPadding) == 0x001F00, "Member 'FSegmentedControlStyle::UniformPadding' has a wrong offset!");

struct FHyperlinkStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FButtonStyle                           UnderlineStyle;
	struct FTextBlockStyle                        TextStyle;
	struct FMargin                                Padding;
};
static_assert(alignof(FHyperlinkStyle) == 0x000010, "Wrong alignment on FHyperlinkStyle");
static_assert(sizeof(FHyperlinkStyle) == 0x0006E0, "Wrong size on FHyperlinkStyle");
static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 0x000010, "Member 'FHyperlinkStyle::UnderlineStyle' has a wrong offset!");
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 0x0003C0, "Member 'FHyperlinkStyle::TextStyle' has a wrong offset!");
static_assert(offsetof(FHyperlinkStyle, Padding) == 0x0006D0, "Member 'FHyperlinkStyle::Padding' has a wrong offset!");

struct FProgressBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundImage;
	struct FSlateBrush                            FillImage;
	struct FSlateBrush                            MarqueeImage;
	bool                                          EnableFillAnimation;
	uint8                                         Pad_251[0xF];
};
static_assert(alignof(FProgressBarStyle) == 0x000010, "Wrong alignment on FProgressBarStyle");
static_assert(sizeof(FProgressBarStyle) == 0x000260, "Wrong size on FProgressBarStyle");
static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 0x000010, "Member 'FProgressBarStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FProgressBarStyle, FillImage) == 0x0000D0, "Member 'FProgressBarStyle::FillImage' has a wrong offset!");
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 0x000190, "Member 'FProgressBarStyle::MarqueeImage' has a wrong offset!");
static_assert(offsetof(FProgressBarStyle, EnableFillAnimation) == 0x000250, "Member 'FProgressBarStyle::EnableFillAnimation' has a wrong offset!");

struct FExpandableAreaStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            CollapsedImage;
	struct FSlateBrush                            ExpandedImage;
	float                                         RolloutAnimationSeconds;
	uint8                                         Pad_194[0xC];
};
static_assert(alignof(FExpandableAreaStyle) == 0x000010, "Wrong alignment on FExpandableAreaStyle");
static_assert(sizeof(FExpandableAreaStyle) == 0x0001A0, "Wrong size on FExpandableAreaStyle");
static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 0x000010, "Member 'FExpandableAreaStyle::CollapsedImage' has a wrong offset!");
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 0x0000D0, "Member 'FExpandableAreaStyle::ExpandedImage' has a wrong offset!");
static_assert(offsetof(FExpandableAreaStyle, RolloutAnimationSeconds) == 0x000190, "Member 'FExpandableAreaStyle::RolloutAnimationSeconds' has a wrong offset!");

struct FSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            NormalBarImage;
	struct FSlateBrush                            HoveredBarImage;
	struct FSlateBrush                            DisabledBarImage;
	struct FSlateBrush                            NormalThumbImage;
	struct FSlateBrush                            HoveredThumbImage;
	struct FSlateBrush                            DisabledThumbImage;
	float                                         BarThickness;
	uint8                                         Pad_494[0xC];
};
static_assert(alignof(FSliderStyle) == 0x000010, "Wrong alignment on FSliderStyle");
static_assert(sizeof(FSliderStyle) == 0x0004A0, "Wrong size on FSliderStyle");
static_assert(offsetof(FSliderStyle, NormalBarImage) == 0x000010, "Member 'FSliderStyle::NormalBarImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 0x0000D0, "Member 'FSliderStyle::HoveredBarImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 0x000190, "Member 'FSliderStyle::DisabledBarImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 0x000250, "Member 'FSliderStyle::NormalThumbImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 0x000310, "Member 'FSliderStyle::HoveredThumbImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 0x0003D0, "Member 'FSliderStyle::DisabledThumbImage' has a wrong offset!");
static_assert(offsetof(FSliderStyle, BarThickness) == 0x000490, "Member 'FSliderStyle::BarThickness' has a wrong offset!");

struct FVolumeControlStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSliderStyle                           SliderStyle;
	struct FSlateBrush                            HighVolumeImage;
	struct FSlateBrush                            MidVolumeImage;
	struct FSlateBrush                            LowVolumeImage;
	struct FSlateBrush                            NoVolumeImage;
	struct FSlateBrush                            MutedImage;
};
static_assert(alignof(FVolumeControlStyle) == 0x000010, "Wrong alignment on FVolumeControlStyle");
static_assert(sizeof(FVolumeControlStyle) == 0x000870, "Wrong size on FVolumeControlStyle");
static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 0x000010, "Member 'FVolumeControlStyle::SliderStyle' has a wrong offset!");
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 0x0004B0, "Member 'FVolumeControlStyle::HighVolumeImage' has a wrong offset!");
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 0x000570, "Member 'FVolumeControlStyle::MidVolumeImage' has a wrong offset!");
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 0x000630, "Member 'FVolumeControlStyle::LowVolumeImage' has a wrong offset!");
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 0x0006F0, "Member 'FVolumeControlStyle::NoVolumeImage' has a wrong offset!");
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 0x0007B0, "Member 'FVolumeControlStyle::MutedImage' has a wrong offset!");

struct FInlineTextImageStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            Image;
	int16                                         Baseline;
	uint8                                         Pad_D2[0xE];
};
static_assert(alignof(FInlineTextImageStyle) == 0x000010, "Wrong alignment on FInlineTextImageStyle");
static_assert(sizeof(FInlineTextImageStyle) == 0x0000E0, "Wrong size on FInlineTextImageStyle");
static_assert(offsetof(FInlineTextImageStyle, Image) == 0x000010, "Member 'FInlineTextImageStyle::Image' has a wrong offset!");
static_assert(offsetof(FInlineTextImageStyle, Baseline) == 0x0000D0, "Member 'FInlineTextImageStyle::Baseline' has a wrong offset!");

struct FSplitterStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            HandleNormalBrush;
	struct FSlateBrush                            HandleHighlightBrush;
};
static_assert(alignof(FSplitterStyle) == 0x000010, "Wrong alignment on FSplitterStyle");
static_assert(sizeof(FSplitterStyle) == 0x000190, "Wrong size on FSplitterStyle");
static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 0x000010, "Member 'FSplitterStyle::HandleNormalBrush' has a wrong offset!");
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 0x0000D0, "Member 'FSplitterStyle::HandleHighlightBrush' has a wrong offset!");

struct FTableColumnHeaderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            SortPrimaryAscendingImage;
	struct FSlateBrush                            SortPrimaryDescendingImage;
	struct FSlateBrush                            SortSecondaryAscendingImage;
	struct FSlateBrush                            SortSecondaryDescendingImage;
	struct FSlateBrush                            NormalBrush;
	struct FSlateBrush                            HoveredBrush;
	struct FSlateBrush                            MenuDropdownImage;
	struct FSlateBrush                            MenuDropdownNormalBorderBrush;
	struct FSlateBrush                            MenuDropdownHoveredBorderBrush;
};
static_assert(alignof(FTableColumnHeaderStyle) == 0x000010, "Wrong alignment on FTableColumnHeaderStyle");
static_assert(sizeof(FTableColumnHeaderStyle) == 0x0006D0, "Wrong size on FTableColumnHeaderStyle");
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 0x000010, "Member 'FTableColumnHeaderStyle::SortPrimaryAscendingImage' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 0x0000D0, "Member 'FTableColumnHeaderStyle::SortPrimaryDescendingImage' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 0x000190, "Member 'FTableColumnHeaderStyle::SortSecondaryAscendingImage' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 0x000250, "Member 'FTableColumnHeaderStyle::SortSecondaryDescendingImage' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 0x000310, "Member 'FTableColumnHeaderStyle::NormalBrush' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 0x0003D0, "Member 'FTableColumnHeaderStyle::HoveredBrush' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 0x000490, "Member 'FTableColumnHeaderStyle::MenuDropdownImage' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 0x000550, "Member 'FTableColumnHeaderStyle::MenuDropdownNormalBorderBrush' has a wrong offset!");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 0x000610, "Member 'FTableColumnHeaderStyle::MenuDropdownHoveredBorderBrush' has a wrong offset!");

struct FHeaderRowStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FTableColumnHeaderStyle                ColumnStyle;
	struct FTableColumnHeaderStyle                LastColumnStyle;
	struct FSplitterStyle                         ColumnSplitterStyle;
	float                                         SplitterHandleSize;
	uint8                                         Pad_F44[0xC];
	struct FSlateBrush                            BackgroundBrush;
	struct FSlateColor                            ForegroundColor;
	uint8                                         Pad_1024[0xC];
	struct FSlateBrush                            HorizontalSeparatorBrush;
	float                                         HorizontalSeparatorThickness;
	uint8                                         Pad_10F4[0xC];
};
static_assert(alignof(FHeaderRowStyle) == 0x000010, "Wrong alignment on FHeaderRowStyle");
static_assert(sizeof(FHeaderRowStyle) == 0x001100, "Wrong size on FHeaderRowStyle");
static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 0x000010, "Member 'FHeaderRowStyle::ColumnStyle' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 0x0006E0, "Member 'FHeaderRowStyle::LastColumnStyle' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 0x000DB0, "Member 'FHeaderRowStyle::ColumnSplitterStyle' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, SplitterHandleSize) == 0x000F40, "Member 'FHeaderRowStyle::SplitterHandleSize' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 0x000F50, "Member 'FHeaderRowStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 0x001010, "Member 'FHeaderRowStyle::ForegroundColor' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, HorizontalSeparatorBrush) == 0x001030, "Member 'FHeaderRowStyle::HorizontalSeparatorBrush' has a wrong offset!");
static_assert(offsetof(FHeaderRowStyle, HorizontalSeparatorThickness) == 0x0010F0, "Member 'FHeaderRowStyle::HorizontalSeparatorThickness' has a wrong offset!");

struct FDockTabStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FButtonStyle                           CloseButtonStyle;
	struct FSlateBrush                            NormalBrush;
	struct FSlateBrush                            ColorOverlayTabBrush;
	struct FSlateBrush                            ColorOverlayIconBrush;
	struct FSlateBrush                            ForegroundBrush;
	struct FSlateBrush                            HoveredBrush;
	struct FSlateBrush                            ContentAreaBrush;
	struct FSlateBrush                            TabWellBrush;
	struct FTextBlockStyle                        TabTextStyle;
	struct FMargin                                TabPadding;
	struct FVector2D                              IconSize;
	float                                         OverlapWidth;
	struct FSlateColor                            FlashColor;
	struct FSlateColor                            NormalForegroundColor;
	struct FSlateColor                            HoveredForegroundColor;
	struct FSlateColor                            ActiveForegroundColor;
	struct FSlateColor                            ForegroundForegroundColor;
	float                                         IconBorderPadding;
	uint8                                         Pad_C9C[0x4];
};
static_assert(alignof(FDockTabStyle) == 0x000010, "Wrong alignment on FDockTabStyle");
static_assert(sizeof(FDockTabStyle) == 0x000CA0, "Wrong size on FDockTabStyle");
static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 0x000010, "Member 'FDockTabStyle::CloseButtonStyle' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, NormalBrush) == 0x0003C0, "Member 'FDockTabStyle::NormalBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 0x000480, "Member 'FDockTabStyle::ColorOverlayTabBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 0x000540, "Member 'FDockTabStyle::ColorOverlayIconBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 0x000600, "Member 'FDockTabStyle::ForegroundBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 0x0006C0, "Member 'FDockTabStyle::HoveredBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 0x000780, "Member 'FDockTabStyle::ContentAreaBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 0x000840, "Member 'FDockTabStyle::TabWellBrush' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, TabTextStyle) == 0x000900, "Member 'FDockTabStyle::TabTextStyle' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, TabPadding) == 0x000C10, "Member 'FDockTabStyle::TabPadding' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, IconSize) == 0x000C20, "Member 'FDockTabStyle::IconSize' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, OverlapWidth) == 0x000C30, "Member 'FDockTabStyle::OverlapWidth' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, FlashColor) == 0x000C34, "Member 'FDockTabStyle::FlashColor' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, NormalForegroundColor) == 0x000C48, "Member 'FDockTabStyle::NormalForegroundColor' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, HoveredForegroundColor) == 0x000C5C, "Member 'FDockTabStyle::HoveredForegroundColor' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ActiveForegroundColor) == 0x000C70, "Member 'FDockTabStyle::ActiveForegroundColor' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, ForegroundForegroundColor) == 0x000C84, "Member 'FDockTabStyle::ForegroundForegroundColor' has a wrong offset!");
static_assert(offsetof(FDockTabStyle, IconBorderPadding) == 0x000C98, "Member 'FDockTabStyle::IconBorderPadding' has a wrong offset!");

struct FWindowStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FButtonStyle                           MinimizeButtonStyle;
	struct FButtonStyle                           MaximizeButtonStyle;
	struct FButtonStyle                           RestoreButtonStyle;
	struct FButtonStyle                           CloseButtonStyle;
	struct FTextBlockStyle                        TitleTextStyle;
	struct FSlateBrush                            ActiveTitleBrush;
	struct FSlateBrush                            InactiveTitleBrush;
	struct FSlateBrush                            FlashTitleBrush;
	struct FSlateColor                            BackgroundColor;
	uint8                                         Pad_1434[0xC];
	struct FSlateBrush                            OutlineBrush;
	struct FSlateColor                            OutlineColor;
	uint8                                         Pad_1514[0xC];
	struct FSlateBrush                            BorderBrush;
	struct FSlateColor                            BorderColor;
	uint8                                         Pad_15F4[0xC];
	struct FSlateBrush                            BackgroundBrush;
	struct FSlateBrush                            ChildBackgroundBrush;
	int32                                         WindowCornerRadius;
	struct FMargin                                BorderPadding;
	uint8                                         Pad_1794[0xC];
};
static_assert(alignof(FWindowStyle) == 0x000010, "Wrong alignment on FWindowStyle");
static_assert(sizeof(FWindowStyle) == 0x0017A0, "Wrong size on FWindowStyle");
static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 0x000010, "Member 'FWindowStyle::MinimizeButtonStyle' has a wrong offset!");
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 0x0003C0, "Member 'FWindowStyle::MaximizeButtonStyle' has a wrong offset!");
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 0x000770, "Member 'FWindowStyle::RestoreButtonStyle' has a wrong offset!");
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 0x000B20, "Member 'FWindowStyle::CloseButtonStyle' has a wrong offset!");
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 0x000ED0, "Member 'FWindowStyle::TitleTextStyle' has a wrong offset!");
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 0x0011E0, "Member 'FWindowStyle::ActiveTitleBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 0x0012A0, "Member 'FWindowStyle::InactiveTitleBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 0x001360, "Member 'FWindowStyle::FlashTitleBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, BackgroundColor) == 0x001420, "Member 'FWindowStyle::BackgroundColor' has a wrong offset!");
static_assert(offsetof(FWindowStyle, OutlineBrush) == 0x001440, "Member 'FWindowStyle::OutlineBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, OutlineColor) == 0x001500, "Member 'FWindowStyle::OutlineColor' has a wrong offset!");
static_assert(offsetof(FWindowStyle, BorderBrush) == 0x001520, "Member 'FWindowStyle::BorderBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, BorderColor) == 0x0015E0, "Member 'FWindowStyle::BorderColor' has a wrong offset!");
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 0x001600, "Member 'FWindowStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 0x0016C0, "Member 'FWindowStyle::ChildBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FWindowStyle, WindowCornerRadius) == 0x001780, "Member 'FWindowStyle::WindowCornerRadius' has a wrong offset!");
static_assert(offsetof(FWindowStyle, BorderPadding) == 0x001784, "Member 'FWindowStyle::BorderPadding' has a wrong offset!");

struct alignas(0x08) FStyleColorList final
{
public:
	struct FLinearColor                           StyleColors[0x3D];
	uint8                                         Pad_3D0[0x5B8];
};
static_assert(alignof(FStyleColorList) == 0x000008, "Wrong alignment on FStyleColorList");
static_assert(sizeof(FStyleColorList) == 0x000988, "Wrong size on FStyleColorList");
static_assert(offsetof(FStyleColorList, StyleColors) == 0x000000, "Member 'FStyleColorList::StyleColors' has a wrong offset!");

}
