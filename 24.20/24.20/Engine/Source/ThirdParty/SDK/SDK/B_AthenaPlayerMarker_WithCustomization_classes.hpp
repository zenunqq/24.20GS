#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "B_AthenaMapMarkerBase_classes.hpp"

namespace SDK
{

class AB_AthenaPlayerMarker_WithCustomization_C final : public AB_AthenaMapMarkerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_AthenaPlayerMarker_WithCustomization_C;
	class UClass*                                 TopperClass;
	class AFortMapMarkerTopperActor*              TopperInstance;
	uint8                                         Pad_6D8[0x8];
	struct FTransform                             TopperTransform;

public:
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32 EntryPoint);
	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(TSubclassOf<class UObject> Loaded);
	void OnMarkerHidden();
	void OnMarkerPlaced();
	void OnSetupMarker(const struct FFortWorldMarkerData& MarkerData_0);
	void UpdateTopper();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AthenaPlayerMarker_WithCustomization_C">();
	}
	static class AB_AthenaPlayerMarker_WithCustomization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AthenaPlayerMarker_WithCustomization_C>();
	}
};
static_assert(alignof(AB_AthenaPlayerMarker_WithCustomization_C) == 0x000010, "Wrong alignment on AB_AthenaPlayerMarker_WithCustomization_C");
static_assert(sizeof(AB_AthenaPlayerMarker_WithCustomization_C) == 0x000740, "Wrong size on AB_AthenaPlayerMarker_WithCustomization_C");
static_assert(offsetof(AB_AthenaPlayerMarker_WithCustomization_C, UberGraphFrame_B_AthenaPlayerMarker_WithCustomization_C) == 0x0006C0, "Member 'AB_AthenaPlayerMarker_WithCustomization_C::UberGraphFrame_B_AthenaPlayerMarker_WithCustomization_C' has a wrong offset!");
static_assert(offsetof(AB_AthenaPlayerMarker_WithCustomization_C, TopperClass) == 0x0006C8, "Member 'AB_AthenaPlayerMarker_WithCustomization_C::TopperClass' has a wrong offset!");
static_assert(offsetof(AB_AthenaPlayerMarker_WithCustomization_C, TopperInstance) == 0x0006D0, "Member 'AB_AthenaPlayerMarker_WithCustomization_C::TopperInstance' has a wrong offset!");
static_assert(offsetof(AB_AthenaPlayerMarker_WithCustomization_C, TopperTransform) == 0x0006E0, "Member 'AB_AthenaPlayerMarker_WithCustomization_C::TopperTransform' has a wrong offset!");

}
