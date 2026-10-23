#pragma once

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieSceneTracks_structs.hpp"

namespace SDK
{

struct FLiveLinkPropertyData final
{
public:
	class FName                                   PropertyName;
	uint8                                         Pad_4[0x4];
	TArray<struct FMovieSceneFloatChannel>        FloatChannel;
	TArray<struct FMovieSceneStringChannel>       StringChannel;
	TArray<struct FMovieSceneIntegerChannel>      IntegerChannel;
	TArray<struct FMovieSceneBoolChannel>         BoolChannel;
	TArray<struct FMovieSceneByteChannel>         ByteChannel;
};
static_assert(alignof(FLiveLinkPropertyData) == 0x000008, "Wrong alignment on FLiveLinkPropertyData");
static_assert(sizeof(FLiveLinkPropertyData) == 0x000058, "Wrong size on FLiveLinkPropertyData");
static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0x000000, "Member 'FLiveLinkPropertyData::PropertyName' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 0x000008, "Member 'FLiveLinkPropertyData::FloatChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 0x000018, "Member 'FLiveLinkPropertyData::StringChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 0x000028, "Member 'FLiveLinkPropertyData::IntegerChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 0x000038, "Member 'FLiveLinkPropertyData::BoolChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 0x000048, "Member 'FLiveLinkPropertyData::ByteChannel' has a wrong offset!");

struct FLiveLinkSubSectionData final
{
public:
	TArray<struct FLiveLinkPropertyData>          Properties;
};
static_assert(alignof(FLiveLinkSubSectionData) == 0x000008, "Wrong alignment on FLiveLinkSubSectionData");
static_assert(sizeof(FLiveLinkSubSectionData) == 0x000010, "Wrong size on FLiveLinkSubSectionData");
static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0x000000, "Member 'FLiveLinkSubSectionData::Properties' has a wrong offset!");

struct FMovieSceneLiveLinkSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                 SubjectPreset;
	TArray<bool>                                  ChannelMask;
	TArray<struct FLiveLinkSubSectionData>        SubSectionsData;
	uint8                                         Pad_90[0x28];
};
static_assert(alignof(FMovieSceneLiveLinkSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneLiveLinkSectionTemplate");
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x0000B8, "Wrong size on FMovieSceneLiveLinkSectionTemplate");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 0x000038, "Member 'FMovieSceneLiveLinkSectionTemplate::SubjectPreset' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 0x000070, "Member 'FMovieSceneLiveLinkSectionTemplate::ChannelMask' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 0x000080, "Member 'FMovieSceneLiveLinkSectionTemplate::SubSectionsData' has a wrong offset!");

}
