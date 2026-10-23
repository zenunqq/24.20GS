#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CRD_CinematicSequence_structs.hpp"

namespace SDK
{

class ACinematicSequenceDeviceBase final : public ABuildingProp
{
public:
	uint8                                         Pad_EF8[0x20];
	class ULevelSequence*                         Sequence;
	class ALevelSequenceActor*                    LevelSequenceActor;
	class AFortPlayerController*                  InstigatingController;
	uint8                                         InstigatingTeam;
	uint8                                         Pad_F31[0x3];
	uint8                                         bLoopPlayback : 1;
	uint8                                         bRestoreState : 1;
	uint8                                         bAutoPlay : 1;
	uint8                                         Pad_F35[0x3];
	EFortMinigameState                            AutoPlayMinigameState;
	ECinematicSequenceVisibility                  Visibility;
	bool                                          bLevelSequenceActorAlwaysRelevant;
	uint8                                         Pad_F3B[0x5];

public:
	void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);
	void Pause();
	void Play();
	void Stop();

	class UMovieSceneSequencePlayer* GetSequencePlayer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CinematicSequenceDeviceBase">();
	}
	static class ACinematicSequenceDeviceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACinematicSequenceDeviceBase>();
	}
};
static_assert(alignof(ACinematicSequenceDeviceBase) == 0x000008, "Wrong alignment on ACinematicSequenceDeviceBase");
static_assert(sizeof(ACinematicSequenceDeviceBase) == 0x000F40, "Wrong size on ACinematicSequenceDeviceBase");
static_assert(offsetof(ACinematicSequenceDeviceBase, Sequence) == 0x000F18, "Member 'ACinematicSequenceDeviceBase::Sequence' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, LevelSequenceActor) == 0x000F20, "Member 'ACinematicSequenceDeviceBase::LevelSequenceActor' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, InstigatingController) == 0x000F28, "Member 'ACinematicSequenceDeviceBase::InstigatingController' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, InstigatingTeam) == 0x000F30, "Member 'ACinematicSequenceDeviceBase::InstigatingTeam' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, AutoPlayMinigameState) == 0x000F38, "Member 'ACinematicSequenceDeviceBase::AutoPlayMinigameState' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, Visibility) == 0x000F39, "Member 'ACinematicSequenceDeviceBase::Visibility' has a wrong offset!");
static_assert(offsetof(ACinematicSequenceDeviceBase, bLevelSequenceActorAlwaysRelevant) == 0x000F3A, "Member 'ACinematicSequenceDeviceBase::bLevelSequenceActorAlwaysRelevant' has a wrong offset!");

}
