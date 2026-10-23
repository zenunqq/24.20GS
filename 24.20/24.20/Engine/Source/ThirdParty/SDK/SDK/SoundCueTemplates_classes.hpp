#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class USoundCueTemplate : public USoundCue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueTemplate">();
	}
	static class USoundCueTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueTemplate>();
	}
};
static_assert(alignof(USoundCueTemplate) == 0x000008, "Wrong alignment on USoundCueTemplate");
static_assert(sizeof(USoundCueTemplate) == 0x000560, "Wrong size on USoundCueTemplate");

class USoundCueContainer final : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueContainer">();
	}
	static class USoundCueContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueContainer>();
	}
};
static_assert(alignof(USoundCueContainer) == 0x000008, "Wrong alignment on USoundCueContainer");
static_assert(sizeof(USoundCueContainer) == 0x000560, "Wrong size on USoundCueContainer");

class USoundCueDistanceCrossfade final : public USoundCueTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueDistanceCrossfade">();
	}
	static class USoundCueDistanceCrossfade* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueDistanceCrossfade>();
	}
};
static_assert(alignof(USoundCueDistanceCrossfade) == 0x000008, "Wrong alignment on USoundCueDistanceCrossfade");
static_assert(sizeof(USoundCueDistanceCrossfade) == 0x000560, "Wrong size on USoundCueDistanceCrossfade");

class USoundCueTemplateSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundCueTemplateSettings">();
	}
	static class USoundCueTemplateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueTemplateSettings>();
	}
};
static_assert(alignof(USoundCueTemplateSettings) == 0x000008, "Wrong alignment on USoundCueTemplateSettings");
static_assert(sizeof(USoundCueTemplateSettings) == 0x000030, "Wrong size on USoundCueTemplateSettings");

}
