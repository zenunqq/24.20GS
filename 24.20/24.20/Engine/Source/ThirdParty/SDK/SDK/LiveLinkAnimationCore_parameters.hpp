#pragma once

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"

namespace SDK::Params
{

struct LiveLinkInstance_SetRetargetAsset final
{
public:
	TSubclassOf<class ULiveLinkRetargetAsset>     RetargetAsset;
};
static_assert(alignof(LiveLinkInstance_SetRetargetAsset) == 0x000008, "Wrong alignment on LiveLinkInstance_SetRetargetAsset");
static_assert(sizeof(LiveLinkInstance_SetRetargetAsset) == 0x000008, "Wrong size on LiveLinkInstance_SetRetargetAsset");
static_assert(offsetof(LiveLinkInstance_SetRetargetAsset, RetargetAsset) == 0x000000, "Member 'LiveLinkInstance_SetRetargetAsset::RetargetAsset' has a wrong offset!");

struct LiveLinkInstance_SetSubject final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
};
static_assert(alignof(LiveLinkInstance_SetSubject) == 0x000004, "Wrong alignment on LiveLinkInstance_SetSubject");
static_assert(sizeof(LiveLinkInstance_SetSubject) == 0x000004, "Wrong size on LiveLinkInstance_SetSubject");
static_assert(offsetof(LiveLinkInstance_SetSubject, SubjectName) == 0x000000, "Member 'LiveLinkInstance_SetSubject::SubjectName' has a wrong offset!");

struct LiveLinkRemapAsset_GetRemappedBoneName final
{
public:
	class FName                                   BoneName;
	class FName                                   ReturnValue;
};
static_assert(alignof(LiveLinkRemapAsset_GetRemappedBoneName) == 0x000004, "Wrong alignment on LiveLinkRemapAsset_GetRemappedBoneName");
static_assert(sizeof(LiveLinkRemapAsset_GetRemappedBoneName) == 0x000008, "Wrong size on LiveLinkRemapAsset_GetRemappedBoneName");
static_assert(offsetof(LiveLinkRemapAsset_GetRemappedBoneName, BoneName) == 0x000000, "Member 'LiveLinkRemapAsset_GetRemappedBoneName::BoneName' has a wrong offset!");
static_assert(offsetof(LiveLinkRemapAsset_GetRemappedBoneName, ReturnValue) == 0x000004, "Member 'LiveLinkRemapAsset_GetRemappedBoneName::ReturnValue' has a wrong offset!");

struct LiveLinkRemapAsset_GetRemappedCurveName final
{
public:
	class FName                                   CurveName;
	class FName                                   ReturnValue;
};
static_assert(alignof(LiveLinkRemapAsset_GetRemappedCurveName) == 0x000004, "Wrong alignment on LiveLinkRemapAsset_GetRemappedCurveName");
static_assert(sizeof(LiveLinkRemapAsset_GetRemappedCurveName) == 0x000008, "Wrong size on LiveLinkRemapAsset_GetRemappedCurveName");
static_assert(offsetof(LiveLinkRemapAsset_GetRemappedCurveName, CurveName) == 0x000000, "Member 'LiveLinkRemapAsset_GetRemappedCurveName::CurveName' has a wrong offset!");
static_assert(offsetof(LiveLinkRemapAsset_GetRemappedCurveName, ReturnValue) == 0x000004, "Member 'LiveLinkRemapAsset_GetRemappedCurveName::ReturnValue' has a wrong offset!");

struct LiveLinkRemapAsset_RemapCurveElements final
{
public:
	TMap<class FName, float>                      CurveItems;
};
static_assert(alignof(LiveLinkRemapAsset_RemapCurveElements) == 0x000008, "Wrong alignment on LiveLinkRemapAsset_RemapCurveElements");
static_assert(sizeof(LiveLinkRemapAsset_RemapCurveElements) == 0x000050, "Wrong size on LiveLinkRemapAsset_RemapCurveElements");
static_assert(offsetof(LiveLinkRemapAsset_RemapCurveElements, CurveItems) == 0x000000, "Member 'LiveLinkRemapAsset_RemapCurveElements::CurveItems' has a wrong offset!");

}
