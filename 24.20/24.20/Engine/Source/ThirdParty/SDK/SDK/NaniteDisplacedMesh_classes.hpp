#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UNaniteDisplacedMesh final : public UObject
{
public:
	uint8                                         Pad_28[0x110];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NaniteDisplacedMesh">();
	}
	static class UNaniteDisplacedMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNaniteDisplacedMesh>();
	}
};
static_assert(alignof(UNaniteDisplacedMesh) == 0x000008, "Wrong alignment on UNaniteDisplacedMesh");
static_assert(sizeof(UNaniteDisplacedMesh) == 0x000138, "Wrong size on UNaniteDisplacedMesh");

class UNaniteDisplacedMeshComponent final : public UStaticMeshComponent
{
public:
	class UNaniteDisplacedMesh*                   DisplacedMesh;
	uint8                                         Pad_628[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NaniteDisplacedMeshComponent">();
	}
	static class UNaniteDisplacedMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNaniteDisplacedMeshComponent>();
	}
};
static_assert(alignof(UNaniteDisplacedMeshComponent) == 0x000010, "Wrong alignment on UNaniteDisplacedMeshComponent");
static_assert(sizeof(UNaniteDisplacedMeshComponent) == 0x000630, "Wrong size on UNaniteDisplacedMeshComponent");
static_assert(offsetof(UNaniteDisplacedMeshComponent, DisplacedMesh) == 0x000620, "Member 'UNaniteDisplacedMeshComponent::DisplacedMesh' has a wrong offset!");

}
