#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "PropertyPath_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class ESlateVisibility : uint8
{
	Visible                                  = 0,
	Collapsed                                = 1,
	Hidden                                   = 2,
	HitTestInvisible                         = 3,
	SelfHitTestInvisible                     = 4,
	ESlateVisibility_MAX                     = 5,
};

enum class EVirtualKeyboardType : uint8
{
	Default                                  = 0,
	Number                                   = 1,
	Web                                      = 2,
	Email                                    = 3,
	Password                                 = 4,
	AlphaNumeric                             = 5,
	EVirtualKeyboardType_MAX                 = 6,
};

enum class ESlateAccessibleBehavior : uint8
{
	NotAccessible                            = 0,
	Auto                                     = 1,
	Summary                                  = 2,
	Custom                                   = 3,
	ToolTip                                  = 4,
	ESlateAccessibleBehavior_MAX             = 5,
};

enum class ESlateSizeRule : uint8
{
	Automatic                                = 0,
	Fill                                     = 1,
	ESlateSizeRule_MAX                       = 2,
};

enum class EDynamicBoxType : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	Wrap                                     = 2,
	VerticalWrap                             = 3,
	Radial                                   = 4,
	Overlay                                  = 5,
	EDynamicBoxType_MAX                      = 6,
};

enum class EWidgetDesignFlags : uint8
{
	None                                     = 0,
	Designing                                = 1,
	ShowOutline                              = 2,
	ExecutePreConstruct                      = 4,
	Previewing                               = 8,
	EWidgetDesignFlags_MAX                   = 9,
};

enum class EWidgetSpace : uint8
{
	World                                    = 0,
	Screen                                   = 1,
	EWidgetSpace_MAX                         = 2,
};

enum class EWidgetTimingPolicy : uint8
{
	RealTime                                 = 0,
	GameTime                                 = 1,
	EWidgetTimingPolicy_MAX                  = 2,
};

enum class EWidgetBlendMode : uint8
{
	Opaque                                   = 0,
	Masked                                   = 1,
	Transparent                              = 2,
	EWidgetBlendMode_MAX                     = 3,
};

enum class EWidgetGeometryMode : uint8
{
	Plane                                    = 0,
	Cylinder                                 = 1,
	EWidgetGeometryMode_MAX                  = 2,
};

enum class EWindowVisibility : uint8
{
	Visible                                  = 0,
	SelfHitTestInvisible                     = 1,
	EWindowVisibility_MAX                    = 2,
};

enum class ETickMode : uint8
{
	Disabled                                 = 0,
	Enabled                                  = 1,
	Automatic                                = 2,
	ETickMode_MAX                            = 3,
};

enum class EWidgetInteractionSource : uint8
{
	World                                    = 0,
	Mouse                                    = 1,
	CenterScreen                             = 2,
	Custom                                   = 3,
	EWidgetInteractionSource_MAX             = 4,
};

enum class EDragPivot : uint8
{
	MouseDown                                = 0,
	TopLeft                                  = 1,
	TopCenter                                = 2,
	TopRight                                 = 3,
	CenterLeft                               = 4,
	CenterCenter                             = 5,
	CenterRight                              = 6,
	BottomLeft                               = 7,
	BottomCenter                             = 8,
	BottomRight                              = 9,
	EDragPivot_MAX                           = 10,
};

enum class EWidgetTickFrequency : uint8
{
	Never                                    = 0,
	Auto                                     = 1,
	EWidgetTickFrequency_MAX                 = 2,
};

enum class EWidgetAnimationEvent : uint8
{
	Started                                  = 0,
	Finished                                 = 1,
	EWidgetAnimationEvent_MAX                = 2,
};

enum class EUMGSequencePlayMode : uint8
{
	Forward                                  = 0,
	Reverse                                  = 1,
	PingPong                                 = 2,
	EUMGSequencePlayMode_MAX                 = 3,
};

enum class EBindingKind : uint8
{
	Function                                 = 0,
	Property                                 = 1,
	EBindingKind_MAX                         = 2,
};

struct FFieldNotificationId final
{
public:
	class FName                                   FieldName;
};
static_assert(alignof(FFieldNotificationId) == 0x000004, "Wrong alignment on FFieldNotificationId");
static_assert(sizeof(FFieldNotificationId) == 0x000004, "Wrong size on FFieldNotificationId");
static_assert(offsetof(FFieldNotificationId, FieldName) == 0x000000, "Member 'FFieldNotificationId::FieldName' has a wrong offset!");

