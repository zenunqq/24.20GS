#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/Misc/OutputDevice.h"

struct FOutParmRec
{
    FProperty* Property;
    uint8* PropAddr;
    FOutParmRec* NextOutParm;
};

class FFrame : public FOutputDevice
{
public:
    void** VTable;
    UFunction* Node;
    UObject* Object;
    uint8* Code;
    uint8* Locals;
    FProperty* MostRecentProperty;
    uint8_t* MostRecentPropertyAddress;
    uint8* MostRecentPropertyContainer;
    TArray<void*> FlowStack;
    FFrame* PreviousFrame;
    FOutParmRec* OutParms;
    uint8_t _Padding1[0x20];
    FField* PropertyChainForCompiledIn;
    UFunction* CurrentNativeFunction;
    FFrame* PreviousTrackingFrame;
    bool bArrayContextFailed;

public:
    void StepCompiledIn(void* const Result, bool ForceExplicitProp = false);

    template <typename T>
    T& StepCompiledInRef() {
        T TempVal{};
        MostRecentPropertyAddress = nullptr;

        if (Code)
        {
            ((void (*)(FFrame*, UObject*, void* const)) Sarah::Offsets::Step)(this, Object, &TempVal);
        }
        else
        {
            FField* _Prop = PropertyChainForCompiledIn;
            PropertyChainForCompiledIn = _Prop->Next;
            ((void (*)(FFrame*, void* const, FField*)) Sarah::Offsets::StepExplicitProperty)(this, &TempVal, _Prop);
        }

        return MostRecentPropertyAddress ? *(T*)MostRecentPropertyAddress : TempVal;
    }

    void IncrementCode();
};
static_assert(offsetof(FFrame, Object) == 0x18, "FFrame::Object offset is wrong!");
static_assert(offsetof(FFrame, Code) == 0x20, "FFrame::Code offset is wrong!");
static_assert(offsetof(FFrame, Object) == 0x18, "FFrame::Object offset is wrong!");
static_assert(offsetof(FFrame, PropertyChainForCompiledIn) == 0x88, "FFrame::PropertyChainForCompiledIn offset is wrong!");
