#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UAthenaFullScreenQuestMapContent_C final : public UAthenaFullScreenQuestMapContent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       MapTransparency;
	class UWidgetAnimation*                       ShowMap;
	class UWidgetAnimation*                       Disable;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_Punchards_;
	class USafeZone*                              SafeZone_1;

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_AthenaFullScreenQuestMapContent(int32 EntryPoint);
	void OnChallengeCategoryChanged();
	void OnQuestListGainedFocus();
	void OnQuestListLostFocus();
	void SetEnabled(bool Enabled);
	void ShowMapLayerContainer(const bool bShowing);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFullScreenQuestMapContent_C">();
	}
	static class UAthenaFullScreenQuestMapContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFullScreenQuestMapContent_C>();
	}
};
static_assert(alignof(UAthenaFullScreenQuestMapContent_C) == 0x000008, "Wrong alignment on UAthenaFullScreenQuestMapContent_C");
static_assert(sizeof(UAthenaFullScreenQuestMapContent_C) == 0x000670, "Wrong size on UAthenaFullScreenQuestMapContent_C");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, UberGraphFrame) == 0x000638, "Member 'UAthenaFullScreenQuestMapContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, MapTransparency) == 0x000640, "Member 'UAthenaFullScreenQuestMapContent_C::MapTransparency' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, ShowMap) == 0x000648, "Member 'UAthenaFullScreenQuestMapContent_C::ShowMap' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, Disable) == 0x000650, "Member 'UAthenaFullScreenQuestMapContent_C::Disable' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, Intro) == 0x000658, "Member 'UAthenaFullScreenQuestMapContent_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, Image_Punchards_) == 0x000660, "Member 'UAthenaFullScreenQuestMapContent_C::Image_Punchards_' has a wrong offset!");
static_assert(offsetof(UAthenaFullScreenQuestMapContent_C, SafeZone_1) == 0x000668, "Member 'UAthenaFullScreenQuestMapContent_C::SafeZone_1' has a wrong offset!");

}
