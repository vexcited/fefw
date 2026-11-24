#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_allocate_exception_plt(unsigned __int64);
__int64 __cxa_begin_catch_plt(__int64);
__int64 __cxa_get_globals_fast_plt(_QWORD);
__int64 __cxxabiv1_(__int64 result);
__int64 __cxxabiv1___getExceptionClass(_QWORD);
__int64 std_bad_exception_Destroy_bad_exception_plt(__int64);
bool __cxxabiv1___isOurExceptionClass(_QWORD*);
bool __cxxabiv1_exception_spec_can_catch(__int64, __int64, unsigned __int8,
                                         __int64, unsigned __int16*);
extern __int64 SdkData_e89810;
extern __int64 SdkData_e89828;
extern __int64 SdkData_e89830;
unsigned __int64 __cxxabiv1_readEncodedPointer(unsigned __int16**,
                                               unsigned __int8);
void SdkRoutine_aec10();
void _Unwind_Resume_plt(__int64);
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) std___terminate(void (*)(void));
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void __cxa_end_catch_plt();
void __cxa_rethrow_plt();
void __cxa_throw_plt(__int64, __int64, __int64);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84b56c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84b730(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84bc7c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10);
void __attribute__((noreturn)) llvmlibcxx_libcxxabi_84c1f0(__int64 a1, ...);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84f214(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, unsigned __int16* a10);
void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84b56c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9)
{
  void (*v9)(__int64);
  __int64 v10;

  __cxxabiv1_((__int64)&a9);
  v9(v10);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84b730(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10)
{
  void (*v10)(__int64, __int64);
  __int64 v11;
  __int64 v12;

  __cxxabiv1_((__int64)&a10);
  v10(v12, v11);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9)
{
  __int64 v9;
  char v10;
  void (*v11)(__int64);

  if ((v10 & 1) != 0) {
    std_terminate_plt(a1);
  }
  __cxxabiv1_((__int64)&a9);
  v11(v9);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84bc7c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10)
{
  __int64 v10;
  __int64 v11;
  char v12;
  void (*v13)(__int64, __int64);

  if ((v12 & 1) != 0) {
    std_terminate_plt(a1);
  }
  __cxxabiv1_((__int64)&a10);
  v13(v10, v11);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvmlibcxx_libcxxabi_84c1f0(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  ((void(__attribute__((noreturn))*)(__int64, void*))SdkRoutine_aec10)(
      a1, (__int64)&va);
}

void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84f214(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, unsigned __int16* a10)
{
  void (*v10)(void);
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int16* v20;
  __int64 v21;
  __int64 v22;
  char v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int16* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_begin_catch_plt(a1),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v14 & 1) != 0) {
    v17 = *(_BYTE*)v15;
    a10 = (unsigned __int16*)(v15 + 1);
    v18 = __cxxabiv1_readEncodedPointer(&a10, v17),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v19 = *(unsigned __int8*)a10;
    if (v19 == 255) {
      goto LABEL_3;
    }
    v20 = (unsigned __int16*)((char*)a10 + 1);
    v21 = 0;
    v22 = 0;
    do {
      v23 = *(_BYTE*)v20;
      v20 = (unsigned __int16*)((char*)v20 + 1);
      v24 = (unsigned __int64)(v23 & 0x7F) << v21;
      v21 += 7;
      v22 |= v24;
    } while (v23 < 0);
    a10 = v20;
    v25 = (_QWORD*)__cxa_get_globals_fast_plt(v18),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v26 = *v25;
    v27 = v25;
    if (*v25 == 0) {
    LABEL_3:
      std___terminate(v10),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    if (__cxxabiv1___isOurExceptionClass((_QWORD*)(v26 + 96)) && v26 != v16) {
      v28 = *(_QWORD*)(v26 + 16);
      v29 = __cxxabiv1___getExceptionClass(v26 + 96) == 0x434C4E47432B2B01LL
                ? *(unsigned __int16**)(v26 + 8)
                : (unsigned __int16*)(v26 + 128),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (!__cxxabiv1_exception_spec_can_catch(v13, (__int64)v20 + v22, v19,
                                               v28, v29)) {
        *(_DWORD*)(v26 + 56) = -*(_DWORD*)(v26 + 56);
        ++*((_DWORD*)v27 + 2);
        __cxa_end_catch_plt(),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_end_catch_plt(),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_begin_catch_plt(v26 + 96),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_rethrow_plt(),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v33 = v32;
        std_bad_exception_Destroy_bad_exception_plt((__int64)&a9),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_end_catch_plt(),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        _Unwind_Resume_plt(v33),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        SdkRoutine_7cd620(),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    }
    v30 = SdkData_e89828;
    a9 = SdkData_e89828 + 16;
    if (!__cxxabiv1_exception_spec_can_catch(v13, (__int64)v20 + v22, v19,
                                             SdkData_e89830,
                                             (unsigned __int16*)&a9)) {
      __cxa_end_catch_plt(),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v31 = (_QWORD*)__cxa_allocate_exception_plt(8u),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *v31 = v30 + 16;
      __cxa_throw_plt((__int64)v31, SdkData_e89830, SdkData_e89810),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    std_bad_exception_Destroy_bad_exception_plt((__int64)&a9),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  __cxa_end_catch_plt(),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___terminate(v10),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
}

#pragma GCC visibility pop
