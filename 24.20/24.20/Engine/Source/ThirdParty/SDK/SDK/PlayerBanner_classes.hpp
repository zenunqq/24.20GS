#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPlayerBanner_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 BannerImage;
	class UCommonLoadGuard*                       LoadGuard;
	class UImage*                                 SurroundImage;
	class UCommonLoadGuard*                       SurroundLoadGuard;
	bool                                          bUseLargeTexture;
	uint8                                         Pad_2F1[0x7];
	struct FUniqueNetIdRepl                       OwnerNetId;
	class FName                                   CurrentBannerColorId;
	class FName                                   CurrentBannerIconId;
	bool                                          SurroundEnabled;

public:
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void ClearBannerState();
	void Destruct();
	void EnableSurround();
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID);
	void OnBannerIconLoaded(class UObject* LoadedObject);
	void OnSurroundIconLoaded(class UObject* LoadedObject);
	void RefreshSurround(int32 Level);
	void SetBannerColorId(class FName InBannerColorId);
	void SetBannerIconAndColor(class FName IconId, class FName ColorId);
	void SetBannerIconAndColorFromProfile();
	void SetBannerIconId(class FName InBannerIconId);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId);
	void SetupSurround();
	void ToggleBannerMask(bool Enable);
	void UnbindDelegates();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerBanner_C">();
	}
	static class UPlayerBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerBanner_C>();
	}
};
static_assert(alignof(UPlayerBanner_C) == 0x000008, "Wrong alignment on UPlayerBanner_C");
static_assert(sizeof(UPlayerBanner_C) == 0x000338, "Wrong size on UPlayerBanner_C");
static_assert(offsetof(UPlayerBanner_C, UberGraphFrame) == 0x0002C8, "Member 'UPlayerBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, BannerImage) == 0x0002D0, "Member 'UPlayerBanner_C::BannerImage' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, LoadGuard) == 0x0002D8, "Member 'UPlayerBanner_C::LoadGuard' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundImage) == 0x0002E0, "Member 'UPlayerBanner_C::SurroundImage' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundLoadGuard) == 0x0002E8, "Member 'UPlayerBanner_C::SurroundLoadGuard' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, bUseLargeTexture) == 0x0002F0, "Member 'UPlayerBanner_C::bUseLargeTexture' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, OwnerNetId) == 0x0002F8, "Member 'UPlayerBanner_C::OwnerNetId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerColorId) == 0x000328, "Member 'UPlayerBanner_C::CurrentBannerColorId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerIconId) == 0x00032C, "Member 'UPlayerBanner_C::CurrentBannerIconId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundEnabled) == 0x000330, "Member 'UPlayerBanner_C::SurroundEnabled' has a wrong offset!");

}
