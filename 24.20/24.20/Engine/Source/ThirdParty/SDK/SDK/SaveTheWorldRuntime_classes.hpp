#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UFortSTWUIDataBase : public UPrimaryDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSTWUIDataBase">();
	}
	static class UFortSTWUIDataBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSTWUIDataBase>();
	}
};
static_assert(alignof(UFortSTWUIDataBase) == 0x000008, "Wrong alignment on UFortSTWUIDataBase");
static_assert(sizeof(UFortSTWUIDataBase) == 0x000030, "Wrong size on UFortSTWUIDataBase");

}
