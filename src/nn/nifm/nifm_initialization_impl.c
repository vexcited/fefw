#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_socket_ShutdownAllSockets_plt(_QWORD, _QWORD, _QWORD);
void nn_detail_UnexpectedDefaultImpl_plt_857150();
__int64 nifm_initialization_58d500(int a1, unsigned __int8* a2);

__int64 nifm_initialization_58d500(int a1, unsigned __int8* a2)
{
  __int64 result;

  if (a1 == 2) {
    result = a2[1];
    if (a2[1] == 0) {
      return result;
    }
    if ((_DWORD)result != 28) {
      if ((_DWORD)result != 2) {
        nn_detail_UnexpectedDefaultImpl_plt_857150();
      }
      if (*((_DWORD*)a2 + 1) == 0) {
        return 0;
      }
      return nn_socket_ShutdownAllSockets_plt(a2, *a2, 2);
    }
    if (*(_OWORD*)(a2 + 8) != 0) {
      return nn_socket_ShutdownAllSockets_plt(a2, *a2, 2);
    }
  }
  return 0;
}

#pragma GCC visibility pop
