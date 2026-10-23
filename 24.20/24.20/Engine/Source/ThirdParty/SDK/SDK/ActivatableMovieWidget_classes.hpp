#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UActivatableMovieWidget_C final : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USafeZone*                              MainSafeZone;
	class USafeZone*                              SafeZone_0;

public:
	void Construct();
	void ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivatableMovieWidget_C">();
	}
	static class UActivatableMovieWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivatableMovieWidget_C>();
	}
};
static_assert(alignof(UActivatableMovieWidget_C) == 0x000008, "Wrong alignment on UActivatableMovieWidget_C");
static_assert(sizeof(UActivatableMovieWidget_C) == 0x000610, "Wrong size on UActivatableMovieWidget_C");
static_assert(offsetof(UActivatableMovieWidget_C, UberGraphFrame) == 0x0005F8, "Member 'UActivatableMovieWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivatableMovieWidget_C, MainSafeZone) == 0x000600, "Member 'UActivatableMovieWidget_C::MainSafeZone' has a wrong offset!");
static_assert(offsetof(UActivatableMovieWidget_C, SafeZone_0) == 0x000608, "Member 'UActivatableMovieWidget_C::SafeZone_0' has a wrong offset!");

}
