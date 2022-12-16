---
---
---
name: trap_mission_failed
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
syscall 4, 11 ; trap_mission_failed (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::MISSION::Failed()
/----- (00000000004F6064) ----------------------------------------------------
void __fastcall YS::trap_mission_failed(BD_VALUE_20 *args)
{
  YS::MISSION::Failed();
}
->
/----- (0000000000452C10) ----------------------------------------------------
void __cdecl YS::MISSION::Failed()
{
  __int64 v0; // r10
  __int64 v1; // r8
  __int64 v2; // r7
  __int64 v3; // r6
  __int64 v4; // r5
  __int64 v5; // r4
  __int64 v6; // r9
  __int64 v7; // r3
  __int64 v8; // r3
  bool v9; // cr34
  int v10; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  v4 = back_chain;
  v5 = (unsigned int)YS::Current;
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !YS::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
      536LL,
      "Failed",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp", 536);
    v5 = (unsigned int)YS::Current;
  }
  v7 = *(int *)(*(unsigned int *)(v5 + 8) + 0x18LL);
  if ( (_DWORD)v7 )
  {
    SOUND::createSe(v7, v5, v4, v3, v2, v1, v6, v0);
    v5 = (unsigned int)YS::Current;
  }
  *(_DWORD *)(v5 + 180) = 2;
  YS::MISSION_CAMERA::start(
    (YS::MISSION_CAMERA_2 *const)(unsigned int)(YS::Current + 160),
    (ryj::PAX_327 *)(unsigned int)(YS::Current + 12),
    0);
  YS::MISSION::PostEnd();
  v8 = (unsigned int)YS::Current;
  if ( YS::Current
    && ((v9 = (unsigned int)YS::SIGNAL_HOOK::IsHook(8, -1) == 0, v8 = (unsigned int)YS::Current, !v9)
     || *(_DWORD *)((unsigned int)YS::Current + 0xACLL)) )
  {
    *(_DWORD *)((unsigned int)YS::Current + 0x2DCLL) = 8;
    *(_DWORD *)((unsigned int)YS::Current + 0x2E0LL) = -1;
    *(_DWORD *)((unsigned int)YS::Current + 0x2D8LL) = 4;
  }
  else
  {
    v10 = *(unsigned __int8 *)(*(unsigned int *)(v8 + 8) + 8LL);
    if ( (_DWORD)v8 )
    {
      YS::MISSION::end((YS::MISSION *const)v8);
      YS::Current = 0;
    }
    if ( v10 == 35 || v10 == 30 || v10 == 2 )
      YS::GAMEOVER::MiniGameFailed(0LL);
    else
      YS::GAMEOVER::MissionFailed();
  }
}
// 452C20: variable 'back_chain' is possibly undefined
// 452CA8: variable 'v4' is possibly undefined
// 452CA8: variable 'v3' is possibly undefined
// 452CA8: variable 'v2' is possibly undefined
// 452CA8: variable 'v1' is possibly undefined
// 452CA8: variable 'v6' is possibly undefined
// 452CA8: variable 'v0' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


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
msn\AL10_KINOKO_LEX\kino.bdscript
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
msn\BB13_KINOKO_XAL\kino.bdscript
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
msn\CA13_KINOKO_LUX\kino.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA14_MS203\ms_d.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\CA18_MS202\ms_b.bdscript
msn\DC00_MS101\dc_m.bdscript
msn\DC02_MS100\dc_m.bdscript
msn\DC02_MS101\dc_m.bdscript
msn\DC07_FM_NAZO\ms_b.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
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
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HB04_MS403\hb04.bdscript
msn\HB07_MS402\ms_d.bdscript
msn\HB08_MS102\hb08.bdscript
msn\HB09_MS101\ms_d.bdscript
msn\HB09_MS501\ms_d.bdscript
msn\HB09_MS901\ms_d.bdscript
msn\HB09_SKATE_01\hb09.bdscript
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
msn\HB24_CONFINE_3\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HB25_CONFINE_4\hb25.bdscript
msn\HB32_FM_VEX\ms_b.bdscript
msn\HB33_FM_LAR\ms_b.bdscript
msn\HB33_FM_LEX\ms_b.bdscript
msn\HB33_FM_VEX\ms_b.bdscript
msn\HB34_FM_ZEX\ms_b.bdscript
msn\HB38_FM_MAR\ms_b.bdscript
msn\HE00_MS104A\he00.bdscript
msn\HE00_MS104B\he00.bdscript
msn\HE02_MS104C\he02.bdscript
msn\HE02_MS104D\he02.bdscript
msn\HE05_MS102\he05.bdscript
msn\HE06_MS101\ms_a.bdscript
msn\HE06_MS203\ms_d.bdscript
msn\HE07_MS103\ms_b.bdscript
msn\HE08_MS106\he08.bdscript
msn\HE08_MS107\he08.bdscript
msn\HE09_MS201\ms_d.bdscript
msn\HE09_MS202\ms_d.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
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
msn\LM01_MS201\ms_m.bdscript
msn\LM02_MS101\lm02.bdscript
msn\LM02_MS102\ms_m.bdscript
msn\LM03_MS301\ms_m.bdscript
msn\LM04_MS103\ms_m.bdscript
msn\LM04_MS501\ms_m.bdscript
msn\LM09_MS401\ms_m.bdscript
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
msn\MU09_KINOKO_VEX\kino.bdscript
msn\MU09_MS108\mu09.bdscript
msn\MU10_MS203\ms_d.bdscript
msn\NM00_MS101\ms_d.bdscript
msn\NM00_MS202\nm00.bdscript
msn\NM03_MS103\ms_b.bdscript
msn\NM06_MS102\ms_d.bdscript
msn\NM07_KINOKO_XIG\kino.bdscript
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
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT14_MS001\ms_d.bdscript
msn\TT14_MS109\tt_d.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT19_MS602\ms_d.bdscript
msn\TT20_AXEL\ms_b.bdscript
msn\TT20_MS603\ms_b.bdscript
msn\TT20_MS603_RE\ms_b.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT25_MS801\ms_d.bdscript
msn\TT29_MS802\ms_d.bdscript
msn\TT30_MS803\ms_d.bdscript
msn\TT32_MS302\tt32.bdscript
msn\TT32_MS303\tt32.bdscript
msn\TT34_MS304\ms_b.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\TT36_WORK_FIGURE\tt36.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
msn\TT40_MS002\ms_d.bdscript
msn\TT40_MS003\ms_d.bdscript
msn\WI01_MS101\ms_b.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
msn\WI02_MS103\wi02.bdscript
msn\WI03_MS104\ms_b.bdscript
msn\WI04_MS102C\wi04.bdscript
msn\WI05_MS102D\wi05.bdscript
msn\WI06_MS102B\wi06.bdscript
msn\WI07_MS102A\wi07.bdscript
---
---
---
example usage from ard\al05\ms_b.bdscript
L128:
 syscall 4, 11 ; trap_mission_failed (0 in, 0 out)
 jmp L147
