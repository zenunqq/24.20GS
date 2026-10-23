#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK
{

class AHBOnboardingFlow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	class UFortQuestItemDefinition_Campaign*      PlayPeriodicEventMovieQuest;
	bool                                          bPlayedPeriodicEventMovie;
	bool                                          bHasRecheckedNeedToPlayPeriodicEventMovie;
	uint8                                         Pad_2A2[0x6];
	struct FDataTableRowHandle                    PlayPeriodicEventCineObjective;
	class UClass*                                 PeriodicEventMovieAnnouncementClass;

public:
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void StartFlow();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain);
	bool NeedsToPlayEventMovie();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void HandlePlayEventCine();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager);
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HBOnboardingFlow_C">();
	}
	static class AHBOnboardingFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHBOnboardingFlow_C>();
	}
};
static_assert(alignof(AHBOnboardingFlow_C) == 0x000008, "Wrong alignment on AHBOnboardingFlow_C");
static_assert(sizeof(AHBOnboardingFlow_C) == 0x0002C0, "Wrong size on AHBOnboardingFlow_C");
static_assert(offsetof(AHBOnboardingFlow_C, UberGraphFrame) == 0x000288, "Member 'AHBOnboardingFlow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, DefaultSceneRoot) == 0x000290, "Member 'AHBOnboardingFlow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, PlayPeriodicEventMovieQuest) == 0x000298, "Member 'AHBOnboardingFlow_C::PlayPeriodicEventMovieQuest' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, bPlayedPeriodicEventMovie) == 0x0002A0, "Member 'AHBOnboardingFlow_C::bPlayedPeriodicEventMovie' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, bHasRecheckedNeedToPlayPeriodicEventMovie) == 0x0002A1, "Member 'AHBOnboardingFlow_C::bHasRecheckedNeedToPlayPeriodicEventMovie' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, PlayPeriodicEventCineObjective) == 0x0002A8, "Member 'AHBOnboardingFlow_C::PlayPeriodicEventCineObjective' has a wrong offset!");
static_assert(offsetof(AHBOnboardingFlow_C, PeriodicEventMovieAnnouncementClass) == 0x0002B8, "Member 'AHBOnboardingFlow_C::PeriodicEventMovieAnnouncementClass' has a wrong offset!");

}
