#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USubgameTile_C final : public UFortSubgameTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       RevealCMSKeyArt;
	class UWidgetAnimation*                       UnFocused;
	class UWidgetAnimation*                       FocusedSecondary;
	class UWidgetAnimation*                       Focused;
	class UImage*                                 FocusPulse;
	class UMaterialInstanceDynamic*               PulseMID;

public:
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();
	void ExecuteUbergraph_SubgameTile(int32 EntryPoint);
	void Construct();
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubgameTile_C">();
	}
	static class USubgameTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubgameTile_C>();
	}
};
static_assert(alignof(USubgameTile_C) == 0x000010, "Wrong alignment on USubgameTile_C");
static_assert(sizeof(USubgameTile_C) == 0x0015A0, "Wrong size on USubgameTile_C");
static_assert(offsetof(USubgameTile_C, UberGraphFrame) == 0x001560, "Member 'USubgameTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, RevealCMSKeyArt) == 0x001568, "Member 'USubgameTile_C::RevealCMSKeyArt' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, UnFocused) == 0x001570, "Member 'USubgameTile_C::UnFocused' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, FocusedSecondary) == 0x001578, "Member 'USubgameTile_C::FocusedSecondary' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, Focused) == 0x001580, "Member 'USubgameTile_C::Focused' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, FocusPulse) == 0x001588, "Member 'USubgameTile_C::FocusPulse' has a wrong offset!");
static_assert(offsetof(USubgameTile_C, PulseMID) == 0x001590, "Member 'USubgameTile_C::PulseMID' has a wrong offset!");

}
