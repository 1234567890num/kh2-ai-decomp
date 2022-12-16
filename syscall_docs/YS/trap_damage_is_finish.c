---
---
---
name: trap_damage_is_finish
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
push unk1 ; (unknown)  (pushFromFSp: 4)
syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::DAMAGE::is_finish(const YS::DAMAGE_5 *const this)
/----- (00000000004F4268) ----------------------------------------------------
void __fastcall YS::trap_damage_is_finish(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::is_finish((const YS::DAMAGE_5 *const)(*args)[0]);
}
->
/----- (00000000004221FC) ----------------------------------------------------
__int64 __fastcall YS::DAMAGE::is_finish(const YS::DAMAGE_5 *const this)
{
  int v1; // r3

  v1 = (unsigned __int8)(*this)[39];
  if ( v1 > 7 )
  {
    if ( v1 > 9 && v1 <= 11 )
      return 1LL;
  }
  else if ( v1 > 5 )
  {
    return 1LL;
  }
  return 0LL;
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\F_CA030_DARK\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA030_LIGHT\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA040\f_ca.bdscript ((F) Anchor (CA))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L1372:
 pushFromFSp 4
 syscall 2, 64 ; trap_damage_orig_reaction (1 in, 1 out)
 syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
 pushImm 4
 sub 
 eqz 
 dup 
 jz L1391
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 eqzv 
