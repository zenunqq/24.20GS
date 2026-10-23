#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_EnterCabinModeModal_C final : public UFortEnterCabinModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 FortniteLogo;
	class USafeZone*                              SafeZone;

public:
	void ExecuteUbergraph_WBP_EnterCabinModeModal(int32 EntryPoint);
	void SwapPanel(class UWidget* PanelToSwapTo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnterCabinModeModal_C">();
	}
	static class UWBP_EnterCabinModeModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnterCabinModeModal_C>();
	}
};
static_assert(alignof(UWBP_EnterCabinModeModal_C) == 0x000008, "Wrong alignment on UWBP_EnterCabinModeModal_C");
static_assert(sizeof(UWBP_EnterCabinModeModal_C) == 0x0003F0, "Wrong size on UWBP_EnterCabinModeModal_C");
static_assert(offsetof(UWBP_EnterCabinModeModal_C, UberGraphFrame) == 0x0003D8, "Member 'UWBP_EnterCabinModeModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EnterCabinModeModal_C, FortniteLogo) == 0x0003E0, "Member 'UWBP_EnterCabinModeModal_C::FortniteLogo' has a wrong offset!");
static_assert(offsetof(UWBP_EnterCabinModeModal_C, SafeZone) == 0x0003E8, "Member 'UWBP_EnterCabinModeModal_C::SafeZone' has a wrong offset!");

}
