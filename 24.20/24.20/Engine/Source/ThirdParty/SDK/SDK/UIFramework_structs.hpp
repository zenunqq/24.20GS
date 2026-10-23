#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NetCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

enum class EUIFrameworkGameLayerType : uint8
{
	Viewport                                 = 0,
	PlayerScreen                             = 1,
	EUIFrameworkGameLayerType_MAX            = 2,
};

enum class EUIFrameworkInputMode : uint8
{
	UI                                       = 0,
	Game                                     = 1,
	EUIFrameworkInputMode_MAX                = 2,
};

struct FUIFrameworkSimpleEventArgument
{
public:
	class APlayerController*                      PlayerController;
	class UUIFrameworkWidget*                     Sender;
};
static_assert(alignof(FUIFrameworkSimpleEventArgument) == 0x000008, "Wrong alignment on FUIFrameworkSimpleEventArgument");
static_assert(sizeof(FUIFrameworkSimpleEventArgument) == 0x000010, "Wrong size on FUIFrameworkSimpleEventArgument");
static_assert(offsetof(FUIFrameworkSimpleEventArgument, PlayerController) == 0x000000, "Member 'FUIFrameworkSimpleEventArgument::PlayerController' has a wrong offset!");
static_assert(offsetof(FUIFrameworkSimpleEventArgument, Sender) == 0x000008, "Member 'FUIFrameworkSimpleEventArgument::Sender' has a wrong offset!");

struct FUIFrameworkClickEventArgument final : public FUIFrameworkSimpleEventArgument
{
};
static_assert(alignof(FUIFrameworkClickEventArgument) == 0x000008, "Wrong alignment on FUIFrameworkClickEventArgument");
static_assert(sizeof(FUIFrameworkClickEventArgument) == 0x000010, "Wrong size on FUIFrameworkClickEventArgument");

struct FUIFrameworkWidgetOwner final
{
public:
	class APlayerController*                      PlayerController;
	class UGameInstance*                          GameInstance;
	class UWorld*                                 World;
};
static_assert(alignof(FUIFrameworkWidgetOwner) == 0x000008, "Wrong alignment on FUIFrameworkWidgetOwner");
static_assert(sizeof(FUIFrameworkWidgetOwner) == 0x000018, "Wrong size on FUIFrameworkWidgetOwner");
static_assert(offsetof(FUIFrameworkWidgetOwner, PlayerController) == 0x000000, "Member 'FUIFrameworkWidgetOwner::PlayerController' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetOwner, GameInstance) == 0x000008, "Member 'FUIFrameworkWidgetOwner::GameInstance' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetOwner, World) == 0x000010, "Member 'FUIFrameworkWidgetOwner::World' has a wrong offset!");

struct FUIFrameworkParentWidget final
{
public:
	class UObject*                                Parent;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FUIFrameworkParentWidget) == 0x000008, "Wrong alignment on FUIFrameworkParentWidget");
static_assert(sizeof(FUIFrameworkParentWidget) == 0x000010, "Wrong size on FUIFrameworkParentWidget");
static_assert(offsetof(FUIFrameworkParentWidget, Parent) == 0x000000, "Member 'FUIFrameworkParentWidget::Parent' has a wrong offset!");

struct FUIFrameworkWidgetId final
{
public:
	int64                                         Key;
};
static_assert(alignof(FUIFrameworkWidgetId) == 0x000008, "Wrong alignment on FUIFrameworkWidgetId");
static_assert(sizeof(FUIFrameworkWidgetId) == 0x000008, "Wrong size on FUIFrameworkWidgetId");
static_assert(offsetof(FUIFrameworkWidgetId, Key) == 0x000000, "Member 'FUIFrameworkWidgetId::Key' has a wrong offset!");

struct FUIFrameworkSlotBase : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class UUIFrameworkWidget*                     Widget;
	struct FUIFrameworkWidgetId                   WidgetId;
	struct FUIFrameworkWidgetId                   LocalPreviousWidgetId;
};
static_assert(alignof(FUIFrameworkSlotBase) == 0x000008, "Wrong alignment on FUIFrameworkSlotBase");
static_assert(sizeof(FUIFrameworkSlotBase) == 0x000028, "Wrong size on FUIFrameworkSlotBase");
static_assert(offsetof(FUIFrameworkSlotBase, Widget) == 0x000010, "Member 'FUIFrameworkSlotBase::Widget' has a wrong offset!");
static_assert(offsetof(FUIFrameworkSlotBase, WidgetId) == 0x000018, "Member 'FUIFrameworkSlotBase::WidgetId' has a wrong offset!");
static_assert(offsetof(FUIFrameworkSlotBase, LocalPreviousWidgetId) == 0x000020, "Member 'FUIFrameworkSlotBase::LocalPreviousWidgetId' has a wrong offset!");

