#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETwoPlayerSplitScreenType : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	ETwoPlayerSplitScreenType_MAX            = 2,
};

enum class EThreePlayerSplitScreenType : uint8
{
	FavorTop                                 = 0,
	FavorBottom                              = 1,
	Vertical                                 = 2,
	Horizontal                               = 3,
	EThreePlayerSplitScreenType_MAX          = 4,
};

enum class EFourPlayerSplitScreenType : uint8
{
	Grid                                     = 0,
	Vertical                                 = 1,
	Horizontal                               = 2,
	EFourPlayerSplitScreenType_MAX           = 3,
};

enum class ESubLevelStripMode : uint8
{
	ExactClass                               = 0,
	IsChildOf                                = 1,
	ESubLevelStripMode_MAX                   = 2,
};

struct FAutoCompleteCommand final
{
public:
	class FString                                 Command;
	class FString                                 Desc;
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FAutoCompleteCommand) == 0x000008, "Wrong alignment on FAutoCompleteCommand");
static_assert(sizeof(FAutoCompleteCommand) == 0x000028, "Wrong size on FAutoCompleteCommand");
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x000000, "Member 'FAutoCompleteCommand::Command' has a wrong offset!");
static_assert(offsetof(FAutoCompleteCommand, Desc) == 0x000010, "Member 'FAutoCompleteCommand::Desc' has a wrong offset!");

struct FGameModeName final
{
public:
	class FString                                 Name;
	struct FSoftClassPath                         GameMode;
};
static_assert(alignof(FGameModeName) == 0x000008, "Wrong alignment on FGameModeName");
static_assert(sizeof(FGameModeName) == 0x000028, "Wrong size on FGameModeName");
static_assert(offsetof(FGameModeName, Name) == 0x000000, "Member 'FGameModeName::Name' has a wrong offset!");
static_assert(offsetof(FGameModeName, GameMode) == 0x000010, "Member 'FGameModeName::GameMode' has a wrong offset!");

struct FTemplateMapInfoOverride final
{
public:
	struct FSoftObjectPath                        Thumbnail;
	struct FSoftObjectPath                        Map;
	class FText                                   DisplayName;
};
static_assert(alignof(FTemplateMapInfoOverride) == 0x000008, "Wrong alignment on FTemplateMapInfoOverride");
static_assert(sizeof(FTemplateMapInfoOverride) == 0x000048, "Wrong size on FTemplateMapInfoOverride");
static_assert(offsetof(FTemplateMapInfoOverride, Thumbnail) == 0x000000, "Member 'FTemplateMapInfoOverride::Thumbnail' has a wrong offset!");
static_assert(offsetof(FTemplateMapInfoOverride, Map) == 0x000018, "Member 'FTemplateMapInfoOverride::Map' has a wrong offset!");
static_assert(offsetof(FTemplateMapInfoOverride, DisplayName) == 0x000030, "Member 'FTemplateMapInfoOverride::DisplayName' has a wrong offset!");

}
