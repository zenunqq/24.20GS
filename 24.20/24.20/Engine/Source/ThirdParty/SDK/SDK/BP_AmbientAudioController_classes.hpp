#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UBP_AmbientAudioController_C final : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        CheckFrequency;
	bool                                          bInSnowCurrent;
	uint8                                         Pad_D9[0x7];
	class UAmbientAudioDataAsset*                 WinterAudioBank;
	bool                                          bSnowEnabled;
	uint8                                         Pad_E9[0x7];
	class UAmbientAudioDataAsset*                 StormAudioBank;
	struct FGameplayTag                           AmbientAudioInsideTag;
	uint8                                         Pad_FC[0x4];
	class UAmbientAudioDataAsset*                 CurieAudioBank;
	struct FVector                                SnowOriginWorldLoc;
	double                                        SnowRadius;
	TArray<struct FGameplayTag>                   SnowTagsToApply;
	class FName                                   SnowEntryName;
	uint8                                         Pad_13C[0x4];
	double                                        IndoorInterpTime;
	double                                        IndoorStateChangedTime;
	bool                                          bIsIndoors;
	uint8                                         Pad_151[0x7];
	double                                        IsPlayerIndoorsInterp;
	class AActor*                                 CurrViewTarget;
	TArray<struct FGameplayTag>                   GenericTagsToApply;
	bool                                          bTagApplicationEnabled;
	EInteriorAudioState                           Current_State;
	uint8                                         Pad_17A[0x2];
	struct FGameplayTag                           Current_Room_Size_Tag;
	TMap<struct FGameplayTag, class UReverbEffect*> Reverbs;
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent;
	TArray<class FString>                         SupportedTagLevels;
	double                                        SpecialSurfacePadding;
	class USoundMix*                              AmbientAudioSoundMix;

public:
	void ApplyPlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Tag_Array);
	void CacheViewTarget();
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint);
	void InitSnowCoverageComponent(class AGameStateBase* Game_State);
	void On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev);
	void On_Room_State_Changed(EInteriorAudioState Curr, EInteriorAudioState Prev);
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase* GameState);
	void OnViewTargetChanged(class AActor* New_Target, class AActor* Prev_Target);
	void ReceiveBeginPlay();
	void RemovePlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Array);
	void Update();
	void Update_Interior_Audio_Verb();
	void UpdateSnowSetupBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AmbientAudioController_C">();
	}
	static class UBP_AmbientAudioController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AmbientAudioController_C>();
	}
};
static_assert(alignof(UBP_AmbientAudioController_C) == 0x000008, "Wrong alignment on UBP_AmbientAudioController_C");
static_assert(sizeof(UBP_AmbientAudioController_C) == 0x0001F8, "Wrong size on UBP_AmbientAudioController_C");
static_assert(offsetof(UBP_AmbientAudioController_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_AmbientAudioController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, CheckFrequency) == 0x0000D0, "Member 'UBP_AmbientAudioController_C::CheckFrequency' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, bInSnowCurrent) == 0x0000D8, "Member 'UBP_AmbientAudioController_C::bInSnowCurrent' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, WinterAudioBank) == 0x0000E0, "Member 'UBP_AmbientAudioController_C::WinterAudioBank' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, bSnowEnabled) == 0x0000E8, "Member 'UBP_AmbientAudioController_C::bSnowEnabled' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, StormAudioBank) == 0x0000F0, "Member 'UBP_AmbientAudioController_C::StormAudioBank' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, AmbientAudioInsideTag) == 0x0000F8, "Member 'UBP_AmbientAudioController_C::AmbientAudioInsideTag' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, CurieAudioBank) == 0x000100, "Member 'UBP_AmbientAudioController_C::CurieAudioBank' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SnowOriginWorldLoc) == 0x000108, "Member 'UBP_AmbientAudioController_C::SnowOriginWorldLoc' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SnowRadius) == 0x000120, "Member 'UBP_AmbientAudioController_C::SnowRadius' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SnowTagsToApply) == 0x000128, "Member 'UBP_AmbientAudioController_C::SnowTagsToApply' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SnowEntryName) == 0x000138, "Member 'UBP_AmbientAudioController_C::SnowEntryName' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, IndoorInterpTime) == 0x000140, "Member 'UBP_AmbientAudioController_C::IndoorInterpTime' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, IndoorStateChangedTime) == 0x000148, "Member 'UBP_AmbientAudioController_C::IndoorStateChangedTime' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, bIsIndoors) == 0x000150, "Member 'UBP_AmbientAudioController_C::bIsIndoors' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, IsPlayerIndoorsInterp) == 0x000158, "Member 'UBP_AmbientAudioController_C::IsPlayerIndoorsInterp' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, CurrViewTarget) == 0x000160, "Member 'UBP_AmbientAudioController_C::CurrViewTarget' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, GenericTagsToApply) == 0x000168, "Member 'UBP_AmbientAudioController_C::GenericTagsToApply' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, bTagApplicationEnabled) == 0x000178, "Member 'UBP_AmbientAudioController_C::bTagApplicationEnabled' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, Current_State) == 0x000179, "Member 'UBP_AmbientAudioController_C::Current_State' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, Current_Room_Size_Tag) == 0x00017C, "Member 'UBP_AmbientAudioController_C::Current_Room_Size_Tag' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, Reverbs) == 0x000180, "Member 'UBP_AmbientAudioController_C::Reverbs' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SnowCoverageComponent) == 0x0001D0, "Member 'UBP_AmbientAudioController_C::SnowCoverageComponent' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SupportedTagLevels) == 0x0001D8, "Member 'UBP_AmbientAudioController_C::SupportedTagLevels' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, SpecialSurfacePadding) == 0x0001E8, "Member 'UBP_AmbientAudioController_C::SpecialSurfacePadding' has a wrong offset!");
static_assert(offsetof(UBP_AmbientAudioController_C, AmbientAudioSoundMix) == 0x0001F0, "Member 'UBP_AmbientAudioController_C::AmbientAudioSoundMix' has a wrong offset!");

}