struct FShapedTextOptions final
{
public:
	uint8                                         bOverride_TextShapingMethod : 1;
	uint8                                         bOverride_TextFlowDirection : 1;
	ETextShapingMethod                            TextShapingMethod;
	ETextFlowDirection                            TextFlowDirection;
};
static_assert(alignof(FShapedTextOptions) == 0x000001, "Wrong alignment on FShapedTextOptions");
static_assert(sizeof(FShapedTextOptions) == 0x000003, "Wrong size on FShapedTextOptions");
static_assert(offsetof(FShapedTextOptions, TextShapingMethod) == 0x000001, "Member 'FShapedTextOptions::TextShapingMethod' has a wrong offset!");
static_assert(offsetof(FShapedTextOptions, TextFlowDirection) == 0x000002, "Member 'FShapedTextOptions::TextFlowDirection' has a wrong offset!");

struct FWidgetAnimationBinding final
{
public:
	class FName                                   WidgetName;
	class FName                                   SlotWidgetName;
	struct FGuid                                  AnimationGuid;
	bool                                          bIsRootWidget;
	uint8                                         Pad_19[0x3];
};
static_assert(alignof(FWidgetAnimationBinding) == 0x000004, "Wrong alignment on FWidgetAnimationBinding");
static_assert(sizeof(FWidgetAnimationBinding) == 0x00001C, "Wrong size on FWidgetAnimationBinding");
static_assert(offsetof(FWidgetAnimationBinding, WidgetName) == 0x000000, "Member 'FWidgetAnimationBinding::WidgetName' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, SlotWidgetName) == 0x000004, "Member 'FWidgetAnimationBinding::SlotWidgetName' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, AnimationGuid) == 0x000008, "Member 'FWidgetAnimationBinding::AnimationGuid' has a wrong offset!");
static_assert(offsetof(FWidgetAnimationBinding, bIsRootWidget) == 0x000018, "Member 'FWidgetAnimationBinding::bIsRootWidget' has a wrong offset!");

struct alignas(0x08) FEventReply final
{
public:
	uint8                                         Pad_0[0xB8];
};
static_assert(alignof(FEventReply) == 0x000008, "Wrong alignment on FEventReply");
static_assert(sizeof(FEventReply) == 0x0000B8, "Wrong size on FEventReply");

struct FAnchorData final
{
public:
	struct FMargin                                Offsets;
	struct FAnchors                               Anchors;
	struct FVector2D                              Alignment;
};
static_assert(alignof(FAnchorData) == 0x000008, "Wrong alignment on FAnchorData");
static_assert(sizeof(FAnchorData) == 0x000040, "Wrong size on FAnchorData");
static_assert(offsetof(FAnchorData, Offsets) == 0x000000, "Member 'FAnchorData::Offsets' has a wrong offset!");
static_assert(offsetof(FAnchorData, Anchors) == 0x000010, "Member 'FAnchorData::Anchors' has a wrong offset!");
static_assert(offsetof(FAnchorData, Alignment) == 0x000030, "Member 'FAnchorData::Alignment' has a wrong offset!");

struct FWidgetTransform final
{
public:
	struct FVector2D                              Translation;
	struct FVector2D                              Scale;
	struct FVector2D                              Shear;
	float                                         Angle;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FWidgetTransform) == 0x000008, "Wrong alignment on FWidgetTransform");
static_assert(sizeof(FWidgetTransform) == 0x000038, "Wrong size on FWidgetTransform");
static_assert(offsetof(FWidgetTransform, Translation) == 0x000000, "Member 'FWidgetTransform::Translation' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Scale) == 0x000010, "Member 'FWidgetTransform::Scale' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Shear) == 0x000020, "Member 'FWidgetTransform::Shear' has a wrong offset!");
static_assert(offsetof(FWidgetTransform, Angle) == 0x000030, "Member 'FWidgetTransform::Angle' has a wrong offset!");

struct FNamedSlotBinding final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class UWidget*                                Content;
};
static_assert(alignof(FNamedSlotBinding) == 0x000008, "Wrong alignment on FNamedSlotBinding");
static_assert(sizeof(FNamedSlotBinding) == 0x000010, "Wrong size on FNamedSlotBinding");
static_assert(offsetof(FNamedSlotBinding, Name) == 0x000000, "Member 'FNamedSlotBinding::Name' has a wrong offset!");
static_assert(offsetof(FNamedSlotBinding, Content) == 0x000008, "Member 'FNamedSlotBinding::Content' has a wrong offset!");

