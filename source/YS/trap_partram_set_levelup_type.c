/----- (00000000004B8F28) ----------------------------------------------------
void __fastcall YS::trap_partram_set_levelup_type(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5

  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 609LL, a4, a5, a6, a7, a8);
  printf((unsigned int)"*** level up type = %d ***\n", *(int *)&(*args)[4], v14, v13, v12, v11, v10, v9);
  *(_BYTE *)(*(unsigned int *)args + 0xELL) = *(_DWORD *)&(*args)[4];
}
// 4B8F68: variable 'v14' is possibly undefined
// 4B8F68: variable 'v13' is possibly undefined
// 4B8F68: variable 'v12' is possibly undefined
// 4B8F68: variable 'v11' is possibly undefined
// 4B8F68: variable 'v10' is possibly undefined
// 4B8F68: variable 'v9' is possibly undefined

