#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0a890(const char*, __int64, int);
__int64 ProcHubSeqEnter_918ce0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 (*GameData_1fdee00[14])();
extern __int64 (*GameData_1fdee38[7])();
float GameRoutine_1a0ac90(const char*, __int64);
void as_d9bc80(__int64 a1, __int64* a2, __int64* a3);

void as_d9bc80(__int64 a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 i;
  unsigned __int8* v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  float v19;
  const char* v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  char v25;
  int v26;
  int v27;
  int v28;
  _BYTE* v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  struct {
    _BYTE* v35;
    __int64 v36;
    __int64 v37;
    int v38;
  } v35_;
  _QWORD v39[3];

  v5 = *a3;
  if (a3[1] != *a3) {
    v39[1] = v3;
    v39[2] = v4;
    v8 = 0;
    for (i = 0; 0xAAAAAAAAAAAAAAABLL * ((a3[1] - *a3) >> 3) > i; ++i) {
      v10 = (unsigned __int8*)(v5 + v8);
      v11 = *(unsigned __int8*)(v5 + v8);
      v12 = v11 & 1;
      v13 = v11 >> 1;
      if (v12 != 0) {
        v14 = *((_QWORD*)v10 + 1);
      }
      else {
        v14 = v13;
      }
      if (v14 != 0) {
        v15 = *((const char**)v10 + 2);
        if (v12 != 0) {
          v16 = *((const char**)v10 + 2);
        }
        else {
          v16 = (const char*)(v10 + 1);
        }
        v17 = GameRoutine_1a09c60((__int64)v16, 46, v14);
        if (v17 != 0 && v17 - (_QWORD)v16 != -1) {
          v19 = GameRoutine_1a0ac90(v16, (__int64)&v35_.v35);
          if (*v35_.v35 == 0) {
            v26 = 3;
            *(float*)&v35_.v35 = v19;
            goto LABEL_43;
          }
          v15 = *((const char**)v10 + 2);
          v12 = *v10 & 1;
        }
        if (v12 != 0) {
          v20 = v15;
        }
        else {
          v20 = (const char*)(v10 + 1);
        }
        v21 = GameRoutine_1a0a890(v20, (__int64)&v35_.v35, 10);
        if (*v35_.v35 != 0) {
          v22 = *v10;
          v23 = v22 >> 1;
          if ((v22 & 1) != 0) {
            v24 = *((unsigned __int8**)v10 + 2);
          }
          else {
            v24 = v10 + 1;
          }
          if ((v22 & 1) != 0) {
            v23 = *((_QWORD*)v10 + 1);
          }
          if (v23 == 5) {
            v27 = *(_DWORD*)v24;
            v28 = v24[4];
            if (v27 != 1936482662 || v28 != 101) {
            LABEL_37:
              if ((v22 & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)&v35_.v35,
                                              *((_QWORD*)v10 + 2),
                                              *((_QWORD*)v10 + 1));
              }
              else {
                v30 = *(_BYTE**)v10;
                v31 = *((_QWORD*)v10 + 2);
                v35_.v36 = *((_QWORD*)v10 + 1);
                v35_.v37 = v31;
                v35_.v35 = v30;
              }
              v26 = 4;
              goto LABEL_43;
            }
            v25 = 0;
          }
          else {
            if (v23 != 4 || *(_DWORD*)v24 != 1702195828) {
              goto LABEL_37;
            }
            v25 = 1;
          }
          LOBYTE(v35_.v35) = v25;
          v26 = 6;
        }
        else {
          v26 = 2;
          LODWORD(v35_.v35) = v21;
        }
      }
      else {
        v26 = 4;
        v35_.v36 = 0;
        v35_.v37 = 0;
        v35_.v35 = nullptr;
      }
    LABEL_43:
      v35_.v38 = v26;
      v32 = a2[1];
      if (v32 >= a2[2]) {
        v34 = ProcHubSeqEnter_918ce0(a2, (__int64)&v35_.v35);
      }
      else {
        *(_BYTE*)v32 = 0;
        *(_DWORD*)(v32 + 24) = -1;
        v33 = v35_.v38;
        if (v35_.v38 != -1) {
          v39[0] = v32;
          ((void (*)(_QWORD*, _BYTE**))GameData_1fdee38[v35_.v38])(v39,
                                                                   &v35_.v35);
          *(_DWORD*)(v32 + 24) = v33;
        }
        v34 = v32 + 32;
      }
      a2[1] = v34;
      if (v35_.v38 != -1) {
        ((void (*)(_QWORD*, _BYTE**))GameData_1fdee00[v35_.v38])(v39,
                                                                 &v35_.v35);
      }
      v5 = *a3;
      v8 += 24;
    }
  }
}

#pragma GCC visibility pop
