#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_getListenerPosition_100870();
extern __int64* as_g_script_manager_ptr;
extern __int64 as_g_thread_info;
_QWORD* snd_GetListenerPos(__int64 a1, _DWORD* a2);

_QWORD* snd_GetListenerPos(__int64 a1, _DWORD* a2)
{
  __int128 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  int v9;
  int v10;
  unsigned int v11;

  snd_getListenerPosition_100870();
  *(_DWORD*)a2 = v9;
  a2[1] = v10;
  v3 = *(_OWORD*)a2;
  *((_QWORD*)&v3 + 1) = v11;
  *(_OWORD*)a2 = v3;
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
}

#pragma GCC visibility pop
