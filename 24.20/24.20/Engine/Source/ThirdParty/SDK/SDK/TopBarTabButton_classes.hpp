#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTopBarTabButton_C final : public UFortTopBarTabTextIconButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;
	class USizeBox*                               SizeBox_0;
	class USizeBox*                               SizeBox_1;
	class USizeBox*                               SizeBox_2;
	class UVerticalBox*                           VerticalBox_0;
	class UMaterialInstanceDynamic*               MID_ButtonBorder;
	bool                                          PreviewMobileStyle;
	uint8                                         Pad_14D1[0x3];
	struct FFloatSpringState                      SpringState_ShapeChange;
	struct FFloatSpringState                      SpringState_Scale;
	uint8                                         Pad_14EC[0x4];
	double                                        Spring_Scale_Target;
	double                                        MassMultiply;
	double                                        DampenMultiply;
	double                                        StiffnessMultiply;
	bool                                          VisualSelectionState;
	uint8                                         Pad_1511[0x7];
	double                                        RandomFloat_Top;
	double                                        RandomFloat_Left;
	double                                        RandomFloat_Right;
	double                                        RandomFloat_Bottom;
	double                                        ShapeChange_New;
	double                                        ShapeChange_Target;
	bool                                          UpdateSpring;
	uint8                                         Pad_1549[0x7];
	class FText                                   ButtonText;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_TopBarTabButton(int32 EntryPoint);
	void HandleSelectionChangedVisuals(bool bIsSelected);
	void InitializeButtonBorderMID();
	void OnCurrentTextStyleChanged();
	void OnInitialized();
	void OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0);
	void OverrideIcon(bool Show, const struct FSlateBrush& inSlateBrush);
	void PreConstruct(bool IsDesignTime);
	void SeedRandomValues();
	void SetText(const class FText& ButtonText_0);
	void UpdateMIDWithRandomValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TopBarTabButton_C">();
	}
	static class UTopBarTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTopBarTabButton_C>();
	}
};
static_assert(alignof(UTopBarTabButton_C) == 0x000010, "Wrong alignment on UTopBarTabButton_C");
static_assert(sizeof(UTopBarTabButton_C) == 0x001570, "Wrong size on UTopBarTabButton_C");
static_assert(offsetof(UTopBarTabButton_C, UberGraphFrame) == 0x001490, "Member 'UTopBarTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, Hovered) == 0x001498, "Member 'UTopBarTabButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, Selected) == 0x0014A0, "Member 'UTopBarTabButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, SizeBox_0) == 0x0014A8, "Member 'UTopBarTabButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, SizeBox_1) == 0x0014B0, "Member 'UTopBarTabButton_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, SizeBox_2) == 0x0014B8, "Member 'UTopBarTabButton_C::SizeBox_2' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, VerticalBox_0) == 0x0014C0, "Member 'UTopBarTabButton_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, MID_ButtonBorder) == 0x0014C8, "Member 'UTopBarTabButton_C::MID_ButtonBorder' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, PreviewMobileStyle) == 0x0014D0, "Member 'UTopBarTabButton_C::PreviewMobileStyle' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, SpringState_ShapeChange) == 0x0014D4, "Member 'UTopBarTabButton_C::SpringState_ShapeChange' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, SpringState_Scale) == 0x0014E0, "Member 'UTopBarTabButton_C::SpringState_Scale' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, Spring_Scale_Target) == 0x0014F0, "Member 'UTopBarTabButton_C::Spring_Scale_Target' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, MassMultiply) == 0x0014F8, "Member 'UTopBarTabButton_C::MassMultiply' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, DampenMultiply) == 0x001500, "Member 'UTopBarTabButton_C::DampenMultiply' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, StiffnessMultiply) == 0x001508, "Member 'UTopBarTabButton_C::StiffnessMultiply' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, VisualSelectionState) == 0x001510, "Member 'UTopBarTabButton_C::VisualSelectionState' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, RandomFloat_Top) == 0x001518, "Member 'UTopBarTabButton_C::RandomFloat_Top' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, RandomFloat_Left) == 0x001520, "Member 'UTopBarTabButton_C::RandomFloat_Left' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, RandomFloat_Right) == 0x001528, "Member 'UTopBarTabButton_C::RandomFloat_Right' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, RandomFloat_Bottom) == 0x001530, "Member 'UTopBarTabButton_C::RandomFloat_Bottom' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, ShapeChange_New) == 0x001538, "Member 'UTopBarTabButton_C::ShapeChange_New' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, ShapeChange_Target) == 0x001540, "Member 'UTopBarTabButton_C::ShapeChange_Target' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, UpdateSpring) == 0x001548, "Member 'UTopBarTabButton_C::UpdateSpring' has a wrong offset!");
static_assert(offsetof(UTopBarTabButton_C, ButtonText) == 0x001550, "Member 'UTopBarTabButton_C::ButtonText' has a wrong offset!");

}
