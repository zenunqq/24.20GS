#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FStructSerializerNumericTestStruct final
{
public:
	int8                                          Int8;
	uint8                                         Pad_1[0x1];
	int16                                         Int16;
	int32                                         int32_0;
	int64                                         Int64;
	uint8                                         uint8_0;
	uint8                                         Pad_11[0x1];
	uint16                                        UInt16;
	uint32                                        UInt32;
	uint64                                        UInt64;
	float                                         float_0;
	uint8                                         Pad_24[0x4];
	double                                        Double;
};
static_assert(alignof(FStructSerializerNumericTestStruct) == 0x000008, "Wrong alignment on FStructSerializerNumericTestStruct");
static_assert(sizeof(FStructSerializerNumericTestStruct) == 0x000030, "Wrong size on FStructSerializerNumericTestStruct");
static_assert(offsetof(FStructSerializerNumericTestStruct, Int8) == 0x000000, "Member 'FStructSerializerNumericTestStruct::Int8' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, Int16) == 0x000002, "Member 'FStructSerializerNumericTestStruct::Int16' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, int32_0) == 0x000004, "Member 'FStructSerializerNumericTestStruct::int32_0' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, Int64) == 0x000008, "Member 'FStructSerializerNumericTestStruct::Int64' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, uint8_0) == 0x000010, "Member 'FStructSerializerNumericTestStruct::uint8_0' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, UInt16) == 0x000012, "Member 'FStructSerializerNumericTestStruct::UInt16' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, UInt32) == 0x000014, "Member 'FStructSerializerNumericTestStruct::UInt32' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, UInt64) == 0x000018, "Member 'FStructSerializerNumericTestStruct::UInt64' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, float_0) == 0x000020, "Member 'FStructSerializerNumericTestStruct::float_0' has a wrong offset!");
static_assert(offsetof(FStructSerializerNumericTestStruct, Double) == 0x000028, "Member 'FStructSerializerNumericTestStruct::Double' has a wrong offset!");

struct FStructSerializerBooleanTestStruct final
{
public:
	bool                                          BoolFalse;
	bool                                          BoolTrue;
	uint8                                         Bitfield0 : 1;
	uint8                                         Bitfield1 : 1;
	uint8                                         Bitfield2Set : 1;
	uint8                                         Bitfield3 : 1;
	uint8                                         Bitfield4Set : 1;
	uint8                                         Bitfield5Set : 1;
	uint8                                         Bitfield6 : 1;
	uint8                                         Bitfield7Set : 1;
};
static_assert(alignof(FStructSerializerBooleanTestStruct) == 0x000001, "Wrong alignment on FStructSerializerBooleanTestStruct");
static_assert(sizeof(FStructSerializerBooleanTestStruct) == 0x000003, "Wrong size on FStructSerializerBooleanTestStruct");
static_assert(offsetof(FStructSerializerBooleanTestStruct, BoolFalse) == 0x000000, "Member 'FStructSerializerBooleanTestStruct::BoolFalse' has a wrong offset!");
static_assert(offsetof(FStructSerializerBooleanTestStruct, BoolTrue) == 0x000001, "Member 'FStructSerializerBooleanTestStruct::BoolTrue' has a wrong offset!");

struct FStructSerializerObjectTestStruct final
{
public:
	TSubclassOf<class UObject>                    RawClass;
	TSubclassOf<class UObject>                    WrappedClass;
	TSubclassOf<class UMetaData>                  SubClass;
	TSoftClassPtr<class UClass>                   SoftClass;
	class UObject*                                RawObject;
	class UObject*                                WrappedObject;
	TWeakObjectPtr<class UMetaData>               WeakObject;
	TSoftObjectPtr<class UMetaData>               SoftObject;
	struct FSoftClassPath                         ClassPath;
	struct FSoftObjectPath                        ObjectPath;
};
static_assert(alignof(FStructSerializerObjectTestStruct) == 0x000008, "Wrong alignment on FStructSerializerObjectTestStruct");
static_assert(sizeof(FStructSerializerObjectTestStruct) == 0x0000B0, "Wrong size on FStructSerializerObjectTestStruct");
static_assert(offsetof(FStructSerializerObjectTestStruct, RawClass) == 0x000000, "Member 'FStructSerializerObjectTestStruct::RawClass' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, WrappedClass) == 0x000008, "Member 'FStructSerializerObjectTestStruct::WrappedClass' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, SubClass) == 0x000010, "Member 'FStructSerializerObjectTestStruct::SubClass' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftClass) == 0x000018, "Member 'FStructSerializerObjectTestStruct::SoftClass' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, RawObject) == 0x000040, "Member 'FStructSerializerObjectTestStruct::RawObject' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, WrappedObject) == 0x000048, "Member 'FStructSerializerObjectTestStruct::WrappedObject' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, WeakObject) == 0x000050, "Member 'FStructSerializerObjectTestStruct::WeakObject' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftObject) == 0x000058, "Member 'FStructSerializerObjectTestStruct::SoftObject' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, ClassPath) == 0x000080, "Member 'FStructSerializerObjectTestStruct::ClassPath' has a wrong offset!");
static_assert(offsetof(FStructSerializerObjectTestStruct, ObjectPath) == 0x000098, "Member 'FStructSerializerObjectTestStruct::ObjectPath' has a wrong offset!");

