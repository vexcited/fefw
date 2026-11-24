#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 libjpegturbonx_1f9e0(__int64 result, _BYTE** a2, _QWORD* a3,
                             unsigned int a4, int a5);
__int64 libjpegturbonx_543a0(__int64 result, __int64 a2, __int64 a3, int a4);
__int64 libjpegturbonx_54820(__int64 result, __int64 a2, __int64 a3, int a4);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 unplaced_3_545a0(__int64 result, __int64 a2, __int64 a3, int a4);

__int64 libjpegturbonx_1f9e0(__int64 result, _BYTE** a2, _QWORD* a3,
                             unsigned int a4, int a5)
{
  unsigned int v5;
  __int64 v6;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int8 v18;
  unsigned __int8 v19;
  unsigned __int8 v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  __int64 v24;
  _DWORD* v25;
  _DWORD* v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  char v30;
  __int64 v31;
  _DWORD* v32;
  _DWORD* v33;
  _BYTE* v34;
  _BYTE* v35;
  _BYTE* v36;
  _BYTE* v37;
  __int64 v38;
  unsigned __int8 v39;
  unsigned __int8 v40;
  char v41;
  __int64 v42;
  _DWORD* v43;
  _DWORD* v44;

  if (a5 >= 1) {
    v5 = *(_DWORD*)(result + 56);
    if (v5 != 0) {
      v6 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
      while (1) {
        v8 = *a2;
        v9 = *(_QWORD*)(*a3 + 8LL * a4);
        v10 = *(_QWORD*)(a3[1] + 8LL * a4);
        v11 = *(_QWORD*)(a3[2] + 8LL * a4);
        v12 = *(_QWORD*)(a3[3] + 8LL * a4);
        if (v5 >= 4) {
          break;
        }
        v13 = 0;
        if ((v5 & 3) != 0) {
          goto LABEL_12;
        }
      LABEL_4:
        ++a2;
        ++a4;
        if ((unsigned int)a5-- <= 1) {
          return result;
        }
      }
      v14 = (_BYTE*)(v11 + 1);
      result = v10 + 1;
      v15 = (_BYTE*)(v9 + 1);
      v16 = (_BYTE*)(v12 + 1);
      v17 = 0;
      do {
        v17 -= 4;
        v18 = ~*v8;
        v19 = ~v8[1];
        v20 = ~v8[2];
        *(v16 - 1) = v8[3];
        v21 = v6 + 8LL * v18;
        v22 = (_DWORD*)(v6 + 8LL * v19);
        v23 = (_DWORD*)(v6 + 8LL * v20);
        *(v15 - 1) = (v22[512] + (unsigned int)*(_QWORD*)v21 + v23[1024]) >> 16;
        *(_BYTE*)(result - 1) =
            (unsigned int)(v22[2048] + *(int*)(v21 + 6144) + v23[2560]) >> 16;
        *(v14 - 1) =
            (unsigned int)(v22[3072] + *(int*)(v21 + 10240) + v23[3584]) >> 16;
        LOBYTE(v23) = v8[6];
        LOBYTE(v21) = ~v8[4];
        LOBYTE(v22) = ~v8[5];
        *v16 = v8[7];
        v24 = v6 + 8LL * (unsigned __int8)v21;
        v25 = (_DWORD*)(v6 + 8LL * (unsigned __int8)v22);
        v26 = (_DWORD*)(v6 + 8LL * (unsigned __int8)~(_BYTE)v23);
        *v15 = (v25[512] + (unsigned int)*(_QWORD*)v24 + v26[1024]) >> 16;
        *(_BYTE*)result =
            (unsigned int)(v25[2048] + *(int*)(v24 + 6144) + v26[2560]) >> 16;
        *v14 =
            (unsigned int)(v25[3072] + *(int*)(v24 + 10240) + v26[3584]) >> 16;
        LOBYTE(v26) = v8[10];
        LOBYTE(v24) = ~v8[8];
        LOBYTE(v25) = ~v8[9];
        v16[1] = v8[11];
        v27 = v6 + 8LL * (unsigned __int8)v24;
        v28 = (_DWORD*)(v6 + 8LL * (unsigned __int8)v25);
        v29 = (_DWORD*)(v6 + 8LL * (unsigned __int8)~(_BYTE)v26);
        v15[1] = (v28[512] + (unsigned int)*(_QWORD*)v27 + v29[1024]) >> 16;
        *(_BYTE*)(result + 1) =
            (unsigned int)(v28[2048] + *(int*)(v27 + 6144) + v29[2560]) >> 16;
        v14[1] =
            (unsigned int)(v28[3072] + *(int*)(v27 + 10240) + v29[3584]) >> 16;
        LOBYTE(v27) = v8[12];
        LOBYTE(v28) = v8[13];
        v30 = v8[15];
        LOBYTE(v29) = v8[14];
        v8 += 16;
        v16[2] = v30;
        v16 += 4;
        v31 = v6 + 8LL * (unsigned __int8)~(_BYTE)v27;
        v32 = (_DWORD*)(v6 + 8LL * (unsigned __int8)~(_BYTE)v28);
        v33 = (_DWORD*)(v6 + 8LL * (unsigned __int8)~(_BYTE)v29);
        v15[2] = (v32[512] + (unsigned int)*(_QWORD*)v31 + v33[1024]) >> 16;
        v15 += 4;
        *(_BYTE*)(result + 2) =
            (unsigned int)(v32[2048] + *(int*)(v31 + 6144) + v33[2560]) >> 16;
        result += 4;
        v14[2] =
            (unsigned int)(v32[3072] + *(int*)(v31 + 10240) + v33[3584]) >> 16;
        v14 += 4;
      } while (-(__int64)(v5 & 0xFFFFFFFC) != v17);
      v13 = -v17;
      if ((v5 & 3) == 0) {
        goto LABEL_4;
      }
    LABEL_12:
      v34 = (_BYTE*)(v11 + v13);
      v35 = (_BYTE*)(v10 + v13);
      v36 = (_BYTE*)(v9 + v13);
      v37 = (_BYTE*)(v12 + v13);
      v38 = v5 & 3;
      do {
        --v38;
        v39 = ~*v8;
        v40 = ~v8[1];
        v41 = v8[2];
        *v37++ = v8[3];
        v8 += 4;
        v42 = v6 + 8LL * v39;
        v43 = (_DWORD*)(v6 + 8LL * v40);
        v44 = (_DWORD*)(v6 + 8LL * (unsigned __int8)~v41);
        *v36++ = (v43[512] + (unsigned int)*(_QWORD*)v42 + v44[1024]) >> 16;
        *v35++ =
            (unsigned int)(v43[2048] + *(int*)(v42 + 6144) + v44[2560]) >> 16;
        LODWORD(v42) = v43[3072] + *(int*)(v42 + 10240);
        result = (unsigned int)v44[3584];
        *v34++ = (unsigned int)(v42 + result) >> 16;
      } while (v38 != 0);
      goto LABEL_4;
    }
  }
  return result;
}

