#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mkvparser_Chapters_Edition_Parse_plt(void);
__int64 mkvparser_Chapters_ExpandEditionsArray_plt(void);
__int64 libwebm_mkvparser_54fd70(void* this_);

__int64 libwebm_mkvparser_54fd70(void* this_)
{
  __int64 v2;
  _QWORD* v3;

  mkvparser_Chapters_ExpandEditionsArray_plt();
  v2 = *((int*)this_ + 13);
  v3 = (_QWORD*)(*((_QWORD*)this_ + 5) + 16 * v2);
  *((_DWORD*)this_ + 13) = v2 + 1;
  *v3 = 0;
  v3[1] = 0;
  return mkvparser_Chapters_Edition_Parse_plt();
}

#pragma GCC visibility pop
