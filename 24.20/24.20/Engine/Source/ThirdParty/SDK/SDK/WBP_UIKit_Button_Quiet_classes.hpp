#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_UIKit_ButtonCTA_Base_classes.hpp"
#include "CommonInput_structs.hpp"

namespace SDK
{

class UWBP_UIKit_Button_Quiet_C final : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_UIKit_Button_Quiet_C;
	bool                                          isDarkBackground;

public:
	void BP_OnInputMethodChanged(ECommonInputType CurrentInputType_0);
	void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32 EntryPoint);
	void HideBackground(ECommonInputType InputType);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_Button_Quiet_C">();
	}
	static class UWBP_UIKit_Button_Quiet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_Button_Quiet_C>();
	}
};
static_assert(alignof(UWBP_UIKit_Button_Quiet_C) == 0x000010, "Wrong alignment on UWBP_UIKit_Button_Quiet_C");
static_assert(sizeof(UWBP_UIKit_Button_Quiet_C) == 0x001A00, "Wrong size on UWBP_UIKit_Button_Quiet_C");
static_assert(offsetof(UWBP_UIKit_Button_Quiet_C, UberGraphFrame_WBP_UIKit_Button_Quiet_C) == 0x0019E8, "Member 'UWBP_UIKit_Button_Quiet_C::UberGraphFrame_WBP_UIKit_Button_Quiet_C' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_Button_Quiet_C, isDarkBackground) == 0x0019F0, "Member 'UWBP_UIKit_Button_Quiet_C::isDarkBackground' has a wrong offset!");

}