struct FUIFrameworkSimpleSlot final : public FUIFrameworkSlotBase
{
public:
	struct FMargin                                Padding;
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_3A[0x6];
};
static_assert(alignof(FUIFrameworkSimpleSlot) == 0x000008, "Wrong alignment on FUIFrameworkSimpleSlot");
static_assert(sizeof(FUIFrameworkSimpleSlot) == 0x000040, "Wrong size on FUIFrameworkSimpleSlot");
static_assert(offsetof(FUIFrameworkSimpleSlot, Padding) == 0x000028, "Member 'FUIFrameworkSimpleSlot::Padding' has a wrong offset!");
static_assert(offsetof(FUIFrameworkSimpleSlot, HorizontalAlignment) == 0x000038, "Member 'FUIFrameworkSimpleSlot::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkSimpleSlot, VerticalAlignment) == 0x000039, "Member 'FUIFrameworkSimpleSlot::VerticalAlignment' has a wrong offset!");

struct FUIFrameworkWidgetTreeEntry final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class UUIFrameworkWidget*                     Parent;
	class UUIFrameworkWidget*                     Child;
	struct FUIFrameworkWidgetId                   ParentID;
	struct FUIFrameworkWidgetId                   ChildId;
};
static_assert(alignof(FUIFrameworkWidgetTreeEntry) == 0x000008, "Wrong alignment on FUIFrameworkWidgetTreeEntry");
static_assert(sizeof(FUIFrameworkWidgetTreeEntry) == 0x000030, "Wrong size on FUIFrameworkWidgetTreeEntry");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, Parent) == 0x000010, "Member 'FUIFrameworkWidgetTreeEntry::Parent' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, Child) == 0x000018, "Member 'FUIFrameworkWidgetTreeEntry::Child' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, ParentID) == 0x000020, "Member 'FUIFrameworkWidgetTreeEntry::ParentID' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, ChildId) == 0x000028, "Member 'FUIFrameworkWidgetTreeEntry::ChildId' has a wrong offset!");

struct FUIFrameworkWidgetTree final : public FFastArraySerializer
{
public:
	uint8                                         Pad_108[0x30];
	TArray<struct FUIFrameworkWidgetTreeEntry>    Entries;
	class AActor*                                 ReplicatedOwner;
	uint8                                         Pad_150[0xA8];
};
static_assert(alignof(FUIFrameworkWidgetTree) == 0x000008, "Wrong alignment on FUIFrameworkWidgetTree");
static_assert(sizeof(FUIFrameworkWidgetTree) == 0x0001F8, "Wrong size on FUIFrameworkWidgetTree");
static_assert(offsetof(FUIFrameworkWidgetTree, Entries) == 0x000138, "Member 'FUIFrameworkWidgetTree::Entries' has a wrong offset!");
static_assert(offsetof(FUIFrameworkWidgetTree, ReplicatedOwner) == 0x000148, "Member 'FUIFrameworkWidgetTree::ReplicatedOwner' has a wrong offset!");

struct FUIFrameworkGameLayerSlot final : public FUIFrameworkSlotBase
{
public:
	int32                                         ZOrder;
	EUIFrameworkInputMode                         InputMode;
	EUIFrameworkGameLayerType                     Type;
	uint8                                         Pad_2E[0x2];
};
static_assert(alignof(FUIFrameworkGameLayerSlot) == 0x000008, "Wrong alignment on FUIFrameworkGameLayerSlot");
static_assert(sizeof(FUIFrameworkGameLayerSlot) == 0x000030, "Wrong size on FUIFrameworkGameLayerSlot");
static_assert(offsetof(FUIFrameworkGameLayerSlot, ZOrder) == 0x000028, "Member 'FUIFrameworkGameLayerSlot::ZOrder' has a wrong offset!");
static_assert(offsetof(FUIFrameworkGameLayerSlot, InputMode) == 0x00002C, "Member 'FUIFrameworkGameLayerSlot::InputMode' has a wrong offset!");
static_assert(offsetof(FUIFrameworkGameLayerSlot, Type) == 0x00002D, "Member 'FUIFrameworkGameLayerSlot::Type' has a wrong offset!");

struct FUIFrameworkGameLayerSlotList final : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkGameLayerSlot>      Entries;
	class UUIFrameworkPlayerComponent*            Owner;
};
static_assert(alignof(FUIFrameworkGameLayerSlotList) == 0x000008, "Wrong alignment on FUIFrameworkGameLayerSlotList");
static_assert(sizeof(FUIFrameworkGameLayerSlotList) == 0x000120, "Wrong size on FUIFrameworkGameLayerSlotList");
static_assert(offsetof(FUIFrameworkGameLayerSlotList, Entries) == 0x000108, "Member 'FUIFrameworkGameLayerSlotList::Entries' has a wrong offset!");
static_assert(offsetof(FUIFrameworkGameLayerSlotList, Owner) == 0x000118, "Member 'FUIFrameworkGameLayerSlotList::Owner' has a wrong offset!");

struct FUIFrameworkCanvasBoxSlot final : public FUIFrameworkSlotBase
{
public:
	struct FAnchors                               Anchors;
	struct FMargin                                Offsets;
	struct FVector2D                              Alignment;
	int32                                         ZOrder;
	bool                                          bSizeToContent;
	uint8                                         Pad_6D[0x3];
};
static_assert(alignof(FUIFrameworkCanvasBoxSlot) == 0x000008, "Wrong alignment on FUIFrameworkCanvasBoxSlot");
static_assert(sizeof(FUIFrameworkCanvasBoxSlot) == 0x000070, "Wrong size on FUIFrameworkCanvasBoxSlot");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Anchors) == 0x000028, "Member 'FUIFrameworkCanvasBoxSlot::Anchors' has a wrong offset!");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Offsets) == 0x000048, "Member 'FUIFrameworkCanvasBoxSlot::Offsets' has a wrong offset!");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Alignment) == 0x000058, "Member 'FUIFrameworkCanvasBoxSlot::Alignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, ZOrder) == 0x000068, "Member 'FUIFrameworkCanvasBoxSlot::ZOrder' has a wrong offset!");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, bSizeToContent) == 0x00006C, "Member 'FUIFrameworkCanvasBoxSlot::bSizeToContent' has a wrong offset!");

struct FUIFrameworkCanvasBoxSlotList final : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkCanvasBoxSlot>      Slots;
	class UUIFrameworkCanvasBox*                  Owner;
};
static_assert(alignof(FUIFrameworkCanvasBoxSlotList) == 0x000008, "Wrong alignment on FUIFrameworkCanvasBoxSlotList");
static_assert(sizeof(FUIFrameworkCanvasBoxSlotList) == 0x000120, "Wrong size on FUIFrameworkCanvasBoxSlotList");
static_assert(offsetof(FUIFrameworkCanvasBoxSlotList, Slots) == 0x000108, "Member 'FUIFrameworkCanvasBoxSlotList::Slots' has a wrong offset!");
static_assert(offsetof(FUIFrameworkCanvasBoxSlotList, Owner) == 0x000118, "Member 'FUIFrameworkCanvasBoxSlotList::Owner' has a wrong offset!");

struct FUIFrameworkImageBlockData final
{
public:
	struct FLinearColor                           Tint;
	TSoftObjectPtr<class UObject>                 ResourceObject;
	struct FVector2f                              DesiredSize;
	ESlateBrushTileType                           Tiling;
	bool                                          bUseTextureSize;
	uint8                                         Pad_42[0x6];
};
static_assert(alignof(FUIFrameworkImageBlockData) == 0x000008, "Wrong alignment on FUIFrameworkImageBlockData");
static_assert(sizeof(FUIFrameworkImageBlockData) == 0x000048, "Wrong size on FUIFrameworkImageBlockData");
static_assert(offsetof(FUIFrameworkImageBlockData, Tint) == 0x000000, "Member 'FUIFrameworkImageBlockData::Tint' has a wrong offset!");
static_assert(offsetof(FUIFrameworkImageBlockData, ResourceObject) == 0x000010, "Member 'FUIFrameworkImageBlockData::ResourceObject' has a wrong offset!");
static_assert(offsetof(FUIFrameworkImageBlockData, DesiredSize) == 0x000038, "Member 'FUIFrameworkImageBlockData::DesiredSize' has a wrong offset!");
static_assert(offsetof(FUIFrameworkImageBlockData, Tiling) == 0x000040, "Member 'FUIFrameworkImageBlockData::Tiling' has a wrong offset!");
static_assert(offsetof(FUIFrameworkImageBlockData, bUseTextureSize) == 0x000041, "Member 'FUIFrameworkImageBlockData::bUseTextureSize' has a wrong offset!");