__int64 libjpegturbonx_543a0(__int64 result, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  _BYTE* v13;
  int v14;
  unsigned __int8* v15;
  char v16;
  __int64 v17;

  if (a4 >= 1) {
    v4 = *(_DWORD*)(result + 144);
    if (v4 != 0) {
      v5 = v4 - 1;
      v6 = 0;
      v7 = (unsigned int)a4;
      v8 = *(__int64**)(*(_QWORD*)(result + 656) + 48LL);
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      while (1) {
        v12 = *(unsigned __int8**)(a2 + 8 * v6);
        v13 = *(_BYTE**)(a3 + 8 * v6);
        if ((v4 & 7) != 0) {
          break;
        }
        result = v4;
        if (v5 >= 7) {
          goto LABEL_11;
        }
      LABEL_4:
        if (++v6 == v7) {
          return result;
        }
      }
      v14 = v4 & 7;
      do {
        --v14;
        v15 = v12 + 3;
        *v13++ = *(_BYTE*)(v10 + v12[1]) + *(_BYTE*)(v9 + *v12) +
                 *(_BYTE*)(v11 + v12[2]);
        v12 += 3;
      } while (v14 != 0);
      result = v4 & 0xFFFFFFF8;
      v12 = v15;
      if (v5 < 7) {
        goto LABEL_4;
      }
      do {
      LABEL_11:
        result = (unsigned int)(result - 8);
        *v13 = *(_BYTE*)(v10 + v12[1]) + *(_BYTE*)(v9 + *v12) +
               *(_BYTE*)(v11 + v12[2]);
        v13[1] = *(_BYTE*)(v10 + v12[4]) + *(_BYTE*)(v9 + v12[3]) +
                 *(_BYTE*)(v11 + v12[5]);
        v13[2] = *(_BYTE*)(v10 + v12[7]) + *(_BYTE*)(v9 + v12[6]) +
                 *(_BYTE*)(v11 + v12[8]);
        v13[3] = *(_BYTE*)(v10 + v12[10]) + *(_BYTE*)(v9 + v12[9]) +
                 *(_BYTE*)(v11 + v12[11]);
        v13[4] = *(_BYTE*)(v10 + v12[13]) + *(_BYTE*)(v9 + v12[12]) +
                 *(_BYTE*)(v11 + v12[14]);
        v13[5] = *(_BYTE*)(v10 + v12[16]) + *(_BYTE*)(v9 + v12[15]) +
                 *(_BYTE*)(v11 + v12[17]);
        v13[6] = *(_BYTE*)(v10 + v12[19]) + *(_BYTE*)(v9 + v12[18]) +
                 *(_BYTE*)(v11 + v12[20]);
        v16 = *(_BYTE*)(v10 + v12[22]) + *(_BYTE*)(v9 + v12[21]);
        v17 = v12[23];
        v12 += 24;
        v13[7] = v16 + *(_BYTE*)(v11 + v17);
        v13 += 8;
      } while ((_DWORD)result != 0);
      goto LABEL_4;
    }
  }
  return result;
}

