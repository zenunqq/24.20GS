#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"
#include "Engine/Source/Runtime/Engine/Classes/Engine/Replication.h"

void Main()
{
    Sarah::Offsets::Init();
    ReplicationOffsets::Init();
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    SetConsoleTitleA("Sarah 24.20: Setting up");
    LogCategory.CategoryName.Either = FLazyName::FLiteralOrName(L"LogGameserver");
    LogCategory.CategoryName.bLiteralIsWide = true;
    auto FrontEndGameMode = (AFortGameMode*)UWorld::GetWorld()->AuthorityGameMode;
    Sleep(5000);

    MH_Initialize();
    for (auto& HookFunc : _HookFuncs)
        HookFunc();
    MH_EnableHook(MH_ALL_HOOKS);

    srand((uint32_t)time(0));

    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), TEXT("log LogNet Error"), nullptr);
    *(bool*)Sarah::Offsets::GIsClient = false;
    *(bool*)(__int64(Sarah::Offsets::ImageBase) + 0x1075FF2C) = true;
    *(bool*)(__int64(Sarah::Offsets::ImageBase) + 0x102661DC) = true;
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Asteria_Terrain", nullptr);
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        thread(Main).detach();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
