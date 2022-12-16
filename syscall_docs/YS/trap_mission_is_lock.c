---
---
---
name: trap_mission_is_lock
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
syscall 4, 55 ; trap_mission_is_lock (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::MUTEX::is_lock(YS::MUTEX *const this, int id)
/----- (00000000004F61A8) ----------------------------------------------------
void __fastcall YS::trap_mission_is_lock(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MUTEX::is_lock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9F320: using guessed type int YS::MUTEX::Mission;
->
/----- (000000000045DA28) ----------------------------------------------------
bool __fastcall YS::MUTEX::is_lock(YS::MUTEX *const this, int id)
{
  unsigned int v5; // r30

  if ( YS::CHECK_CACHEBUFF::IsExec() )
    return 1;
  if ( id )
    v5 = this->Lock & (1 << id);
  else
    v5 = this->Lock;
  return (_cntlzw(v5) & 0x20) == 0;
}


---
---
---
appears in:
ard\al05\ms_b.bdscript
ard\tr04\ms_b.bdscript
ard\tr09\ms_b.bdscript
msn\AL00_MS101\ms_a.bdscript
msn\AL00_SKATE_01\al00.bdscript
msn\AL03_MS103\al03.bdscript
msn\AL05_MS203\ms_b.bdscript
msn\AL09_GIMMICK\ms_g.bdscript
msn\AL10_MS102\ms_d.bdscript
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\AL14_MS201A\ms_d.bdscript
msn\AL14_MS201B\ms_d.bdscript
msn\AL14_MS202\al14.bdscript
msn\AL14_MS202_FREE\al14.bdscript
msn\AL14_MS_K\ms_d.bdscript
msn\AL14_MS_L\al14.bdscript
msn\AL14_MS_M\al14.bdscript
msn\AL14_MS_O\al14.bdscript
msn\AL14_MS_P\al14.bdscript
msn\AL14_MS_S\al14.bdscript
msn\A_SCT_GIMMICK\ms_g.bdscript
msn\BB00_MS202\ms_d.bdscript
msn\BB01_MS101\ms_a.bdscript
msn\BB03_MS103\ms_b.bdscript
msn\BB04_MS201\ms_d.bdscript
msn\BB05_MS104A\ms_b.bdscript
msn\BB05_MS104B\ms_b.bdscript
msn\BB08_GIMMICK\ms_g.bdscript
msn\BB11_MS102\ms_b.bdscript
msn\BB12_GIMMICK\ms_g.bdscript
msn\BB15_MS203\ms_b.bdscript
msn\BB15_MS203_RE\ms_b.bdscript
msn\CA01_MS101\ms_a.bdscript
msn\CA01_MS102\ms_d.bdscript
msn\CA01_MS201\ms_d.bdscript
msn\CA01_MS204\ca01.bdscript
msn\CA02_MS103\ms_d.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA03_MS106\ca03.bdscript
msn\CA07_MS105\ca07.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA09_MS104\ca09.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA10_MS107\ca10.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA14_MS203\ms_d.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\CA18_MS202\ms_b.bdscript
msn\DC00_MS101\dc_m.bdscript
msn\DC02_MS100\dc_m.bdscript
msn\DC02_MS101\dc_m.bdscript
msn\DC07_FM_NAZO\ms_b.bdscript
msn\EH10_MS102\ms_b.bdscript
msn\EH14_MS103\ms_l.bdscript
msn\EH15_MS104\ms_b.bdscript
msn\EH19_MS105\ms_b.bdscript
msn\EH20_MS113\eh20.bdscript
msn\EH20_MS113_RE\eh20.bdscript
msn\EH21_MS101\ms_b.bdscript
msn\EH22_MS111\ms_b.bdscript
msn\EH23_MS112\ms_b.bdscript
msn\EH24_MS110\ms_b.bdscript
msn\EH26_MS108\eh26.bdscript
msn\HB01_MS601\ms_b.bdscript
msn\HB04_MS403\hb04.bdscript
msn\HB07_MS402\ms_d.bdscript
msn\HB08_MS102\hb08.bdscript
msn\HB09_MS101\ms_d.bdscript
msn\HB09_MS501\ms_d.bdscript
msn\HB09_MS901\ms_d.bdscript
msn\HB13_MS902\hb13.bdscript
msn\HB16_MS404A\hb16.bdscript
msn\HB16_MS404B\hb16.bdscript
msn\HB16_MS404C\hb16.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HB17_MS405\hb17.bdscript
msn\HB20_MS401\ms_d.bdscript
msn\HB22_FM_SWITCH\ms_g.bdscript
msn\HB24_CONFINE\hb24.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HB32_FM_VEX\ms_b.bdscript
msn\HB33_FM_LAR\ms_b.bdscript
msn\HB33_FM_LEX\ms_b.bdscript
msn\HB33_FM_VEX\ms_b.bdscript
msn\HB34_FM_ZEX\ms_b.bdscript
msn\HB38_FM_MAR\ms_b.bdscript
msn\HE00_MS104A\he00.bdscript
msn\HE00_MS104B\he00.bdscript
msn\HE02_MS104D\he02.bdscript
msn\HE06_MS101\ms_a.bdscript
msn\HE06_MS203\ms_d.bdscript
msn\HE07_MS103\ms_b.bdscript
msn\HE08_MS106\he08.bdscript
msn\HE08_MS107\he08.bdscript
msn\HE09_MS201\ms_d.bdscript
msn\HE09_MS202\ms_d.bdscript
msn\HE17_MS105\he17.bdscript
msn\HE18_MS108\ms_b.bdscript
msn\HE19_MS204\ms_a.bdscript
msn\HE19_MS205\ms_b.bdscript
msn\HE_COLOSSEUM\he_c.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript
msn\HE_COLOSSEUM_8_PP\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_1_10\he_c.bdscript
msn\HE_COL_1_8\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_1\he_c.bdscript
msn\HE_COL_4_10\he_c.bdscript
msn\HE_COL_4_2\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_4\he_c.bdscript
msn\HE_COL_4_5\he_c.bdscript
msn\HE_COL_4_6\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_4_8\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_5\he_c.bdscript
msn\HE_COL_5_10\he_c.bdscript
msn\HE_COL_5_8\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8PP_BOSS\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\HE_COL_8_10\he_c.bdscript
msn\HE_COL_8_25\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\HE_COL_8_45\he_c.bdscript
msn\HE_COL_8_49\he_c.bdscript
msn\HE_COL_8_5\he_c.bdscript
msn\HE_COL_8_50\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
msn\LK02_MS102\lk02.bdscript
msn\LK05_MS101\ms_d.bdscript
msn\LK05_MS201\lk05.bdscript
msn\LK14_MS103\ms_b.bdscript
msn\LK15_MS202\ms_b.bdscript
msn\LM02_MS101\lm02.bdscript
msn\MU01_MS101\ms_d.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU05_MS105\ms_d.bdscript
msn\MU07_MS106\mu07.bdscript
msn\MU07_MS201\mu07.bdscript
msn\MU08_MS107\ms_d.bdscript
msn\MU08_MS202\ms_d.bdscript
msn\MU08_MS204\ms_b.bdscript
msn\MU09_MS108\mu09.bdscript
msn\MU10_MS203\ms_d.bdscript
msn\NM00_MS101\ms_d.bdscript
msn\NM00_MS202\nm00.bdscript
msn\NM03_MS103\ms_b.bdscript
msn\NM06_MS102\ms_d.bdscript
msn\NM07_MS204\ms_b.bdscript
msn\NM09_MS104\ms_b.bdscript
msn\NM09_SKATE_01\nm09.bdscript
msn\NM10_MS201\nm10.bdscript
msn\NM10_MS203\nm10.bdscript
msn\NM10_MS203_FREE\nm10.bdscript
msn\PO01_MS501\po01.bdscript
msn\PO01_MS501_FREE\po01.bdscript
msn\PO06_MS101\po06.bdscript
msn\PO06_MS101_FREE\po06.bdscript
msn\PO07_MS201\po07.bdscript
msn\PO07_MS201_FREE\po07.bdscript
msn\PO08_MS301\po08.bdscript
msn\PO08_MS301_FREE\po08.bdscript
msn\PO09_MS401\po09.bdscript
msn\PO09_MS401_FREE\po09.bdscript
msn\SHIP_BATTLE\ca_s.bdscript
msn\TR01_MS101\tr01.bdscript
msn\TR02_MS102A\tr02.bdscript
msn\TR02_MS102B\tr02.bdscript
msn\TR02_MS102_FREE\tr02.bdscript
msn\TR02_MS210\ms_d.bdscript
msn\TR03_MS103\tr03.bdscript
msn\TR04_MS104\ms_b.bdscript
msn\TR04_MS202\tr04.bdscript
msn\TR07_MS203\tr07.bdscript
msn\TR09_MS204\ms_b.bdscript
msn\TR09_MS205\ms_b.bdscript
msn\TT02_MS201\save.bdscript
msn\TT03_MS400\tt_s.bdscript
msn\TT03_MS601\ms_d.bdscript
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
msn\TT04_MS107\tt04.bdscript
msn\TT04_MS108\tt04.bdscript
msn\TT04_MS301\tt04.bdscript
msn\TT04_MS500\tt_s.bdscript
msn\TT04_MS901\ms_d.bdscript
msn\TT05_AXEL\ms_b.bdscript
msn\TT05_MS401\ms_s.bdscript
msn\TT05_MS402\ms_s.bdscript
msn\TT05_MS403\tt05.bdscript
msn\TT05_MS404\tt05.bdscript
msn\TT05_MS405\ms_s.bdscript
msn\TT06_BAGGAGE_01\tt06.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_PERFORM_01\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT06_WORK_BAGGAGE\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT06_WORK_PERFORM\tt06.bdscript
msn\TT07_CLEAN_01\tt07.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_MS101\tt07.bdscript
msn\TT07_MS103\tt07.bdscript
msn\TT07_MS105\tt07.bdscript
msn\TT07_POSTER_01\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT07_WORK_CLEAN\tt07.bdscript
msn\TT07_WORK_POSTER\tt07.bdscript
msn\TT07_WORK_WORM\tt07.bdscript
msn\TT07_WORM_01\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
msn\TT08_MS701\ms_a.bdscript
msn\TT10_WORK_MIRROR\tt10.bdscript
msn\TT10_WORK_TIMBER\tt10.bdscript
msn\TT12_WORK_BOX\tt12.bdscript
msn\TT14_MS001\ms_d.bdscript
msn\TT14_MS109\tt_d.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT19_MS602\ms_d.bdscript
msn\TT20_AXEL\ms_b.bdscript
msn\TT20_MS603\ms_b.bdscript
msn\TT20_MS603_RE\ms_b.bdscript
msn\TT25_MS801\ms_d.bdscript
msn\TT29_MS802\ms_d.bdscript
msn\TT30_MS803\ms_d.bdscript
msn\TT32_MS302\tt32.bdscript
msn\TT32_MS303\tt32.bdscript
msn\TT34_MS304\ms_b.bdscript
msn\TT36_WORK_FIGURE\tt36.bdscript
msn\TT40_MS002\ms_d.bdscript
msn\TT40_MS003\ms_d.bdscript
msn\WI01_MS101\ms_b.bdscript
msn\WI02_MS103\wi02.bdscript
msn\WI03_MS104\ms_b.bdscript
msn\WI04_MS102C\wi04.bdscript
msn\WI05_MS102D\wi05.bdscript
msn\WI06_MS102B\wi06.bdscript
msn\WI07_MS102A\wi07.bdscript
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
---
---
---
example usage from ard\al05\ms_b.bdscript
L44:
 popToSp 4
 popToSp 0
 syscall 4, 55 ; trap_mission_is_lock (0 in, 1 out)
 eqz 
 jz L66
 pushImm 2
 popToSpVal 0
 pushFromFSp 4
 popToSpVal 4
 syscall 4, 54 ; trap_mission_lock (0 in, 0 out)
 jmp L66
