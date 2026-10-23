#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDivisionIconButton_C final : public UFortShowdownDivisionRankButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 Image_Hover;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_DivisionIconButton(int32 EntryPoint);
	void OnRankButtonSelected(bool bIsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DivisionIconButton_C">();
	}
	static class UDivisionIconButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDivisionIconButton_C>();
	}
};
static_assert(alignof(UDivisionIconButton_C) == 0x000010, "Wrong alignment on UDivisionIconButton_C");
static_assert(sizeof(UDivisionIconButton_C) == 0x001460, "Wrong size on UDivisionIconButton_C");
static_assert(offsetof(UDivisionIconButton_C, UberGraphFrame) == 0x001440, "Member 'UDivisionIconButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDivisionIconButton_C, Selected) == 0x001448, "Member 'UDivisionIconButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UDivisionIconButton_C, Image_Hover) == 0x001450, "Member 'UDivisionIconButton_C::Image_Hover' has a wrong offset!");

}
