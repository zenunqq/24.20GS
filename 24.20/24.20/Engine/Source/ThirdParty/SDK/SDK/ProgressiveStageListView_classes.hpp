#pragma once

#include "Basic.hpp"

#include "CrewUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UProgressiveStageListView_C final : public UFortProgressiveStageList
{
public:
	class UProgressiveStageWidget_C*              ProgressiveStageList;
	class UProgressiveStageWidget_C*              ProgressiveStageList_1;
	class UProgressiveStageWidget_C*              ProgressiveStageList_2;
	class UVerticalBox*                           VBox_StagesContainer;

public:
	class UFortProgressiveStageWidget* AddStageWidget();
	void ClearStageWidgets();
	class UWidget* On_Stage_Widget_Custom_Boundary(EUINavigation Navigation_0);
	void Update_Subscribed_Visuals(bool Is_Subscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveStageListView_C">();
	}
	static class UProgressiveStageListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveStageListView_C>();
	}
};
static_assert(alignof(UProgressiveStageListView_C) == 0x000008, "Wrong alignment on UProgressiveStageListView_C");
static_assert(sizeof(UProgressiveStageListView_C) == 0x000418, "Wrong size on UProgressiveStageListView_C");
static_assert(offsetof(UProgressiveStageListView_C, ProgressiveStageList) == 0x0003F8, "Member 'UProgressiveStageListView_C::ProgressiveStageList' has a wrong offset!");
static_assert(offsetof(UProgressiveStageListView_C, ProgressiveStageList_1) == 0x000400, "Member 'UProgressiveStageListView_C::ProgressiveStageList_1' has a wrong offset!");
static_assert(offsetof(UProgressiveStageListView_C, ProgressiveStageList_2) == 0x000408, "Member 'UProgressiveStageListView_C::ProgressiveStageList_2' has a wrong offset!");
static_assert(offsetof(UProgressiveStageListView_C, VBox_StagesContainer) == 0x000410, "Member 'UProgressiveStageListView_C::VBox_StagesContainer' has a wrong offset!");

}