struct FAnimationEventBinding final
{
public:
	class UWidgetAnimation*                       Animation;
	TDelegate<void()>                             Delegate;
	EWidgetAnimationEvent                         AnimationEvent;
	uint8                                         Pad_15[0x3];
	class FName                                   UserTag;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FAnimationEventBinding) == 0x000008, "Wrong alignment on FAnimationEventBinding");
static_assert(sizeof(FAnimationEventBinding) == 0x000020, "Wrong size on FAnimationEventBinding");
static_assert(offsetof(FAnimationEventBinding, Animation) == 0x000000, "Member 'FAnimationEventBinding::Animation' has a wrong offset!");
static_assert(offsetof(FAnimationEventBinding, Delegate) == 0x000008, "Member 'FAnimationEventBinding::Delegate' has a wrong offset!");
static_assert(offsetof(FAnimationEventBinding, AnimationEvent) == 0x000014, "Member 'FAnimationEventBinding::AnimationEvent' has a wrong offset!");
static_assert(offsetof(FAnimationEventBinding, UserTag) == 0x000018, "Member 'FAnimationEventBinding::UserTag' has a wrong offset!");

struct FBlueprintWidgetAnimationDelegateBinding final
{
public:
	EWidgetAnimationEvent                         Action;
	uint8                                         Pad_1[0x3];
	class FName                                   AnimationToBind;
	class FName                                   FunctionNameToBind;
	class FName                                   UserTag;
};
static_assert(alignof(FBlueprintWidgetAnimationDelegateBinding) == 0x000004, "Wrong alignment on FBlueprintWidgetAnimationDelegateBinding");
static_assert(sizeof(FBlueprintWidgetAnimationDelegateBinding) == 0x000010, "Wrong size on FBlueprintWidgetAnimationDelegateBinding");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, Action) == 0x000000, "Member 'FBlueprintWidgetAnimationDelegateBinding::Action' has a wrong offset!");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind) == 0x000004, "Member 'FBlueprintWidgetAnimationDelegateBinding::AnimationToBind' has a wrong offset!");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind) == 0x000008, "Member 'FBlueprintWidgetAnimationDelegateBinding::FunctionNameToBind' has a wrong offset!");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, UserTag) == 0x00000C, "Member 'FBlueprintWidgetAnimationDelegateBinding::UserTag' has a wrong offset!");

struct alignas(0x08) FPaintContext final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FPaintContext) == 0x000008, "Wrong alignment on FPaintContext");
static_assert(sizeof(FPaintContext) == 0x000030, "Wrong size on FPaintContext");

struct FWidgetEventField final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FWidgetEventField) == 0x000001, "Wrong alignment on FWidgetEventField");
static_assert(sizeof(FWidgetEventField) == 0x000001, "Wrong size on FWidgetEventField");

struct FUserWidgetPool final
{
public:
	TArray<class UUserWidget*>                    ActiveWidgets;
	TArray<class UUserWidget*>                    InactiveWidgets;
	uint8                                         Pad_20[0x68];
};
static_assert(alignof(FUserWidgetPool) == 0x000008, "Wrong alignment on FUserWidgetPool");
static_assert(sizeof(FUserWidgetPool) == 0x000088, "Wrong size on FUserWidgetPool");
static_assert(offsetof(FUserWidgetPool, ActiveWidgets) == 0x000000, "Member 'FUserWidgetPool::ActiveWidgets' has a wrong offset!");
static_assert(offsetof(FUserWidgetPool, InactiveWidgets) == 0x000010, "Member 'FUserWidgetPool::InactiveWidgets' has a wrong offset!");

struct FRadialBoxSettings final
{
public:
	float                                         StartingAngle;
	bool                                          bDistributeItemsEvenly;
	uint8                                         Pad_5[0x3];
	float                                         AngleBetweenItems;
	float                                         SectorCentralAngle;
};
static_assert(alignof(FRadialBoxSettings) == 0x000004, "Wrong alignment on FRadialBoxSettings");
static_assert(sizeof(FRadialBoxSettings) == 0x000010, "Wrong size on FRadialBoxSettings");
static_assert(offsetof(FRadialBoxSettings, StartingAngle) == 0x000000, "Member 'FRadialBoxSettings::StartingAngle' has a wrong offset!");
static_assert(offsetof(FRadialBoxSettings, bDistributeItemsEvenly) == 0x000004, "Member 'FRadialBoxSettings::bDistributeItemsEvenly' has a wrong offset!");
static_assert(offsetof(FRadialBoxSettings, AngleBetweenItems) == 0x000008, "Member 'FRadialBoxSettings::AngleBetweenItems' has a wrong offset!");
static_assert(offsetof(FRadialBoxSettings, SectorCentralAngle) == 0x00000C, "Member 'FRadialBoxSettings::SectorCentralAngle' has a wrong offset!");

