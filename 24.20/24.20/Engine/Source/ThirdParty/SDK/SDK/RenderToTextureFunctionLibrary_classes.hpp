#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EIntTypes_structs.hpp"

namespace SDK
{

class URenderToTextureFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Array_to_HLSL_Int_Array(EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& int2, TArray<struct FVector>& int3, TArray<struct FLinearColor>& int4, class UObject* __WorldContext, class FString* String);
	static void Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, double Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RenderToTextureFunctionLibrary_C">();
	}
	static class URenderToTextureFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URenderToTextureFunctionLibrary_C>();
	}
};
static_assert(alignof(URenderToTextureFunctionLibrary_C) == 0x000008, "Wrong alignment on URenderToTextureFunctionLibrary_C");
static_assert(sizeof(URenderToTextureFunctionLibrary_C) == 0x000028, "Wrong size on URenderToTextureFunctionLibrary_C");

}
