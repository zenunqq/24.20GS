#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class APapayaBoundarySpline_C final : public AActor
{
public:
	class USplineComponent*                       Spline2;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PapayaBoundarySpline_C">();
	}
	static class APapayaBoundarySpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APapayaBoundarySpline_C>();
	}
};
static_assert(alignof(APapayaBoundarySpline_C) == 0x000008, "Wrong alignment on APapayaBoundarySpline_C");
static_assert(sizeof(APapayaBoundarySpline_C) == 0x000298, "Wrong size on APapayaBoundarySpline_C");
static_assert(offsetof(APapayaBoundarySpline_C, Spline2) == 0x000288, "Member 'APapayaBoundarySpline_C::Spline2' has a wrong offset!");
static_assert(offsetof(APapayaBoundarySpline_C, DefaultSceneRoot) == 0x000290, "Member 'APapayaBoundarySpline_C::DefaultSceneRoot' has a wrong offset!");

}