struct FStructSerializerBuiltinTestStruct final
{
public:
	struct FGuid                                  Guid;
	class FName                                   Name;
	uint8                                         Pad_14[0x4];
	class FString                                 String;
	class FText                                   Text;
	struct FVector                                Vector;
	uint8                                         Pad_58[0x8];
	struct FVector4                               Vector4;
	struct FRotator                               Rotator;
	uint8                                         Pad_98[0x8];
	struct FQuat                                  Quat;
	struct FColor                                 Color;
	uint8                                         Pad_C4[0xC];
};
static_assert(alignof(FStructSerializerBuiltinTestStruct) == 0x000010, "Wrong alignment on FStructSerializerBuiltinTestStruct");
static_assert(sizeof(FStructSerializerBuiltinTestStruct) == 0x0000D0, "Wrong size on FStructSerializerBuiltinTestStruct");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Guid) == 0x000000, "Member 'FStructSerializerBuiltinTestStruct::Guid' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Name) == 0x000010, "Member 'FStructSerializerBuiltinTestStruct::Name' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, String) == 0x000018, "Member 'FStructSerializerBuiltinTestStruct::String' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Text) == 0x000028, "Member 'FStructSerializerBuiltinTestStruct::Text' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector) == 0x000040, "Member 'FStructSerializerBuiltinTestStruct::Vector' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector4) == 0x000060, "Member 'FStructSerializerBuiltinTestStruct::Vector4' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Rotator) == 0x000080, "Member 'FStructSerializerBuiltinTestStruct::Rotator' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Quat) == 0x0000A0, "Member 'FStructSerializerBuiltinTestStruct::Quat' has a wrong offset!");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Color) == 0x0000C0, "Member 'FStructSerializerBuiltinTestStruct::Color' has a wrong offset!");

struct FStructSerializerLWCTypesTest final
{
public:
	struct FVector                                Vector;
	struct FVector2D                              Vector2D;
	uint8                                         Pad_28[0x8];
	struct FVector4                               Vector4;
	struct FMatrix                                Matrix;
	struct FPlane                                 Plane;
	struct FQuat                                  Quat;
	struct FRotator                               Rotator;
	uint8                                         Pad_128[0x8];
	struct FTransform                             Transform;
	struct FBox                                   Box;
	struct FBox2D                                 Box2D;
	struct FBoxSphereBounds                       BoxSphereBounds;
	struct FOrientedBox                           OrientedBox;
	float                                         float_0;
	uint8                                         Pad_2A4[0x4];
	double                                        Double;
	TArray<struct FVector>                        VectorArray;
	TMap<class FString, struct FVector>           StrToVec;
	TSet<struct FVector>                          VectorSet;
};
static_assert(alignof(FStructSerializerLWCTypesTest) == 0x000010, "Wrong alignment on FStructSerializerLWCTypesTest");
static_assert(sizeof(FStructSerializerLWCTypesTest) == 0x000360, "Wrong size on FStructSerializerLWCTypesTest");
static_assert(offsetof(FStructSerializerLWCTypesTest, Vector) == 0x000000, "Member 'FStructSerializerLWCTypesTest::Vector' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Vector2D) == 0x000018, "Member 'FStructSerializerLWCTypesTest::Vector2D' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Vector4) == 0x000030, "Member 'FStructSerializerLWCTypesTest::Vector4' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Matrix) == 0x000050, "Member 'FStructSerializerLWCTypesTest::Matrix' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Plane) == 0x0000D0, "Member 'FStructSerializerLWCTypesTest::Plane' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Quat) == 0x0000F0, "Member 'FStructSerializerLWCTypesTest::Quat' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Rotator) == 0x000110, "Member 'FStructSerializerLWCTypesTest::Rotator' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Transform) == 0x000130, "Member 'FStructSerializerLWCTypesTest::Transform' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Box) == 0x000190, "Member 'FStructSerializerLWCTypesTest::Box' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Box2D) == 0x0001C8, "Member 'FStructSerializerLWCTypesTest::Box2D' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, BoxSphereBounds) == 0x0001F0, "Member 'FStructSerializerLWCTypesTest::BoxSphereBounds' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, OrientedBox) == 0x000228, "Member 'FStructSerializerLWCTypesTest::OrientedBox' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, float_0) == 0x0002A0, "Member 'FStructSerializerLWCTypesTest::float_0' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, Double) == 0x0002A8, "Member 'FStructSerializerLWCTypesTest::Double' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, VectorArray) == 0x0002B0, "Member 'FStructSerializerLWCTypesTest::VectorArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, StrToVec) == 0x0002C0, "Member 'FStructSerializerLWCTypesTest::StrToVec' has a wrong offset!");
static_assert(offsetof(FStructSerializerLWCTypesTest, VectorSet) == 0x000310, "Member 'FStructSerializerLWCTypesTest::VectorSet' has a wrong offset!");

