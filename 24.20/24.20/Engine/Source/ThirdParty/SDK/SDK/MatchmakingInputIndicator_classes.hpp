#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMatchmakingInputIndicator_C final : public UMatchmakingInputIndicatorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 InputIcon;

public:
	void OnInputSourceTypeChanged(ECommonInputType InputType);
	void ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchmakingInputIndicator_C">();
	}
	static class UMatchmakingInputIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchmakingInputIndicator_C>();
	}
};
static_assert(alignof(UMatchmakingInputIndicator_C) == 0x000008, "Wrong alignment on UMatchmakingInputIndicator_C");
static_assert(sizeof(UMatchmakingInputIndicator_C) == 0x0002E8, "Wrong size on UMatchmakingInputIndicator_C");
static_assert(offsetof(UMatchmakingInputIndicator_C, UberGraphFrame) == 0x0002D8, "Member 'UMatchmakingInputIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMatchmakingInputIndicator_C, InputIcon) == 0x0002E0, "Member 'UMatchmakingInputIndicator_C::InputIcon' has a wrong offset!");

}
