#pragma once

#include "Basic.hpp"

#include "RigVM_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct RigVM_AddRigVMFunction final
{
public:
	class UScriptStruct*                          InRigVMStruct;
	class FName                                   InMethodName;
	int32                                         ReturnValue;
};
static_assert(alignof(RigVM_AddRigVMFunction) == 0x000008, "Wrong alignment on RigVM_AddRigVMFunction");
static_assert(sizeof(RigVM_AddRigVMFunction) == 0x000010, "Wrong size on RigVM_AddRigVMFunction");
static_assert(offsetof(RigVM_AddRigVMFunction, InRigVMStruct) == 0x000000, "Member 'RigVM_AddRigVMFunction::InRigVMStruct' has a wrong offset!");
static_assert(offsetof(RigVM_AddRigVMFunction, InMethodName) == 0x000008, "Member 'RigVM_AddRigVMFunction::InMethodName' has a wrong offset!");
static_assert(offsetof(RigVM_AddRigVMFunction, ReturnValue) == 0x00000C, "Member 'RigVM_AddRigVMFunction::ReturnValue' has a wrong offset!");

struct RigVM_Execute final
{
public:
	class FName                                   InEntryName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(RigVM_Execute) == 0x000004, "Wrong alignment on RigVM_Execute");
static_assert(sizeof(RigVM_Execute) == 0x000008, "Wrong size on RigVM_Execute");
static_assert(offsetof(RigVM_Execute, InEntryName) == 0x000000, "Member 'RigVM_Execute::InEntryName' has a wrong offset!");
static_assert(offsetof(RigVM_Execute, ReturnValue) == 0x000004, "Member 'RigVM_Execute::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueBool final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(RigVM_GetParameterValueBool) == 0x000004, "Wrong alignment on RigVM_GetParameterValueBool");
static_assert(sizeof(RigVM_GetParameterValueBool) == 0x00000C, "Wrong size on RigVM_GetParameterValueBool");
static_assert(offsetof(RigVM_GetParameterValueBool, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueBool::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueBool, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueBool::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueBool, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueBool::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueDouble final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	double                                        ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueDouble) == 0x000008, "Wrong alignment on RigVM_GetParameterValueDouble");
static_assert(sizeof(RigVM_GetParameterValueDouble) == 0x000010, "Wrong size on RigVM_GetParameterValueDouble");
static_assert(offsetof(RigVM_GetParameterValueDouble, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueDouble::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueDouble, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueDouble::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueDouble, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueDouble::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueFloat final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	float                                         ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueFloat) == 0x000004, "Wrong alignment on RigVM_GetParameterValueFloat");
static_assert(sizeof(RigVM_GetParameterValueFloat) == 0x00000C, "Wrong size on RigVM_GetParameterValueFloat");
static_assert(offsetof(RigVM_GetParameterValueFloat, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueFloat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueFloat, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueFloat::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueFloat, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueFloat::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueInt final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	int32                                         ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueInt) == 0x000004, "Wrong alignment on RigVM_GetParameterValueInt");
static_assert(sizeof(RigVM_GetParameterValueInt) == 0x00000C, "Wrong size on RigVM_GetParameterValueInt");
static_assert(offsetof(RigVM_GetParameterValueInt, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueInt::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueInt, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueInt::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueInt, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueInt::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueName final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	class FName                                   ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueName) == 0x000004, "Wrong alignment on RigVM_GetParameterValueName");
static_assert(sizeof(RigVM_GetParameterValueName) == 0x00000C, "Wrong size on RigVM_GetParameterValueName");
static_assert(offsetof(RigVM_GetParameterValueName, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueName::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueName, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueName::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueName, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueName::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueQuat final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	uint8                                         Pad_8[0x8];
	struct FQuat                                  ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueQuat) == 0x000010, "Wrong alignment on RigVM_GetParameterValueQuat");
static_assert(sizeof(RigVM_GetParameterValueQuat) == 0x000030, "Wrong size on RigVM_GetParameterValueQuat");
static_assert(offsetof(RigVM_GetParameterValueQuat, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueQuat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueQuat, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueQuat::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueQuat, ReturnValue) == 0x000010, "Member 'RigVM_GetParameterValueQuat::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueString final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	class FString                                 ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueString) == 0x000008, "Wrong alignment on RigVM_GetParameterValueString");
static_assert(sizeof(RigVM_GetParameterValueString) == 0x000018, "Wrong size on RigVM_GetParameterValueString");
static_assert(offsetof(RigVM_GetParameterValueString, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueString::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueString, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueString::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueString, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueString::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueTransform final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	uint8                                         Pad_8[0x8];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueTransform) == 0x000010, "Wrong alignment on RigVM_GetParameterValueTransform");
static_assert(sizeof(RigVM_GetParameterValueTransform) == 0x000070, "Wrong size on RigVM_GetParameterValueTransform");
static_assert(offsetof(RigVM_GetParameterValueTransform, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueTransform::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueTransform, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueTransform::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueTransform, ReturnValue) == 0x000010, "Member 'RigVM_GetParameterValueTransform::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueVector final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	struct FVector                                ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueVector) == 0x000008, "Wrong alignment on RigVM_GetParameterValueVector");
static_assert(sizeof(RigVM_GetParameterValueVector) == 0x000020, "Wrong size on RigVM_GetParameterValueVector");
static_assert(offsetof(RigVM_GetParameterValueVector, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueVector::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueVector::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueVector::ReturnValue' has a wrong offset!");

struct RigVM_GetParameterValueVector2D final
{
public:
	class FName                                   InParameterName;
	int32                                         InArrayIndex;
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(RigVM_GetParameterValueVector2D) == 0x000008, "Wrong alignment on RigVM_GetParameterValueVector2D");
static_assert(sizeof(RigVM_GetParameterValueVector2D) == 0x000018, "Wrong size on RigVM_GetParameterValueVector2D");
static_assert(offsetof(RigVM_GetParameterValueVector2D, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueVector2D::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector2D, InArrayIndex) == 0x000004, "Member 'RigVM_GetParameterValueVector2D::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector2D, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterValueVector2D::ReturnValue' has a wrong offset!");

struct RigVM_SetParameterValueBool final
{
public:
	class FName                                   InParameterName;
	bool                                          InValue;
	uint8                                         Pad_5[0x3];
	int32                                         InArrayIndex;
};
static_assert(alignof(RigVM_SetParameterValueBool) == 0x000004, "Wrong alignment on RigVM_SetParameterValueBool");
static_assert(sizeof(RigVM_SetParameterValueBool) == 0x00000C, "Wrong size on RigVM_SetParameterValueBool");
static_assert(offsetof(RigVM_SetParameterValueBool, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueBool::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueBool, InValue) == 0x000004, "Member 'RigVM_SetParameterValueBool::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueBool, InArrayIndex) == 0x000008, "Member 'RigVM_SetParameterValueBool::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueDouble final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0x4];
	double                                        InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(RigVM_SetParameterValueDouble) == 0x000008, "Wrong alignment on RigVM_SetParameterValueDouble");
static_assert(sizeof(RigVM_SetParameterValueDouble) == 0x000018, "Wrong size on RigVM_SetParameterValueDouble");
static_assert(offsetof(RigVM_SetParameterValueDouble, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueDouble::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueDouble, InValue) == 0x000008, "Member 'RigVM_SetParameterValueDouble::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueDouble, InArrayIndex) == 0x000010, "Member 'RigVM_SetParameterValueDouble::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueFloat final
{
public:
	class FName                                   InParameterName;
	float                                         InValue;
	int32                                         InArrayIndex;
};
static_assert(alignof(RigVM_SetParameterValueFloat) == 0x000004, "Wrong alignment on RigVM_SetParameterValueFloat");
static_assert(sizeof(RigVM_SetParameterValueFloat) == 0x00000C, "Wrong size on RigVM_SetParameterValueFloat");
static_assert(offsetof(RigVM_SetParameterValueFloat, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueFloat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueFloat, InValue) == 0x000004, "Member 'RigVM_SetParameterValueFloat::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueFloat, InArrayIndex) == 0x000008, "Member 'RigVM_SetParameterValueFloat::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueInt final
{
public:
	class FName                                   InParameterName;
	int32                                         InValue;
	int32                                         InArrayIndex;
};
static_assert(alignof(RigVM_SetParameterValueInt) == 0x000004, "Wrong alignment on RigVM_SetParameterValueInt");
static_assert(sizeof(RigVM_SetParameterValueInt) == 0x00000C, "Wrong size on RigVM_SetParameterValueInt");
static_assert(offsetof(RigVM_SetParameterValueInt, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueInt::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueInt, InValue) == 0x000004, "Member 'RigVM_SetParameterValueInt::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueInt, InArrayIndex) == 0x000008, "Member 'RigVM_SetParameterValueInt::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueName final
{
public:
	class FName                                   InParameterName;
	class FName                                   InValue;
	int32                                         InArrayIndex;
};
static_assert(alignof(RigVM_SetParameterValueName) == 0x000004, "Wrong alignment on RigVM_SetParameterValueName");
static_assert(sizeof(RigVM_SetParameterValueName) == 0x00000C, "Wrong size on RigVM_SetParameterValueName");
static_assert(offsetof(RigVM_SetParameterValueName, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueName::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueName, InValue) == 0x000004, "Member 'RigVM_SetParameterValueName::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueName, InArrayIndex) == 0x000008, "Member 'RigVM_SetParameterValueName::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueQuat final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0xC];
	struct FQuat                                  InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_34[0xC];
};
static_assert(alignof(RigVM_SetParameterValueQuat) == 0x000010, "Wrong alignment on RigVM_SetParameterValueQuat");
static_assert(sizeof(RigVM_SetParameterValueQuat) == 0x000040, "Wrong size on RigVM_SetParameterValueQuat");
static_assert(offsetof(RigVM_SetParameterValueQuat, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueQuat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueQuat, InValue) == 0x000010, "Member 'RigVM_SetParameterValueQuat::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueQuat, InArrayIndex) == 0x000030, "Member 'RigVM_SetParameterValueQuat::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueString final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0x4];
	class FString                                 InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(RigVM_SetParameterValueString) == 0x000008, "Wrong alignment on RigVM_SetParameterValueString");
static_assert(sizeof(RigVM_SetParameterValueString) == 0x000020, "Wrong size on RigVM_SetParameterValueString");
static_assert(offsetof(RigVM_SetParameterValueString, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueString::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueString, InValue) == 0x000008, "Member 'RigVM_SetParameterValueString::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueString, InArrayIndex) == 0x000018, "Member 'RigVM_SetParameterValueString::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueTransform final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0xC];
	struct FTransform                             InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_74[0xC];
};
static_assert(alignof(RigVM_SetParameterValueTransform) == 0x000010, "Wrong alignment on RigVM_SetParameterValueTransform");
static_assert(sizeof(RigVM_SetParameterValueTransform) == 0x000080, "Wrong size on RigVM_SetParameterValueTransform");
static_assert(offsetof(RigVM_SetParameterValueTransform, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueTransform::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueTransform, InValue) == 0x000010, "Member 'RigVM_SetParameterValueTransform::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueTransform, InArrayIndex) == 0x000070, "Member 'RigVM_SetParameterValueTransform::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueVector final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0x4];
	struct FVector                                InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(RigVM_SetParameterValueVector) == 0x000008, "Wrong alignment on RigVM_SetParameterValueVector");
static_assert(sizeof(RigVM_SetParameterValueVector) == 0x000028, "Wrong size on RigVM_SetParameterValueVector");
static_assert(offsetof(RigVM_SetParameterValueVector, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueVector::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector, InValue) == 0x000008, "Member 'RigVM_SetParameterValueVector::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector, InArrayIndex) == 0x000020, "Member 'RigVM_SetParameterValueVector::InArrayIndex' has a wrong offset!");

struct RigVM_SetParameterValueVector2D final
{
public:
	class FName                                   InParameterName;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              InValue;
	int32                                         InArrayIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(RigVM_SetParameterValueVector2D) == 0x000008, "Wrong alignment on RigVM_SetParameterValueVector2D");
static_assert(sizeof(RigVM_SetParameterValueVector2D) == 0x000020, "Wrong size on RigVM_SetParameterValueVector2D");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueVector2D::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InValue) == 0x000008, "Member 'RigVM_SetParameterValueVector2D::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InArrayIndex) == 0x000018, "Member 'RigVM_SetParameterValueVector2D::InArrayIndex' has a wrong offset!");

struct RigVM_GetRigVMFunctionName final
{
public:
	int32                                         InFunctionIndex;
	uint8                                         Pad_4[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(RigVM_GetRigVMFunctionName) == 0x000008, "Wrong alignment on RigVM_GetRigVMFunctionName");
static_assert(sizeof(RigVM_GetRigVMFunctionName) == 0x000018, "Wrong size on RigVM_GetRigVMFunctionName");
static_assert(offsetof(RigVM_GetRigVMFunctionName, InFunctionIndex) == 0x000000, "Member 'RigVM_GetRigVMFunctionName::InFunctionIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetRigVMFunctionName, ReturnValue) == 0x000008, "Member 'RigVM_GetRigVMFunctionName::ReturnValue' has a wrong offset!");

struct RigVM_GetStatistics final
{
public:
	struct FRigVMStatistics                       ReturnValue;
};
static_assert(alignof(RigVM_GetStatistics) == 0x000004, "Wrong alignment on RigVM_GetStatistics");
static_assert(sizeof(RigVM_GetStatistics) == 0x000038, "Wrong size on RigVM_GetStatistics");
static_assert(offsetof(RigVM_GetStatistics, ReturnValue) == 0x000000, "Member 'RigVM_GetStatistics::ReturnValue' has a wrong offset!");

struct RigVMUserWorkflowOptions_ReportError final
{
public:
	class FString                                 InMessage;
};
static_assert(alignof(RigVMUserWorkflowOptions_ReportError) == 0x000008, "Wrong alignment on RigVMUserWorkflowOptions_ReportError");
static_assert(sizeof(RigVMUserWorkflowOptions_ReportError) == 0x000010, "Wrong size on RigVMUserWorkflowOptions_ReportError");
static_assert(offsetof(RigVMUserWorkflowOptions_ReportError, InMessage) == 0x000000, "Member 'RigVMUserWorkflowOptions_ReportError::InMessage' has a wrong offset!");

struct RigVMUserWorkflowOptions_ReportInfo final
{
public:
	class FString                                 InMessage;
};
static_assert(alignof(RigVMUserWorkflowOptions_ReportInfo) == 0x000008, "Wrong alignment on RigVMUserWorkflowOptions_ReportInfo");
static_assert(sizeof(RigVMUserWorkflowOptions_ReportInfo) == 0x000010, "Wrong size on RigVMUserWorkflowOptions_ReportInfo");
static_assert(offsetof(RigVMUserWorkflowOptions_ReportInfo, InMessage) == 0x000000, "Member 'RigVMUserWorkflowOptions_ReportInfo::InMessage' has a wrong offset!");

struct RigVMUserWorkflowOptions_ReportWarning final
{
public:
	class FString                                 InMessage;
};
static_assert(alignof(RigVMUserWorkflowOptions_ReportWarning) == 0x000008, "Wrong alignment on RigVMUserWorkflowOptions_ReportWarning");
static_assert(sizeof(RigVMUserWorkflowOptions_ReportWarning) == 0x000010, "Wrong size on RigVMUserWorkflowOptions_ReportWarning");
static_assert(offsetof(RigVMUserWorkflowOptions_ReportWarning, InMessage) == 0x000000, "Member 'RigVMUserWorkflowOptions_ReportWarning::InMessage' has a wrong offset!");

struct RigVMUserWorkflowOptions_IsValid final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RigVMUserWorkflowOptions_IsValid) == 0x000001, "Wrong alignment on RigVMUserWorkflowOptions_IsValid");
static_assert(sizeof(RigVMUserWorkflowOptions_IsValid) == 0x000001, "Wrong size on RigVMUserWorkflowOptions_IsValid");
static_assert(offsetof(RigVMUserWorkflowOptions_IsValid, ReturnValue) == 0x000000, "Member 'RigVMUserWorkflowOptions_IsValid::ReturnValue' has a wrong offset!");

struct RigVMUserWorkflowOptions_RequiresDialog final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RigVMUserWorkflowOptions_RequiresDialog) == 0x000001, "Wrong alignment on RigVMUserWorkflowOptions_RequiresDialog");
static_assert(sizeof(RigVMUserWorkflowOptions_RequiresDialog) == 0x000001, "Wrong size on RigVMUserWorkflowOptions_RequiresDialog");
static_assert(offsetof(RigVMUserWorkflowOptions_RequiresDialog, ReturnValue) == 0x000000, "Member 'RigVMUserWorkflowOptions_RequiresDialog::ReturnValue' has a wrong offset!");

}
