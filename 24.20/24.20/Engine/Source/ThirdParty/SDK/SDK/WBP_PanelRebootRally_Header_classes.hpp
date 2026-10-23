#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_PanelRebootRally_Header_C final : public UFortSidebarPanelRebootHeader
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       float_0;
	class UWidgetAnimation*                       Default;
	class UImage*                                 Image_RebootRallyLogo;
	class UImage*                                 Image_Rewards;
	class UCommonRichTextBlock*                   RichText_RebootRallyDetails;
	class FText                                   Text_Eligible;
	class FText                                   Text_Ineligible;

public:
	void Construct();
	void ExecuteUbergraph_WBP_PanelRebootRally_Header(int32 EntryPoint);
	void OnRebootRallyEligibilityUpdated(bool bEligible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PanelRebootRally_Header_C">();
	}
	static class UWBP_PanelRebootRally_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PanelRebootRally_Header_C>();
	}
};
static_assert(alignof(UWBP_PanelRebootRally_Header_C) == 0x000008, "Wrong alignment on UWBP_PanelRebootRally_Header_C");
static_assert(sizeof(UWBP_PanelRebootRally_Header_C) == 0x0002F8, "Wrong size on UWBP_PanelRebootRally_Header_C");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, UberGraphFrame) == 0x000298, "Member 'UWBP_PanelRebootRally_Header_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, float_0) == 0x0002A0, "Member 'UWBP_PanelRebootRally_Header_C::float_0' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, Default) == 0x0002A8, "Member 'UWBP_PanelRebootRally_Header_C::Default' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, Image_RebootRallyLogo) == 0x0002B0, "Member 'UWBP_PanelRebootRally_Header_C::Image_RebootRallyLogo' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, Image_Rewards) == 0x0002B8, "Member 'UWBP_PanelRebootRally_Header_C::Image_Rewards' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, RichText_RebootRallyDetails) == 0x0002C0, "Member 'UWBP_PanelRebootRally_Header_C::RichText_RebootRallyDetails' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, Text_Eligible) == 0x0002C8, "Member 'UWBP_PanelRebootRally_Header_C::Text_Eligible' has a wrong offset!");
static_assert(offsetof(UWBP_PanelRebootRally_Header_C, Text_Ineligible) == 0x0002E0, "Member 'UWBP_PanelRebootRally_Header_C::Text_Ineligible' has a wrong offset!");

}
