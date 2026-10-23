#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_InteriorAudioManager_C final : public AFortInteriorAudioManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UInteriorAudioComponent_Roof_C*         InteriorAudioComponent_Roof;
	class UInteriorAudioComponent_Debug_C*        InteriorAudioComponent_Debug;
	class USceneComponent*                        DefaultSceneRoot;
	struct FInteriorAudioScanResults              CurrentScanResults;
	TArray<class UInteriorAudioComponent_C*>      RegisteredComponents;

public:
	void ExecuteUbergraph_B_InteriorAudioManager(int32 EntryPoint);
	void OnComponentAdded(class UInteriorAudioComponent_C* Component);
	void OnComponentRemoved(class UInteriorAudioComponent_C* Component);
	void UpdateAmbientAudio(const struct FInteriorAudioScanResults& ScanResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_InteriorAudioManager_C">();
	}
	static class AB_InteriorAudioManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_InteriorAudioManager_C>();
	}
};
static_assert(alignof(AB_InteriorAudioManager_C) == 0x000008, "Wrong alignment on AB_InteriorAudioManager_C");
static_assert(sizeof(AB_InteriorAudioManager_C) == 0x000330, "Wrong size on AB_InteriorAudioManager_C");
static_assert(offsetof(AB_InteriorAudioManager_C, UberGraphFrame) == 0x000288, "Member 'AB_InteriorAudioManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_InteriorAudioManager_C, InteriorAudioComponent_Roof) == 0x000290, "Member 'AB_InteriorAudioManager_C::InteriorAudioComponent_Roof' has a wrong offset!");
static_assert(offsetof(AB_InteriorAudioManager_C, InteriorAudioComponent_Debug) == 0x000298, "Member 'AB_InteriorAudioManager_C::InteriorAudioComponent_Debug' has a wrong offset!");
static_assert(offsetof(AB_InteriorAudioManager_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_InteriorAudioManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_InteriorAudioManager_C, CurrentScanResults) == 0x0002A8, "Member 'AB_InteriorAudioManager_C::CurrentScanResults' has a wrong offset!");
static_assert(offsetof(AB_InteriorAudioManager_C, RegisteredComponents) == 0x000320, "Member 'AB_InteriorAudioManager_C::RegisteredComponents' has a wrong offset!");

}
