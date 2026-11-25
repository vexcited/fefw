#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* VariableRegister_832b40(__int64*, __int64);
__int64 GameRoutine_1a09be0(__int64, const char*);
__int64 GameRoutine_1a0a670(__int64, const char*);
__int64 GameRoutine_656f20(__int64, const char*, int);
__int64 GameRoutine_6570d0(__int64);
__int64 GameRoutine_832460(__int64 result, unsigned __int8*);
__int64 GameRoutine_832620(__int64 result, _QWORD*);
__int64 VariableRegister_831e20(__int64*, __int64*, __int64*);
__int64 VariableRegister_832080(__int64*, __int64*, __int64*, __int64*);
__int64 VariableRegister_832230(__int64*, __int64*, __int64*, __int64*,
                                __int64*, __int64);
__int64 _657350(__int64, const char*);
__int64 nn_fs_CloseFile();
__int64 nn_fs_DeleteFile(const char*);
__int64 nn_fs_GetEntryType(__int64, const char*);
__int64 nn_fs_GetFileSize();
__int64 nn_fs_ReadFile_1a0a620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_8759f0(unsigned __int8*, __int64);
bool GameRoutine_876070(unsigned __int8*, __int64);
bool VariableRegister_832ec0(__int64*, __int64*, __int64);
char* VariableRegister_8331c0(char*, char*, char*, __int64);
extern __int64 GameData_21eea58;
extern char GameData_1a9f09e;
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int8* VariableRegister_8327a0(unsigned __int8*, unsigned __int8*);
unsigned int llvm_libcxx_21_libcxx_include___functional_8319e0(
    __int64 result, unsigned __int8* a2, __int64 a3, __int64 a4, char a5);
__int64 llvm_libcxx_21_libcxx_include___functional_87bf20(__int64 result,
                                                          __int64* a2);

