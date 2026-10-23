#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ATeamMemberPedestal_C final : public AFortTeamMemberPedestal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   SM_Character_ShadowBlob;
	class UStaticMeshComponent*                   SM_ObserverPlaceholder;
	class UStaticMeshComponent*                   SM_LobbyFXSkipMatch;
	class UStaticMeshComponent*                   SM_LobbyLightDisc_Floating_FX;
	class UStaticMeshComponent*                   CharacterPlacement;
	class UParticleSystemComponent*               P_FE_Smoke;
	class USceneComponent*                        LightsParent;
	class UParticleSystemComponent*               PS_NoPlayer_Sparkle;
	class UParticleSystemComponent*               PS_NoPlayer_Swirl02;
	class UParticleSystemComponent*               PS_NoPlayer_Swirl01;
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad_Light_Ring;
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad;
	class UStaticMeshComponent*                   SM_Lobby_Character_TopSpot;
	class UPointLightComponent*                   UnderlightBluePoint02;
	class UPointLightComponent*                   UnderlightBluePoint01;
	class USpotLightComponent*                    UnderlightBlue02;
	class USpotLightComponent*                    UnderlightBlue01;
	class USpotLightComponent*                    RimSpotLight;
	class USpotLightComponent*                    TopSpotLight;
	float                                         Timeline_2_NewTrack_1_5B2A92484943393ABEA8BF9AE94A7E65;
	float                                         Timeline_2_NewTrack_0_5B2A92484943393ABEA8BF9AE94A7E65;
	ETimelineDirection                            Timeline_2__Direction_5B2A92484943393ABEA8BF9AE94A7E65;
	uint8                                         Pad_609[0x7];
	class UTimelineComponent*                     Timeline_2;
	float                                         Timeline_1_NewTrack_0_C7A2C78B4F1CEAE900A2CABA9772C922;
	ETimelineDirection                            Timeline_1__Direction_C7A2C78B4F1CEAE900A2CABA9772C922;
	uint8                                         Pad_61D[0x3];
	class UTimelineComponent*                     Timeline_1;
	float                                         Timeline_0_NewTrack_0_29F162B244A0FAE20371E7AE14A584FA;
	ETimelineDirection                            Timeline_0__Direction_29F162B244A0FAE20371E7AE14A584FA;
	uint8                                         Pad_62D[0x3];
	class UTimelineComponent*                     Timeline_0;
	float                                         FadeInPodium_NewTrack_0_AF4A58DF4085C76AD6B3168E661AB7DD;
	ETimelineDirection                            FadeInPodium__Direction_AF4A58DF4085C76AD6B3168E661AB7DD;
	uint8                                         Pad_63D[0x3];
	class UTimelineComponent*                     FadeInPodium;
	bool                                          PreviewMesh;
	uint8                                         Pad_649[0x7];
	class UStaticMesh*                            Mesh;
	bool                                          bIsPlayerSelected;
	uint8                                         Pad_659[0x7];
	class UMaterialInstanceDynamic*               MID_Pad;
	TMulticastInlineDelegate<void(int32 PlayerIndex)> Debug_OnFriendLFGRequest;
	class UOverlay*                               Hovered_InputAction;
	class ULobbyPlayerPadGadgets_C*               Gadgets;
	class ULobbyPlayerAddPlayer_C*                PlayerAdd;
	class AFortPlayerPawn*                        LastAnimatedPlayerPawn;
	bool                                          bAllowPartySuggestions;
	uint8                                         Pad_699[0x7];
	double                                        OffsetLobbyAddPlayer;
	bool                                          bPlayerPodiumHovered;
	uint8                                         Pad_6A9[0x7];
	class UMaterialInstanceDynamic*               MID_Pad_Light_Ring;
	class UMaterialInstanceDynamic*               MID_Top_Light_Ring;
	bool                                          FxActive;
	uint8                                         Pad_6C1[0x7];
	class UMaterialInstanceDynamic*               MID_Holo;
	class UMaterialInterface*                     HoloMaterial;
	class USizeBox*                               Hovered_WithPlayer_InputAction;
	bool                                          NewLobbyLayout;
	uint8                                         Pad_6E1[0x7];
	double                                        LightBrightnessScale;
	double                                        TopSpotLight_Brightness;
	double                                        TopSpotLight_Brightness_Hovered;
	double                                        RimSpotLight_Brightness;
	double                                        UnderlightBlueSpot_Brightness;
	double                                        UnderlightBlueSpot_Brightness_Hovered;
	double                                        UnderlightBluePoint_Brightness;
	double                                        UnderlightBluePoint_Brightness_Hovered;
	bool                                          debugHoveredLighting;
	uint8                                         Pad_729[0x7];
	TArray<struct FMcpVariantChannelInfo>         NewVar_0;
	class UMaterialInterface*                     HoloMaterialInst;
	class UMaterialInstanceDynamic*               MID_SkipMatchFX;
	bool                                          isPopulated;
	uint8                                         Pad_751[0x7];
	class UMaterialInstanceDynamic*               MID_Pad_FX;
	struct FFortTeamMemberInfo                    TeamMemberInfo;
	class UMaterialInstanceDynamic*               MID_ObserverScreen;
	class UMaterialInstanceDynamic*               MID_Observer_Screen_Frame;
	class UMaterialInstanceDynamic*               MID_FakeBlobShadow;
	class USizeBox*                               Hovered_WithPlayer_InputAction_AddFriend;
	struct FGuid                                  MaterialOverride;
	struct FFortPawnMaterialOverrideCopiedParameters Material_Params_to_Copy;
	EFortPawnMaterialOverrideFlags                Material_Override_Flags;

