#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "SubtitlesWidgets_structs.hpp"

namespace SDK
{

class USubtitleDisplayOptions final : public UDataAsset
{
public:
	struct FSlateFontInfo                         Font;
	int32                                         DisplayTextSizes[0x5];
	struct FLinearColor                           DisplayTextColors[0x2];
	float                                         DisplayBorderSize[0x3];
	float                                         DisplayBackgroundOpacity[0x5];
	uint8                                         Pad_DC[0x4];
	struct FSlateBrush                            BackgroundBrush;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplayOptions">();
	}
	static class USubtitleDisplayOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplayOptions>();
	}
};
static_assert(alignof(USubtitleDisplayOptions) == 0x000010, "Wrong alignment on USubtitleDisplayOptions");
static_assert(sizeof(USubtitleDisplayOptions) == 0x0001A0, "Wrong size on USubtitleDisplayOptions");
static_assert(offsetof(USubtitleDisplayOptions, Font) == 0x000030, "Member 'USubtitleDisplayOptions::Font' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextSizes) == 0x000088, "Member 'USubtitleDisplayOptions::DisplayTextSizes' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextColors) == 0x00009C, "Member 'USubtitleDisplayOptions::DisplayTextColors' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBorderSize) == 0x0000BC, "Member 'USubtitleDisplayOptions::DisplayBorderSize' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBackgroundOpacity) == 0x0000C8, "Member 'USubtitleDisplayOptions::DisplayBackgroundOpacity' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, BackgroundBrush) == 0x0000E0, "Member 'USubtitleDisplayOptions::BackgroundBrush' has a wrong offset!");

class USubtitleDisplay final : public UWidget
{
public:
	struct FSubtitleFormat                        Format;
	uint8                                         Pad_14C[0x4];
	class USubtitleDisplayOptions*                Options;
	float                                         WrapTextAt;
	bool                                          bPreviewMode;
	uint8                                         Pad_15D[0x3];
	class FText                                   PreviewText;
	uint8                                         Pad_178[0x8];
	struct FTextBlockStyle                        GeneratedStyle;
	struct FSlateBrush                            GeneratedBackgroundBorder;
	uint8                                         Pad_550[0x10];

public:
	bool HasSubtitles() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplay">();
	}
	static class USubtitleDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplay>();
	}
};
static_assert(alignof(USubtitleDisplay) == 0x000010, "Wrong alignment on USubtitleDisplay");
static_assert(sizeof(USubtitleDisplay) == 0x000560, "Wrong size on USubtitleDisplay");
static_assert(offsetof(USubtitleDisplay, Format) == 0x000148, "Member 'USubtitleDisplay::Format' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, Options) == 0x000150, "Member 'USubtitleDisplay::Options' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, WrapTextAt) == 0x000158, "Member 'USubtitleDisplay::WrapTextAt' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, bPreviewMode) == 0x00015C, "Member 'USubtitleDisplay::bPreviewMode' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, PreviewText) == 0x000160, "Member 'USubtitleDisplay::PreviewText' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, GeneratedStyle) == 0x000180, "Member 'USubtitleDisplay::GeneratedStyle' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, GeneratedBackgroundBorder) == 0x000490, "Member 'USubtitleDisplay::GeneratedBackgroundBorder' has a wrong offset!");

class USubtitleDisplayNative final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class USubtitleDisplayOptions*                Options;
	uint8                                         Pad_38[0x8];
	struct FTextBlockStyle                        GeneratedStyle;
	struct FSlateBrush                            GeneratedBackgroundBorder;
	uint8                                         Pad_410[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplayNative">();
	}
	static class USubtitleDisplayNative* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplayNative>();
	}
};
static_assert(alignof(USubtitleDisplayNative) == 0x000010, "Wrong alignment on USubtitleDisplayNative");
static_assert(sizeof(USubtitleDisplayNative) == 0x000420, "Wrong size on USubtitleDisplayNative");
static_assert(offsetof(USubtitleDisplayNative, Options) == 0x000030, "Member 'USubtitleDisplayNative::Options' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayNative, GeneratedStyle) == 0x000040, "Member 'USubtitleDisplayNative::GeneratedStyle' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayNative, GeneratedBackgroundBorder) == 0x000350, "Member 'USubtitleDisplayNative::GeneratedBackgroundBorder' has a wrong offset!");

class UFortMediaSubtitlesPlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UOverlays*                              SourceSubtitles;
	uint8                                         Pad_38[0x20];

public:
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void Play();
	void SetSubtitles(class UOverlays* Subtitles);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMediaSubtitlesPlayer">();
	}
	static class UFortMediaSubtitlesPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMediaSubtitlesPlayer>();
	}
};
static_assert(alignof(UFortMediaSubtitlesPlayer) == 0x000008, "Wrong alignment on UFortMediaSubtitlesPlayer");
static_assert(sizeof(UFortMediaSubtitlesPlayer) == 0x000058, "Wrong size on UFortMediaSubtitlesPlayer");
static_assert(offsetof(UFortMediaSubtitlesPlayer, SourceSubtitles) == 0x000030, "Member 'UFortMediaSubtitlesPlayer::SourceSubtitles' has a wrong offset!");

class USubtitleDisplaySubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x18];
	struct FSubtitleFormat                        SubtitleFormat;
	uint8                                         Pad_4C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplaySubsystem">();
	}
	static class USubtitleDisplaySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplaySubsystem>();
	}
};
static_assert(alignof(USubtitleDisplaySubsystem) == 0x000008, "Wrong alignment on USubtitleDisplaySubsystem");
static_assert(sizeof(USubtitleDisplaySubsystem) == 0x000050, "Wrong size on USubtitleDisplaySubsystem");
static_assert(offsetof(USubtitleDisplaySubsystem, SubtitleFormat) == 0x000048, "Member 'USubtitleDisplaySubsystem::SubtitleFormat' has a wrong offset!");

}
