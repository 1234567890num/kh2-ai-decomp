---
---
---
name: trap_command_override
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 1, 165 ; trap_command_override (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
YS::COMMAND_SLOT_14 *__fastcall YS::PLAYER_COMMAND::override(YS::PLAYER_COMMAND_12 *const this, int n, __int64 command, const YS::TARGET_89 *target, int num, int priority)
/----- (0000000000508488) ----------------------------------------------------
void __fastcall YS::trap_command_override(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-B0h]
  YS::TARGET_108 v5; // [sp+70h] [-40h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v5);
  v2 = *(unsigned int *)&(*args)[8];
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
  YS::TARGET::set_obj((YS::TARGET_108 *const)v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4), 0);
  YS::PLAYER_COMMAND::override(
    (YS::PLAYER_COMMAND_12 *const)*((unsigned int *)YS::PLAYER::Player + 721),
    *(_DWORD *)args,
    *(int *)&(*args)[4],
    (const YS::TARGET_89 *)v5,
    *(_DWORD *)&(*args)[12],
    100);
}
// 5084C0: variable 'back_chain' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::PLAYER_COMMAND::override
->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


->
/----- (00000000004A8134) ----------------------------------------------------
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
{
  int v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v5 = (int)obj;
  if ( group < 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group >= 0 && group < COLLISION::GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
      264LL,
      "set_obj",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 264);
  }
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
  *(_DWORD *)this = v5;
  *(_DWORD *)&(*this)[4] = group;
}
// 4A8164: variable 'back_chain' is possibly undefined


->
/----- (0000000000480A58) ----------------------------------------------------
YS::COMMAND_SLOT_14 *__fastcall YS::PLAYER_COMMAND::override(YS::PLAYER_COMMAND_12 *const this, int n, __int64 command, const YS::TARGET_89 *target, int num, int priority)
{
  YS::COMMAND_SLOT_14 *result; // r3

  result = 0LL;
  if ( (*(_DWORD *)(*(unsigned int *)&(*this)[2528] + 0x588LL) & 0x2000000) == 0 )
    result = YS::PLAYER_COMMAND::force_override(this, n, command, target, num, priority);
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

