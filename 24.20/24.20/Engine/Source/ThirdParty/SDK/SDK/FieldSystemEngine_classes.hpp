#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Chaos_structs.hpp"
#include "FieldSystemEngine_structs.hpp"

namespace SDK
{

class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                  FieldSystemComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemActor">();
	}
	static class AFieldSystemActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFieldSystemActor>();
	}
};
static_assert(alignof(AFieldSystemActor) == 0x000008, "Wrong alignment on AFieldSystemActor");
static_assert(sizeof(AFieldSystemActor) == 0x000290, "Wrong size on AFieldSystemActor");
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x000288, "Member 'AFieldSystemActor::FieldSystemComponent' has a wrong offset!");

class UFieldSystem final : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystem">();
	}
	static class UFieldSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystem>();
	}
};
static_assert(alignof(UFieldSystem) == 0x000008, "Wrong alignment on UFieldSystem");
static_assert(sizeof(UFieldSystem) == 0x000038, "Wrong size on UFieldSystem");

class UFieldSystemComponent final : public UPrimitiveComponent
{
public:
	class UFieldSystem*                           FieldSystem;
	bool                                          bIsWorldField;
	bool                                          bIsChaosField;
	uint8                                         Pad_572[0x6];
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;
	struct FFieldObjectCommands                   ConstructionCommands;
	struct FFieldObjectCommands                   BufferCommands;
	uint8                                         Pad_5E8[0x58];

public:
	void AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void AddPersistentField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32 Iterations);
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void RemovePersistentFields();
	void ResetFieldSystem();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemComponent">();
	}
	static class UFieldSystemComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemComponent>();
	}
};
static_assert(alignof(UFieldSystemComponent) == 0x000010, "Wrong alignment on UFieldSystemComponent");
static_assert(sizeof(UFieldSystemComponent) == 0x000640, "Wrong size on UFieldSystemComponent");
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x000568, "Member 'UFieldSystemComponent::FieldSystem' has a wrong offset!");
static_assert(offsetof(UFieldSystemComponent, bIsWorldField) == 0x000570, "Member 'UFieldSystemComponent::bIsWorldField' has a wrong offset!");
static_assert(offsetof(UFieldSystemComponent, bIsChaosField) == 0x000571, "Member 'UFieldSystemComponent::bIsChaosField' has a wrong offset!");
static_assert(offsetof(UFieldSystemComponent, SupportedSolvers) == 0x000578, "Member 'UFieldSystemComponent::SupportedSolvers' has a wrong offset!");
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 0x000588, "Member 'UFieldSystemComponent::ConstructionCommands' has a wrong offset!");
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 0x0005B8, "Member 'UFieldSystemComponent::BufferCommands' has a wrong offset!");

class UFieldSystemMetaData : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemMetaData">();
	}
	static class UFieldSystemMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemMetaData>();
	}
};
static_assert(alignof(UFieldSystemMetaData) == 0x000008, "Wrong alignment on UFieldSystemMetaData");
static_assert(sizeof(UFieldSystemMetaData) == 0x0000A0, "Wrong size on UFieldSystemMetaData");

class UFieldSystemMetaDataIteration final : public UFieldSystemMetaData
{
public:
	int32                                         Iterations;
	uint8                                         Pad_A4[0x4];

public:
	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemMetaDataIteration">();
	}
	static class UFieldSystemMetaDataIteration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemMetaDataIteration>();
	}
};
static_assert(alignof(UFieldSystemMetaDataIteration) == 0x000008, "Wrong alignment on UFieldSystemMetaDataIteration");
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x0000A8, "Wrong size on UFieldSystemMetaDataIteration");
static_assert(offsetof(UFieldSystemMetaDataIteration, Iterations) == 0x0000A0, "Member 'UFieldSystemMetaDataIteration::Iterations' has a wrong offset!");