struct FOrientedBoxFloat final
{
public:
	struct FVector3f                              Center;
	struct FVector3f                              AxisX;
	struct FVector3f                              AxisY;
	struct FVector3f                              AxisZ;
	float                                         ExtentX;
	float                                         ExtentY;
	float                                         ExtentZ;
};
static_assert(alignof(FOrientedBoxFloat) == 0x000004, "Wrong alignment on FOrientedBoxFloat");
static_assert(sizeof(FOrientedBoxFloat) == 0x00003C, "Wrong size on FOrientedBoxFloat");
static_assert(offsetof(FOrientedBoxFloat, Center) == 0x000000, "Member 'FOrientedBoxFloat::Center' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, AxisX) == 0x00000C, "Member 'FOrientedBoxFloat::AxisX' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, AxisY) == 0x000018, "Member 'FOrientedBoxFloat::AxisY' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, AxisZ) == 0x000024, "Member 'FOrientedBoxFloat::AxisZ' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, ExtentX) == 0x000030, "Member 'FOrientedBoxFloat::ExtentX' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, ExtentY) == 0x000034, "Member 'FOrientedBoxFloat::ExtentY' has a wrong offset!");
static_assert(offsetof(FOrientedBoxFloat, ExtentZ) == 0x000038, "Member 'FOrientedBoxFloat::ExtentZ' has a wrong offset!");

struct FStructSerializerNonLWCTypesTest final
{
public:
	struct FVector3f                              Vector;
	struct FVector2f                              Vector2D;
	uint8                                         Pad_14[0xC];
	struct FVector4f                              Vector4;
	struct FMatrix44f                             Matrix;
	struct FPlane4f                               Plane;
	struct FQuat4f                                Quat;
	struct FRotator3f                             Rotator;
	uint8                                         Pad_9C[0x4];
	struct FTransform3f                           Transform;
	struct FBox3f                                 Box;
	struct FBox2f                                 Box2D;
	struct FBoxSphereBounds3f                     BoxSphereBounds;
	struct FOrientedBoxFloat                      OrientedBox;
	float                                         float_0;
	uint8                                         Pad_15C[0x4];
	double                                        Double;
	TArray<struct FVector3f>                      VectorArray;
	TMap<class FString, struct FVector3f>         StrToVec;
	TSet<struct FVector3f>                        VectorSet;
	uint8                                         Pad_218[0x8];
};
static_assert(alignof(FStructSerializerNonLWCTypesTest) == 0x000010, "Wrong alignment on FStructSerializerNonLWCTypesTest");
static_assert(sizeof(FStructSerializerNonLWCTypesTest) == 0x000220, "Wrong size on FStructSerializerNonLWCTypesTest");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector) == 0x000000, "Member 'FStructSerializerNonLWCTypesTest::Vector' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector2D) == 0x00000C, "Member 'FStructSerializerNonLWCTypesTest::Vector2D' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector4) == 0x000020, "Member 'FStructSerializerNonLWCTypesTest::Vector4' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Matrix) == 0x000030, "Member 'FStructSerializerNonLWCTypesTest::Matrix' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Plane) == 0x000070, "Member 'FStructSerializerNonLWCTypesTest::Plane' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Quat) == 0x000080, "Member 'FStructSerializerNonLWCTypesTest::Quat' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Rotator) == 0x000090, "Member 'FStructSerializerNonLWCTypesTest::Rotator' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Transform) == 0x0000A0, "Member 'FStructSerializerNonLWCTypesTest::Transform' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Box) == 0x0000D0, "Member 'FStructSerializerNonLWCTypesTest::Box' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Box2D) == 0x0000EC, "Member 'FStructSerializerNonLWCTypesTest::Box2D' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, BoxSphereBounds) == 0x000100, "Member 'FStructSerializerNonLWCTypesTest::BoxSphereBounds' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, OrientedBox) == 0x00011C, "Member 'FStructSerializerNonLWCTypesTest::OrientedBox' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, float_0) == 0x000158, "Member 'FStructSerializerNonLWCTypesTest::float_0' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Double) == 0x000160, "Member 'FStructSerializerNonLWCTypesTest::Double' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, VectorArray) == 0x000168, "Member 'FStructSerializerNonLWCTypesTest::VectorArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, StrToVec) == 0x000178, "Member 'FStructSerializerNonLWCTypesTest::StrToVec' has a wrong offset!");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, VectorSet) == 0x0001C8, "Member 'FStructSerializerNonLWCTypesTest::VectorSet' has a wrong offset!");

