#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AudioClustersRuntime_classes.hpp"

namespace SDK
{

class UACB_PlaySound_Tree_C final : public UAudioClusterBehavior
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TSoftObjectPtr<class USoundBase>              sound;
	struct FVector                                Position;
	class UAudioComponent*                        CurrentAudioComponent;
	bool                                          Debug;
	uint8                                         Pad_81[0x7];
	class USoundBase*                             OneShotSound;
	double                                        FadeInTime;
	double                                        FadeOutTime;
	int32                                         MinSize;
	int32                                         MaxSize;
	struct FVector2D                              RandomOneshotRange;

public:
	void ClusterSizeToTreeSize(int32 ClusterSize, double* TreeSize);
	void ExecuteUbergraph_ACB_PlaySound_Tree(int32 EntryPoint);
	double GetRandomOneshotTime();
	void OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3(class UObject* Loaded);
	void OnPositionUpdated(const struct FVector& Position_0);
	void OnStart();
	void OnStop();
	void PlayRandomOneshot();
	void QueueRandomOneshot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ACB_PlaySound_Tree_C">();
	}
	static class UACB_PlaySound_Tree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UACB_PlaySound_Tree_C>();
	}
};
static_assert(alignof(UACB_PlaySound_Tree_C) == 0x000008, "Wrong alignment on UACB_PlaySound_Tree_C");
static_assert(sizeof(UACB_PlaySound_Tree_C) == 0x0000B8, "Wrong size on UACB_PlaySound_Tree_C");
static_assert(offsetof(UACB_PlaySound_Tree_C, UberGraphFrame) == 0x000030, "Member 'UACB_PlaySound_Tree_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, sound) == 0x000038, "Member 'UACB_PlaySound_Tree_C::sound' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, Position) == 0x000060, "Member 'UACB_PlaySound_Tree_C::Position' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, CurrentAudioComponent) == 0x000078, "Member 'UACB_PlaySound_Tree_C::CurrentAudioComponent' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, Debug) == 0x000080, "Member 'UACB_PlaySound_Tree_C::Debug' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, OneShotSound) == 0x000088, "Member 'UACB_PlaySound_Tree_C::OneShotSound' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, FadeInTime) == 0x000090, "Member 'UACB_PlaySound_Tree_C::FadeInTime' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, FadeOutTime) == 0x000098, "Member 'UACB_PlaySound_Tree_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, MinSize) == 0x0000A0, "Member 'UACB_PlaySound_Tree_C::MinSize' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, MaxSize) == 0x0000A4, "Member 'UACB_PlaySound_Tree_C::MaxSize' has a wrong offset!");
static_assert(offsetof(UACB_PlaySound_Tree_C, RandomOneshotRange) == 0x0000A8, "Member 'UACB_PlaySound_Tree_C::RandomOneshotRange' has a wrong offset!");

}
