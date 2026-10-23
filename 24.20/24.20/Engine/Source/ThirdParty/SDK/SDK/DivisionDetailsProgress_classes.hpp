#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDivisionDetailsProgress_C final : public UFortShowdownDivisionRankProgressView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          CommonBorder_CalloutOffset;
	class USizeBox*                               ProgressBarContainer;

public:
	void ExecuteUbergraph_DivisionDetailsProgress(int32 EntryPoint);
	void OnSetInProgress(float NewPercent, bool bIsInProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DivisionDetailsProgress_C">();
	}
	static class UDivisionDetailsProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDivisionDetailsProgress_C>();
	}
};
static_assert(alignof(UDivisionDetailsProgress_C) == 0x000008, "Wrong alignment on UDivisionDetailsProgress_C");
static_assert(sizeof(UDivisionDetailsProgress_C) == 0x0002B8, "Wrong size on UDivisionDetailsProgress_C");
static_assert(offsetof(UDivisionDetailsProgress_C, UberGraphFrame) == 0x0002A0, "Member 'UDivisionDetailsProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsProgress_C, CommonBorder_CalloutOffset) == 0x0002A8, "Member 'UDivisionDetailsProgress_C::CommonBorder_CalloutOffset' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsProgress_C, ProgressBarContainer) == 0x0002B0, "Member 'UDivisionDetailsProgress_C::ProgressBarContainer' has a wrong offset!");

}
