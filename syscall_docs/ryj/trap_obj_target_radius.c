---
---
---
name: trap_obj_target_radius
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
syscall 8, 0 ; trap_obj_target_radius (1 in, 1 out)
pop unk ; (unknown) 
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
void __fastcall YS::TARGET::make_collision(const YS::TARGET_108 *const this, YS::COLLISION_52 *collision)
/----- (000000000061700C) ----------------------------------------------------
void __fastcall ryj::trap_obj_target_radius(BD_VALUE_23 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  YS::OBJ_168 *v4; // r29
  __int64 back_chain; // [sp+0h] [-D0h]
  float v6[8]; // [sp+70h] [-60h] BYREF
  YS::TARGET_108 v7; // [sp+90h] [-40h] BYREF

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
  v4 = (YS::OBJ_168 *)*(unsigned int *)(v2 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v7);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v7, v4, 0);
  v6[3] = 0.0;
  v6[6] = 0.0;
  v6[5] = 0.0;
  v6[4] = 0.0;
  v6[7] = 1.0;
  YS::TARGET::make_collision((const YS::TARGET_108 *const)v7, (YS::COLLISION_52 *)v6);
  *(float *)&(*args)[0] = v6[1];
}
// 617030: variable 'back_chain' is possibly undefined

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::TARGET::make_collision
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
/----- (00000000004A89E8) ----------------------------------------------------
void __fastcall YS::TARGET::make_collision(const YS::TARGET_108 *const this, YS::COLLISION_52 *collision)
{
  const YS::COLLISION_ELEM_0 *v4; // r3
  const kn::FVector *v5; // r3

  if ( *(_DWORD *)&(*this)[8] )
  {
    YS::COLLISION::make(
      (__int64)collision,
      0,
      *(float *)(*(unsigned int *)&(*this)[8] + 0x100LL),
      *(float *)(*(unsigned int *)&(*this)[8] + 0x104LL));
    kn::FVector::operator=(
      (kn::FVector *const)(unsigned int)((_DWORD)collision + 16),
      (const kn::FVector *)(unsigned int)(*(_DWORD *)&(*this)[8] + 224));
  }
  else if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*this)[0]) )
  {
    if ( *(_DWORD *)&(*this)[8] || !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*this)[0]) )
      goto LABEL_10;
    v4 = YS::OBJ::get_collision((YS::OBJ_125 *const)(*this)[0], 3, *(_DWORD *)&(*this)[4]);
    if ( !(_DWORD)v4 )
      v4 = YS::OBJ::each_collision((YS::OBJ_125 *const)(*this)[0], 3, 0LL);
    if ( (_DWORD)v4 )
    {
      YS::COLLISION::set(collision, (YS::OBJ_95 *)(*this)[0], v4);
    }
    else
    {
LABEL_10:
      v5 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)(*this)[0]);
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)collision + 16), v5);
    }
  }
  else
  {
    *(_DWORD *)&(*collision)[24] = 0;
    *(_DWORD *)&(*collision)[20] = 0;
    *(_DWORD *)&(*collision)[16] = 0;
  }
  *(_DWORD *)&(*collision)[28] = 1065353216;
}


---
---
---
appears in:

---
---
---
example usage from NA

