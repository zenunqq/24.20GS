#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UPlayerRankEmblem_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Flash;
	class UPlayerBanner_C*                        PlayerBanner;
	bool                                          BindToLocalPlayerByDefault;

public:
	void SetBannerSurroundLevel(int32 Level, bool Animate);
	void SetBannerOwner(class AFortPlayerController* Target);
	void SetBannerInfo(const struct FPlayerBannerInfo& Banner);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRankEmblem_C">();
	}
	static class UPlayerRankEmblem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerRankEmblem_C>();
	}
};
static_assert(alignof(UPlayerRankEmblem_C) == 0x000008, "Wrong alignment on UPlayerRankEmblem_C");
static_assert(sizeof(UPlayerRankEmblem_C) == 0x0002B0, "Wrong size on UPlayerRankEmblem_C");
static_assert(offsetof(UPlayerRankEmblem_C, UberGraphFrame) == 0x000290, "Member 'UPlayerRankEmblem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerRankEmblem_C, Flash) == 0x000298, "Member 'UPlayerRankEmblem_C::Flash' has a wrong offset!");
static_assert(offsetof(UPlayerRankEmblem_C, PlayerBanner) == 0x0002A0, "Member 'UPlayerRankEmblem_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UPlayerRankEmblem_C, BindToLocalPlayerByDefault) == 0x0002A8, "Member 'UPlayerRankEmblem_C::BindToLocalPlayerByDefault' has a wrong offset!");

}
