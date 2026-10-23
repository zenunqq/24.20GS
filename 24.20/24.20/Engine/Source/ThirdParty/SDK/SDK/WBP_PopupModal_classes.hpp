#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_PopupModal_C final : public UFortPopupModal
{
public:
	class UNamedSlot*                             NamedSlot_Background;
	class UNamedSlot*                             NamedSlot_DetailsText;
	class UNamedSlot*                             NamedSlot_HeaderText;
	class UNamedSlot*                             NamedSlot_Image;
	class UNamedSlot*                             NamedSlot_InputBlock;
	class UNamedSlot*                             NamedSlot_MobileCloseButton;
	class UNamedSlot*                             NamedSlot_QRCode;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupModal_C">();
	}
	static class UWBP_PopupModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupModal_C>();
	}
};
static_assert(alignof(UWBP_PopupModal_C) == 0x000008, "Wrong alignment on UWBP_PopupModal_C");
static_assert(sizeof(UWBP_PopupModal_C) == 0x0002A8, "Wrong size on UWBP_PopupModal_C");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_Background) == 0x000270, "Member 'UWBP_PopupModal_C::NamedSlot_Background' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_DetailsText) == 0x000278, "Member 'UWBP_PopupModal_C::NamedSlot_DetailsText' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_HeaderText) == 0x000280, "Member 'UWBP_PopupModal_C::NamedSlot_HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_Image) == 0x000288, "Member 'UWBP_PopupModal_C::NamedSlot_Image' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_InputBlock) == 0x000290, "Member 'UWBP_PopupModal_C::NamedSlot_InputBlock' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_MobileCloseButton) == 0x000298, "Member 'UWBP_PopupModal_C::NamedSlot_MobileCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_PopupModal_C, NamedSlot_QRCode) == 0x0002A0, "Member 'UWBP_PopupModal_C::NamedSlot_QRCode' has a wrong offset!");

}
