#pragma once

#include "Basic.hpp"

#include "RenderToTextureFunctionLibrary_classes.hpp"
#include "RenderToTextureFunctionLibrary_parameters.hpp"

namespace SDK
{

void URenderToTextureFunctionLibrary_C::Array_to_HLSL_Int_Array(EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& int2, TArray<struct FVector>& int3, TArray<struct FLinearColor>& int4, class UObject* __WorldContext, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RenderToTextureFunctionLibrary_C", "Array to HLSL Int Array");

	Params::RenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array Parms{};

	Parms.Type = Type;
	Parms.Variable_Name = std::move(Variable_Name);
	Parms.Int = std::move(Int);
	Parms.int2 = std::move(int2);
	Parms.int3 = std::move(int3);
	Parms.int4 = std::move(int4);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Variable_Name = std::move(Parms.Variable_Name);
	Int = std::move(Parms.Int);
	int2 = std::move(Parms.int2);
	int3 = std::move(Parms.int3);
	int4 = std::move(Parms.int4);

	if (String != nullptr)
		*String = std::move(Parms.String);
}

void URenderToTextureFunctionLibrary_C::Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, double Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RenderToTextureFunctionLibrary_C", "Set Canvas Material Scale and Position");

	Params::RenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position Parms{};

	Parms.Size = std::move(Size);
	Parms.Position = std::move(Position);
	Parms.Scale = Scale;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Screen_Position != nullptr)
		*Screen_Position = std::move(Parms.Screen_Position);

	if (Screen_Size != nullptr)
		*Screen_Size = std::move(Parms.Screen_Size);
}

}
