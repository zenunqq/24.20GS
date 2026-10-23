#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AAthena_PlayerController_C final : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UUnderwaterAudioComponent_C*            UnderwaterAudioComponent;
	class USceneComponent*                        ListenerOverride;
	class UAudioComponent*                        VictoryRoyaleAudio;
	class UAudioComponent*                        VictoryRoyaleMusic1;
	class USoundBase*                             CurrentMusic;
	struct FGameplayTagContainer                  BladeWielderTag;
	EFortItemType                                 InteractingItemType;
	uint8                                         Pad_4B71[0x7];
	struct FGameplayTagContainer                  InteractionTags;
	TMulticastInlineDelegate<void(class APawn* PossessedPawn)> PawnPossessedDispatcher;
	struct FTimerHandle                           PermissionsRecheckTimerHandle;
	class USoundMix*                              CamUnderwaterSoundMix;
	class USoundBase*                             CamUnderwaterLoopSound;
	class UAudioComponent*                        CamUnderwaterAudio;
	class USoundBase*                             CamUnderwaterStartSound;
	class USoundBase*                             CamUnderwaterStopSound;
	class UAudioComponent*                        VictoryRoyaleMusic2;
	double                                        LobbyMusicOnVictoryDelayTime_Default;

public:
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint);
	void FadeAudioComponents(class UAudioComponent* NewMusicComponent, class UAudioComponent* PreviousMusicComponent, class USoundBase* Music, double StartTime);
	void GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void Handle_Victory_Royale_Audio(bool Audio_Only);
	bool Is_Creative_Mode();
	void K2_OnEnterVolume(class AFortVolume* Volume);
	void K2_OnLeaveVolume(class AFortVolume* Volume);
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void OnLocalInteraction(class AActor* ReceivingActor);
	void OnMusicPackLoaded(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void PlayVictoryStinger(class USoundCue* VictoryStingerCue);
	void PlayWinEffects(class APawn* FinisherPawn, const class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly, const ERoundVictoryAnimation VictoryAnimation);
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveItem();
	void ReplicateRotationScaleReset();
	void RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void SetupPermissionRecheckTimer();
	void Start_Victory_Royale_Music();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerController_C">();
	}
	static class AAthena_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_PlayerController_C>();
	}
};
static_assert(alignof(AAthena_PlayerController_C) == 0x000010, "Wrong alignment on AAthena_PlayerController_C");
static_assert(sizeof(AAthena_PlayerController_C) == 0x004BF0, "Wrong size on AAthena_PlayerController_C");
static_assert(offsetof(AAthena_PlayerController_C, UberGraphFrame) == 0x004B20, "Member 'AAthena_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, UnderwaterAudioComponent) == 0x004B28, "Member 'AAthena_PlayerController_C::UnderwaterAudioComponent' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, ListenerOverride) == 0x004B30, "Member 'AAthena_PlayerController_C::ListenerOverride' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, VictoryRoyaleAudio) == 0x004B38, "Member 'AAthena_PlayerController_C::VictoryRoyaleAudio' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, VictoryRoyaleMusic1) == 0x004B40, "Member 'AAthena_PlayerController_C::VictoryRoyaleMusic1' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CurrentMusic) == 0x004B48, "Member 'AAthena_PlayerController_C::CurrentMusic' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, BladeWielderTag) == 0x004B50, "Member 'AAthena_PlayerController_C::BladeWielderTag' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, InteractingItemType) == 0x004B70, "Member 'AAthena_PlayerController_C::InteractingItemType' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, InteractionTags) == 0x004B78, "Member 'AAthena_PlayerController_C::InteractionTags' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, PawnPossessedDispatcher) == 0x004B98, "Member 'AAthena_PlayerController_C::PawnPossessedDispatcher' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, PermissionsRecheckTimerHandle) == 0x004BA8, "Member 'AAthena_PlayerController_C::PermissionsRecheckTimerHandle' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CamUnderwaterSoundMix) == 0x004BB0, "Member 'AAthena_PlayerController_C::CamUnderwaterSoundMix' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CamUnderwaterLoopSound) == 0x004BB8, "Member 'AAthena_PlayerController_C::CamUnderwaterLoopSound' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CamUnderwaterAudio) == 0x004BC0, "Member 'AAthena_PlayerController_C::CamUnderwaterAudio' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CamUnderwaterStartSound) == 0x004BC8, "Member 'AAthena_PlayerController_C::CamUnderwaterStartSound' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, CamUnderwaterStopSound) == 0x004BD0, "Member 'AAthena_PlayerController_C::CamUnderwaterStopSound' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, VictoryRoyaleMusic2) == 0x004BD8, "Member 'AAthena_PlayerController_C::VictoryRoyaleMusic2' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, LobbyMusicOnVictoryDelayTime_Default) == 0x004BE0, "Member 'AAthena_PlayerController_C::LobbyMusicOnVictoryDelayTime_Default' has a wrong offset!");

}