__int64 unplaced_3_545a0(__int64 result, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  _BYTE* v10;
  int i;
  __int64 v12;
  unsigned __int8* v13;
  _QWORD* v14;
  unsigned __int8* v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;

  if (a4 >= 1) {
    v4 = *(unsigned int*)(result + 144);
    if ((_DWORD)v4 != 0) {
      v5 = *(unsigned int*)(result + 152);
      v6 = (unsigned int)a4;
      if ((int)v5 > 0) {
        v7 = 0;
        v8 = *(_QWORD*)(*(_QWORD*)(result + 656) + 48LL);
        while (1) {
          v9 = *(unsigned __int8**)(a2 + 8 * v7);
          v10 = *(_BYTE**)(a3 + 8 * v7);
          for (i = v4; i != 0; --i) {
            if ((unsigned int)v5 < 8) {
              v12 = 0;
              result = 0;
              v13 = v9;
              if ((v5 & 7) == 0) {
                goto LABEL_7;
              }
            LABEL_14:
              v20 = (__int64*)(v8 + 8 * v12);
              v21 = v5 & 7;
              do {
                v23 = *v20++;
                v22 = v23;
                LODWORD(v23) = *v13++;
                --v21;
                result = (unsigned int)result +
                         *(unsigned __int8*)(v22 + (unsigned int)v23);
              } while (v21 != 0);
              goto LABEL_7;
            }
            v12 = 0;
            LODWORD(result) = 0;
            v14 = (_QWORD*)(v8 + 32);
            do {
              v15 = &v9[v12];
              v12 += 8;
              v16 = result + *(unsigned __int8*)(*(v14 - 4) + *v15) +
                    *(unsigned __int8*)(*(v14 - 3) + v15[1]) +
                    *(unsigned __int8*)(*(v14 - 2) + v15[2]);
              v17 = *(unsigned __int8*)(*(v14 - 1) + v15[3]) +
                    *(unsigned __int8*)(*v14 + v15[4]) +
                    *(unsigned __int8*)(v14[1] + v15[5]);
              v18 = v14[2];
              v19 = v14[3];
              v14 += 8;
              result = v16 + v17 + *(unsigned __int8*)(v18 + v15[6]) +
                       (unsigned int)*(unsigned __int8*)(v19 + v15[7]);
            } while ((v5 & 0x7FFFFFF8) != v12);
            v13 = &v9[v12];
            if ((v5 & 7) != 0) {
              goto LABEL_14;
            }
          LABEL_7:
            v9 += v5;
            *v10++ = result;
          }
          if (++v7 == v6) {
            return result;
          }
        }
      }
      v24 = a4 & 7;
      if ((unsigned int)(a4 - 1) < 7) {
        v25 = 0;
        if ((a4 & 7) == 0) {
          return result;
        }
        goto LABEL_23;
      }
      v26 = (__int64*)(a3 + 32);
      v27 = 0;
      v28 = a3;
      v29 = -(__int64)(a4 & 0x7FFFFFF8);
      do {
        memset_plt(*(v26 - 4), 0, v4);
        memset_plt(*(v26 - 3), 0, v4);
        memset_plt(*(v26 - 2), 0, v4);
        memset_plt(*(v26 - 1), 0, v4);
        memset_plt(*v26, 0, v4);
        memset_plt(v26[1], 0, v4);
        memset_plt(v26[2], 0, v4);
        result = memset_plt(v26[3], 0, v4);
        v27 -= 8;
        v26 += 8;
      } while (v29 != v27);
      v25 = -v27;
      a3 = v28;
      if (v24 != 0) {
      LABEL_23:
        v30 = (__int64*)(a3 + 8 * v25);
        do {
          v31 = *v30++;
          result = memset_plt(v31, 0, v4);
          --v24;
        } while (v24 != 0);
      }
    }
  }
  return result;
}

