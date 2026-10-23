#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UVerseClassBase : public UClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClassBase">();
	}
	static class UVerseClassBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseClassBase>();
	}
};
static_assert(alignof(UVerseClassBase) == 0x000008, "Wrong alignment on UVerseClassBase");
static_assert(sizeof(UVerseClassBase) == 0x000200, "Wrong size on UVerseClassBase");

class UVerseAsset : public UObject
{
public:
	TSubclassOf<class UObject>                    AssetClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseAsset">();
	}
	static class UVerseAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseAsset>();
	}
};
static_assert(alignof(UVerseAsset) == 0x000008, "Wrong alignment on UVerseAsset");
static_assert(sizeof(UVerseAsset) == 0x000030, "Wrong size on UVerseAsset");
static_assert(offsetof(UVerseAsset, AssetClass) == 0x000028, "Member 'UVerseAsset::AssetClass' has a wrong offset!");

class UVerseStmLibrary final : public UObject
{
public:
	static void StmBegin();
	static void StmCommit();
	static void StmEnterFrame();
	static void StmLeaveFrame();
	static void StmRollback();
	static void StmSave(const struct FakeType& Property);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseStmLibrary">();
	}
	static class UVerseStmLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseStmLibrary>();
	}
};
static_assert(alignof(UVerseStmLibrary) == 0x000008, "Wrong alignment on UVerseStmLibrary");
static_assert(sizeof(UVerseStmLibrary) == 0x000028, "Wrong size on UVerseStmLibrary");

}
