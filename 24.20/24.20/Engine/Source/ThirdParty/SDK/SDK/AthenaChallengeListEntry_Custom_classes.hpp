#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaChallengeListEntry_Custom_C final : public UAthenaChallengeListEntry_Custom
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Image_Disabled;
	class UImage*                                 Image_Fade;
	bool                                          bIsHovered;

public:
	void BP_OnChallengeInfoSet(bool bDisabled);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void EndHighlight();
	void ExecuteUbergraph_AthenaChallengeListEntry_Custom(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void StartHighlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeListEntry_Custom_C">();
	}
	static class UAthenaChallengeListEntry_Custom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeListEntry_Custom_C>();
	}
};
static_assert(alignof(UAthenaChallengeListEntry_Custom_C) == 0x000008, "Wrong alignment on UAthenaChallengeListEntry_Custom_C");
static_assert(sizeof(UAthenaChallengeListEntry_Custom_C) == 0x0002E0, "Wrong size on UAthenaChallengeListEntry_Custom_C");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, UberGraphFrame) == 0x0002B0, "Member 'UAthenaChallengeListEntry_Custom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, Select) == 0x0002B8, "Member 'UAthenaChallengeListEntry_Custom_C::Select' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, Hovered) == 0x0002C0, "Member 'UAthenaChallengeListEntry_Custom_C::Hovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, Image_Disabled) == 0x0002C8, "Member 'UAthenaChallengeListEntry_Custom_C::Image_Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, Image_Fade) == 0x0002D0, "Member 'UAthenaChallengeListEntry_Custom_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_Custom_C, bIsHovered) == 0x0002D8, "Member 'UAthenaChallengeListEntry_Custom_C::bIsHovered' has a wrong offset!");

}
