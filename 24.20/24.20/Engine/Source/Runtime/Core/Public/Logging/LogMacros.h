#pragma once
#include "pch.h"

class FLazyName
{
public:
    struct FLiteralOrName
    {

        static constexpr uint64 LiteralFlag = uint64(1) << (sizeof(uint64) * 8 - 1);
        static constexpr uint32 DisplayNameShift = 32;

        FLiteralOrName()
        {
        }

        explicit FLiteralOrName(const char* Literal)
            : Int(reinterpret_cast<uint64>(Literal) | LiteralFlag)
        {
        }

        explicit FLiteralOrName(const wchar_t* Literal)
            : Int(reinterpret_cast<uint64>(Literal) | LiteralFlag)
        {
        }

        bool IsName() const
        {
            return (LiteralFlag & Int) == 0;
        }

        bool IsLiteral() const
        {
            return (LiteralFlag & Int) != 0;
        }

        const char* AsAnsiLiteral() const
        {
            return reinterpret_cast<const char*>(Int & ~LiteralFlag);
        }

        const wchar_t* AsWideLiteral() const
        {
            return reinterpret_cast<const wchar_t*>(Int & ~LiteralFlag);
        }

        uint64 Int = 0;
    };

    mutable FLiteralOrName Either = {};
    mutable uint32 Number = 0;

    bool bLiteralIsWide = false;

};

struct FLogCategoryBase
{

    uint32 Verbosity = 4;

    bool DebugBreakOnLog = false;

    uint8 DefaultVerbosity = 4;

    const uint32 CompileTimeVerbosity = 4;

    FLazyName CategoryName;
};

inline FLogCategoryBase LogCategory;

struct FStaticBasicLogDynamicData
{
    std::atomic<bool> bInitialized = false;
};

struct FStaticBasicLogRecord
{
    const wchar_t* Format = nullptr;
    const char* File = nullptr;
    int32 Line = 0;
    uint32 Verbosity = 4;
    FStaticBasicLogDynamicData& DynamicData;

    constexpr FStaticBasicLogRecord(
        const wchar_t* InFormat,
        const char* InFile,
        int32 InLine,
        uint32 InVerbosity,
        FStaticBasicLogDynamicData& InDynamicData)
        : Format(InFormat)
        , File(InFile)
        , Line(InLine)
        , Verbosity(InVerbosity)
        , DynamicData(InDynamicData)
    {
    }
};

inline void (*BasicLog)(const FLogCategoryBase*, const FStaticBasicLogRecord&, ...) = decltype(BasicLog)(*(uint64_t*)(__readgsqword(0x60) + 0x10) + 0x10428A4);

#define Log(format, ...)
