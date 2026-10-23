#pragma once

#include "Basic.hpp"

#include "FieldSystemEngine_classes.hpp"
#include "FieldSystemEngine_parameters.hpp"

namespace SDK
{

void UFieldSystemComponent::AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "AddFieldCommand");

	Params::FieldSystemComponent_AddFieldCommand Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::AddPersistentField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "AddPersistentField");

	Params::FieldSystemComponent_AddPersistentField Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyLinearForce");

	Params::FieldSystemComponent_ApplyLinearForce Parms{};

	Parms.Enabled = Enabled;
	Parms.Direction = std::move(Direction);
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyPhysicsField");

	Params::FieldSystemComponent_ApplyPhysicsField Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialForce");

	Params::FieldSystemComponent_ApplyRadialForce Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = std::move(Position);
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");

	Params::FieldSystemComponent_ApplyRadialVectorFalloffForce Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = std::move(Position);
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");

	Params::FieldSystemComponent_ApplyStayDynamicField Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = std::move(Position);
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStrainField");

	Params::FieldSystemComponent_ApplyStrainField Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = std::move(Position);
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;
	Parms.Iterations = Iterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");

	Params::FieldSystemComponent_ApplyUniformVectorFalloffForce Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = std::move(Position);
	Parms.Direction = std::move(Direction);
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::RemovePersistentFields()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "RemovePersistentFields");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFieldSystemComponent::ResetFieldSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemComponent", "ResetFieldSystem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32 Iterations_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemMetaDataIteration", "SetMetaDataIteration");

	Params::FieldSystemMetaDataIteration_SetMetaDataIteration Parms{};

	Parms.Iterations_0 = Iterations_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemMetaDataProcessingResolution", "SetMetaDataaProcessingResolutionType");

	Params::FieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType Parms{};

	Parms.ResolutionType_0 = ResolutionType_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(EFieldFilterType FilterType_0, EFieldObjectType ObjectType_0, EFieldPositionType PositionType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldSystemMetaDataFilter", "SetMetaDataFilterType");

	Params::FieldSystemMetaDataFilter_SetMetaDataFilterType Parms{};

	Parms.FilterType_0 = FilterType_0;
	Parms.ObjectType_0 = ObjectType_0;
	Parms.PositionType_0 = PositionType_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUniformInteger* UUniformInteger::SetUniformInteger(int32 Magnitude_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformInteger", "SetUniformInteger");

	Params::UniformInteger_SetUniformInteger Parms{};

	Parms.Magnitude_0 = Magnitude_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius_0, const struct FVector& Position_0, int32 InteriorValue_0, int32 ExteriorValue_0, ESetMaskConditionType SetMaskConditionIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialIntMask", "SetRadialIntMask");

	Params::RadialIntMask_SetRadialIntMask Parms{};

	Parms.Radius_0 = Radius_0;
	Parms.Position_0 = std::move(Position_0);
	Parms.InteriorValue_0 = InteriorValue_0;
	Parms.ExteriorValue_0 = ExteriorValue_0;
	Parms.SetMaskConditionIn = SetMaskConditionIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformScalar", "SetUniformScalar");

	Params::UniformScalar_SetUniformScalar Parms{};

	Parms.Magnitude_0 = Magnitude_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaveScalar* UWaveScalar::SetWaveScalar(float Magnitude_0, const struct FVector& Position_0, float WaveLength_0, float Period_0, float Time, EWaveFunctionType Function_0, EFieldFalloffType Falloff_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaveScalar", "SetWaveScalar");

	Params::WaveScalar_SetWaveScalar Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.Position_0 = std::move(Position_0);
	Parms.WaveLength_0 = WaveLength_0;
	Parms.Period_0 = Period_0;
	Parms.Time = Time;
	Parms.Function_0 = Function_0;
	Parms.Falloff_0 = Falloff_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, float Radius_0, const struct FVector& Position_0, EFieldFalloffType Falloff_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialFalloff", "SetRadialFalloff");

	Params::RadialFalloff_SetRadialFalloff Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.MinRange_0 = MinRange_0;
	Parms.MaxRange_0 = MaxRange_0;
	Parms.Default_0 = Default_0;
	Parms.Radius_0 = Radius_0;
	Parms.Position_0 = std::move(Position_0);
	Parms.Falloff_0 = Falloff_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, float Distance_0, const struct FVector& Position_0, const struct FVector& Normal_0, EFieldFalloffType Falloff_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaneFalloff", "SetPlaneFalloff");

	Params::PlaneFalloff_SetPlaneFalloff Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.MinRange_0 = MinRange_0;
	Parms.MaxRange_0 = MaxRange_0;
	Parms.Default_0 = Default_0;
	Parms.Distance_0 = Distance_0;
	Parms.Position_0 = std::move(Position_0);
	Parms.Normal_0 = std::move(Normal_0);
	Parms.Falloff_0 = Falloff_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, const struct FTransform& Transform_0, EFieldFalloffType Falloff_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoxFalloff", "SetBoxFalloff");

	Params::BoxFalloff_SetBoxFalloff Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.MinRange_0 = MinRange_0;
	Parms.MaxRange_0 = MaxRange_0;
	Parms.Default_0 = Default_0;
	Parms.Transform_0 = std::move(Transform_0);
	Parms.Falloff_0 = Falloff_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNoiseField* UNoiseField::SetNoiseField(float MinRange_0, float MaxRange_0, const struct FTransform& Transform_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoiseField", "SetNoiseField");

	Params::NoiseField_SetNoiseField Parms{};

	Parms.MinRange_0 = MinRange_0;
	Parms.MaxRange_0 = MaxRange_0;
	Parms.Transform_0 = std::move(Transform_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUniformVector* UUniformVector::SetUniformVector(float Magnitude_0, const struct FVector& Direction_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UniformVector", "SetUniformVector");

	Params::UniformVector_SetUniformVector Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.Direction_0 = std::move(Direction_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URadialVector* URadialVector::SetRadialVector(float Magnitude_0, const struct FVector& Position_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialVector", "SetRadialVector");

	Params::RadialVector_SetRadialVector Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.Position_0 = std::move(Position_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URandomVector* URandomVector::SetRandomVector(float Magnitude_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomVector", "SetRandomVector");

	Params::RandomVector_SetRandomVector Parms{};

	Parms.Magnitude_0 = Magnitude_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOperatorField* UOperatorField::SetOperatorField(float Magnitude_0, const class UFieldNodeBase* LeftField_0, const class UFieldNodeBase* RightField_0, EFieldOperationType Operation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OperatorField", "SetOperatorField");

	Params::OperatorField_SetOperatorField Parms{};

	Parms.Magnitude_0 = Magnitude_0;
	Parms.LeftField_0 = LeftField_0;
	Parms.RightField_0 = RightField_0;
	Parms.Operation_0 = Operation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UToIntegerField* UToIntegerField::SetToIntegerField(const class UFieldNodeFloat* FloatField_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToIntegerField", "SetToIntegerField");

	Params::ToIntegerField_SetToIntegerField Parms{};

	Parms.FloatField_0 = FloatField_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UToFloatField* UToFloatField::SetToFloatField(const class UFieldNodeInt* IntegerField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToFloatField", "SetToFloatField");

	Params::ToFloatField_SetToFloatField Parms{};

	Parms.IntegerField = IntegerField;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCullingField* UCullingField::SetCullingField(const class UFieldNodeBase* Culling_0, const class UFieldNodeBase* Field_0, EFieldCullingOperationType Operation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CullingField", "SetCullingField");

	Params::CullingField_SetCullingField Parms{};

	Parms.Culling_0 = Culling_0;
	Parms.Field_0 = Field_0;
	Parms.Operation_0 = Operation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReturnResultsTerminal", "SetReturnResultsTerminal");

	Params::ReturnResultsTerminal_SetReturnResultsTerminal Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
