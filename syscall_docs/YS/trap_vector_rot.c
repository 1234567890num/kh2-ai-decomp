---
---
---
name: trap_vector_rot
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
push unk1 ; (unknown)  (pushFromPSp: 16,48,64,80) (pushImmf: -0.523599,-0.785398,-1.047198,-1.570796,-3.141593,0.010472,0.087266,0.174533,360,45) (pushFromPSpVal: 80) (syscall: 0, 17 ; trap_random_getf (1 in, 1 out)) (memcpyToSp: 16, 64) (pushImm: 16) (pushFromFSpVal: 84) (cfti: ) (pushFromFSp: 48)
push unk2 ; (unknown)  (pushImmf: -0.523599,-1,0.523599,0.785398,1.570796,3.141593,6.283185) (syscall: 0, 17 ; trap_random_getf (1 in, 1 out),0, 18 ; trap_random_range (2 in, 1 out),0, 3 ; trap_frametime (0 in, 1 out)) (pushFromPSp: 16,32,48,64,80) (subf: ) (pushFromPSpVal: 64,96) (add: ) (divf: ) (cfti: )
push unk3 ; (unknown)  (syscall: 0, 17 ; trap_random_getf (1 in, 1 out),0, 18 ; trap_random_range (2 in, 1 out)) (mulf: ) (fetchValue: 8) (pushImmf: 0.174533,1.256637,2.094395,3.141593) (pushFromFSp: 124,4) (degr: ) (pushFromFSpVal: 112) (divf: )
syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorRot(const kn::FVector *v, const kn::FVector *axis, float *a3, double rad)
/----- (00000000004B77A0) ----------------------------------------------------
void __fastcall YS::trap_vector_rot(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRot(
    &v2,
    (const kn::FVector *)(*args)[0],
    (float *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (00000000004C18E0) ----------------------------------------------------
void __fastcall YS::MATH::VectorRot(const kn::FVector *v, const kn::FVector *axis, float *a3, double rad)
{
  double v8; // fp1
  double v9; // fp2
  double v10; // fp3
  double v11; // fp4
  Axa::FVECTOR4 v12; // [sp+70h] [-C0h] BYREF
  kn::FMatrix v13; // [sp+80h] [-B0h] BYREF
  Axa::FMATRIX44 v14; // [sp+C0h] [-70h] BYREF

  Axa::FMATRIX44::unit(&v14);
  v8 = YS::MATH::FixRadian(rad);
  YS::MATH::GetRotMatrix((const kn::FVector *)&v13, a3, v8);
  kn::FMatrix::operator=((kn::FMatrix *const)&v14, &v13);
  Axa::FMATRIX44::operator*(&v12, &v14, axis);
  v9 = v12.y;
  v10 = v12.z;
  v11 = v12.w;
  v->x = v12.x;
  v->y = v9;
  v->z = v10;
  v->w = v11;
}


---
---
---
appears in:
limit\riku\limi.bdscript
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\G_EC129\g_ec.bdscript ()
obj\G_EX220\g_ex.bdscript ()
obj\G_EX220_G\g_ex.bdscript ()
obj\G_EX220_R\g_ex.bdscript ()
obj\G_EX250_1\g_ex.bdscript ()
obj\G_EX250_1_G\g_ex.bdscript ()
obj\G_EX250_1_R\g_ex.bdscript ()
obj\G_EX260\g_ex.bdscript ()
obj\G_EX260_G\g_ex.bdscript ()
obj\G_EX260_R\g_ex.bdscript ()
obj\G_EX900_COMBAT\g_ex.bdscript ()
obj\G_EX900_COMBAT_HARD\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\G_EX900_FLIGHT\g_ex.bdscript ()
obj\G_EX900_FLIGHT_HARD\g_ex.bdscript ()
obj\G_EX903\g_ex.bdscript ()
obj\G_OA100\g_oa.bdscript ()
obj\G_OA200\g_oa.bdscript ()
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from limit\riku\limi.bdscript
L4165:
 pushFromFSp 4
 pushFromFSp 72
 gosub 24, L1301
 eqz 
 jz L4428
 pushFromFSp 4
 pushFromPSp 32
 pushImmf 0
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromPSp 64
 gosub 24, L4495
 jz L4303
 pushFromPSp 32
 pushImmf 0
 pushImmf 1
 pushImmf 0
 pushImmf 1
 gosub 24, L1624
 pushFromPSp 32
 pushFromFSp 4
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 6.283185
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromFSp 4
 syscall 1, 88 ; trap_obj_target_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushFromFSp 4
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 pushImmf 100
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -50
 addf 
 memcpy 0
 pushFromFSp 4
 pushFromPSp 48
 pushFromPSp 32
 pushFromPWp W0
 fetchValue 0
 pushFromFSpVal 0
 gosub 24, L4505
 pushFromPSp 64
 gosub 24, L6798
 jmp L4303