class UFieldSystemMetaDataProcessingResolution final : public UFieldSystemMetaData
{
public:
	EFieldResolutionType                          ResolutionType;
	uint8                                         Pad_A1[0x7];

public:
	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemMetaDataProcessingResolution">();
	}
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemMetaDataProcessingResolution>();
	}
};
static_assert(alignof(UFieldSystemMetaDataProcessingResolution) == 0x000008, "Wrong alignment on UFieldSystemMetaDataProcessingResolution");
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x0000A8, "Wrong size on UFieldSystemMetaDataProcessingResolution");
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x0000A0, "Member 'UFieldSystemMetaDataProcessingResolution::ResolutionType' has a wrong offset!");

class UFieldSystemMetaDataFilter final : public UFieldSystemMetaData
{
public:
	EFieldFilterType                              FilterType;
	EFieldObjectType                              ObjectType;
	EFieldPositionType                            PositionType;
	uint8                                         Pad_A3[0x5];

public:
	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(EFieldFilterType FilterType_0, EFieldObjectType ObjectType_0, EFieldPositionType PositionType_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemMetaDataFilter">();
	}
	static class UFieldSystemMetaDataFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemMetaDataFilter>();
	}
};
static_assert(alignof(UFieldSystemMetaDataFilter) == 0x000008, "Wrong alignment on UFieldSystemMetaDataFilter");
static_assert(sizeof(UFieldSystemMetaDataFilter) == 0x0000A8, "Wrong size on UFieldSystemMetaDataFilter");
static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 0x0000A0, "Member 'UFieldSystemMetaDataFilter::FilterType' has a wrong offset!");
static_assert(offsetof(UFieldSystemMetaDataFilter, ObjectType) == 0x0000A1, "Member 'UFieldSystemMetaDataFilter::ObjectType' has a wrong offset!");
static_assert(offsetof(UFieldSystemMetaDataFilter, PositionType) == 0x0000A2, "Member 'UFieldSystemMetaDataFilter::PositionType' has a wrong offset!");

class UFieldNodeBase : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldNodeBase">();
	}
	static class UFieldNodeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldNodeBase>();
	}
};
static_assert(alignof(UFieldNodeBase) == 0x000008, "Wrong alignment on UFieldNodeBase");
static_assert(sizeof(UFieldNodeBase) == 0x0000A0, "Wrong size on UFieldNodeBase");

class UFieldNodeInt : public UFieldNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldNodeInt">();
	}
	static class UFieldNodeInt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldNodeInt>();
	}
};
static_assert(alignof(UFieldNodeInt) == 0x000008, "Wrong alignment on UFieldNodeInt");
static_assert(sizeof(UFieldNodeInt) == 0x0000A0, "Wrong size on UFieldNodeInt");

class UFieldNodeFloat : public UFieldNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldNodeFloat">();
	}
	static class UFieldNodeFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldNodeFloat>();
	}
};
static_assert(alignof(UFieldNodeFloat) == 0x000008, "Wrong alignment on UFieldNodeFloat");
static_assert(sizeof(UFieldNodeFloat) == 0x0000A0, "Wrong size on UFieldNodeFloat");

class UFieldNodeVector : public UFieldNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldNodeVector">();
	}
	static class UFieldNodeVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldNodeVector>();
	}
};
static_assert(alignof(UFieldNodeVector) == 0x000008, "Wrong alignment on UFieldNodeVector");
static_assert(sizeof(UFieldNodeVector) == 0x0000A0, "Wrong size on UFieldNodeVector");

class UUniformInteger final : public UFieldNodeInt
{
public:
	int32                                         Magnitude;
	uint8                                         Pad_A4[0x4];

public:
	class UUniformInteger* SetUniformInteger(int32 Magnitude_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UniformInteger">();
	}
	static class UUniformInteger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUniformInteger>();
	}
};
static_assert(alignof(UUniformInteger) == 0x000008, "Wrong alignment on UUniformInteger");
static_assert(sizeof(UUniformInteger) == 0x0000A8, "Wrong size on UUniformInteger");
static_assert(offsetof(UUniformInteger, Magnitude) == 0x0000A0, "Member 'UUniformInteger::Magnitude' has a wrong offset!");

