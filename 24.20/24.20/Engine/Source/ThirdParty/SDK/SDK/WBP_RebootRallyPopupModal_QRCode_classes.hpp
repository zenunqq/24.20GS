#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_RebootRallyPopupModal_QRCode_C final : public URebootRallyQRCode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_QRCode;
	class UCommonTextBlock*                       Text_QRAction;
	bool                                          bIsInvite;
	uint8                                         Pad_13F9[0x7];
	class FString                                 QRCodeURL;
	bool                                          bIsSwitch;

public:
	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode(int32 EntryPoint);
	void InputMethodChanged(ECommonInputType NewInputType);
	void OnInitialized();
	void SetIsInvite(bool bIsInvite_0);
	void UpdateQRCode(ECommonInputType NewInputType);
	void UpdateText(ECommonInputType NewInputType);
	void UpdateURL(ECommonInputType NewInputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyPopupModal_QRCode_C">();
	}
	static class UWBP_RebootRallyPopupModal_QRCode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyPopupModal_QRCode_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyPopupModal_QRCode_C) == 0x000010, "Wrong alignment on UWBP_RebootRallyPopupModal_QRCode_C");
static_assert(sizeof(UWBP_RebootRallyPopupModal_QRCode_C) == 0x001420, "Wrong size on UWBP_RebootRallyPopupModal_QRCode_C");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, UberGraphFrame) == 0x0013E0, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, Image_QRCode) == 0x0013E8, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::Image_QRCode' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, Text_QRAction) == 0x0013F0, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::Text_QRAction' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, bIsInvite) == 0x0013F8, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::bIsInvite' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, QRCodeURL) == 0x001400, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::QRCodeURL' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_QRCode_C, bIsSwitch) == 0x001410, "Member 'UWBP_RebootRallyPopupModal_QRCode_C::bIsSwitch' has a wrong offset!");

}
