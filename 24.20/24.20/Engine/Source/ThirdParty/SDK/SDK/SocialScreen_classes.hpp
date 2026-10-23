#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialScreen_C final : public UAthenaSocialScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       RiftFadeIn;
	class USizeBox*                               BottomButtonsSB;
	class UImage*                                 Image_DefaultBackground;
	class USafeZone*                              SafeZone_2;
	class USafeZone*                              SafeZone_4;
	class USizeBox*                               SizeBox_ViewCareer;
	struct FDataTableRowHandle                    Input_ShowCareerScreen;
	bool                                          AutoPlayVideo;

public:
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_SocialScreen(int32 EntryPoint);
	void Show_Career_Screen_Event(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialScreen_C">();
	}
	static class USocialScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialScreen_C>();
	}
};
static_assert(alignof(USocialScreen_C) == 0x000008, "Wrong alignment on USocialScreen_C");
static_assert(sizeof(USocialScreen_C) == 0x000538, "Wrong size on USocialScreen_C");
static_assert(offsetof(USocialScreen_C, UberGraphFrame) == 0x0004E8, "Member 'USocialScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, RiftFadeIn) == 0x0004F0, "Member 'USocialScreen_C::RiftFadeIn' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, BottomButtonsSB) == 0x0004F8, "Member 'USocialScreen_C::BottomButtonsSB' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, Image_DefaultBackground) == 0x000500, "Member 'USocialScreen_C::Image_DefaultBackground' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, SafeZone_2) == 0x000508, "Member 'USocialScreen_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, SafeZone_4) == 0x000510, "Member 'USocialScreen_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, SizeBox_ViewCareer) == 0x000518, "Member 'USocialScreen_C::SizeBox_ViewCareer' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, Input_ShowCareerScreen) == 0x000520, "Member 'USocialScreen_C::Input_ShowCareerScreen' has a wrong offset!");
static_assert(offsetof(USocialScreen_C, AutoPlayVideo) == 0x000530, "Member 'USocialScreen_C::AutoPlayVideo' has a wrong offset!");

}