struct FSlateChildSize final
{
public:
	float                                         Value;
	ESlateSizeRule                                SizeRule;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FSlateChildSize) == 0x000004, "Wrong alignment on FSlateChildSize");
static_assert(sizeof(FSlateChildSize) == 0x000008, "Wrong size on FSlateChildSize");
static_assert(offsetof(FSlateChildSize, Value) == 0x000000, "Member 'FSlateChildSize::Value' has a wrong offset!");
static_assert(offsetof(FSlateChildSize, SizeRule) == 0x000004, "Member 'FSlateChildSize::SizeRule' has a wrong offset!");

struct FWidgetChild final
{
public:
	class FName                                   ChildName;
	TWeakObjectPtr<class UWidget>                 ChildWidgetPtr;
};
static_assert(alignof(FWidgetChild) == 0x000004, "Wrong alignment on FWidgetChild");
static_assert(sizeof(FWidgetChild) == 0x00000C, "Wrong size on FWidgetChild");
static_assert(offsetof(FWidgetChild, ChildName) == 0x000000, "Member 'FWidgetChild::ChildName' has a wrong offset!");
static_assert(offsetof(FWidgetChild, ChildWidgetPtr) == 0x000004, "Member 'FWidgetChild::ChildWidgetPtr' has a wrong offset!");

struct FWidgetNavigationData final
{
public:
	EUINavigationRule                             Rule;
	uint8                                         Pad_1[0x3];
	class FName                                   WidgetToFocus;
	TWeakObjectPtr<class UWidget>                 Widget;
	TDelegate<void(EUINavigation Navigation)>     CustomDelegate;
};
static_assert(alignof(FWidgetNavigationData) == 0x000004, "Wrong alignment on FWidgetNavigationData");
static_assert(sizeof(FWidgetNavigationData) == 0x00001C, "Wrong size on FWidgetNavigationData");
static_assert(offsetof(FWidgetNavigationData, Rule) == 0x000000, "Member 'FWidgetNavigationData::Rule' has a wrong offset!");
static_assert(offsetof(FWidgetNavigationData, WidgetToFocus) == 0x000004, "Member 'FWidgetNavigationData::WidgetToFocus' has a wrong offset!");
static_assert(offsetof(FWidgetNavigationData, Widget) == 0x000008, "Member 'FWidgetNavigationData::Widget' has a wrong offset!");
static_assert(offsetof(FWidgetNavigationData, CustomDelegate) == 0x000010, "Member 'FWidgetNavigationData::CustomDelegate' has a wrong offset!");

struct FMovieScene2DTransformMask final
{
public:
	uint32                                        Mask;
};
static_assert(alignof(FMovieScene2DTransformMask) == 0x000004, "Wrong alignment on FMovieScene2DTransformMask");
static_assert(sizeof(FMovieScene2DTransformMask) == 0x000004, "Wrong size on FMovieScene2DTransformMask");
static_assert(offsetof(FMovieScene2DTransformMask, Mask) == 0x000000, "Member 'FMovieScene2DTransformMask::Mask' has a wrong offset!");

struct FSequenceTickManagerWidgetData final
{
public:
	uint8                                         Pad_0[0x2];
};
static_assert(alignof(FSequenceTickManagerWidgetData) == 0x000001, "Wrong alignment on FSequenceTickManagerWidgetData");
static_assert(sizeof(FSequenceTickManagerWidgetData) == 0x000002, "Wrong size on FSequenceTickManagerWidgetData");

struct FDynamicPropertyPath final : public FCachedPropertyPath
{
};
static_assert(alignof(FDynamicPropertyPath) == 0x000008, "Wrong alignment on FDynamicPropertyPath");
static_assert(sizeof(FDynamicPropertyPath) == 0x000038, "Wrong size on FDynamicPropertyPath");

struct FGameViewportWidgetSlot final
{
public:
	struct FAnchors                               Anchors;
	struct FMargin                                Offsets;
	struct FVector2D                              Alignment;
	int32                                         ZOrder;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(FGameViewportWidgetSlot) == 0x000008, "Wrong alignment on FGameViewportWidgetSlot");
