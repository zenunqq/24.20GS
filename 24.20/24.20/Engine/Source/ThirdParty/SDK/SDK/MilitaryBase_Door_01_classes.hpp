#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Parent_BuildingWall_classes.hpp"

namespace SDK
{

class AMilitaryBase_Door_01_C final : public AParent_BuildingWall_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBoxComponent*                          DoorSlideOverlapVolume;
	class UStaticMeshComponent*                   DoorStaticMesh1;
	float                                         Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F;
	float                                         Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F;
	ETimelineDirection                            Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F;
	uint8                                         Pad_1039[0x7];
	class UTimelineComponent*                     Timeline_0;
	int32                                         NumberOfPawnsWithinVolume;
	bool                                          DoorOpen;
	uint8                                         Pad_104D[0x3];
	class UMaterialInstanceDynamic*               DoorMID;
	struct FLinearColor                           DefaultDoorEmissiveValue;
	struct FLinearColor                           ActiveDoorEmissiveValue;
	class UMaterialInterface*                     DoorBaseMaterial;
	class UMaterialInterface*                     Door_Source_Materials;
	class USoundBase*                             SlidingDoorClose_Sound;
	class USoundBase*                             SlidingDoorOpen_Sound;
	TMulticastInlineDelegate<void()>              OnDoorOpened;

public:
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Close(class AController* ControllerInstigator);
	void CloseDoor();
	void ExecuteUbergraph_MilitaryBase_Door_01(int32 EntryPoint);
	TArray<class UPrimitiveComponent*> GetComponentToLock();
	void GetDoorMID();
	void OnLocked();
	void OnRep_DoorOpen();
	void OnUnLocked();
	void Open(class AController* ControllerInstigator, bool bRequestFastOpen);
	void OpenDoor();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

	bool IsOpen() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MilitaryBase_Door_01_C">();
	}
	static class AMilitaryBase_Door_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMilitaryBase_Door_01_C>();
	}
};
static_assert(alignof(AMilitaryBase_Door_01_C) == 0x000008, "Wrong alignment on AMilitaryBase_Door_01_C");
static_assert(sizeof(AMilitaryBase_Door_01_C) == 0x0010A8, "Wrong size on AMilitaryBase_Door_01_C");
static_assert(offsetof(AMilitaryBase_Door_01_C, UberGraphFrame) == 0x001018, "Member 'AMilitaryBase_Door_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DoorSlideOverlapVolume) == 0x001020, "Member 'AMilitaryBase_Door_01_C::DoorSlideOverlapVolume' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DoorStaticMesh1) == 0x001028, "Member 'AMilitaryBase_Door_01_C::DoorStaticMesh1' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F) == 0x001030, "Member 'AMilitaryBase_Door_01_C::Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F) == 0x001034, "Member 'AMilitaryBase_Door_01_C::Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F) == 0x001038, "Member 'AMilitaryBase_Door_01_C::Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, Timeline_0) == 0x001040, "Member 'AMilitaryBase_Door_01_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, NumberOfPawnsWithinVolume) == 0x001048, "Member 'AMilitaryBase_Door_01_C::NumberOfPawnsWithinVolume' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DoorOpen) == 0x00104C, "Member 'AMilitaryBase_Door_01_C::DoorOpen' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DoorMID) == 0x001050, "Member 'AMilitaryBase_Door_01_C::DoorMID' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DefaultDoorEmissiveValue) == 0x001058, "Member 'AMilitaryBase_Door_01_C::DefaultDoorEmissiveValue' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, ActiveDoorEmissiveValue) == 0x001068, "Member 'AMilitaryBase_Door_01_C::ActiveDoorEmissiveValue' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, DoorBaseMaterial) == 0x001078, "Member 'AMilitaryBase_Door_01_C::DoorBaseMaterial' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, Door_Source_Materials) == 0x001080, "Member 'AMilitaryBase_Door_01_C::Door_Source_Materials' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, SlidingDoorClose_Sound) == 0x001088, "Member 'AMilitaryBase_Door_01_C::SlidingDoorClose_Sound' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, SlidingDoorOpen_Sound) == 0x001090, "Member 'AMilitaryBase_Door_01_C::SlidingDoorOpen_Sound' has a wrong offset!");
static_assert(offsetof(AMilitaryBase_Door_01_C, OnDoorOpened) == 0x001098, "Member 'AMilitaryBase_Door_01_C::OnDoorOpened' has a wrong offset!");

}