public:
	void UserConstructionScript();
	void Update_Add_Friend_Button_Interaction_Enabled(bool IsHovered);
	void TransitionToLoadingScreen(bool Bool);
	void TransitionToCharacterScreen(bool Bool);
	void TransitionfromCharactertoLoadingscreen(bool Bool);
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void StopLobbyAnimation();
	void SpawnPad();
	void SetSparkleParticlesEnabled(bool IsEnabled);
	void SetFNCrew();
	void SetFakeBlobShadowVisiblity(bool Visible);
	void RefreshWidgets();
	void ReceiveBeginPlay();
	void PlayLobbyAnimation();
	void OnUnhovered();
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& Team_Member_Info);
	void OnTeamMemberSet(bool bHasValidTeamMember);
	void OnPreviewActorSpawned();
	void OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer);
	void OnPartyDataChanged(struct FFortTeamMemberInfo& Member_Info);
	void OnOwningPedestalGroupEstablished(int32 SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated);
	void OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, const struct FAthenaTeamDisplayInfo& OwningSquadStyle);
	void OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9(class UObject* Loaded);
	void OnItemClicked();
	void OnIsCurrentlyInMatchChanged(bool bIsInMatch);
	void OnHovered();
	void OnGameReadinessChanged(EGameReadiness GameReadiness);
	void OnFrontEndCameraChanged(EFrontEndCamera New_Camera, EFrontEndCamera Old_Camera);
	void OnDisconnectedToCampaignLobby();
	void OnConnectedToCampaignLobby();
	void OnAvatarChanged(class UTexture2D* AvatarImage, const struct FColor& AvatarBackground, const struct FColor& HighlightColor);
	void InitializeInputActionRefs();
	void InitializeContextEvents();
	void HidePad();
	void HandleHoverInputActions(bool bIsHovered);
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void FadeInPodium__UpdateFunc();
	void FadeInPodium__FinishedFunc();
	void ExecuteUbergraph_TeamMemberPedestal(int32 EntryPoint);
	void EnableHologram(bool Enabled);
	void ClearPawnMaterialOverride();
	void ApplyHoloMaterialOverrideToPawn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_C">();
	}
	static class ATeamMemberPedestal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATeamMemberPedestal_C>();
	}
};
static_assert(alignof(ATeamMemberPedestal_C) == 0x000010, "Wrong alignment on ATeamMemberPedestal_C");
static_assert(sizeof(ATeamMemberPedestal_C) == 0x000A20, "Wrong size on ATeamMemberPedestal_C");
static_assert(offsetof(ATeamMemberPedestal_C, UberGraphFrame) == 0x000560, "Member 'ATeamMemberPedestal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_Character_ShadowBlob) == 0x000568, "Member 'ATeamMemberPedestal_C::SM_Character_ShadowBlob' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_ObserverPlaceholder) == 0x000570, "Member 'ATeamMemberPedestal_C::SM_ObserverPlaceholder' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_LobbyFXSkipMatch) == 0x000578, "Member 'ATeamMemberPedestal_C::SM_LobbyFXSkipMatch' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_LobbyLightDisc_Floating_FX) == 0x000580, "Member 'ATeamMemberPedestal_C::SM_LobbyLightDisc_Floating_FX' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, CharacterPlacement) == 0x000588, "Member 'ATeamMemberPedestal_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, P_FE_Smoke) == 0x000590, "Member 'ATeamMemberPedestal_C::P_FE_Smoke' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, LightsParent) == 0x000598, "Member 'ATeamMemberPedestal_C::LightsParent' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, PS_NoPlayer_Sparkle) == 0x0005A0, "Member 'ATeamMemberPedestal_C::PS_NoPlayer_Sparkle' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, PS_NoPlayer_Swirl02) == 0x0005A8, "Member 'ATeamMemberPedestal_C::PS_NoPlayer_Swirl02' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, PS_NoPlayer_Swirl01) == 0x0005B0, "Member 'ATeamMemberPedestal_C::PS_NoPlayer_Swirl01' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_Lobby_Character_Pad_Light_Ring) == 0x0005B8, "Member 'ATeamMemberPedestal_C::SM_Lobby_Character_Pad_Light_Ring' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_Lobby_Character_Pad) == 0x0005C0, "Member 'ATeamMemberPedestal_C::SM_Lobby_Character_Pad' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, SM_Lobby_Character_TopSpot) == 0x0005C8, "Member 'ATeamMemberPedestal_C::SM_Lobby_Character_TopSpot' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBluePoint02) == 0x0005D0, "Member 'ATeamMemberPedestal_C::UnderlightBluePoint02' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBluePoint01) == 0x0005D8, "Member 'ATeamMemberPedestal_C::UnderlightBluePoint01' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBlue02) == 0x0005E0, "Member 'ATeamMemberPedestal_C::UnderlightBlue02' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBlue01) == 0x0005E8, "Member 'ATeamMemberPedestal_C::UnderlightBlue01' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, RimSpotLight) == 0x0005F0, "Member 'ATeamMemberPedestal_C::RimSpotLight' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, TopSpotLight) == 0x0005F8, "Member 'ATeamMemberPedestal_C::TopSpotLight' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_2_NewTrack_1_5B2A92484943393ABEA8BF9AE94A7E65) == 0x000600, "Member 'ATeamMemberPedestal_C::Timeline_2_NewTrack_1_5B2A92484943393ABEA8BF9AE94A7E65' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_2_NewTrack_0_5B2A92484943393ABEA8BF9AE94A7E65) == 0x000604, "Member 'ATeamMemberPedestal_C::Timeline_2_NewTrack_0_5B2A92484943393ABEA8BF9AE94A7E65' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_2__Direction_5B2A92484943393ABEA8BF9AE94A7E65) == 0x000608, "Member 'ATeamMemberPedestal_C::Timeline_2__Direction_5B2A92484943393ABEA8BF9AE94A7E65' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_2) == 0x000610, "Member 'ATeamMemberPedestal_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_1_NewTrack_0_C7A2C78B4F1CEAE900A2CABA9772C922) == 0x000618, "Member 'ATeamMemberPedestal_C::Timeline_1_NewTrack_0_C7A2C78B4F1CEAE900A2CABA9772C922' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_1__Direction_C7A2C78B4F1CEAE900A2CABA9772C922) == 0x00061C, "Member 'ATeamMemberPedestal_C::Timeline_1__Direction_C7A2C78B4F1CEAE900A2CABA9772C922' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_1) == 0x000620, "Member 'ATeamMemberPedestal_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_0_NewTrack_0_29F162B244A0FAE20371E7AE14A584FA) == 0x000628, "Member 'ATeamMemberPedestal_C::Timeline_0_NewTrack_0_29F162B244A0FAE20371E7AE14A584FA' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_0__Direction_29F162B244A0FAE20371E7AE14A584FA) == 0x00062C, "Member 'ATeamMemberPedestal_C::Timeline_0__Direction_29F162B244A0FAE20371E7AE14A584FA' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Timeline_0) == 0x000630, "Member 'ATeamMemberPedestal_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, FadeInPodium_NewTrack_0_AF4A58DF4085C76AD6B3168E661AB7DD) == 0x000638, "Member 'ATeamMemberPedestal_C::FadeInPodium_NewTrack_0_AF4A58DF4085C76AD6B3168E661AB7DD' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, FadeInPodium__Direction_AF4A58DF4085C76AD6B3168E661AB7DD) == 0x00063C, "Member 'ATeamMemberPedestal_C::FadeInPodium__Direction_AF4A58DF4085C76AD6B3168E661AB7DD' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, FadeInPodium) == 0x000640, "Member 'ATeamMemberPedestal_C::FadeInPodium' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, PreviewMesh) == 0x000648, "Member 'ATeamMemberPedestal_C::PreviewMesh' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Mesh) == 0x000650, "Member 'ATeamMemberPedestal_C::Mesh' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, bIsPlayerSelected) == 0x000658, "Member 'ATeamMemberPedestal_C::bIsPlayerSelected' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Pad) == 0x000660, "Member 'ATeamMemberPedestal_C::MID_Pad' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Debug_OnFriendLFGRequest) == 0x000668, "Member 'ATeamMemberPedestal_C::Debug_OnFriendLFGRequest' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Hovered_InputAction) == 0x000678, "Member 'ATeamMemberPedestal_C::Hovered_InputAction' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Gadgets) == 0x000680, "Member 'ATeamMemberPedestal_C::Gadgets' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, PlayerAdd) == 0x000688, "Member 'ATeamMemberPedestal_C::PlayerAdd' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, LastAnimatedPlayerPawn) == 0x000690, "Member 'ATeamMemberPedestal_C::LastAnimatedPlayerPawn' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, bAllowPartySuggestions) == 0x000698, "Member 'ATeamMemberPedestal_C::bAllowPartySuggestions' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, OffsetLobbyAddPlayer) == 0x0006A0, "Member 'ATeamMemberPedestal_C::OffsetLobbyAddPlayer' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, bPlayerPodiumHovered) == 0x0006A8, "Member 'ATeamMemberPedestal_C::bPlayerPodiumHovered' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Pad_Light_Ring) == 0x0006B0, "Member 'ATeamMemberPedestal_C::MID_Pad_Light_Ring' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Top_Light_Ring) == 0x0006B8, "Member 'ATeamMemberPedestal_C::MID_Top_Light_Ring' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, FxActive) == 0x0006C0, "Member 'ATeamMemberPedestal_C::FxActive' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Holo) == 0x0006C8, "Member 'ATeamMemberPedestal_C::MID_Holo' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, HoloMaterial) == 0x0006D0, "Member 'ATeamMemberPedestal_C::HoloMaterial' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Hovered_WithPlayer_InputAction) == 0x0006D8, "Member 'ATeamMemberPedestal_C::Hovered_WithPlayer_InputAction' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, NewLobbyLayout) == 0x0006E0, "Member 'ATeamMemberPedestal_C::NewLobbyLayout' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, LightBrightnessScale) == 0x0006E8, "Member 'ATeamMemberPedestal_C::LightBrightnessScale' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, TopSpotLight_Brightness) == 0x0006F0, "Member 'ATeamMemberPedestal_C::TopSpotLight_Brightness' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, TopSpotLight_Brightness_Hovered) == 0x0006F8, "Member 'ATeamMemberPedestal_C::TopSpotLight_Brightness_Hovered' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, RimSpotLight_Brightness) == 0x000700, "Member 'ATeamMemberPedestal_C::RimSpotLight_Brightness' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBlueSpot_Brightness) == 0x000708, "Member 'ATeamMemberPedestal_C::UnderlightBlueSpot_Brightness' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBlueSpot_Brightness_Hovered) == 0x000710, "Member 'ATeamMemberPedestal_C::UnderlightBlueSpot_Brightness_Hovered' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBluePoint_Brightness) == 0x000718, "Member 'ATeamMemberPedestal_C::UnderlightBluePoint_Brightness' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, UnderlightBluePoint_Brightness_Hovered) == 0x000720, "Member 'ATeamMemberPedestal_C::UnderlightBluePoint_Brightness_Hovered' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, debugHoveredLighting) == 0x000728, "Member 'ATeamMemberPedestal_C::debugHoveredLighting' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, NewVar_0) == 0x000730, "Member 'ATeamMemberPedestal_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, HoloMaterialInst) == 0x000740, "Member 'ATeamMemberPedestal_C::HoloMaterialInst' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_SkipMatchFX) == 0x000748, "Member 'ATeamMemberPedestal_C::MID_SkipMatchFX' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, isPopulated) == 0x000750, "Member 'ATeamMemberPedestal_C::isPopulated' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Pad_FX) == 0x000758, "Member 'ATeamMemberPedestal_C::MID_Pad_FX' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, TeamMemberInfo) == 0x000760, "Member 'ATeamMemberPedestal_C::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_ObserverScreen) == 0x0009B0, "Member 'ATeamMemberPedestal_C::MID_ObserverScreen' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_Observer_Screen_Frame) == 0x0009B8, "Member 'ATeamMemberPedestal_C::MID_Observer_Screen_Frame' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MID_FakeBlobShadow) == 0x0009C0, "Member 'ATeamMemberPedestal_C::MID_FakeBlobShadow' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Hovered_WithPlayer_InputAction_AddFriend) == 0x0009C8, "Member 'ATeamMemberPedestal_C::Hovered_WithPlayer_InputAction_AddFriend' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, MaterialOverride) == 0x0009D0, "Member 'ATeamMemberPedestal_C::MaterialOverride' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Material_Params_to_Copy) == 0x0009E0, "Member 'ATeamMemberPedestal_C::Material_Params_to_Copy' has a wrong offset!");
static_assert(offsetof(ATeamMemberPedestal_C, Material_Override_Flags) == 0x000A10, "Member 'ATeamMemberPedestal_C::Material_Override_Flags' has a wrong offset!");

}
