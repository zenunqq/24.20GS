#pragma once

#include "Basic.hpp"

#include "LiveLinkMovieScene_structs.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieSceneTracks_classes.hpp"

namespace SDK
{

class UMovieSceneLiveLinkSection final : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                 SubjectPreset;
	TArray<bool>                                  ChannelMask;
	TArray<class UMovieSceneLiveLinkSubSection*>  SubSections;
	uint8                                         Pad_148[0x10];
	class FName                                   SubjectName;
	uint8                                         Pad_15C[0x4];
	struct FLiveLinkFrameData                     TemplateToPush;
	struct FLiveLinkRefSkeleton                   RefSkeleton;
	TArray<class FName>                           CurveNames;
	TArray<struct FMovieSceneFloatChannel>        PropertyFloatChannels;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSection">();
	}
	static class UMovieSceneLiveLinkSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSection>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSection) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSection");
static_assert(sizeof(UMovieSceneLiveLinkSection) == 0x000230, "Wrong size on UMovieSceneLiveLinkSection");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 0x0000F0, "Member 'UMovieSceneLiveLinkSection::SubjectPreset' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 0x000128, "Member 'UMovieSceneLiveLinkSection::ChannelMask' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubSections) == 0x000138, "Member 'UMovieSceneLiveLinkSection::SubSections' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 0x000158, "Member 'UMovieSceneLiveLinkSection::SubjectName' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 0x000160, "Member 'UMovieSceneLiveLinkSection::TemplateToPush' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 0x0001F0, "Member 'UMovieSceneLiveLinkSection::RefSkeleton' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 0x000210, "Member 'UMovieSceneLiveLinkSection::CurveNames' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 0x000220, "Member 'UMovieSceneLiveLinkSection::PropertyFloatChannels' has a wrong offset!");

class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData                SubSectionData;
	TSubclassOf<class ULiveLinkRole>              SubjectRole;
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSection">();
	}
	static class UMovieSceneLiveLinkSubSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSection>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSection) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSection");
static_assert(sizeof(UMovieSceneLiveLinkSubSection) == 0x000050, "Wrong size on UMovieSceneLiveLinkSubSection");
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 0x000028, "Member 'UMovieSceneLiveLinkSubSection::SubSectionData' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 0x000038, "Member 'UMovieSceneLiveLinkSubSection::SubjectRole' has a wrong offset!");

class UMovieSceneLiveLinkSubSectionAnimation final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionAnimation">();
	}
	static class UMovieSceneLiveLinkSubSectionAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionAnimation>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionAnimation) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionAnimation");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionAnimation) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionAnimation");

class UMovieSceneLiveLinkSubSectionBasicRole final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionBasicRole">();
	}
	static class UMovieSceneLiveLinkSubSectionBasicRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionBasicRole>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionBasicRole");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionBasicRole");

class UMovieSceneLiveLinkSubSectionProperties final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionProperties">();
	}
	static class UMovieSceneLiveLinkSubSectionProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionProperties>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionProperties) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionProperties");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionProperties) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionProperties");

class UMovieSceneLiveLinkTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];
	TSubclassOf<class ULiveLinkRole>              TrackRole;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkTrack">();
	}
	static class UMovieSceneLiveLinkTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkTrack>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkTrack) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkTrack");
static_assert(sizeof(UMovieSceneLiveLinkTrack) == 0x0000D0, "Wrong size on UMovieSceneLiveLinkTrack");
static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 0x0000C8, "Member 'UMovieSceneLiveLinkTrack::TrackRole' has a wrong offset!");

}
