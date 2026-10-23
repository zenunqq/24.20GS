#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_EmotePreviewDisplay_C final : public AFortEmotePreviewActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        Scene;
	class UAthenaEmojiItemDefinition*             EmojiItemDefinition;
	TSoftObjectPtr<class UAnimMontage>            Animation;
	class UFortMontageItemDefinitionBase*         DanceOrEmojiItemDefinition;
	class FName                                   StartSectionName;
	uint8                                         Pad_2EC[0x4];
	TMulticastInlineDelegate<void()>              OnEmoteSetupFinished;
	class UAthenaShoutItemDefinition*             ShoutItemDefinition;
	TArray<class UAudioComponent*>                DynamicallySpawnedSounds;

public:
	void SpecialCaseShoutHandler();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void PreviewEmote(const class UFortMontageItemDefinitionBase* Emote);
	void ExecuteUbergraph_B_EmotePreviewDisplay(int32 EntryPoint);
	void PerformSpecialAction(class FName ActionName);
	void CleanupDynamicSounds();
	void OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded);
	void ApplyEmoteToPet(bool IsRemoval);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_EmotePreviewDisplay_C">();
	}
	static class AB_EmotePreviewDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_EmotePreviewDisplay_C>();
	}
};
static_assert(alignof(AB_EmotePreviewDisplay_C) == 0x000008, "Wrong alignment on AB_EmotePreviewDisplay_C");
static_assert(sizeof(AB_EmotePreviewDisplay_C) == 0x000318, "Wrong size on AB_EmotePreviewDisplay_C");
static_assert(offsetof(AB_EmotePreviewDisplay_C, UberGraphFrame) == 0x0002A0, "Member 'AB_EmotePreviewDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, Scene) == 0x0002A8, "Member 'AB_EmotePreviewDisplay_C::Scene' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, EmojiItemDefinition) == 0x0002B0, "Member 'AB_EmotePreviewDisplay_C::EmojiItemDefinition' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, Animation) == 0x0002B8, "Member 'AB_EmotePreviewDisplay_C::Animation' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, DanceOrEmojiItemDefinition) == 0x0002E0, "Member 'AB_EmotePreviewDisplay_C::DanceOrEmojiItemDefinition' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, StartSectionName) == 0x0002E8, "Member 'AB_EmotePreviewDisplay_C::StartSectionName' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, OnEmoteSetupFinished) == 0x0002F0, "Member 'AB_EmotePreviewDisplay_C::OnEmoteSetupFinished' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, ShoutItemDefinition) == 0x000300, "Member 'AB_EmotePreviewDisplay_C::ShoutItemDefinition' has a wrong offset!");
static_assert(offsetof(AB_EmotePreviewDisplay_C, DynamicallySpawnedSounds) == 0x000308, "Member 'AB_EmotePreviewDisplay_C::DynamicallySpawnedSounds' has a wrong offset!");

}