class URadialIntMask final : public UFieldNodeInt
{
public:
	float                                         Radius;
	uint8                                         Pad_A4[0x4];
	struct FVector                                Position;
	int32                                         InteriorValue;
	int32                                         ExteriorValue;
	ESetMaskConditionType                         SetMaskCondition;
	uint8                                         Pad_C9[0x7];

public:
	class URadialIntMask* SetRadialIntMask(float Radius_0, const struct FVector& Position_0, int32 InteriorValue_0, int32 ExteriorValue_0, ESetMaskConditionType SetMaskConditionIn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialIntMask">();
	}
	static class URadialIntMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialIntMask>();
	}
};
static_assert(alignof(URadialIntMask) == 0x000008, "Wrong alignment on URadialIntMask");
static_assert(sizeof(URadialIntMask) == 0x0000D0, "Wrong size on URadialIntMask");
static_assert(offsetof(URadialIntMask, Radius) == 0x0000A0, "Member 'URadialIntMask::Radius' has a wrong offset!");
static_assert(offsetof(URadialIntMask, Position) == 0x0000A8, "Member 'URadialIntMask::Position' has a wrong offset!");
static_assert(offsetof(URadialIntMask, InteriorValue) == 0x0000C0, "Member 'URadialIntMask::InteriorValue' has a wrong offset!");
static_assert(offsetof(URadialIntMask, ExteriorValue) == 0x0000C4, "Member 'URadialIntMask::ExteriorValue' has a wrong offset!");
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x0000C8, "Member 'URadialIntMask::SetMaskCondition' has a wrong offset!");

class UUniformScalar final : public UFieldNodeFloat
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];

public:
	class UUniformScalar* SetUniformScalar(float Magnitude_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UniformScalar">();
	}
	static class UUniformScalar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUniformScalar>();
	}
};
static_assert(alignof(UUniformScalar) == 0x000008, "Wrong alignment on UUniformScalar");
static_assert(sizeof(UUniformScalar) == 0x0000A8, "Wrong size on UUniformScalar");
static_assert(offsetof(UUniformScalar, Magnitude) == 0x0000A0, "Member 'UUniformScalar::Magnitude' has a wrong offset!");

class UWaveScalar final : public UFieldNodeFloat
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];
	struct FVector                                Position;
	float                                         WaveLength;
	float                                         Period;
	EWaveFunctionType                             Function;
	EFieldFalloffType                             Falloff;
	uint8                                         Pad_CA[0x6];

public:
	class UWaveScalar* SetWaveScalar(float Magnitude_0, const struct FVector& Position_0, float WaveLength_0, float Period_0, float Time, EWaveFunctionType Function_0, EFieldFalloffType Falloff_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveScalar">();
	}
	static class UWaveScalar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveScalar>();
	}
};
static_assert(alignof(UWaveScalar) == 0x000008, "Wrong alignment on UWaveScalar");
static_assert(sizeof(UWaveScalar) == 0x0000D0, "Wrong size on UWaveScalar");
static_assert(offsetof(UWaveScalar, Magnitude) == 0x0000A0, "Member 'UWaveScalar::Magnitude' has a wrong offset!");
static_assert(offsetof(UWaveScalar, Position) == 0x0000A8, "Member 'UWaveScalar::Position' has a wrong offset!");
static_assert(offsetof(UWaveScalar, WaveLength) == 0x0000C0, "Member 'UWaveScalar::WaveLength' has a wrong offset!");
static_assert(offsetof(UWaveScalar, Period) == 0x0000C4, "Member 'UWaveScalar::Period' has a wrong offset!");
static_assert(offsetof(UWaveScalar, Function) == 0x0000C8, "Member 'UWaveScalar::Function' has a wrong offset!");
static_assert(offsetof(UWaveScalar, Falloff) == 0x0000C9, "Member 'UWaveScalar::Falloff' has a wrong offset!");

