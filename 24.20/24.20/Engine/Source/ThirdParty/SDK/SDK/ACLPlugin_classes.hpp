#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "ACLPlugin_structs.hpp"

namespace SDK
{

class UAnimationCompressionLibraryDatabase final : public UObject
{
public:
	TArray<uint8>                                 CookedCompressedBytes;
	TArray<uint64>                                CookedAnimSequenceMappings;
	uint8                                         Pad_48[0x118];
	uint32                                        MaxStreamRequestSizeKB;
	uint8                                         Pad_164[0x4];

public:
	static EACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);
	static void SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult* Result, EACLVisualFidelity VisualFidelity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationCompressionLibraryDatabase">();
	}
	static class UAnimationCompressionLibraryDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationCompressionLibraryDatabase>();
	}
};
static_assert(alignof(UAnimationCompressionLibraryDatabase) == 0x000008, "Wrong alignment on UAnimationCompressionLibraryDatabase");
static_assert(sizeof(UAnimationCompressionLibraryDatabase) == 0x000168, "Wrong size on UAnimationCompressionLibraryDatabase");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedCompressedBytes) == 0x000028, "Member 'UAnimationCompressionLibraryDatabase::CookedCompressedBytes' has a wrong offset!");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings) == 0x000038, "Member 'UAnimationCompressionLibraryDatabase::CookedAnimSequenceMappings' has a wrong offset!");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, MaxStreamRequestSizeKB) == 0x000160, "Member 'UAnimationCompressionLibraryDatabase::MaxStreamRequestSizeKB' has a wrong offset!");

class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimBoneCompressionCodec_ACLBase">();
	}
	static class UAnimBoneCompressionCodec_ACLBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBoneCompressionCodec_ACLBase>();
	}
};
static_assert(alignof(UAnimBoneCompressionCodec_ACLBase) == 0x000008, "Wrong alignment on UAnimBoneCompressionCodec_ACLBase");
static_assert(sizeof(UAnimBoneCompressionCodec_ACLBase) == 0x000038, "Wrong size on UAnimBoneCompressionCodec_ACLBase");

class UAnimBoneCompressionCodec_ACL final : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimBoneCompressionCodec*              SafetyFallbackCodec;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimBoneCompressionCodec_ACL">();
	}
	static class UAnimBoneCompressionCodec_ACL* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBoneCompressionCodec_ACL>();
	}
};
static_assert(alignof(UAnimBoneCompressionCodec_ACL) == 0x000008, "Wrong alignment on UAnimBoneCompressionCodec_ACL");
static_assert(sizeof(UAnimBoneCompressionCodec_ACL) == 0x000040, "Wrong size on UAnimBoneCompressionCodec_ACL");
static_assert(offsetof(UAnimBoneCompressionCodec_ACL, SafetyFallbackCodec) == 0x000038, "Member 'UAnimBoneCompressionCodec_ACL::SafetyFallbackCodec' has a wrong offset!");

class UAnimBoneCompressionCodec_ACLCustom final : public UAnimBoneCompressionCodec_ACLBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimBoneCompressionCodec_ACLCustom">();
	}
	static class UAnimBoneCompressionCodec_ACLCustom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBoneCompressionCodec_ACLCustom>();
	}
};
static_assert(alignof(UAnimBoneCompressionCodec_ACLCustom) == 0x000008, "Wrong alignment on UAnimBoneCompressionCodec_ACLCustom");
static_assert(sizeof(UAnimBoneCompressionCodec_ACLCustom) == 0x000038, "Wrong size on UAnimBoneCompressionCodec_ACLCustom");

class UAnimBoneCompressionCodec_ACLDatabase final : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimationCompressionLibraryDatabase*   DatabaseAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimBoneCompressionCodec_ACLDatabase">();
	}
	static class UAnimBoneCompressionCodec_ACLDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBoneCompressionCodec_ACLDatabase>();
	}
};
static_assert(alignof(UAnimBoneCompressionCodec_ACLDatabase) == 0x000008, "Wrong alignment on UAnimBoneCompressionCodec_ACLDatabase");
static_assert(sizeof(UAnimBoneCompressionCodec_ACLDatabase) == 0x000040, "Wrong size on UAnimBoneCompressionCodec_ACLDatabase");
static_assert(offsetof(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset) == 0x000038, "Member 'UAnimBoneCompressionCodec_ACLDatabase::DatabaseAsset' has a wrong offset!");

class UAnimBoneCompressionCodec_ACLSafe final : public UAnimBoneCompressionCodec_ACLBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimBoneCompressionCodec_ACLSafe">();
	}
	static class UAnimBoneCompressionCodec_ACLSafe* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBoneCompressionCodec_ACLSafe>();
	}
};
static_assert(alignof(UAnimBoneCompressionCodec_ACLSafe) == 0x000008, "Wrong alignment on UAnimBoneCompressionCodec_ACLSafe");
static_assert(sizeof(UAnimBoneCompressionCodec_ACLSafe) == 0x000038, "Wrong size on UAnimBoneCompressionCodec_ACLSafe");

class UAnimCurveCompressionCodec_ACL final : public UAnimCurveCompressionCodec
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimCurveCompressionCodec_ACL">();
	}
	static class UAnimCurveCompressionCodec_ACL* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCurveCompressionCodec_ACL>();
	}
};
static_assert(alignof(UAnimCurveCompressionCodec_ACL) == 0x000008, "Wrong alignment on UAnimCurveCompressionCodec_ACL");
static_assert(sizeof(UAnimCurveCompressionCodec_ACL) == 0x000038, "Wrong size on UAnimCurveCompressionCodec_ACL");

}
