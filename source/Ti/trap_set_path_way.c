/----- (0000000000658DE0) ----------------------------------------------------
void __fastcall Ti::trap_set_path_way(BD_VALUE_26 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r29
  __int64 v5; // r28
  char v6; // r4
  Ti::Path_3 *v7; // r31
  bool v8; // r29
  const kn::FVector *v9; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  if ( *(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x508LL) )
  {
    v4 = *(unsigned int *)args;
    if ( !(_DWORD)v4 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v4 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v5 = *(unsigned int *)args;
    v6 = _cntlzw(*(_DWORD *)&(*args)[4]);
    v7 = (Ti::Path_3 *)*(unsigned int *)(*(unsigned int *)(v4 + 4) + 0x508LL);
    v8 = (v6 & 0x20) == 0LL;
    if ( !(_DWORD)v5 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v5 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v9 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)(v5 + 4));
    Ti::Path::set_way(v7, v8, v9);
  }
}
// 658E04: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_pos Ti::Path::set_way