#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "VerseRestricted_structs.hpp"
#include "VerseNative_0_classes.hpp"

namespace SDK
{

class VerseRestricted::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseRestricted.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseRestricted::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseRestricted::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseRestricted::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseRestricted::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseRestricted::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseRestricted::U_SolarisSignatureFunctionOuter");

class URestricted final : public UObject
{
public:
	static class UClass* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event(const struct VerseRestricted::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static class UClass* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Restricted">();
	}
	static class URestricted* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestricted>();
	}
};
static_assert(alignof(URestricted) == 0x000008, "Wrong alignment on URestricted");
static_assert(sizeof(URestricted) == 0x000028, "Wrong size on URestricted");

class URestricted_sticky_event final : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0xA811AC9B__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled;
	FVerseFunctionProperty_                       __verse_0xB0B89381__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal;
	FVerseFunctionProperty_                       __verse_0xE92C69BE__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount;
	FVerseFunctionProperty_                       __verse_0x319692B4__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await;
	uint8                                         Pad_78[0x40];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal(const struct VerseRestricted::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount(const struct VerseRestricted::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled(const struct VerseRestricted::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseRestricted::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Restricted_sticky_event">();
	}
	static class URestricted_sticky_event* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestricted_sticky_event>();
	}
};
static_assert(alignof(URestricted_sticky_event) == 0x000008, "Wrong alignment on URestricted_sticky_event");
static_assert(sizeof(URestricted_sticky_event) == 0x0000B8, "Wrong size on URestricted_sticky_event");
static_assert(offsetof(URestricted_sticky_event, __verse_0xA811AC9B__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled) == 0x000028, "Member 'URestricted_sticky_event::__verse_0xA811AC9B__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled' has a wrong offset!");
static_assert(offsetof(URestricted_sticky_event, __verse_0xB0B89381__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal) == 0x000038, "Member 'URestricted_sticky_event::__verse_0xB0B89381__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal' has a wrong offset!");
static_assert(offsetof(URestricted_sticky_event, __verse_0xE92C69BE__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount) == 0x000048, "Member 'URestricted_sticky_event::__verse_0xE92C69BE__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount' has a wrong offset!");
static_assert(offsetof(URestricted_sticky_event, __verse_0x319692B4__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R) == 0x000058, "Member 'URestricted_sticky_event::__verse_0x319692B4__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R' has a wrong offset!");
static_assert(offsetof(URestricted_sticky_event, __verse_0x8DE7DBE5_Await) == 0x000068, "Member 'URestricted_sticky_event::__verse_0x8DE7DBE5_Await' has a wrong offset!");

class Utask_Restricted_sticky_event_Await final : public UConcurrency_task
{
public:
	class URestricted_sticky_event*               _Self;
	struct VerseRestricted::Ftuple_L_R            __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Restricted_sticky_event$Await">();
	}
	static class Utask_Restricted_sticky_event_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Restricted_sticky_event_Await>();
	}
};
static_assert(alignof(Utask_Restricted_sticky_event_Await) == 0x000008, "Wrong alignment on Utask_Restricted_sticky_event_Await");
static_assert(sizeof(Utask_Restricted_sticky_event_Await) == 0x000168, "Wrong size on Utask_Restricted_sticky_event_Await");
static_assert(offsetof(Utask_Restricted_sticky_event_Await, _Self) == 0x000148, "Member 'Utask_Restricted_sticky_event_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Restricted_sticky_event_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Restricted_sticky_event_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Restricted_sticky_event_Await, _RetVal) == 0x000158, "Member 'Utask_Restricted_sticky_event_Await::_RetVal' has a wrong offset!");

}
