#pragma once
#include "pch.h"

inline vector<void(*)()> _HookFuncs;
#define DefHookOg(_Rt, _Name, ...) static inline _Rt (*_Name##OG)(##__VA_ARGS__); static _Rt _Name(##__VA_ARGS__); 
#define DefUHookOg(_Name) static inline void (*_Name##OG)(UObject*, FFrame&); static void _Name(UObject*, FFrame&); 
#define DefUHookOgRet(_Rt, _Name) static inline _Rt (*_Name##OG)(UObject*, FFrame&, _Rt*); static _Rt _Name(UObject *, FFrame&, _Rt*);
#define InitHooks static void Hook(); static int _AddHook() { _HookFuncs.push_back(Hook); return 0; }; static inline auto _HookAdder = _AddHook();
#define callOG(_Tr, _Pt, _Th, ...) ([&](){ auto _Fn = Utils::FindObject<UFunction>(_Pt "." # _Th); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th##OG; _Tr->_Th(##__VA_ARGS__); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th; })()
#define callOGWithRet(_Tr, _Pt, _Th, ...) ([&](){ auto _Fn = Utils::FindObject<UFunction>(_Pt "." # _Th); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th##OG; auto _Rt = _Tr->_Th(##__VA_ARGS__); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th; return _Rt; })()
