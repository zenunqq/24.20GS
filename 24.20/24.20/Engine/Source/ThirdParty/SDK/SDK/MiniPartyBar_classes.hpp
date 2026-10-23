#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UMiniPartyBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UIconTextButton_C*                      ButtonLocalPlayer;
	class UImage*                                 LineSeparator;
	class UTeamMemberBanner_C*                    LocalPlayer;
	class UTeamMemberBanner_C*                    RemotePlayer1;
	class UTeamMemberBanner_C*                    RemotePlayer2;
	class UTeamMemberBanner_C*                    RemotePlayer3;
	class UTeamMemberManage_C*                    NewLocalPlayerWidget;

public:
	void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void ExecuteUbergraph_MiniPartyBar(int32 EntryPoint);
	class UWidget* Get_Banners_Tooltip_Widget();
	void HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniPartyBar_C">();
	}
	static class UMiniPartyBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniPartyBar_C>();
	}
};
static_assert(alignof(UMiniPartyBar_C) == 0x000008, "Wrong alignment on UMiniPartyBar_C");
static_assert(sizeof(UMiniPartyBar_C) == 0x0002D0, "Wrong size on UMiniPartyBar_C");
static_assert(offsetof(UMiniPartyBar_C, UberGraphFrame) == 0x000290, "Member 'UMiniPartyBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, ButtonLocalPlayer) == 0x000298, "Member 'UMiniPartyBar_C::ButtonLocalPlayer' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, LineSeparator) == 0x0002A0, "Member 'UMiniPartyBar_C::LineSeparator' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, LocalPlayer) == 0x0002A8, "Member 'UMiniPartyBar_C::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemotePlayer1) == 0x0002B0, "Member 'UMiniPartyBar_C::RemotePlayer1' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemotePlayer2) == 0x0002B8, "Member 'UMiniPartyBar_C::RemotePlayer2' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemotePlayer3) == 0x0002C0, "Member 'UMiniPartyBar_C::RemotePlayer3' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, NewLocalPlayerWidget) == 0x0002C8, "Member 'UMiniPartyBar_C::NewLocalPlayerWidget' has a wrong offset!");

}
