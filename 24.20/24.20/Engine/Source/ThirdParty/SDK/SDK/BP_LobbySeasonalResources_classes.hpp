#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_LobbySeasonalResources_C final : public UFortBattlePassResourcesWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAthenaGlobalCashHorizontal_C*          AthenaGlobalCashHorizontal;
	class UMoreInfo_Ressources_Button_C*          MoreInfo_Ressources_Button_67;
	class UMoreInfo_Ressources_MobileButton_C*    MoreInfo_Ressources_MobileButton_19;
	class UOverlay*                               MoreInfoOverlay;
	class UOverlay*                               MoreInfoOverlayMobile;
	class UCommonTextBlock*                       Text_SeasonName;

public:
	void BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_BP_LobbySeasonalResources(int32 EntryPoint);
	void OnShowMoreInfo(bool bShouldShowMoreInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LobbySeasonalResources_C">();
	}
	static class UBP_LobbySeasonalResources_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LobbySeasonalResources_C>();
	}
};
static_assert(alignof(UBP_LobbySeasonalResources_C) == 0x000008, "Wrong alignment on UBP_LobbySeasonalResources_C");
static_assert(sizeof(UBP_LobbySeasonalResources_C) == 0x0002D8, "Wrong size on UBP_LobbySeasonalResources_C");
static_assert(offsetof(UBP_LobbySeasonalResources_C, UberGraphFrame) == 0x0002A0, "Member 'UBP_LobbySeasonalResources_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, AthenaGlobalCashHorizontal) == 0x0002A8, "Member 'UBP_LobbySeasonalResources_C::AthenaGlobalCashHorizontal' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, MoreInfo_Ressources_Button_67) == 0x0002B0, "Member 'UBP_LobbySeasonalResources_C::MoreInfo_Ressources_Button_67' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, MoreInfo_Ressources_MobileButton_19) == 0x0002B8, "Member 'UBP_LobbySeasonalResources_C::MoreInfo_Ressources_MobileButton_19' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, MoreInfoOverlay) == 0x0002C0, "Member 'UBP_LobbySeasonalResources_C::MoreInfoOverlay' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, MoreInfoOverlayMobile) == 0x0002C8, "Member 'UBP_LobbySeasonalResources_C::MoreInfoOverlayMobile' has a wrong offset!");
static_assert(offsetof(UBP_LobbySeasonalResources_C, Text_SeasonName) == 0x0002D0, "Member 'UBP_LobbySeasonalResources_C::Text_SeasonName' has a wrong offset!");

}
