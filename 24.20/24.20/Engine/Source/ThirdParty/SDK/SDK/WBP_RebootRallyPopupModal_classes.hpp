#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_RebootRallyPopupModal_C final : public URebootRallyQRModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_RebootRallyPopupModal_Background_C* WBP_RebootRallyPopupModal_Background;
	class UWBP_RebootRallyPopupModal_DetailsText_C* WBP_RebootRallyPopupModal_DetailsText;
	class UWBP_RebootRallyPopupModal_HeaderText_C* WBP_RebootRallyPopupModal_HeaderText;
	class UWBP_RebootRallyPopupModal_Image_C*     WBP_RebootRallyPopupModal_Image;
	class FText                                   DetailsTextNewPlayer;
	class FText                                   DetailsTextOldPlayer;

public:
	void Construct();
	void ExecuteUbergraph_WBP_RebootRallyPopupModal(int32 EntryPoint);
	void OnFailure_64C14A3847EFAA993FB47C990CFD9E3D();
	void OnIgnored_64C14A3847EFAA993FB47C990CFD9E3D();
	void OnSetIsInvite(bool bIsInvited);
	void OnSuccess_64C14A3847EFAA993FB47C990CFD9E3D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyPopupModal_C">();
	}
	static class UWBP_RebootRallyPopupModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyPopupModal_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyPopupModal_C) == 0x000008, "Wrong alignment on UWBP_RebootRallyPopupModal_C");
static_assert(sizeof(UWBP_RebootRallyPopupModal_C) == 0x000420, "Wrong size on UWBP_RebootRallyPopupModal_C");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, UberGraphFrame) == 0x0003C8, "Member 'UWBP_RebootRallyPopupModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, WBP_RebootRallyPopupModal_Background) == 0x0003D0, "Member 'UWBP_RebootRallyPopupModal_C::WBP_RebootRallyPopupModal_Background' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, WBP_RebootRallyPopupModal_DetailsText) == 0x0003D8, "Member 'UWBP_RebootRallyPopupModal_C::WBP_RebootRallyPopupModal_DetailsText' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, WBP_RebootRallyPopupModal_HeaderText) == 0x0003E0, "Member 'UWBP_RebootRallyPopupModal_C::WBP_RebootRallyPopupModal_HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, WBP_RebootRallyPopupModal_Image) == 0x0003E8, "Member 'UWBP_RebootRallyPopupModal_C::WBP_RebootRallyPopupModal_Image' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, DetailsTextNewPlayer) == 0x0003F0, "Member 'UWBP_RebootRallyPopupModal_C::DetailsTextNewPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_C, DetailsTextOldPlayer) == 0x000408, "Member 'UWBP_RebootRallyPopupModal_C::DetailsTextOldPlayer' has a wrong offset!");

}
