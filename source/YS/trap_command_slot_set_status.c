/----- (00000000005089A0) ----------------------------------------------------
void __fastcall YS::trap_command_slot_set_status(BD_VALUE_21 *args)
{
  __int64 v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(unsigned int *)args;
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      758LL,
      "trap_command_slot_set_status",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 758);
    v2 = *(unsigned int *)args;
  }
  *(_BYTE *)(v2 + 5) = *(_DWORD *)&(*args)[4];
}
// 5089BC: variable 'back_chain' is possibly undefined

