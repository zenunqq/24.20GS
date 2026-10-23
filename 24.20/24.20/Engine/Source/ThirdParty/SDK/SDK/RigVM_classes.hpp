#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "RigVM_structs.hpp"

namespace SDK
{

class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                    WorkMemoryStorageObject;
	class URigVMMemoryStorage*                    LiteralMemoryStorageObject;
	class URigVMMemoryStorage*                    DebugMemoryStorageObject;
	uint8                                         Pad_40[0x20];
	struct FRigVMByteCode                         ByteCodeStorage;
	uint8                                         Pad_90[0x8];
	struct FRigVMInstructionArray                 Instructions;
	struct FRigVMExtendedExecuteContext           Context;
	uint32                                        NumExecutions;
	uint8                                         Pad_11C[0x4];
	TArray<class FName>                           FunctionNamesStorage;
	uint8                                         Pad_130[0x38];
	TArray<struct FRigVMParameter>                Parameters;
	TMap<class FName, int32>                      ParametersNameMap;
	uint8                                         Pad_1C8[0xB8];
	class URigVM*                                 DeferredVMToCopy;
	uint8                                         Pad_288[0x18];

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
	bool Execute(const class FName& InEntryName);
	bool GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex);
	double GetParameterValueDouble(const class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueDouble(const class FName& InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);

	class FString GetRigVMFunctionName(int32 InFunctionIndex) const;
	struct FRigVMStatistics GetStatistics() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};
static_assert(alignof(URigVM) == 0x000008, "Wrong alignment on URigVM");
static_assert(sizeof(URigVM) == 0x0002A0, "Wrong size on URigVM");
static_assert(offsetof(URigVM, WorkMemoryStorageObject) == 0x000028, "Member 'URigVM::WorkMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, LiteralMemoryStorageObject) == 0x000030, "Member 'URigVM::LiteralMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, DebugMemoryStorageObject) == 0x000038, "Member 'URigVM::DebugMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x000060, "Member 'URigVM::ByteCodeStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Instructions) == 0x000098, "Member 'URigVM::Instructions' has a wrong offset!");
static_assert(offsetof(URigVM, Context) == 0x0000A8, "Member 'URigVM::Context' has a wrong offset!");
static_assert(offsetof(URigVM, NumExecutions) == 0x000118, "Member 'URigVM::NumExecutions' has a wrong offset!");
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x000120, "Member 'URigVM::FunctionNamesStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Parameters) == 0x000168, "Member 'URigVM::Parameters' has a wrong offset!");
static_assert(offsetof(URigVM, ParametersNameMap) == 0x000178, "Member 'URigVM::ParametersNameMap' has a wrong offset!");
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x000280, "Member 'URigVM::DeferredVMToCopy' has a wrong offset!");

class URigVMMemoryStorageGeneratorClass final : public UClass
{
public:
	uint8                                         Pad_200[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorageGeneratorClass">();
	}
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorageGeneratorClass>();
	}
};
static_assert(alignof(URigVMMemoryStorageGeneratorClass) == 0x000008, "Wrong alignment on URigVMMemoryStorageGeneratorClass");
static_assert(sizeof(URigVMMemoryStorageGeneratorClass) == 0x000240, "Wrong size on URigVMMemoryStorageGeneratorClass");

class URigVMMemoryStorage : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorage">();
	}
	static class URigVMMemoryStorage* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorage>();
	}
};
static_assert(alignof(URigVMMemoryStorage) == 0x000008, "Wrong alignment on URigVMMemoryStorage");
static_assert(sizeof(URigVMMemoryStorage) == 0x000028, "Wrong size on URigVMMemoryStorage");

class URigVMNativized final : public URigVM
{
public:
	uint8                                         Pad_2A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMNativized">();
	}
	static class URigVMNativized* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMNativized>();
	}
};
static_assert(alignof(URigVMNativized) == 0x000008, "Wrong alignment on URigVMNativized");
static_assert(sizeof(URigVMNativized) == 0x0002A8, "Wrong size on URigVMNativized");

class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                                Subject;
	struct FRigVMUserWorkflow                     Workflow;
	uint8                                         Pad_88[0x10];

public:
	void ReportError(const class FString& InMessage);
	void ReportInfo(const class FString& InMessage);
	void ReportWarning(const class FString& InMessage);

	bool IsValid() const;
	bool RequiresDialog() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMUserWorkflowOptions">();
	}
	static class URigVMUserWorkflowOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMUserWorkflowOptions>();
	}
};
static_assert(alignof(URigVMUserWorkflowOptions) == 0x000008, "Wrong alignment on URigVMUserWorkflowOptions");
static_assert(sizeof(URigVMUserWorkflowOptions) == 0x000098, "Wrong size on URigVMUserWorkflowOptions");
static_assert(offsetof(URigVMUserWorkflowOptions, Subject) == 0x000028, "Member 'URigVMUserWorkflowOptions::Subject' has a wrong offset!");
static_assert(offsetof(URigVMUserWorkflowOptions, Workflow) == 0x000030, "Member 'URigVMUserWorkflowOptions::Workflow' has a wrong offset!");

}
