#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCampaignPurchaseScreen_C final : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       SwitchTextures;
	class UMaterialInstanceDynamic*               MID_Keyart;
	struct FTimerHandle                           CycleTimer;
	TArray<class UTexture*>                       TextureCycle;
	int32                                         TextureCycleIndex;

public:
	void Update();
	void ToggleTimer(bool Enabled);
	void OnStoreScreenCreated(class UFortMtxStoreRootBase_Legacy* StoreScreen);
	void InitializeRedeemButton();
	void OnImageCycleTimeElapsed();
	void ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint);
	void IsMinorShutdownWarningEnabled(bool* Enabled);
	void Construct();
	bool IsBusyMatchmaking();
	void BP_OnActivated();
	void InitializeTextureCycle();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void AdvanceTextureCycle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CampaignPurchaseScreen_C">();
	}
	static class UCampaignPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCampaignPurchaseScreen_C>();
	}
};
static_assert(alignof(UCampaignPurchaseScreen_C) == 0x000008, "Wrong alignment on UCampaignPurchaseScreen_C");
static_assert(sizeof(UCampaignPurchaseScreen_C) == 0x000478, "Wrong size on UCampaignPurchaseScreen_C");
static_assert(offsetof(UCampaignPurchaseScreen_C, UberGraphFrame) == 0x000440, "Member 'UCampaignPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, SwitchTextures) == 0x000448, "Member 'UCampaignPurchaseScreen_C::SwitchTextures' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, MID_Keyart) == 0x000450, "Member 'UCampaignPurchaseScreen_C::MID_Keyart' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, CycleTimer) == 0x000458, "Member 'UCampaignPurchaseScreen_C::CycleTimer' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycle) == 0x000460, "Member 'UCampaignPurchaseScreen_C::TextureCycle' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycleIndex) == 0x000470, "Member 'UCampaignPurchaseScreen_C::TextureCycleIndex' has a wrong offset!");

}
