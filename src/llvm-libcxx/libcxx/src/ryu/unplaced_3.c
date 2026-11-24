#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 llvm_libcxx_libcxx_src_ryu_7dbcf0(void);
void _Unwind_Resume_plt(__int64);
void std_exception_Destroy_exception_plt_87c890();
__int64 llvmlibcxx_libcxx_ryu_7dbcdc(__int64 a1);

__int64 llvmlibcxx_libcxx_ryu_7dbcdc(__int64 a1)
{

  std_exception_Destroy_exception_plt_87c890();
  _Unwind_Resume_plt(a1);
  return llvm_libcxx_libcxx_src_ryu_7dbcf0();
}

#pragma GCC visibility pop
