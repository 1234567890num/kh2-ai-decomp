/----- (00000000006120D0) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_boss(BD_VALUE_22 *args)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*args)[0]) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((YS::OBJ*)(args[0].p))->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp",
      134LL,
      "trap_sysobj_is_boss",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 134);
  }
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x588LL) & 0x400) != 0;
}
// 6120F0: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist