#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FGravyGoblinActivatable_Event final
{
public:
	bool                                          bIsActivatable;
};
static_assert(alignof(FGravyGoblinActivatable_Event) == 0x000001, "Wrong alignment on FGravyGoblinActivatable_Event");
static_assert(sizeof(FGravyGoblinActivatable_Event) == 0x000001, "Wrong size on FGravyGoblinActivatable_Event");
static_assert(offsetof(FGravyGoblinActivatable_Event, bIsActivatable) == 0x000000, "Member 'FGravyGoblinActivatable_Event::bIsActivatable' has a wrong offset!");

struct FGravyGoblinRotatable_Event final
{
public:
	bool                                          bIsRotatable;
};
static_assert(alignof(FGravyGoblinRotatable_Event) == 0x000001, "Wrong alignment on FGravyGoblinRotatable_Event");
static_assert(sizeof(FGravyGoblinRotatable_Event) == 0x000001, "Wrong size on FGravyGoblinRotatable_Event");
static_assert(offsetof(FGravyGoblinRotatable_Event, bIsRotatable) == 0x000000, "Member 'FGravyGoblinRotatable_Event::bIsRotatable' has a wrong offset!");

struct FGoopAudioMapRangeClamped final
{
public:
	struct FVector2D                              InRange;
	struct FVector2D                              OutRange;
};
static_assert(alignof(FGoopAudioMapRangeClamped) == 0x000008, "Wrong alignment on FGoopAudioMapRangeClamped");
static_assert(sizeof(FGoopAudioMapRangeClamped) == 0x000020, "Wrong size on FGoopAudioMapRangeClamped");
static_assert(offsetof(FGoopAudioMapRangeClamped, InRange) == 0x000000, "Member 'FGoopAudioMapRangeClamped::InRange' has a wrong offset!");
static_assert(offsetof(FGoopAudioMapRangeClamped, OutRange) == 0x000010, "Member 'FGoopAudioMapRangeClamped::OutRange' has a wrong offset!");

struct FPaddleGingerPropData final
{
public:
	class FText                                   CategoryLabelText;
	int32                                         PropIndex;
	int32                                         MaxPropCount;
	int32                                         CategoryIndex;
	int32                                         MaxCategoryCount;
	TWeakObjectPtr<class APlayerState>            Sender;
};
static_assert(alignof(FPaddleGingerPropData) == 0x000008, "Wrong alignment on FPaddleGingerPropData");
static_assert(sizeof(FPaddleGingerPropData) == 0x000030, "Wrong size on FPaddleGingerPropData");
static_assert(offsetof(FPaddleGingerPropData, CategoryLabelText) == 0x000000, "Member 'FPaddleGingerPropData::CategoryLabelText' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropData, PropIndex) == 0x000018, "Member 'FPaddleGingerPropData::PropIndex' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropData, MaxPropCount) == 0x00001C, "Member 'FPaddleGingerPropData::MaxPropCount' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropData, CategoryIndex) == 0x000020, "Member 'FPaddleGingerPropData::CategoryIndex' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropData, MaxCategoryCount) == 0x000024, "Member 'FPaddleGingerPropData::MaxCategoryCount' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropData, Sender) == 0x000028, "Member 'FPaddleGingerPropData::Sender' has a wrong offset!");

struct FPaddleGingerPropActivatedData final
{
public:
	bool                                          bActivated;
	uint8                                         Pad_1[0x7];
	class APlayerState*                           Sender;
};
static_assert(alignof(FPaddleGingerPropActivatedData) == 0x000008, "Wrong alignment on FPaddleGingerPropActivatedData");
static_assert(sizeof(FPaddleGingerPropActivatedData) == 0x000010, "Wrong size on FPaddleGingerPropActivatedData");
static_assert(offsetof(FPaddleGingerPropActivatedData, bActivated) == 0x000000, "Member 'FPaddleGingerPropActivatedData::bActivated' has a wrong offset!");
static_assert(offsetof(FPaddleGingerPropActivatedData, Sender) == 0x000008, "Member 'FPaddleGingerPropActivatedData::Sender' has a wrong offset!");

}
