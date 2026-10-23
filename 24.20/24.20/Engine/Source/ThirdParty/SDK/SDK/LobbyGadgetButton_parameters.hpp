#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LobbyGadgetButton_C_SetLocked final
{
public:
	bool                                          bLocked_0;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(LobbyGadgetButton_C_SetLocked) == 0x000001, "Wrong alignment on LobbyGadgetButton_C_SetLocked");
static_assert(sizeof(LobbyGadgetButton_C_SetLocked) == 0x000002, "Wrong size on LobbyGadgetButton_C_SetLocked");
static_assert(offsetof(LobbyGadgetButton_C_SetLocked, bLocked_0) == 0x000000, "Member 'LobbyGadgetButton_C_SetLocked::bLocked_0' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_SetLocked, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'LobbyGadgetButton_C_SetLocked::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct LobbyGadgetButton_C_Refresh final
{
public:
	class UFortWorldItem*                         WorldItem;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(LobbyGadgetButton_C_Refresh) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_Refresh");
static_assert(sizeof(LobbyGadgetButton_C_Refresh) == 0x000010, "Wrong size on LobbyGadgetButton_C_Refresh");
static_assert(offsetof(LobbyGadgetButton_C_Refresh, WorldItem) == 0x000000, "Member 'LobbyGadgetButton_C_Refresh::WorldItem' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_Refresh, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'LobbyGadgetButton_C_Refresh::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct LobbyGadgetButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(LobbyGadgetButton_C_PreConstruct) == 0x000001, "Wrong alignment on LobbyGadgetButton_C_PreConstruct");
static_assert(sizeof(LobbyGadgetButton_C_PreConstruct) == 0x000001, "Wrong size on LobbyGadgetButton_C_PreConstruct");
static_assert(offsetof(LobbyGadgetButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LobbyGadgetButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct LobbyGadgetButton_C_GetLocked final
{
public:
	bool                                          bLocked_0;
};
static_assert(alignof(LobbyGadgetButton_C_GetLocked) == 0x000001, "Wrong alignment on LobbyGadgetButton_C_GetLocked");
static_assert(sizeof(LobbyGadgetButton_C_GetLocked) == 0x000001, "Wrong size on LobbyGadgetButton_C_GetLocked");
static_assert(offsetof(LobbyGadgetButton_C_GetLocked, bLocked_0) == 0x000000, "Member 'LobbyGadgetButton_C_GetLocked::bLocked_0' has a wrong offset!");

struct LobbyGadgetButton_C_GetGadgetItem final
{
public:
	class UFortWorldItem*                         GadgetItem_0;
};
static_assert(alignof(LobbyGadgetButton_C_GetGadgetItem) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_GetGadgetItem");
static_assert(sizeof(LobbyGadgetButton_C_GetGadgetItem) == 0x000008, "Wrong size on LobbyGadgetButton_C_GetGadgetItem");
static_assert(offsetof(LobbyGadgetButton_C_GetGadgetItem, GadgetItem_0) == 0x000000, "Member 'LobbyGadgetButton_C_GetGadgetItem::GadgetItem_0' has a wrong offset!");

struct LobbyGadgetButton_C_Focus final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;
};
static_assert(alignof(LobbyGadgetButton_C_Focus) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_Focus");
static_assert(sizeof(LobbyGadgetButton_C_Focus) == 0x000008, "Wrong size on LobbyGadgetButton_C_Focus");
static_assert(offsetof(LobbyGadgetButton_C_Focus, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'LobbyGadgetButton_C_Focus::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

struct LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_14[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	int32                                         CallFunc_RandomInteger_ReturnValue;
	uint8                                         Pad_24[0x4];
	class UFortWorldItemDefinition*               CallFunc_Array_Get_Item;
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
};
static_assert(alignof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton");
static_assert(sizeof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton) == 0x000038, "Wrong size on LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, EntryPoint) == 0x000000, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, K2Node_ComponentBoundEvent_Button_1) == 0x000008, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, CallFunc_RandomInteger_ReturnValue) == 0x000020, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000030, "Member 'LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");

struct LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button_0;
};
static_assert(alignof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature, Button_0) == 0x000000, "Member 'LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature::Button_0' has a wrong offset!");

struct LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button_0;
};
static_assert(alignof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature, Button_0) == 0x000000, "Member 'LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature::Button_0' has a wrong offset!");

}