class URadialFalloff final : public UFieldNodeFloat
{
public:
	float                                         Magnitude;
	float                                         MinRange;
	float                                         MaxRange;
	float                                         Default;
	float                                         Radius;
	uint8                                         Pad_B4[0x4];
	struct FVector                                Position;
	EFieldFalloffType                             Falloff;
	uint8                                         Pad_D1[0x7];

public:
	class URadialFalloff* SetRadialFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, float Radius_0, const struct FVector& Position_0, EFieldFalloffType Falloff_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialFalloff">();
	}
	static class URadialFalloff* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialFalloff>();
	}
};
static_assert(alignof(URadialFalloff) == 0x000008, "Wrong alignment on URadialFalloff");
static_assert(sizeof(URadialFalloff) == 0x0000D8, "Wrong size on URadialFalloff");
static_assert(offsetof(URadialFalloff, Magnitude) == 0x0000A0, "Member 'URadialFalloff::Magnitude' has a wrong offset!");
static_assert(offsetof(URadialFalloff, MinRange) == 0x0000A4, "Member 'URadialFalloff::MinRange' has a wrong offset!");
static_assert(offsetof(URadialFalloff, MaxRange) == 0x0000A8, "Member 'URadialFalloff::MaxRange' has a wrong offset!");
static_assert(offsetof(URadialFalloff, Default) == 0x0000AC, "Member 'URadialFalloff::Default' has a wrong offset!");
static_assert(offsetof(URadialFalloff, Radius) == 0x0000B0, "Member 'URadialFalloff::Radius' has a wrong offset!");
static_assert(offsetof(URadialFalloff, Position) == 0x0000B8, "Member 'URadialFalloff::Position' has a wrong offset!");
static_assert(offsetof(URadialFalloff, Falloff) == 0x0000D0, "Member 'URadialFalloff::Falloff' has a wrong offset!");

class UPlaneFalloff final : public UFieldNodeFloat
{
public:
	float                                         Magnitude;
	float                                         MinRange;
	float                                         MaxRange;
	float                                         Default;
	float                                         Distance;
	uint8                                         Pad_B4[0x4];
	struct FVector                                Position;
	struct FVector                                Normal;
	EFieldFalloffType                             Falloff;
	uint8                                         Pad_E9[0x7];

public:
	class UPlaneFalloff* SetPlaneFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, float Distance_0, const struct FVector& Position_0, const struct FVector& Normal_0, EFieldFalloffType Falloff_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlaneFalloff">();
	}
	static class UPlaneFalloff* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaneFalloff>();
	}
};
static_assert(alignof(UPlaneFalloff) == 0x000008, "Wrong alignment on UPlaneFalloff");
static_assert(sizeof(UPlaneFalloff) == 0x0000F0, "Wrong size on UPlaneFalloff");
static_assert(offsetof(UPlaneFalloff, Magnitude) == 0x0000A0, "Member 'UPlaneFalloff::Magnitude' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, MinRange) == 0x0000A4, "Member 'UPlaneFalloff::MinRange' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, MaxRange) == 0x0000A8, "Member 'UPlaneFalloff::MaxRange' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, Default) == 0x0000AC, "Member 'UPlaneFalloff::Default' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, Distance) == 0x0000B0, "Member 'UPlaneFalloff::Distance' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, Position) == 0x0000B8, "Member 'UPlaneFalloff::Position' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, Normal) == 0x0000D0, "Member 'UPlaneFalloff::Normal' has a wrong offset!");
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x0000E8, "Member 'UPlaneFalloff::Falloff' has a wrong offset!");