static_assert(sizeof(FGameViewportWidgetSlot) == 0x000048, "Wrong size on FGameViewportWidgetSlot");
static_assert(offsetof(FGameViewportWidgetSlot, Anchors) == 0x000000, "Member 'FGameViewportWidgetSlot::Anchors' has a wrong offset!");
static_assert(offsetof(FGameViewportWidgetSlot, Offsets) == 0x000020, "Member 'FGameViewportWidgetSlot::Offsets' has a wrong offset!");
static_assert(offsetof(FGameViewportWidgetSlot, Alignment) == 0x000030, "Member 'FGameViewportWidgetSlot::Alignment' has a wrong offset!");
static_assert(offsetof(FGameViewportWidgetSlot, ZOrder) == 0x000040, "Member 'FGameViewportWidgetSlot::ZOrder' has a wrong offset!");

struct FRichTextStyleRow final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];
	struct FTextBlockStyle                        TextStyle;
};
static_assert(alignof(FRichTextStyleRow) == 0x000010, "Wrong alignment on FRichTextStyleRow");
static_assert(sizeof(FRichTextStyleRow) == 0x000320, "Wrong size on FRichTextStyleRow");
static_assert(offsetof(FRichTextStyleRow, TextStyle) == 0x000010, "Member 'FRichTextStyleRow::TextStyle' has a wrong offset!");

struct FRichImageRow final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            Brush;
};
static_assert(alignof(FRichImageRow) == 0x000010, "Wrong alignment on FRichImageRow");
static_assert(sizeof(FRichImageRow) == 0x0000D0, "Wrong size on FRichImageRow");
static_assert(offsetof(FRichImageRow, Brush) == 0x000010, "Member 'FRichImageRow::Brush' has a wrong offset!");

struct FWidgetComponentInstanceData final : public FSceneComponentInstanceData
{
public:
	uint8                                         Pad_B8[0x10];
};
static_assert(alignof(FWidgetComponentInstanceData) == 0x000008, "Wrong alignment on FWidgetComponentInstanceData");
static_assert(sizeof(FWidgetComponentInstanceData) == 0x0000C8, "Wrong size on FWidgetComponentInstanceData");

struct FSlateMeshVertex final
{
public:
	struct FVector2f                              Position;
	struct FColor                                 Color;
	struct FVector2f                              UV0;
	struct FVector2f                              UV1;
	struct FVector2f                              UV2;
	struct FVector2f                              UV3;
	struct FVector2f                              UV4;
	struct FVector2f                              UV5;
};
static_assert(alignof(FSlateMeshVertex) == 0x000004, "Wrong alignment on FSlateMeshVertex");
static_assert(sizeof(FSlateMeshVertex) == 0x00003C, "Wrong size on FSlateMeshVertex");
static_assert(offsetof(FSlateMeshVertex, Position) == 0x000000, "Member 'FSlateMeshVertex::Position' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, Color) == 0x000008, "Member 'FSlateMeshVertex::Color' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV0) == 0x00000C, "Member 'FSlateMeshVertex::UV0' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV1) == 0x000014, "Member 'FSlateMeshVertex::UV1' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV2) == 0x00001C, "Member 'FSlateMeshVertex::UV2' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV3) == 0x000024, "Member 'FSlateMeshVertex::UV3' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV4) == 0x00002C, "Member 'FSlateMeshVertex::UV4' has a wrong offset!");
static_assert(offsetof(FSlateMeshVertex, UV5) == 0x000034, "Member 'FSlateMeshVertex::UV5' has a wrong offset!");

struct FDelegateRuntimeBinding final
{
public:
	class FString                                 ObjectName;
	class FName                                   PropertyName;
	class FName                                   FunctionName;
	struct FDynamicPropertyPath                   SourcePath;
	EBindingKind                                  Kind;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FDelegateRuntimeBinding) == 0x000008, "Wrong alignment on FDelegateRuntimeBinding");
static_assert(sizeof(FDelegateRuntimeBinding) == 0x000058, "Wrong size on FDelegateRuntimeBinding");
static_assert(offsetof(FDelegateRuntimeBinding, ObjectName) == 0x000000, "Member 'FDelegateRuntimeBinding::ObjectName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, PropertyName) == 0x000010, "Member 'FDelegateRuntimeBinding::PropertyName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, FunctionName) == 0x000014, "Member 'FDelegateRuntimeBinding::FunctionName' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, SourcePath) == 0x000018, "Member 'FDelegateRuntimeBinding::SourcePath' has a wrong offset!");
static_assert(offsetof(FDelegateRuntimeBinding, Kind) == 0x000050, "Member 'FDelegateRuntimeBinding::Kind' has a wrong offset!");

}
