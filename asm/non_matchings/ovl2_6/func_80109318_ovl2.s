glabel func_80109318_ovl2
/* 091D88 80109318 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 091D8C 8010931C 3C038013 */  lui   $v1, %hi(D_8012BD00) # $v1, 0x8013
/* 091D90 80109320 2463BD00 */  addiu $v1, %lo(D_8012BD00) # addiu $v1, $v1, -0x4300
/* 091D94 80109324 AFBF001C */  sw    $ra, 0x1c($sp)
/* 091D98 80109328 AFB10018 */  sw    $s1, 0x18($sp)
/* 091D9C 8010932C AFB00014 */  sw    $s0, 0x14($sp)
/* 091DA0 80109330 C4840004 */  lwc1  $f4, 4($a0)
/* 091DA4 80109334 C4660004 */  lwc1  $f6, 4($v1)
/* 091DA8 80109338 8CA20018 */  lw    $v0, 0x18($a1)
/* 091DAC 8010933C 3C013F80 */  li    $at, 0x3F800000 # 1.000000
/* 091DB0 80109340 46062200 */  add.s $f8, $f4, $f6
/* 091DB4 80109344 C4660008 */  lwc1  $f6, 8($v1)
/* 091DB8 80109348 00808025 */  move  $s0, $a0
/* 091DBC 8010934C 00A08825 */  move  $s1, $a1
/* 091DC0 80109350 E7A8002C */  swc1  $f8, 0x2c($sp)
/* 091DC4 80109354 C4900010 */  lwc1  $f16, 0x10($a0)
/* 091DC8 80109358 C48A0008 */  lwc1  $f10, 8($a0)
/* 091DCC 8010935C 27A60038 */  addiu $a2, $sp, 0x38
/* 091DD0 80109360 27A70020 */  addiu $a3, $sp, 0x20
/* 091DD4 80109364 46105480 */  add.s $f18, $f10, $f16
/* 091DD8 80109368 C470000C */  lwc1  $f16, 0xc($v1)
/* 091DDC 8010936C E7B20030 */  swc1  $f18, 0x30($sp)
/* 091DE0 80109370 C484000C */  lwc1  $f4, 0xc($a0)
/* 091DE4 80109374 46062200 */  add.s $f8, $f4, $f6
/* 091DE8 80109378 C4660010 */  lwc1  $f6, 0x10($v1)
/* 091DEC 8010937C E7A80034 */  swc1  $f8, 0x34($sp)
/* 091DF0 80109380 C48A0004 */  lwc1  $f10, 4($a0)
/* 091DF4 80109384 46105480 */  add.s $f18, $f10, $f16
/* 091DF8 80109388 44815000 */  mtc1  $at, $f10
/* 091DFC 8010938C E7B20038 */  swc1  $f18, 0x38($sp)
/* 091E00 80109390 C484000C */  lwc1  $f4, 0xc($a0)
/* 091E04 80109394 C7B2002C */  lwc1  $f18, 0x2c($sp)
/* 091E08 80109398 46062200 */  add.s $f8, $f4, $f6
/* 091E0C 8010939C C7A40038 */  lwc1  $f4, 0x38($sp)
/* 091E10 801093A0 E7A80040 */  swc1  $f8, 0x40($sp)
/* 091E14 801093A4 C4500004 */  lwc1  $f16, 4($v0)
/* 091E18 801093A8 46049181 */  sub.s $f6, $f18, $f4
/* 091E1C 801093AC C7B20040 */  lwc1  $f18, 0x40($sp)
/* 091E20 801093B0 C4480000 */  lwc1  $f8, ($v0)
/* 091E24 801093B4 46105003 */  div.s $f0, $f10, $f16
/* 091E28 801093B8 C7B00034 */  lwc1  $f16, 0x34($sp)
/* 091E2C 801093BC 46064282 */  mul.s $f10, $f8, $f6
/* 091E30 801093C0 46128101 */  sub.s $f4, $f16, $f18
/* 091E34 801093C4 C4480008 */  lwc1  $f8, 8($v0)
/* 091E38 801093C8 46044182 */  mul.s $f6, $f8, $f4
/* 091E3C 801093CC C7A80030 */  lwc1  $f8, 0x30($sp)
/* 091E40 801093D0 46003402 */  mul.s $f16, $f6, $f0
/* 091E44 801093D4 46105480 */  add.s $f18, $f10, $f16
/* 091E48 801093D8 46089100 */  add.s $f4, $f18, $f8
/* 091E4C 801093DC E7A4003C */  swc1  $f4, 0x3c($sp)
/* 091E50 801093E0 8CA40024 */  lw    $a0, 0x24($a1)
/* 091E54 801093E4 E7A00044 */  swc1  $f0, 0x44($sp)
/* 091E58 801093E8 27A5002C */  addiu $a1, $sp, 0x2c
/* 091E5C 801093EC 0C0415F1 */  jal   func_801057C4_ovl2
/* 091E60 801093F0 AFA2004C */   sw    $v0, 0x4c($sp)
/* 091E64 801093F4 C7A6002C */  lwc1  $f6, 0x2c($sp)
/* 091E68 801093F8 C7AA0020 */  lwc1  $f10, 0x20($sp)
/* 091E6C 801093FC 3C038013 */  lui   $v1, %hi(D_8012BD00) # $v1, 0x8013
/* 091E70 80109400 2463BD00 */  addiu $v1, %lo(D_8012BD00) # addiu $v1, $v1, -0x4300
/* 091E74 80109404 460A3401 */  sub.s $f16, $f6, $f10
/* 091E78 80109408 C7A60028 */  lwc1  $f6, 0x28($sp)
/* 091E7C 8010940C C4720014 */  lwc1  $f18, 0x14($v1)
/* 091E80 80109410 C7A40034 */  lwc1  $f4, 0x34($sp)
/* 091E84 80109414 8FA2004C */  lw    $v0, 0x4c($sp)
/* 091E88 80109418 46128202 */  mul.s $f8, $f16, $f18
/* 091E8C 8010941C 46062281 */  sub.s $f10, $f4, $f6
/* 091E90 80109420 C4700018 */  lwc1  $f16, 0x18($v1)
/* 091E94 80109424 44803000 */  mtc1  $zero, $f6
/* 091E98 80109428 C7A00044 */  lwc1  $f0, 0x44($sp)
/* 091E9C 8010942C 46105482 */  mul.s $f18, $f10, $f16
/* 091EA0 80109430 C7AA0020 */  lwc1  $f10, 0x20($sp)
/* 091EA4 80109434 46124100 */  add.s $f4, $f8, $f18
/* 091EA8 80109438 4606203C */  c.lt.s $f4, $f6
/* 091EAC 8010943C 00000000 */  nop   
/* 091EB0 80109440 4502000B */  bc1fl .L80109470_ovl2
/* 091EB4 80109444 C4700024 */   lwc1  $f16, 0x24($v1)
/* 091EB8 80109448 8E2E0000 */  lw    $t6, ($s1)
/* 091EBC 8010944C 962A0000 */  lhu   $t2, ($s1)
/* 091EC0 80109450 000E7CC2 */  srl   $t7, $t6, 0x13
/* 091EC4 80109454 31F9FFF8 */  andi  $t9, $t7, 0xfff8
/* 091EC8 80109458 001948C0 */  sll   $t1, $t9, 3
/* 091ECC 8010945C 314B0007 */  andi  $t3, $t2, 7
/* 091ED0 80109460 012B6025 */  or    $t4, $t1, $t3
/* 091ED4 80109464 10000022 */  b     .L801094F0_ovl2
/* 091ED8 80109468 A62C0000 */   sh    $t4, ($s1)
/* 091EDC 8010946C C4700024 */  lwc1  $f16, 0x24($v1)
.L80109470_ovl2:
/* 091EE0 80109470 3C018013 */  lui   $at, %hi(D_80128AA0) # $at, 0x8013
/* 091EE4 80109474 46105201 */  sub.s $f8, $f10, $f16
/* 091EE8 80109478 E6080004 */  swc1  $f8, 4($s0)
/* 091EEC 8010947C C4640028 */  lwc1  $f4, 0x28($v1)
/* 091EF0 80109480 C7B20028 */  lwc1  $f18, 0x28($sp)
/* 091EF4 80109484 C6100004 */  lwc1  $f16, 4($s0)
/* 091EF8 80109488 46049181 */  sub.s $f6, $f18, $f4
/* 091EFC 8010948C E606000C */  swc1  $f6, 0xc($s0)
/* 091F00 80109490 C44A0000 */  lwc1  $f10, ($v0)
/* 091F04 80109494 C604000C */  lwc1  $f4, 0xc($s0)
/* 091F08 80109498 C4520008 */  lwc1  $f18, 8($v0)
/* 091F0C 8010949C 46105202 */  mul.s $f8, $f10, $f16
/* 091F10 801094A0 C450000C */  lwc1  $f16, 0xc($v0)
/* 091F14 801094A4 46049182 */  mul.s $f6, $f18, $f4
/* 091F18 801094A8 46064280 */  add.s $f10, $f8, $f6
/* 091F1C 801094AC C6060014 */  lwc1  $f6, 0x14($s0)
/* 091F20 801094B0 46105480 */  add.s $f18, $f10, $f16
/* 091F24 801094B4 C4308AA0 */  lwc1  $f16, %lo(D_80128AA0)($at)
/* 091F28 801094B8 46009107 */  neg.s $f4, $f18
/* 091F2C 801094BC 46002202 */  mul.s $f8, $f4, $f0
/* 091F30 801094C0 46064281 */  sub.s $f10, $f8, $f6
/* 091F34 801094C4 46105481 */  sub.s $f18, $f10, $f16
/* 091F38 801094C8 E6120008 */  swc1  $f18, 8($s0)
/* 091F3C 801094CC 8E2D0000 */  lw    $t5, ($s1)
/* 091F40 801094D0 96290000 */  lhu   $t1, ($s1)
/* 091F44 801094D4 000D74C2 */  srl   $t6, $t5, 0x13
/* 091F48 801094D8 31CFFFF8 */  andi  $t7, $t6, 0xfff8
/* 091F4C 801094DC 35F90001 */  ori   $t9, $t7, 1
/* 091F50 801094E0 001950C0 */  sll   $t2, $t9, 3
/* 091F54 801094E4 312B0007 */  andi  $t3, $t1, 7
/* 091F58 801094E8 014B6025 */  or    $t4, $t2, $t3
/* 091F5C 801094EC A62C0000 */  sh    $t4, ($s1)
.L801094F0_ovl2:
/* 091F60 801094F0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 091F64 801094F4 8FB00014 */  lw    $s0, 0x14($sp)
/* 091F68 801094F8 8FB10018 */  lw    $s1, 0x18($sp)
/* 091F6C 801094FC 03E00008 */  jr    $ra
/* 091F70 80109500 27BD0050 */   addiu $sp, $sp, 0x50