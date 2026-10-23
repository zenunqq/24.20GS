#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UDiamondStatePip_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selection;
	class UImage*                                 PIP;
	class UImage*                                 Pip_Outline;
	bool                                          Is_Hovered;
	bool                                          Is_Selected;

public:
	void Construct();
	void ExecuteUbergraph_DiamondStatePip(int32 EntryPoint);
	void ResetState();
	void SetHoverState(bool IsHovered_0);
	void SetSelectedState(bool IsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DiamondStatePip_C">();
	}
	static class UDiamondStatePip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiamondStatePip_C>();
	}
};
static_assert(alignof(UDiamondStatePip_C) == 0x000008, "Wrong alignment on UDiamondStatePip_C");
static_assert(sizeof(UDiamondStatePip_C) == 0x0002B8, "Wrong size on UDiamondStatePip_C");
static_assert(offsetof(UDiamondStatePip_C, UberGraphFrame) == 0x000290, "Member 'UDiamondStatePip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDiamondStatePip_C, Selection) == 0x000298, "Member 'UDiamondStatePip_C::Selection' has a wrong offset!");
static_assert(offsetof(UDiamondStatePip_C, PIP) == 0x0002A0, "Member 'UDiamondStatePip_C::PIP' has a wrong offset!");
static_assert(offsetof(UDiamondStatePip_C, Pip_Outline) == 0x0002A8, "Member 'UDiamondStatePip_C::Pip_Outline' has a wrong offset!");
static_assert(offsetof(UDiamondStatePip_C, Is_Hovered) == 0x0002B0, "Member 'UDiamondStatePip_C::Is_Hovered' has a wrong offset!");
static_assert(offsetof(UDiamondStatePip_C, Is_Selected) == 0x0002B1, "Member 'UDiamondStatePip_C::Is_Selected' has a wrong offset!");

}