struct FStructSerializerByteArray final
{
public:
	int32                                         Dummy1;
	uint8                                         Pad_4[0x4];
	TArray<uint8>                                 ByteArray;
	int32                                         Dummy2;
	uint8                                         Pad_1C[0x4];
	TArray<int8>                                  Int8Array;
	int32                                         Dummy3;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FStructSerializerByteArray) == 0x000008, "Wrong alignment on FStructSerializerByteArray");
static_assert(sizeof(FStructSerializerByteArray) == 0x000038, "Wrong size on FStructSerializerByteArray");
static_assert(offsetof(FStructSerializerByteArray, Dummy1) == 0x000000, "Member 'FStructSerializerByteArray::Dummy1' has a wrong offset!");
static_assert(offsetof(FStructSerializerByteArray, ByteArray) == 0x000008, "Member 'FStructSerializerByteArray::ByteArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerByteArray, Dummy2) == 0x000018, "Member 'FStructSerializerByteArray::Dummy2' has a wrong offset!");
static_assert(offsetof(FStructSerializerByteArray, Int8Array) == 0x000020, "Member 'FStructSerializerByteArray::Int8Array' has a wrong offset!");
static_assert(offsetof(FStructSerializerByteArray, Dummy3) == 0x000030, "Member 'FStructSerializerByteArray::Dummy3' has a wrong offset!");

struct FStructSerializerArrayTestStruct final
{
public:
	TArray<int32>                                 Int32Array;
	TArray<uint8>                                 ByteArray;
	int32                                         StaticSingleElement;
	int32                                         StaticInt32Array[0x3];
	float                                         StaticFloatArray[0x3];
	uint8                                         Pad_3C[0x4];
	TArray<struct FVector>                        VectorArray;
	TArray<struct FStructSerializerBuiltinTestStruct> StructArray;
};
static_assert(alignof(FStructSerializerArrayTestStruct) == 0x000008, "Wrong alignment on FStructSerializerArrayTestStruct");
static_assert(sizeof(FStructSerializerArrayTestStruct) == 0x000060, "Wrong size on FStructSerializerArrayTestStruct");
static_assert(offsetof(FStructSerializerArrayTestStruct, Int32Array) == 0x000000, "Member 'FStructSerializerArrayTestStruct::Int32Array' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, ByteArray) == 0x000010, "Member 'FStructSerializerArrayTestStruct::ByteArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticSingleElement) == 0x000020, "Member 'FStructSerializerArrayTestStruct::StaticSingleElement' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticInt32Array) == 0x000024, "Member 'FStructSerializerArrayTestStruct::StaticInt32Array' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticFloatArray) == 0x000030, "Member 'FStructSerializerArrayTestStruct::StaticFloatArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, VectorArray) == 0x000040, "Member 'FStructSerializerArrayTestStruct::VectorArray' has a wrong offset!");
static_assert(offsetof(FStructSerializerArrayTestStruct, StructArray) == 0x000050, "Member 'FStructSerializerArrayTestStruct::StructArray' has a wrong offset!");