struct FUIFrameworkOverlaySlot final : public FUIFrameworkSlotBase
{
public:
	struct FMargin                                Padding;
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_3A[0x2];
	int32                                         Index;
};
static_assert(alignof(FUIFrameworkOverlaySlot) == 0x000008, "Wrong alignment on FUIFrameworkOverlaySlot");
static_assert(sizeof(FUIFrameworkOverlaySlot) == 0x000040, "Wrong size on FUIFrameworkOverlaySlot");
static_assert(offsetof(FUIFrameworkOverlaySlot, Padding) == 0x000028, "Member 'FUIFrameworkOverlaySlot::Padding' has a wrong offset!");
static_assert(offsetof(FUIFrameworkOverlaySlot, HorizontalAlignment) == 0x000038, "Member 'FUIFrameworkOverlaySlot::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkOverlaySlot, VerticalAlignment) == 0x000039, "Member 'FUIFrameworkOverlaySlot::VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkOverlaySlot, Index) == 0x00003C, "Member 'FUIFrameworkOverlaySlot::Index' has a wrong offset!");

struct FUIFrameworkOverlaySlotList final : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkOverlaySlot>        Slots;
	class UUIFrameworkOverlay*                    Owner;
};
static_assert(alignof(FUIFrameworkOverlaySlotList) == 0x000008, "Wrong alignment on FUIFrameworkOverlaySlotList");
static_assert(sizeof(FUIFrameworkOverlaySlotList) == 0x000120, "Wrong size on FUIFrameworkOverlaySlotList");
static_assert(offsetof(FUIFrameworkOverlaySlotList, Slots) == 0x000108, "Member 'FUIFrameworkOverlaySlotList::Slots' has a wrong offset!");
static_assert(offsetof(FUIFrameworkOverlaySlotList, Owner) == 0x000118, "Member 'FUIFrameworkOverlaySlotList::Owner' has a wrong offset!");

struct FUIFrameworkStackBoxSlot final : public FUIFrameworkSlotBase
{
public:
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_2A[0x2];
	struct FMargin                                Padding;
	struct FSlateChildSize                        Size;
	int32                                         Index;
};
static_assert(alignof(FUIFrameworkStackBoxSlot) == 0x000008, "Wrong alignment on FUIFrameworkStackBoxSlot");
static_assert(sizeof(FUIFrameworkStackBoxSlot) == 0x000048, "Wrong size on FUIFrameworkStackBoxSlot");
static_assert(offsetof(FUIFrameworkStackBoxSlot, HorizontalAlignment) == 0x000028, "Member 'FUIFrameworkStackBoxSlot::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkStackBoxSlot, VerticalAlignment) == 0x000029, "Member 'FUIFrameworkStackBoxSlot::VerticalAlignment' has a wrong offset!");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Padding) == 0x00002C, "Member 'FUIFrameworkStackBoxSlot::Padding' has a wrong offset!");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Size) == 0x00003C, "Member 'FUIFrameworkStackBoxSlot::Size' has a wrong offset!");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Index) == 0x000044, "Member 'FUIFrameworkStackBoxSlot::Index' has a wrong offset!");

struct FUIFrameworkStackBoxSlotList final : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkStackBoxSlot>       Slots;
	class UUIFrameworkStackBox*                   Owner;
};
static_assert(alignof(FUIFrameworkStackBoxSlotList) == 0x000008, "Wrong alignment on FUIFrameworkStackBoxSlotList");
static_assert(sizeof(FUIFrameworkStackBoxSlotList) == 0x000120, "Wrong size on FUIFrameworkStackBoxSlotList");
static_assert(offsetof(FUIFrameworkStackBoxSlotList, Slots) == 0x000108, "Member 'FUIFrameworkStackBoxSlotList::Slots' has a wrong offset!");
static_assert(offsetof(FUIFrameworkStackBoxSlotList, Owner) == 0x000118, "Member 'FUIFrameworkStackBoxSlotList::Owner' has a wrong offset!");

struct FUIFrameworkUserWidgetSlot final : public FUIFrameworkSlotBase
{
public:
	class FName                                   SlotName;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FUIFrameworkUserWidgetSlot) == 0x000008, "Wrong alignment on FUIFrameworkUserWidgetSlot");
static_assert(sizeof(FUIFrameworkUserWidgetSlot) == 0x000030, "Wrong size on FUIFrameworkUserWidgetSlot");
static_assert(offsetof(FUIFrameworkUserWidgetSlot, SlotName) == 0x000028, "Member 'FUIFrameworkUserWidgetSlot::SlotName' has a wrong offset!");

struct FUIFrameworkUserWidgetSlotList final : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkUserWidgetSlot>     Slots;
	class UUIFrameworkUserWidget*                 Owner;
};
static_assert(alignof(FUIFrameworkUserWidgetSlotList) == 0x000008, "Wrong alignment on FUIFrameworkUserWidgetSlotList");
static_assert(sizeof(FUIFrameworkUserWidgetSlotList) == 0x000120, "Wrong size on FUIFrameworkUserWidgetSlotList");
static_assert(offsetof(FUIFrameworkUserWidgetSlotList, Slots) == 0x000108, "Member 'FUIFrameworkUserWidgetSlotList::Slots' has a wrong offset!");
static_assert(offsetof(FUIFrameworkUserWidgetSlotList, Owner) == 0x000118, "Member 'FUIFrameworkUserWidgetSlotList::Owner' has a wrong offset!");

}
