#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_UIKit_SideBarLeaveButton_C final : public UFortMainMenuLeaveButtonWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_UIKit_ButtonCTA_Base_C*            CommonButtonInternal;
	class FText                                   Text;

public:
	void ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton(int32 EntryPoint);
	void OnTextChanged(const class FText& Text_0);
	void OnTimerTextChanged(const class FText& Text_0);
	void OnTimerVisibilityChanged(ESlateVisibility InVisibility);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_SideBarLeaveButton_C">();
	}
	static class UWBP_UIKit_SideBarLeaveButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_SideBarLeaveButton_C>();
	}
};
static_assert(alignof(UWBP_UIKit_SideBarLeaveButton_C) == 0x000008, "Wrong alignment on UWBP_UIKit_SideBarLeaveButton_C");
static_assert(sizeof(UWBP_UIKit_SideBarLeaveButton_C) == 0x0002E8, "Wrong size on UWBP_UIKit_SideBarLeaveButton_C");
static_assert(offsetof(UWBP_UIKit_SideBarLeaveButton_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_UIKit_SideBarLeaveButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_SideBarLeaveButton_C, CommonButtonInternal) == 0x0002C8, "Member 'UWBP_UIKit_SideBarLeaveButton_C::CommonButtonInternal' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_SideBarLeaveButton_C, Text) == 0x0002D0, "Member 'UWBP_UIKit_SideBarLeaveButton_C::Text' has a wrong offset!");

}
