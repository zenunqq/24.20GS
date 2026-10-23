#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_UIKit_ButtonCTA_Base_classes.hpp"

namespace SDK
{

class UWBP_UIKit_Button_Loud_C final : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_UIKit_Button_Loud_C;

public:
	void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_Button_Loud_C">();
	}
	static class UWBP_UIKit_Button_Loud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_Button_Loud_C>();
	}
};
static_assert(alignof(UWBP_UIKit_Button_Loud_C) == 0x000010, "Wrong alignment on UWBP_UIKit_Button_Loud_C");
static_assert(sizeof(UWBP_UIKit_Button_Loud_C) == 0x0019F0, "Wrong size on UWBP_UIKit_Button_Loud_C");
static_assert(offsetof(UWBP_UIKit_Button_Loud_C, UberGraphFrame_WBP_UIKit_Button_Loud_C) == 0x0019E8, "Member 'UWBP_UIKit_Button_Loud_C::UberGraphFrame_WBP_UIKit_Button_Loud_C' has a wrong offset!");

}
