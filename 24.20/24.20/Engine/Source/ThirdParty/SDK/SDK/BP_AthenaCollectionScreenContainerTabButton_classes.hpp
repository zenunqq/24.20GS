#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionScreenContainerTabButton_C final : public UAthenaCollectionScreenContainerTabButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;
	class UCommonBorder*                          NewBang;
	class USizeBox*                               SizeBox_Mobile;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void BP_ShowBang(bool bShow);
	void Construct();
	void ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionScreenContainerTabButton_C">();
	}
	static class UBP_AthenaCollectionScreenContainerTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionScreenContainerTabButton_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionScreenContainerTabButton_C) == 0x000010, "Wrong alignment on UBP_AthenaCollectionScreenContainerTabButton_C");
static_assert(sizeof(UBP_AthenaCollectionScreenContainerTabButton_C) == 0x0014C0, "Wrong size on UBP_AthenaCollectionScreenContainerTabButton_C");
static_assert(offsetof(UBP_AthenaCollectionScreenContainerTabButton_C, UberGraphFrame) == 0x001490, "Member 'UBP_AthenaCollectionScreenContainerTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenContainerTabButton_C, Hovered) == 0x001498, "Member 'UBP_AthenaCollectionScreenContainerTabButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenContainerTabButton_C, Selected) == 0x0014A0, "Member 'UBP_AthenaCollectionScreenContainerTabButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenContainerTabButton_C, NewBang) == 0x0014A8, "Member 'UBP_AthenaCollectionScreenContainerTabButton_C::NewBang' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenContainerTabButton_C, SizeBox_Mobile) == 0x0014B0, "Member 'UBP_AthenaCollectionScreenContainerTabButton_C::SizeBox_Mobile' has a wrong offset!");

}
