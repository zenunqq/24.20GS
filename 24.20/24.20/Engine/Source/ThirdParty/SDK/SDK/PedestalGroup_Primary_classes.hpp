#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class APedestalGroup_Primary_C final : public AAthenaSquadPedestalGroup
{
public:
	class UChildActorComponent*                   CAC_Pedestal3;
	class UChildActorComponent*                   CAC_Pedestal2;
	class UChildActorComponent*                   CAC_Pedestal1;
	class UChildActorComponent*                   CAC_Pedestal0;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PedestalGroup_Primary_C">();
	}
	static class APedestalGroup_Primary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APedestalGroup_Primary_C>();
	}
};
static_assert(alignof(APedestalGroup_Primary_C) == 0x000008, "Wrong alignment on APedestalGroup_Primary_C");
static_assert(sizeof(APedestalGroup_Primary_C) == 0x0002D8, "Wrong size on APedestalGroup_Primary_C");
static_assert(offsetof(APedestalGroup_Primary_C, CAC_Pedestal3) == 0x0002B8, "Member 'APedestalGroup_Primary_C::CAC_Pedestal3' has a wrong offset!");
static_assert(offsetof(APedestalGroup_Primary_C, CAC_Pedestal2) == 0x0002C0, "Member 'APedestalGroup_Primary_C::CAC_Pedestal2' has a wrong offset!");
static_assert(offsetof(APedestalGroup_Primary_C, CAC_Pedestal1) == 0x0002C8, "Member 'APedestalGroup_Primary_C::CAC_Pedestal1' has a wrong offset!");
static_assert(offsetof(APedestalGroup_Primary_C, CAC_Pedestal0) == 0x0002D0, "Member 'APedestalGroup_Primary_C::CAC_Pedestal0' has a wrong offset!");

}
