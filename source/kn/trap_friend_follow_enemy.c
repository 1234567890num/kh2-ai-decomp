/----- (00000000006123B8) ----------------------------------------------------
void __fastcall kn::trap_friend_follow_enemy(BD_VALUE_22 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  kn::Friend_0 *v3; // r31
  const kn::FVector *v4; // r3
  const kn::FVector *v5; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = (kn::Friend_0 *)*(unsigned int *)(v1 + 4);
  kn::Friend::followEnemy(v3);
  v4 = kn::Friend::getMovement(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 16), v4);
  v5 = kn::Friend::getInertia(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 32), v5);
}
// 6123D8: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::followEnemy kn::Friend::getMovement kn::Friend::getInertia