class UBoxFalloff final : public UFieldNodeFloat
{
public:
	float                                         Magnitude;
	float                                         MinRange;
	float                                         MaxRange;
	float                                         Default;
	struct FTransform                             Transform;
	EFieldFalloffType                             Falloff;
	uint8                                         Pad_111[0xF];

public:
	class UBoxFalloff* SetBoxFalloff(float Magnitude_0, float MinRange_0, float MaxRange_0, float Default_0, const struct FTransform& Transform_0, EFieldFalloffType Falloff_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoxFalloff">();
	}
	static class UBoxFalloff* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoxFalloff>();
	}
};
static_assert(alignof(UBoxFalloff) == 0x000010, "Wrong alignment on UBoxFalloff");
static_assert(sizeof(UBoxFalloff) == 0x000120, "Wrong size on UBoxFalloff");
static_assert(offsetof(UBoxFalloff, Magnitude) == 0x0000A0, "Member 'UBoxFalloff::Magnitude' has a wrong offset!");
static_assert(offsetof(UBoxFalloff, MinRange) == 0x0000A4, "Member 'UBoxFalloff::MinRange' has a wrong offset!");
static_assert(offsetof(UBoxFalloff, MaxRange) == 0x0000A8, "Member 'UBoxFalloff::MaxRange' has a wrong offset!");
static_assert(offsetof(UBoxFalloff, Default) == 0x0000AC, "Member 'UBoxFalloff::Default' has a wrong offset!");
static_assert(offsetof(UBoxFalloff, Transform) == 0x0000B0, "Member 'UBoxFalloff::Transform' has a wrong offset!");
static_assert(offsetof(UBoxFalloff, Falloff) == 0x000110, "Member 'UBoxFalloff::Falloff' has a wrong offset!");

class UNoiseField final : public UFieldNodeFloat
{
public:
	float                                         MinRange;
	float                                         MaxRange;
	uint8                                         Pad_A8[0x8];
	struct FTransform                             Transform;

public:
	class UNoiseField* SetNoiseField(float MinRange_0, float MaxRange_0, const struct FTransform& Transform_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NoiseField">();
	}
	static class UNoiseField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNoiseField>();
	}
};
static_assert(alignof(UNoiseField) == 0x000010, "Wrong alignment on UNoiseField");
static_assert(sizeof(UNoiseField) == 0x000110, "Wrong size on UNoiseField");
static_assert(offsetof(UNoiseField, MinRange) == 0x0000A0, "Member 'UNoiseField::MinRange' has a wrong offset!");
static_assert(offsetof(UNoiseField, MaxRange) == 0x0000A4, "Member 'UNoiseField::MaxRange' has a wrong offset!");
static_assert(offsetof(UNoiseField, Transform) == 0x0000B0, "Member 'UNoiseField::Transform' has a wrong offset!");

class UUniformVector final : public UFieldNodeVector
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];
	struct FVector                                Direction;

public:
	class UUniformVector* SetUniformVector(float Magnitude_0, const struct FVector& Direction_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UniformVector">();
	}
	static class UUniformVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUniformVector>();
	}
};
static_assert(alignof(UUniformVector) == 0x000008, "Wrong alignment on UUniformVector");
static_assert(sizeof(UUniformVector) == 0x0000C0, "Wrong size on UUniformVector");
static_assert(offsetof(UUniformVector, Magnitude) == 0x0000A0, "Member 'UUniformVector::Magnitude' has a wrong offset!");
static_assert(offsetof(UUniformVector, Direction) == 0x0000A8, "Member 'UUniformVector::Direction' has a wrong offset!");

class URadialVector final : public UFieldNodeVector
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];
	struct FVector                                Position;

public:
	class URadialVector* SetRadialVector(float Magnitude_0, const struct FVector& Position_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialVector">();
	}
	static class URadialVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialVector>();
	}
};
static_assert(alignof(URadialVector) == 0x000008, "Wrong alignment on URadialVector");
static_assert(sizeof(URadialVector) == 0x0000C0, "Wrong size on URadialVector");
static_assert(offsetof(URadialVector, Magnitude) == 0x0000A0, "Member 'URadialVector::Magnitude' has a wrong offset!");
static_assert(offsetof(URadialVector, Position) == 0x0000A8, "Member 'URadialVector::Position' has a wrong offset!");

class URandomVector final : public UFieldNodeVector
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];

public:
	class URandomVector* SetRandomVector(float Magnitude_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RandomVector">();
	}
	static class URandomVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<URandomVector>();
	}
};
static_assert(alignof(URandomVector) == 0x000008, "Wrong alignment on URandomVector");
static_assert(sizeof(URandomVector) == 0x0000A8, "Wrong size on URandomVector");
static_assert(offsetof(URandomVector, Magnitude) == 0x0000A0, "Member 'URandomVector::Magnitude' has a wrong offset!");

