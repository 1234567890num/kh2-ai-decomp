---
---
---
name: trap_bg_get_random_pos
---
---
---
category: position
---
---
---
documentation level: untested
---
---
---
push center ; (kn::FVector *)  (center value to use)
push near ; (float)  (how near to the center to look)
push far ; (float)  (how far from the center to look)
syscall 1, 247 ; trap_bg_get_random_pos (3 in, 1 out)
pop pos ; (kn::FVector *) (random position in the air)
---
---
---
description: Gets a random open position
---
---
---
decompiled code:
void __fastcall YS::BG::RandomPos(const kn::FVector *center, const kn::FVector *a2, double near, int type, int a5, double far)
/----- (0000000000503738) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos(BD_VALUE_21 *args, __int64 a2, __int64 a3, int a4)
{
  kn::FVector v5; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPos(&v5, (const kn::FVector *)(*args)[0], *(float *)&(*args)[4], a4, 1, *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (000000000040DFC4) ----------------------------------------------------
void __fastcall YS::BG::RandomPos(const kn::FVector *center, const kn::FVector *a2, double near, int type, int a5, double far)
{
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r7
  __int64 v11; // r6
  __int64 v12; // r5
  YS::BG::RANDOM_POS v13; // [sp+70h] [-40h] BYREF

  YS::BG::RANDOM_POS::RANDOM_POS(&v13, a2, near, far, a5);
  YS::BG::RANDOM_POS::search((YS::BG::RANDOM_POS *const)center, (__int64)&v13, v12, v11, v10, v9, v8, v7);
}
// 40DFF0: variable 'v12' is possibly undefined
// 40DFF0: variable 'v11' is possibly undefined
// 40DFF0: variable 'v10' is possibly undefined
// 40DFF0: variable 'v9' is possibly undefined
// 40DFF0: variable 'v8' is possibly undefined
// 40DFF0: variable 'v7' is possibly undefined


---
---
---
appears in:
limit\riku\limi.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\riku\limi.bdscript
L7019:
 pushFromPSp 16
 pushFromPSp 96
 pushFromPSp 80
 pushImm 65536
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L7111
 pushFromPSp 80
 pushFromPSp 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 80
 pushFromPSp 96
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 memcpyToSp 16, 80
 pushFromPSp 16
 pushFromPSp 96
 pushFromPSp 80
 pushImm 65540
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L7104
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImmf 100
 pushImmf 100
 syscall 1, 247 ; trap_bg_get_random_pos (3 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 memcpyToSp 16, 64
 jmp L7109
