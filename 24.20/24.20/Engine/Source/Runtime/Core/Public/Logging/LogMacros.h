#pragma once
#include "pch.h"

class FLazyName
{
public:
    struct FLiteralOrName
    {
        // NOTE: uses high bit of pointer for flag; this may be an issue in future when high byte of address may be used for features like hardware ASAN
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

    // Distinguishes WIDECHAR* and ANSICHAR* literals, doesn't indicate if literal contains any wide characters 
    bool bLiteralIsWide = false;

};

struct FLogCategoryBase
{

    /** Holds the current suppression state */
    uint32 Verbosity = 4;
    /** Holds the break flag */
    bool DebugBreakOnLog = false;
    /** Holds default suppression */
    uint8 DefaultVerbosity = 4;
    /** Holds compile time suppression */
    const uint32 CompileTimeVerbosity = 4;
    /** Name for this category */

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

    // Workaround for https://developercommunity.visualstudio.com/t/Incorrect-warning-C4700-with-unrelated-s/10285950
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

/*#define Log(format, ...) { \
    static FStaticBasicLogDynamicData DynLogData; \
    constexpr static FStaticBasicLogRecord Record(format, __FILE__, __LINE__, 4, DynLogData); \
    BasicLog(&LogCategory, Record, ##__VA_ARGS__); \
}*/
#define Log(format, ...)
