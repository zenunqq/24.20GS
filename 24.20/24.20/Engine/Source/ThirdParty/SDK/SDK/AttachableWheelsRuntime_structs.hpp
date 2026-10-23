#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FAttachableWheelAttachData final
{
public:
	TWeakObjectPtr<class UPrimitiveComponent>     PrimitiveComponent;
	struct FVector                                Pos;
	struct FVector                                Axis1;
	struct FVector                                Axis2;
	class FName                                   AttachmentName;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FAttachableWheelAttachData) == 0x000008, "Wrong alignment on FAttachableWheelAttachData");
static_assert(sizeof(FAttachableWheelAttachData) == 0x000058, "Wrong size on FAttachableWheelAttachData");
static_assert(offsetof(FAttachableWheelAttachData, PrimitiveComponent) == 0x000000, "Member 'FAttachableWheelAttachData::PrimitiveComponent' has a wrong offset!");
static_assert(offsetof(FAttachableWheelAttachData, Pos) == 0x000008, "Member 'FAttachableWheelAttachData::Pos' has a wrong offset!");
static_assert(offsetof(FAttachableWheelAttachData, Axis1) == 0x000020, "Member 'FAttachableWheelAttachData::Axis1' has a wrong offset!");
static_assert(offsetof(FAttachableWheelAttachData, Axis2) == 0x000038, "Member 'FAttachableWheelAttachData::Axis2' has a wrong offset!");
static_assert(offsetof(FAttachableWheelAttachData, AttachmentName) == 0x000050, "Member 'FAttachableWheelAttachData::AttachmentName' has a wrong offset!");

}