class UOperatorField final : public UFieldNodeBase
{
public:
	float                                         Magnitude;
	uint8                                         Pad_A4[0x4];
	class UFieldNodeBase*                         RightField;
	class UFieldNodeBase*                         LeftField;
	EFieldOperationType                           Operation;
	uint8                                         Pad_B9[0x7];

public:
	class UOperatorField* SetOperatorField(float Magnitude_0, const class UFieldNodeBase* LeftField_0, const class UFieldNodeBase* RightField_0, EFieldOperationType Operation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OperatorField">();
	}
	static class UOperatorField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOperatorField>();
	}
};
static_assert(alignof(UOperatorField) == 0x000008, "Wrong alignment on UOperatorField");
static_assert(sizeof(UOperatorField) == 0x0000C0, "Wrong size on UOperatorField");
static_assert(offsetof(UOperatorField, Magnitude) == 0x0000A0, "Member 'UOperatorField::Magnitude' has a wrong offset!");
static_assert(offsetof(UOperatorField, RightField) == 0x0000A8, "Member 'UOperatorField::RightField' has a wrong offset!");
static_assert(offsetof(UOperatorField, LeftField) == 0x0000B0, "Member 'UOperatorField::LeftField' has a wrong offset!");
static_assert(offsetof(UOperatorField, Operation) == 0x0000B8, "Member 'UOperatorField::Operation' has a wrong offset!");

class UToIntegerField final : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                        FloatField;

public:
	class UToIntegerField* SetToIntegerField(const class UFieldNodeFloat* FloatField_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToIntegerField">();
	}
	static class UToIntegerField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToIntegerField>();
	}
};
static_assert(alignof(UToIntegerField) == 0x000008, "Wrong alignment on UToIntegerField");
static_assert(sizeof(UToIntegerField) == 0x0000A8, "Wrong size on UToIntegerField");
static_assert(offsetof(UToIntegerField, FloatField) == 0x0000A0, "Member 'UToIntegerField::FloatField' has a wrong offset!");

class UToFloatField final : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                          IntField;

public:
	class UToFloatField* SetToFloatField(const class UFieldNodeInt* IntegerField);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToFloatField">();
	}
	static class UToFloatField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToFloatField>();
	}
};
static_assert(alignof(UToFloatField) == 0x000008, "Wrong alignment on UToFloatField");
static_assert(sizeof(UToFloatField) == 0x0000A8, "Wrong size on UToFloatField");
static_assert(offsetof(UToFloatField, IntField) == 0x0000A0, "Member 'UToFloatField::IntField' has a wrong offset!");

class UCullingField final : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                         Culling;
	class UFieldNodeBase*                         Field;
	EFieldCullingOperationType                    Operation;
	uint8                                         Pad_B1[0x7];

public:
	class UCullingField* SetCullingField(const class UFieldNodeBase* Culling_0, const class UFieldNodeBase* Field_0, EFieldCullingOperationType Operation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CullingField">();
	}
	static class UCullingField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCullingField>();
	}
};
static_assert(alignof(UCullingField) == 0x000008, "Wrong alignment on UCullingField");
static_assert(sizeof(UCullingField) == 0x0000B8, "Wrong size on UCullingField");
static_assert(offsetof(UCullingField, Culling) == 0x0000A0, "Member 'UCullingField::Culling' has a wrong offset!");
static_assert(offsetof(UCullingField, Field) == 0x0000A8, "Member 'UCullingField::Field' has a wrong offset!");
static_assert(offsetof(UCullingField, Operation) == 0x0000B0, "Member 'UCullingField::Operation' has a wrong offset!");

class UReturnResultsTerminal final : public UFieldNodeBase
{
public:
	class UReturnResultsTerminal* SetReturnResultsTerminal();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReturnResultsTerminal">();
	}
	static class UReturnResultsTerminal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReturnResultsTerminal>();
	}
};
static_assert(alignof(UReturnResultsTerminal) == 0x000008, "Wrong alignment on UReturnResultsTerminal");
static_assert(sizeof(UReturnResultsTerminal) == 0x0000A0, "Wrong size on UReturnResultsTerminal");

}
