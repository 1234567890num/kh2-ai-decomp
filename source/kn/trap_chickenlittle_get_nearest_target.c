/----- (00000000006142F4) ----------------------------------------------------
void __fastcall kn::trap_chickenlittle_get_nearest_target(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::ChickenLittle *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

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
  v4 = (kn::ChickenLittle *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::ChickenLittle::get_nearest_target(
    v4,
    (YS::TARGET_18 *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
}
// 614318: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::ChickenLittle::get_nearest_target