#pragma once

#include "Basic.hpp"

#include "FortniteAI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UConvertedMarkerInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Avatar;
	class UImage*                                 Image_Command;
	class UCommonVisibilitySwitcher*              ImageSwitcher;
	class UImage*                                 SquadMarker;
	struct FTimerHandle                           DBNOPulseTimer;
	struct FGameplayTagContainer                  RelevantPlaylistTags;
	bool                                          bIsTalking;
	bool                                          bShowBackgroundOverridden;
	bool                                          bEnemyVersion;
	uint8                                         Pad_2E3[0x5];
	TSoftObjectPtr<class UTexture2D>              Icon_Move;
	TSoftObjectPtr<class UTexture2D>              Icon_Hold;
	TSoftObjectPtr<class UTexture2D>              Icon_BackToMe;
	TSoftObjectPtr<class UTexture2D>              Icon_Revive;
	TSoftObjectPtr<class UTexture2D>              Icon_Attack;

public:
	void ExecuteUbergraph_ConvertedMarkerInfo(int32 EntryPoint);
	void InitNPCCommandIcon(const struct FLinearColor& Color);
	void InitPlayerIconState(class AFortPlayerStateAthena* PSA);
	void OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(class UObject* Loaded);
	void OnLoaded_68559753464A154900ECA9BC6BB940C0(class UObject* Loaded);
	void OverrideShowBackground(bool bShowBackground);
	void PreConstruct(bool IsDesignTime);
	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible);
	void UpdateCommandIcon(EPingCommandType PingCommand, const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConvertedMarkerInfo_C">();
	}
	static class UConvertedMarkerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConvertedMarkerInfo_C>();
	}
};
static_assert(alignof(UConvertedMarkerInfo_C) == 0x000008, "Wrong alignment on UConvertedMarkerInfo_C");
static_assert(sizeof(UConvertedMarkerInfo_C) == 0x0003B0, "Wrong size on UConvertedMarkerInfo_C");
static_assert(offsetof(UConvertedMarkerInfo_C, UberGraphFrame) == 0x000290, "Member 'UConvertedMarkerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Image_Avatar) == 0x000298, "Member 'UConvertedMarkerInfo_C::Image_Avatar' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Image_Command) == 0x0002A0, "Member 'UConvertedMarkerInfo_C::Image_Command' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, ImageSwitcher) == 0x0002A8, "Member 'UConvertedMarkerInfo_C::ImageSwitcher' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, SquadMarker) == 0x0002B0, "Member 'UConvertedMarkerInfo_C::SquadMarker' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, DBNOPulseTimer) == 0x0002B8, "Member 'UConvertedMarkerInfo_C::DBNOPulseTimer' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, RelevantPlaylistTags) == 0x0002C0, "Member 'UConvertedMarkerInfo_C::RelevantPlaylistTags' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bIsTalking) == 0x0002E0, "Member 'UConvertedMarkerInfo_C::bIsTalking' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bShowBackgroundOverridden) == 0x0002E1, "Member 'UConvertedMarkerInfo_C::bShowBackgroundOverridden' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bEnemyVersion) == 0x0002E2, "Member 'UConvertedMarkerInfo_C::bEnemyVersion' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Icon_Move) == 0x0002E8, "Member 'UConvertedMarkerInfo_C::Icon_Move' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Icon_Hold) == 0x000310, "Member 'UConvertedMarkerInfo_C::Icon_Hold' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Icon_BackToMe) == 0x000338, "Member 'UConvertedMarkerInfo_C::Icon_BackToMe' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Icon_Revive) == 0x000360, "Member 'UConvertedMarkerInfo_C::Icon_Revive' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Icon_Attack) == 0x000388, "Member 'UConvertedMarkerInfo_C::Icon_Attack' has a wrong offset!");

}
