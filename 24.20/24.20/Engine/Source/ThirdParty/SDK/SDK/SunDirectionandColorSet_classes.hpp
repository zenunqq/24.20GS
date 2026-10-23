#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ASunDirectionandColorSet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        Scene;
	class UArrowComponent*                        Arrow;
	struct FLinearColor                           SunLightColor;

public:
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SunDirectionandColorSet(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SunDirectionandColorSet_C">();
	}
	static class ASunDirectionandColorSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASunDirectionandColorSet_C>();
	}
};
static_assert(alignof(ASunDirectionandColorSet_C) == 0x000008, "Wrong alignment on ASunDirectionandColorSet_C");
static_assert(sizeof(ASunDirectionandColorSet_C) == 0x0002B0, "Wrong size on ASunDirectionandColorSet_C");
static_assert(offsetof(ASunDirectionandColorSet_C, UberGraphFrame) == 0x000288, "Member 'ASunDirectionandColorSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASunDirectionandColorSet_C, Scene) == 0x000290, "Member 'ASunDirectionandColorSet_C::Scene' has a wrong offset!");
static_assert(offsetof(ASunDirectionandColorSet_C, Arrow) == 0x000298, "Member 'ASunDirectionandColorSet_C::Arrow' has a wrong offset!");
static_assert(offsetof(ASunDirectionandColorSet_C, SunLightColor) == 0x0002A0, "Member 'ASunDirectionandColorSet_C::SunLightColor' has a wrong offset!");

}
