#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBacchusBoundActionButton_C final : public UBacchusBoundActionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                ContentBorder;
	class UFortMobileImage*                       FortMobileImageInputAction;
	class UScaleBox*                              InputActionIconScale;

public:
	void Construct();
	void ExecuteUbergraph_BacchusBoundActionButton(int32 EntryPoint);
	void OnUpdateInputAction();
	void UpdateInputActionIconSize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusBoundActionButton_C">();
	}
	static class UBacchusBoundActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusBoundActionButton_C>();
	}
};
static_assert(alignof(UBacchusBoundActionButton_C) == 0x000010, "Wrong alignment on UBacchusBoundActionButton_C");
static_assert(sizeof(UBacchusBoundActionButton_C) == 0x001460, "Wrong size on UBacchusBoundActionButton_C");
static_assert(offsetof(UBacchusBoundActionButton_C, UberGraphFrame) == 0x001440, "Member 'UBacchusBoundActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusBoundActionButton_C, ContentBorder) == 0x001448, "Member 'UBacchusBoundActionButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UBacchusBoundActionButton_C, FortMobileImageInputAction) == 0x001450, "Member 'UBacchusBoundActionButton_C::FortMobileImageInputAction' has a wrong offset!");
static_assert(offsetof(UBacchusBoundActionButton_C, InputActionIconScale) == 0x001458, "Member 'UBacchusBoundActionButton_C::InputActionIconScale' has a wrong offset!");

}