struct FStructSerializerMapTestStruct final
{
public:
	TMap<int32, class FString>                    IntToStr;
	TMap<class FString, class FString>            StrToStr;
	TMap<class FString, struct FVector>           StrToVec;
	TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;
};
static_assert(alignof(FStructSerializerMapTestStruct) == 0x000008, "Wrong alignment on FStructSerializerMapTestStruct");
static_assert(sizeof(FStructSerializerMapTestStruct) == 0x000140, "Wrong size on FStructSerializerMapTestStruct");
static_assert(offsetof(FStructSerializerMapTestStruct, IntToStr) == 0x000000, "Member 'FStructSerializerMapTestStruct::IntToStr' has a wrong offset!");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStr) == 0x000050, "Member 'FStructSerializerMapTestStruct::StrToStr' has a wrong offset!");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToVec) == 0x0000A0, "Member 'FStructSerializerMapTestStruct::StrToVec' has a wrong offset!");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStruct) == 0x0000F0, "Member 'FStructSerializerMapTestStruct::StrToStruct' has a wrong offset!");

struct FStructSerializerSetTestStruct final
{
public:
	TSet<class FString>                           StrSet;
	TSet<int32>                                   IntSet;
	TSet<class FName>                             NameSet;
	TSet<struct FStructSerializerBuiltinTestStruct> StructSet;
};
static_assert(alignof(FStructSerializerSetTestStruct) == 0x000008, "Wrong alignment on FStructSerializerSetTestStruct");
static_assert(sizeof(FStructSerializerSetTestStruct) == 0x000140, "Wrong size on FStructSerializerSetTestStruct");
static_assert(offsetof(FStructSerializerSetTestStruct, StrSet) == 0x000000, "Member 'FStructSerializerSetTestStruct::StrSet' has a wrong offset!");
static_assert(offsetof(FStructSerializerSetTestStruct, IntSet) == 0x000050, "Member 'FStructSerializerSetTestStruct::IntSet' has a wrong offset!");
static_assert(offsetof(FStructSerializerSetTestStruct, NameSet) == 0x0000A0, "Member 'FStructSerializerSetTestStruct::NameSet' has a wrong offset!");
static_assert(offsetof(FStructSerializerSetTestStruct, StructSet) == 0x0000F0, "Member 'FStructSerializerSetTestStruct::StructSet' has a wrong offset!");

struct FStructSerializerTestStruct final
{
public:
	struct FStructSerializerNumericTestStruct     Numerics;
	struct FStructSerializerBooleanTestStruct     Booleans;
	uint8                                         Pad_33[0x5];
	struct FStructSerializerObjectTestStruct      Objects;
	uint8                                         Pad_E8[0x8];
	struct FStructSerializerBuiltinTestStruct     Builtins;
	struct FStructSerializerArrayTestStruct       Arrays;
	struct FStructSerializerMapTestStruct         Maps;
	struct FStructSerializerSetTestStruct         Sets;
	struct FStructSerializerLWCTypesTest          LWCTypes;
};
static_assert(alignof(FStructSerializerTestStruct) == 0x000010, "Wrong alignment on FStructSerializerTestStruct");
static_assert(sizeof(FStructSerializerTestStruct) == 0x000800, "Wrong size on FStructSerializerTestStruct");
static_assert(offsetof(FStructSerializerTestStruct, Numerics) == 0x000000, "Member 'FStructSerializerTestStruct::Numerics' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Booleans) == 0x000030, "Member 'FStructSerializerTestStruct::Booleans' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Objects) == 0x000038, "Member 'FStructSerializerTestStruct::Objects' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Builtins) == 0x0000F0, "Member 'FStructSerializerTestStruct::Builtins' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Arrays) == 0x0001C0, "Member 'FStructSerializerTestStruct::Arrays' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Maps) == 0x000220, "Member 'FStructSerializerTestStruct::Maps' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, Sets) == 0x000360, "Member 'FStructSerializerTestStruct::Sets' has a wrong offset!");
static_assert(offsetof(FStructSerializerTestStruct, LWCTypes) == 0x0004A0, "Member 'FStructSerializerTestStruct::LWCTypes' has a wrong offset!");

}