__int64 libjpegturbonx_54820(__int64 result, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  unsigned int v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  _BYTE* v24;
  int v25;
  char v26;
  unsigned __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;

  if (a4 >= 1) {
    v4 = *(_QWORD*)(result + 656);
    v5 = *(_DWORD*)(result + 144);
    if (v5 != 0) {
      v6 = *(__int64**)(v4 + 48);
      v7 = *(_DWORD*)(v4 + 76);
      v8 = 0;
      v9 = (unsigned int)a4;
      v10 = *v6;
      v11 = v6[1];
      v12 = v6[2];
      while (1) {
        v13 = (__int64)v7 << 6;
        v14 = *(_QWORD*)(v4 + 80) + v13;
        v15 = *(unsigned __int8**)(a2 + 8 * v8);
        v16 = *(_BYTE**)(a3 + 8 * v8);
        result = *(_QWORD*)(v4 + 88) + v13;
        v17 = *(_QWORD*)(v4 + 96) + v13;
        if (v5 >= 4) {
          break;
        }
        v18 = 0;
        if ((v5 & 3) != 0) {
          goto LABEL_11;
        }
      LABEL_4:
        ++v8;
        v7 = ((_BYTE)v7 + 1) & 0xF;
        *(_DWORD*)(v4 + 76) = v7;
        if (v8 == v9) {
          return result;
        }
      }
      v18 = 0;
      v19 = v5 & 0xFFFFFFFC;
      do {
        v19 -= 4;
        *v16 =
            *(_BYTE*)(v11 + *(int*)(result + 4 * v18) +
                      (unsigned __int64)v15[1]) +
            *(_BYTE*)(v10 + *(int*)(v14 + 4 * v18) + (unsigned __int64)*v15) +
            *(_BYTE*)(v12 + *(int*)(v17 + 4 * v18) + (unsigned __int64)v15[2]);
        v16[1] =
            *(_BYTE*)(v11 + *(int*)(result + ((4 * (_BYTE)v18 + 4) & 0x3C)) +
                      (unsigned __int64)v15[4]) +
            *(_BYTE*)(v10 + *(int*)(v14 + ((4 * (_BYTE)v18 + 4) & 0x3C)) +
                      (unsigned __int64)v15[3]) +
            *(_BYTE*)(v12 + *(int*)(v17 + ((4 * (_BYTE)v18 + 4) & 0x3C)) +
                      (unsigned __int64)v15[5]);
        v20 = (4 * (_BYTE)v18 + 8) & 0x3C;
        v21 = (4 * (_BYTE)v18 + 12) & 0x3C;
        v16[2] =
            *(_BYTE*)(v11 + *(int*)(result + v20) + (unsigned __int64)v15[7]) +
            *(_BYTE*)(v10 + *(int*)(v14 + v20) + (unsigned __int64)v15[6]) +
            *(_BYTE*)(v12 + *(int*)(v17 + v20) + (unsigned __int64)v15[8]);
        LOBYTE(v20) =
            *(_BYTE*)(v11 + *(int*)(result + v21) + (unsigned __int64)v15[10]) +
            *(_BYTE*)(v10 + *(int*)(v14 + v21) + (unsigned __int64)v15[9]);
        v22 = v15 + 12;
        v23 = *(int*)(v17 + v21) + (unsigned __int64)v15[11];
        v24 = v16 + 4;
        v16[3] = v20 + *(_BYTE*)(v12 + v23);
        v15 = v22;
        v18 = ((_BYTE)v18 + 4) & 0xF;
        v16 += 4;
      } while (v19 != 0);
      v15 = v22;
      v16 = v24;
      if ((v5 & 3) == 0) {
        goto LABEL_4;
      }
    LABEL_11:
      v25 = v5 & 3;
      do {
        --v25;
        v26 = *(_BYTE*)(v10 + *(int*)(v14 + 4 * v18) + (unsigned __int64)*v15);
        v27 = *(int*)(result + 4 * v18) + (unsigned __int64)v15[1];
        v28 = *(int*)(v17 + 4 * v18);
        v18 = ((_BYTE)v18 + 1) & 0xF;
        v29 = *(_BYTE*)(v11 + v27) + v26;
        v30 = v15[2];
        v15 += 3;
        *v16++ = v29 + *(_BYTE*)(v12 + v28 + v30);
      } while (v25 != 0);
      goto LABEL_4;
    }
    v31 = *(_DWORD*)(v4 + 76);
    v32 = a4 & 7;
    if ((unsigned int)a4 >= 8) {
      v33 = a4 & 0x7FFFFFF8;
      v31 = *(_DWORD*)(v4 + 76) & 0xF;
      do {
        v31 ^= 8u;
        v33 -= 8;
      } while (v33 != 0);
    }
    if ((a4 & 7) != 0) {
      do {
        --v32;
        v31 = ((_BYTE)v31 + 1) & 0xF;
      } while (v32 != 0);
    }
    *(_DWORD*)(v4 + 76) = v31;
  }
  return result;
}

#pragma GCC visibility pop
