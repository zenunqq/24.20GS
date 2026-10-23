#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UB_AthenaLoadingScreenPreviewPanel_C final : public UAthenaLoadingScreenPreviewPanelBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 BaseColor;
	class UAthenaLoadingScreenItemDefinition*     LoadingScreenAsset;

public:
	void BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel(int32 EntryPoint);
	void HandleBack(bool* PassThrough);
	void Init();
	void PopDetails();
	void RegisterInput();
	void UnregisterInput();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AthenaLoadingScreenPreviewPanel_C">();
	}
	static class UB_AthenaLoadingScreenPreviewPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_AthenaLoadingScreenPreviewPanel_C>();
	}
};
static_assert(alignof(UB_AthenaLoadingScreenPreviewPanel_C) == 0x000008, "Wrong alignment on UB_AthenaLoadingScreenPreviewPanel_C");
static_assert(sizeof(UB_AthenaLoadingScreenPreviewPanel_C) == 0x000520, "Wrong size on UB_AthenaLoadingScreenPreviewPanel_C");
static_assert(offsetof(UB_AthenaLoadingScreenPreviewPanel_C, UberGraphFrame) == 0x000508, "Member 'UB_AthenaLoadingScreenPreviewPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_AthenaLoadingScreenPreviewPanel_C, BaseColor) == 0x000510, "Member 'UB_AthenaLoadingScreenPreviewPanel_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UB_AthenaLoadingScreenPreviewPanel_C, LoadingScreenAsset) == 0x000518, "Member 'UB_AthenaLoadingScreenPreviewPanel_C::LoadingScreenAsset' has a wrong offset!");

}
