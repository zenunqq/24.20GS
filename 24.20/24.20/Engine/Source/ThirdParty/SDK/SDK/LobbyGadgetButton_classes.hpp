#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class ULobbyGadgetButton_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPanelButton_C*                         Button;
	class UImage*                                 EmptySlot;
	class UFortMultiSizeItemCard*                 Item;
	TArray<class UFortWorldItemDefinition*>       DesignTestItemDefinitions;
	class UFortWorldItem*                         GadgetItem;
	TMulticastInlineDelegate<void(class ULobbyGadgetButton_C* GadgetButton)> OnButtonClicked;
	TMulticastInlineDelegate<void(class ULobbyGadgetButton_C* GadgetButton)> OnButtonHovered;
	bool                                          bLocked;

public:
	void SetLocked(bool bLocked_0);
	void Refresh(class UFortWorldItem* WorldItem);
	void PreConstruct(bool IsDesignTime);
	void GetLocked(bool* bLocked_0);
	void GetGadgetItem(class UFortWorldItem** GadgetItem_0);
	void Focus();
	void ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button_0);
	void BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyGadgetButton_C">();
	}
	static class ULobbyGadgetButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyGadgetButton_C>();
	}
};
static_assert(alignof(ULobbyGadgetButton_C) == 0x000008, "Wrong alignment on ULobbyGadgetButton_C");
static_assert(sizeof(ULobbyGadgetButton_C) == 0x0002F0, "Wrong size on ULobbyGadgetButton_C");
static_assert(offsetof(ULobbyGadgetButton_C, UberGraphFrame) == 0x000290, "Member 'ULobbyGadgetButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, Button) == 0x000298, "Member 'ULobbyGadgetButton_C::Button' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, EmptySlot) == 0x0002A0, "Member 'ULobbyGadgetButton_C::EmptySlot' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, Item) == 0x0002A8, "Member 'ULobbyGadgetButton_C::Item' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, DesignTestItemDefinitions) == 0x0002B0, "Member 'ULobbyGadgetButton_C::DesignTestItemDefinitions' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, GadgetItem) == 0x0002C0, "Member 'ULobbyGadgetButton_C::GadgetItem' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, OnButtonClicked) == 0x0002C8, "Member 'ULobbyGadgetButton_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, OnButtonHovered) == 0x0002D8, "Member 'ULobbyGadgetButton_C::OnButtonHovered' has a wrong offset!");
static_assert(offsetof(ULobbyGadgetButton_C, bLocked) == 0x0002E8, "Member 'ULobbyGadgetButton_C::bLocked' has a wrong offset!");

}
