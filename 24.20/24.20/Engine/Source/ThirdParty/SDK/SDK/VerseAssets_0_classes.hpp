#pragma once

#include "Basic.hpp"

#include "VerseNative_classes.hpp"

namespace SDK
{

class UVerseAssetPtr : public UVerseAsset
{
public:
	TSoftObjectPtr<class UObject>                 AssetForEditor;
	class FName                                   AssetPathName;
	uint8                                         Pad_5C[0x4];
	class UObject*                                Object;
	uint8                                         Pad_68[0x28];

public:
	void OnRep_AssetPathName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseAssetPtr">();
	}
	static class UVerseAssetPtr* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseAssetPtr>();
	}
};
static_assert(alignof(UVerseAssetPtr) == 0x000008, "Wrong alignment on UVerseAssetPtr");
static_assert(sizeof(UVerseAssetPtr) == 0x000090, "Wrong size on UVerseAssetPtr");
static_assert(offsetof(UVerseAssetPtr, AssetForEditor) == 0x000030, "Member 'UVerseAssetPtr::AssetForEditor' has a wrong offset!");
static_assert(offsetof(UVerseAssetPtr, AssetPathName) == 0x000058, "Member 'UVerseAssetPtr::AssetPathName' has a wrong offset!");
static_assert(offsetof(UVerseAssetPtr, Object) == 0x000060, "Member 'UVerseAssetPtr::Object' has a wrong offset!");

}
