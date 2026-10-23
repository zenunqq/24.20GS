#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EStreamingRadioSourceState : uint8
{
	None                                     = 0,
	Loading                                  = 1,
	LoadingPlayer                            = 2,
	LoadedPlayer                             = 3,
	Playing                                  = 4,
	EStreamingRadioSourceState_MAX           = 5,
};

enum class EOnlineRadioSourceType : uint8
{
	Epic                                     = 0,
	EOnlineRadioSourceType_MAX               = 1,
};

enum class ERadioSource : uint8
{
	Invalid                                  = 0,
	Vehicle                                  = 1,
	ERadioSource_MAX                         = 2,
};

struct FAthenaRadioStation final
{
public:
	class FText                                   Title;
	class FString                                 StationImage;
	class FString                                 ResourceID;
};
static_assert(alignof(FAthenaRadioStation) == 0x000008, "Wrong alignment on FAthenaRadioStation");
static_assert(sizeof(FAthenaRadioStation) == 0x000038, "Wrong size on FAthenaRadioStation");
static_assert(offsetof(FAthenaRadioStation, Title) == 0x000000, "Member 'FAthenaRadioStation::Title' has a wrong offset!");
static_assert(offsetof(FAthenaRadioStation, StationImage) == 0x000018, "Member 'FAthenaRadioStation::StationImage' has a wrong offset!");
static_assert(offsetof(FAthenaRadioStation, ResourceID) == 0x000028, "Member 'FAthenaRadioStation::ResourceID' has a wrong offset!");

struct FSrirachaPerClassSpecialSeats final
{
public:
	TArray<int32>                                 OutsideSeatIndices;
};
static_assert(alignof(FSrirachaPerClassSpecialSeats) == 0x000008, "Wrong alignment on FSrirachaPerClassSpecialSeats");
static_assert(sizeof(FSrirachaPerClassSpecialSeats) == 0x000010, "Wrong size on FSrirachaPerClassSpecialSeats");
static_assert(offsetof(FSrirachaPerClassSpecialSeats, OutsideSeatIndices) == 0x000000, "Member 'FSrirachaPerClassSpecialSeats::OutsideSeatIndices' has a wrong offset!");

struct FStreamingRadioSourceData final
{
public:
	EStreamingRadioSourceState                    State;
	uint8                                         Pad_1[0x3];
	int32                                         PlayingIndex;
	float                                         FadeoutSeconds;
	uint8                                         Pad_C[0x4];
	struct FAthenaRadioStation                    SourceOverride;
};
static_assert(alignof(FStreamingRadioSourceData) == 0x000008, "Wrong alignment on FStreamingRadioSourceData");
static_assert(sizeof(FStreamingRadioSourceData) == 0x000048, "Wrong size on FStreamingRadioSourceData");
static_assert(offsetof(FStreamingRadioSourceData, State) == 0x000000, "Member 'FStreamingRadioSourceData::State' has a wrong offset!");
static_assert(offsetof(FStreamingRadioSourceData, PlayingIndex) == 0x000004, "Member 'FStreamingRadioSourceData::PlayingIndex' has a wrong offset!");
static_assert(offsetof(FStreamingRadioSourceData, FadeoutSeconds) == 0x000008, "Member 'FStreamingRadioSourceData::FadeoutSeconds' has a wrong offset!");
static_assert(offsetof(FStreamingRadioSourceData, SourceOverride) == 0x000010, "Member 'FStreamingRadioSourceData::SourceOverride' has a wrong offset!");

struct FSrirachaInputMappingData final
{
public:
	class FName                                   MainActionName;
	class FName                                   GamepadActionName;
	class FText                                   DisplayName;
};
static_assert(alignof(FSrirachaInputMappingData) == 0x000008, "Wrong alignment on FSrirachaInputMappingData");
static_assert(sizeof(FSrirachaInputMappingData) == 0x000020, "Wrong size on FSrirachaInputMappingData");
static_assert(offsetof(FSrirachaInputMappingData, MainActionName) == 0x000000, "Member 'FSrirachaInputMappingData::MainActionName' has a wrong offset!");
static_assert(offsetof(FSrirachaInputMappingData, GamepadActionName) == 0x000004, "Member 'FSrirachaInputMappingData::GamepadActionName' has a wrong offset!");
static_assert(offsetof(FSrirachaInputMappingData, DisplayName) == 0x000008, "Member 'FSrirachaInputMappingData::DisplayName' has a wrong offset!");

}