unsigned int llvm_libcxx_21_libcxx_include___functional_8319e0(
    __int64 result, unsigned __int8* a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64* v29;
  char v30;
  bool v31;
  unsigned __int8* v32;
  unsigned int v33;
  bool v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = result;
LABEL_2:
  v9 = (unsigned __int8*)v8;
LABEL_3:
  v10 = 1 - a4;
  while (1) {
    v11 = v10;
    v12 = (unsigned __int8*)(a2 - v9);
    v8 = (__int64)v9;
    v13 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v9) >> 3);
    if ((__int64)v13 > 2) {
      switch (v13) {
      case 3uLL:
        return VariableRegister_831e20((__int64*)v9, (__int64*)v9 + 3,
                                       (__int64*)a2 - 3);
      case 4uLL:
        return VariableRegister_832080((__int64*)v9, (__int64*)v9 + 3,
                                       (__int64*)v9 + 6, (__int64*)a2 - 3);
      case 5uLL:
        return VariableRegister_832230((__int64*)v9, (__int64*)v9 + 3,
                                       (__int64*)v9 + 6, (__int64*)v9 + 9,
                                       (__int64*)a2 - 3, a3);
      default:
        break;
      }
    }
    else {
      if (v13 < 2) {
        return result;
      }
      if (v13 == 2) {
        v33 = *(a2 - 24);
        v32 = a2 - 24;
        v34 = (v33 & 1) == 0;
        v35 = (unsigned __int64)v33 >> 1;
        if ((v33 & 1) != 0) {
          v36 = *((_QWORD*)v32 + 1);
        }
        else {
          v36 = v35;
        }
        v37 = *v9;
        if (v34) {
          v38 = (__int64)(v32 + 1);
        }
        else {
          v38 = *((_QWORD*)v32 + 2);
        }
        v39 = (v37 & 1) == 0;
        v40 = v37 >> 1;
        if (v39) {
          v41 = v40;
        }
        else {
          v41 = *((_QWORD*)v9 + 1);
        }
        if (v39) {
          v42 = (__int64)(v9 + 1);
        }
        else {
          v42 = *((_QWORD*)v9 + 2);
        }
        if (v41 >= v36) {
          v43 = v36;
        }
        else {
          v43 = v41;
        }
        result = GameRoutine_1a09cf0(v38, v42, v43),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((_DWORD)result != 0) {
          if ((result & 0x80000000) == 0) {
            return result;
          }
        }
        else if (v36 >= v41) {
          return result;
        }
        v49 = *((_QWORD*)v9 + 1);
        v51 = *((_QWORD*)v9 + 2);
        v47 = *(_QWORD*)v9;
        v44 = *(_QWORD*)v32;
        v45 = *((_QWORD*)v32 + 2);
        *((_QWORD*)v9 + 1) = *((_QWORD*)v32 + 1);
        *((_QWORD*)v9 + 2) = v45;
        *(_QWORD*)v9 = v44;
        *(_QWORD*)v32 = v47;
        *((_QWORD*)v32 + 1) = v49;
        *((_QWORD*)v32 + 2) = v51;
        return result;
      }
    }
    if ((__int64)v12 <= 575) {
      if ((a5 & 1) != 0) {
        return GameRoutine_832460((__int64)v9, a2);
      }
      else {
        return GameRoutine_832620((__int64)v9, a2);
      }
    }
    if (v11 == 1) {
      break;
    }
    v14 = (__int64*)&v9[24 * (v13 >> 1)];
    if ((unsigned __int64)v12 < 0xC01) {
      VariableRegister_831e20((__int64*)&v9[24 * (v13 >> 1)], (__int64*)v9,
                              (__int64*)a2 - 3),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((a5 & 1) != 0) {
        goto LABEL_36;
      }
    }
    else {
      VariableRegister_831e20((__int64*)v9, (__int64*)&v9[24 * (v13 >> 1)],
                              (__int64*)a2 - 3),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      VariableRegister_831e20((__int64*)v9 + 3, v14 - 3, (__int64*)a2 - 6),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      VariableRegister_831e20((__int64*)v9 + 6, v14 + 3, (__int64*)a2 - 9),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      VariableRegister_831e20(v14 - 3, v14, v14 + 3),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v48 = *((_QWORD*)v9 + 1);
      v50 = *((_QWORD*)v9 + 2);
      v46 = *(_QWORD*)v9;
      v15 = *v14;
      v16 = v14[2];
      *((_QWORD*)v9 + 1) = v14[1];
      *((_QWORD*)v9 + 2) = v16;
      *(_QWORD*)v9 = v15;
      v14[1] = v48;
      v14[2] = v50;
      *v14 = v46;
      if ((a5 & 1) != 0) {
        goto LABEL_36;
      }
    }
    v17 = *(v9 - 24);
    v18 = (v17 & 1) == 0;
    v19 = v17 >> 1;
    if (v18) {
      v20 = v19;
    }
    else {
      v20 = *((_QWORD*)v9 - 2);
    }
    v21 = *v9;
    if (v18) {
      v22 = (__int64)(v9 - 23);
    }
    else {
      v22 = *((_QWORD*)v9 - 1);
    }
    v23 = (v21 & 1) == 0;
    v24 = v21 >> 1;
    if (v23) {
      v25 = v24;
    }
    else {
      v25 = *((_QWORD*)v9 + 1);
    }
    if (v23) {
      v26 = v8 + 1;
    }
    else {
      v26 = *(_QWORD*)(v8 + 16);
    }
    if (v25 >= v20) {
      v27 = v20;
    }
    else {
      v27 = v25;
    }
    v28 = GameRoutine_1a09cf0(v22, v26, v27),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v28 != 0) {
      if ((v28 & 0x80000000) == 0) {
        goto LABEL_40;
      }
    }
    else if (v20 >= v25) {
    LABEL_40:
      result = (__int64)VariableRegister_8327a0((unsigned __int8*)v8, a2),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = (unsigned __int8*)result;
      goto LABEL_41;
    }
  LABEL_36:
    v29 = VariableRegister_832b40((__int64*)v8, (__int64)a2),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v30 & 1) == 0) {
      goto LABEL_39;
    }
    v9 = (unsigned __int8*)(v29 + 3);
    v31 = VariableRegister_832ec0((__int64*)v8, v29, a3),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result =
        ((__int64 (*)(__int64*, __int64*, __int64))VariableRegister_832ec0)(
            v29 + 3, (__int64*)a2, a3),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      a4 = -v11;
      a2 = (unsigned __int8*)v29;
      if (v31) {
        return result;
      }
      goto LABEL_2;
    }
    v10 = v11 + 1;
    if (!v31) {
    LABEL_39:
      result = llvm_libcxx_21_libcxx_include___functional_8319e0(
          v8, (unsigned __int8*)v29, a3, -v11, a5 & 1),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = (unsigned __int8*)(v29 + 3);
    LABEL_41:
      a5 = 0;
      a4 = -v11;
      goto LABEL_3;
    }
  }
  if (v9 != a2) {
    return (__int64)VariableRegister_8331c0((char*)v9, (char*)a2, (char*)a2,
                                            a3);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_87bf20(__int64 result,
                                                          __int64* a2)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  int v17;
  char v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  int v24;
  char v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  char* v29;
  int v30;
  _QWORD v31[7];
  __int128 v32;
  __int128 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;

  v2 = *a2;
  v3 = (const char*)(result + 17);
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(const char**)(result + 32);
  }
  else {
    v4 = (const char*)(result + 17);
  }
  if (v2 != 0) {
    v5 = atomic_load((unsigned __int8*)(v2 + 81));
    if (v5 == 1) {
      v37 = 0;
      v38 = 0;
      v35 = 0;
      v36 = 0;
      v6 = result;
      v34 = 0;
      v33 = (__typeof__(v33)){0};
      v32 = (__typeof__(v32)){0};
      memset(v31, 0, sizeof(v31));
      v53 = 0;
      v54 = 0;
      v51 = 0;
      v52 = 0;
      v49 = 0;
      v50 = 0;
      v47 = 0;
      v48 = 0;
      v45 = 0;
      v46 = 0;
      v43 = 0;
      v44 = 0;
      v41 = 0;
      v42 = 0;
      v39 = 0;
      v40 = 0;
      v7 = *(unsigned __int8*)(v2 + 56);
      v8 = v7 >> 1;
      v9 = (v7 & 1) == 0;
      v10 = *(_QWORD*)(v2 + 64);
      if (v9) {
        v10 = v8;
      }
      v11 = (char*)(v2 + 57);
      if (!v9) {
        v11 = *(char**)(v2 + 72);
      }
      v12 = v10 != 0 ? v11 : &GameData_1a9f09e;
      GameRoutine_1a09be0((__int64)v31, v12);
      strcpy((char*)v31 + GameRoutine_1a09c70((const char*)v31), ":/");
      GameRoutine_1a0a670((__int64)v31, v4);
      result = nn_fs_GetEntryType((__int64)&v30, (const char*)v31);
      if ((_DWORD)result == 0) {
        result = GameRoutine_656f20(v2, v4, 1);
        if ((_DWORD)result != 0 || *(_DWORD*)(v2 + 48) != 0 ||
            (result = nn_fs_GetFileSize(), *(_DWORD*)(v2 + 48) != 0)) {
          if (*(_BYTE*)(v2 + 82) != 1) {
            return result;
          }
          result = nn_fs_CloseFile();
          v13 = *(_BYTE*)(v2 + 80);
          *(_QWORD*)(v2 + 40) = 0;
          *(_BYTE*)(v2 + 82) = 0;
          if ((v13 & 1) == 0) {
            v14 = *(unsigned __int8*)(v2 + 88);
            v15 = *(_QWORD*)(v2 + 96);
            if ((v14 & 1) == 0) {
              v15 = v14 >> 1;
            }
            if (v15 != 0) {
              if ((v14 & 1) != 0) {
                v16 = *(const char**)(v2 + 104);
              }
              else {
                v16 = (const char*)(v2 + 89);
              }
              result = nn_fs_DeleteFile(v16);
            }
          }
          if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
          LABEL_27:
            *(_WORD*)(v2 + 88) = 0;
            return result;
          }
          goto LABEL_60;
        }
        v17 = v31[0];
        if (*(_BYTE*)(v2 + 82) == 1) {
          result = nn_fs_CloseFile();
          v18 = *(_BYTE*)(v2 + 80);
          *(_QWORD*)(v2 + 40) = 0;
          *(_BYTE*)(v2 + 82) = 0;
          if ((v18 & 1) == 0) {
            v19 = *(unsigned __int8*)(v2 + 88);
            v20 = *(_QWORD*)(v2 + 96);
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 != 0) {
              if ((v19 & 1) != 0) {
                v21 = *(const char**)(v2 + 104);
              }
              else {
                v21 = (const char*)(v2 + 89);
              }
              result = nn_fs_DeleteFile(v21);
            }
          }
          if ((*(_BYTE*)(v2 + 88) & 1) != 0) {
            **(_BYTE**)(v2 + 104) = 0;
            *(_QWORD*)(v2 + 96) = 0;
          }
          else {
            *(_WORD*)(v2 + 88) = 0;
          }
        }
        if (v17 < 256) {
          if (v17 >= 1) {
            if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
              v29 = *(const char**)(v6 + 32);
            }
            else {
              v29 = v3;
            }
            return _657350(v2, v29);
          }
        }
        else {
          if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
            v22 = *(const char**)(v6 + 32);
          }
          else {
            v22 = v3;
          }
          result = GameRoutine_656f20(v2, v22, 3);
          if ((_DWORD)result == 0 && *(_DWORD*)(v2 + 48) == 0) {
            v31[0] = 0;
            v23 = GameData_21eea58;
            result = nn_fs_ReadFile_1a0a620((__int64)v31, *(_QWORD*)(v2 + 40),
                                            0, *(_QWORD*)(v23 + 216), 256);
            if (*(_DWORD*)(v2 + 48) == 0) {
              LOWORD(v31[0]) = 0;
              BYTE4(v31[1]) = 0;
              *(_OWORD*)((char*)&v31[1] + 6) =
                  (__typeof__(*(_OWORD*)((char*)&v31[1] + 6))){0};
              *(_QWORD*)((char*)&v31[3] + 6) = 0;
              *(_DWORD*)((char*)&v31[4] + 5) = 0;
              *(_QWORD*)((char*)&v31[5] + 2) = 0;
              *(_DWORD*)((char*)&v31[6] + 2) = 0;
              LODWORD(v33) = 0;
              *(_QWORD*)((char*)v31 + 4) = 0x10000000000LL;
              BYTE4(v33) = 0;
              *(_DWORD*)((char*)&v33 + 6) = 0;
              DWORDn(v33, sizeof(v33) / 4 - 1) = 0;
              LOWORD(v34) = 0;
              v35 = 0;
              LOBYTE(v36) = 0;
              *(_QWORD*)&v32 = 0;
              *(_QWORD*)((char*)&v32 + 7) = 0;
              result =
                  ((__int64 (*)(unsigned __int8*, __int64))GameRoutine_876070)(
                      (unsigned __int8*)v31, v23 + 208);
              if ((result & 1) != 0) {
                v24 = *(_DWORD*)(v6 + 8);
                if (((unsigned int)v32 & v24) == 0) {
                  LODWORD(v32) = v32 | v24;
                  GameRoutine_8759f0((unsigned __int8*)v31, v23 + 208);
                  result = GameRoutine_6570d0(v2);
                }
              }
            }
          }
          if (*(_BYTE*)(v2 + 82) == 1) {
            result = nn_fs_CloseFile();
            v25 = *(_BYTE*)(v2 + 80);
            *(_QWORD*)(v2 + 40) = 0;
            *(_BYTE*)(v2 + 82) = 0;
            if ((v25 & 1) == 0) {
              v26 = *(unsigned __int8*)(v2 + 88);
              v27 = *(_QWORD*)(v2 + 96);
              if ((v26 & 1) == 0) {
                v27 = v26 >> 1;
              }
              if (v27 != 0) {
                if ((v26 & 1) != 0) {
                  v28 = *(const char**)(v2 + 104);
                }
                else {
                  v28 = (const char*)(v2 + 89);
                }
                result = nn_fs_DeleteFile(v28);
              }
            }
            if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
              goto LABEL_27;
            }
          LABEL_60:
            **(_BYTE**)(v2 + 104) = 0;
            *(_QWORD*)(v2 + 96) = 0;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
