#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PictureInPictureUI_classes.hpp"

namespace SDK
{

class UFNEventsMetadataOverlay_C final : public UPictureInPictureMetadataOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Liked_Ani_1to1;
	class UWidgetAnimation*                       FadeInfo_Ani;
	class UWidgetAnimation*                       Liked_Ani;
	class UPictureInPictureClient*                PictureInPictureClient;
	class UPictureInPictureFNEventsController*    FNEventsController;
	TMulticastInlineDelegate<void()>              EventDispatcher_Skip;
	TMulticastInlineDelegate<void()>              EventDispatcher_Prev;

public:
	void OnPartnerUpdateComplete();
	void ExecuteUbergraph_FNEventsMetadataOverlay(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FNEventsMetadataOverlay_C">();
	}
	static class UFNEventsMetadataOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFNEventsMetadataOverlay_C>();
	}
};
static_assert(alignof(UFNEventsMetadataOverlay_C) == 0x000008, "Wrong alignment on UFNEventsMetadataOverlay_C");
static_assert(sizeof(UFNEventsMetadataOverlay_C) == 0x0003F8, "Wrong size on UFNEventsMetadataOverlay_C");
static_assert(offsetof(UFNEventsMetadataOverlay_C, UberGraphFrame) == 0x0003A8, "Member 'UFNEventsMetadataOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, Liked_Ani_1to1) == 0x0003B0, "Member 'UFNEventsMetadataOverlay_C::Liked_Ani_1to1' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, FadeInfo_Ani) == 0x0003B8, "Member 'UFNEventsMetadataOverlay_C::FadeInfo_Ani' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, Liked_Ani) == 0x0003C0, "Member 'UFNEventsMetadataOverlay_C::Liked_Ani' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, PictureInPictureClient) == 0x0003C8, "Member 'UFNEventsMetadataOverlay_C::PictureInPictureClient' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, FNEventsController) == 0x0003D0, "Member 'UFNEventsMetadataOverlay_C::FNEventsController' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, EventDispatcher_Skip) == 0x0003D8, "Member 'UFNEventsMetadataOverlay_C::EventDispatcher_Skip' has a wrong offset!");
static_assert(offsetof(UFNEventsMetadataOverlay_C, EventDispatcher_Prev) == 0x0003E8, "Member 'UFNEventsMetadataOverlay_C::EventDispatcher_Prev' has a wrong offset!");

}
