glabel func_80224320_ovl18
/* 236CC0 80224320 3C098005 */  lui   $t1, %hi(D_8004A7C4) # $t1, 0x8005
/* 236CC4 80224324 2529A7C4 */  addiu $t1, %lo(D_8004A7C4) # addiu $t1, $t1, -0x583c
/* 236CC8 80224328 8D230000 */  lw    $v1, ($t1)
/* 236CCC 8022432C 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 236CD0 80224330 AFBF0014 */  sw    $ra, 0x14($sp)
/* 236CD4 80224334 AFA40018 */  sw    $a0, 0x18($sp)
/* 236CD8 80224338 8C620000 */  lw    $v0, ($v1)
/* 236CDC 8022433C 3C01800F */ lui $at, %hi(D_800E98E0)
/* 236CE0 80224340 3C07800E */ lui $a3, %hi(D_800E1B50)
/* 236CE4 80224344 00021080 */  sll   $v0, $v0, 2
/* 236CE8 80224348 00220821 */  addu  $at, $at, $v0
/* 236CEC 8022434C 240E003C */  li    $t6, 60
/* 236CF0 80224350 00E23821 */  addu  $a3, $a3, $v0
/* 236CF4 80224354 AC2E98E0 */ sw $t6, %lo(D_800E98E0)($at)
/* 236CF8 80224358 8C620000 */  lw    $v0, ($v1)
/* 236CFC 8022435C 3C08800E */  lui   $t0, %hi(D_800E0D50) # $t0, 0x800e
/* 236D00 80224360 25080D50 */  addiu $t0, %lo(D_800E0D50) # addiu $t0, $t0, 0xd50
/* 236D04 80224364 00021080 */  sll   $v0, $v0, 2
/* 236D08 80224368 01027821 */  addu  $t7, $t0, $v0
/* 236D0C 8022436C 8DF80000 */  lw    $t8, ($t7)
/* 236D10 80224370 3C0A800E */  lui   $t2, %hi(D_800E4550) # $t2, 0x800e
/* 236D14 80224374 254A4550 */  addiu $t2, %lo(D_800E4550) # addiu $t2, $t2, 0x4550
/* 236D18 80224378 0018C880 */  sll   $t9, $t8, 2
/* 236D1C 8022437C 01596821 */  addu  $t5, $t2, $t9
/* 236D20 80224380 C5A40000 */  lwc1  $f4, ($t5)
/* 236D24 80224384 8CE71B50 */ lw $a3, %lo(D_800E1B50)($a3)
/* 236D28 80224388 01427021 */  addu  $t6, $t2, $v0
/* 236D2C 8022438C E5C40000 */  swc1  $f4, ($t6)
/* 236D30 80224390 8C620000 */  lw    $v0, ($v1)
/* 236D34 80224394 3C0B800E */  lui   $t3, %hi(D_800E4710) # $t3, 0x800e
/* 236D38 80224398 256B4710 */  addiu $t3, %lo(D_800E4710) # addiu $t3, $t3, 0x4710
/* 236D3C 8022439C 00021080 */  sll   $v0, $v0, 2
/* 236D40 802243A0 01027821 */  addu  $t7, $t0, $v0
/* 236D44 802243A4 8DF80000 */  lw    $t8, ($t7)
/* 236D48 802243A8 01627021 */  addu  $t6, $t3, $v0
/* 236D4C 802243AC 3C0C800E */  lui   $t4, %hi(D_800E48D0) # $t4, 0x800e
/* 236D50 802243B0 0018C880 */  sll   $t9, $t8, 2
/* 236D54 802243B4 01796821 */  addu  $t5, $t3, $t9
/* 236D58 802243B8 C5A60000 */  lwc1  $f6, ($t5)
/* 236D5C 802243BC 258C48D0 */  addiu $t4, %lo(D_800E48D0) # addiu $t4, $t4, 0x48d0
/* 236D60 802243C0 3C01800E */ lui $at, %hi(D_800DF150)
/* 236D64 802243C4 E5C60000 */  swc1  $f6, ($t6)
/* 236D68 802243C8 8C620000 */  lw    $v0, ($v1)
/* 236D6C 802243CC 3C040001 */  lui   $a0, (0x0001008E >> 16) # lui $a0, 1
/* 236D70 802243D0 3484008E */  ori   $a0, (0x0001008E & 0xFFFF) # ori $a0, $a0, 0x8e
/* 236D74 802243D4 00021080 */  sll   $v0, $v0, 2
/* 236D78 802243D8 01027821 */  addu  $t7, $t0, $v0
/* 236D7C 802243DC 8DF80000 */  lw    $t8, ($t7)
/* 236D80 802243E0 01827021 */  addu  $t6, $t4, $v0
/* 236D84 802243E4 3C0F8022 */  lui   $t7, %hi(D_802244FC) # $t7, 0x8022
/* 236D88 802243E8 0018C880 */  sll   $t9, $t8, 2
/* 236D8C 802243EC 01996821 */  addu  $t5, $t4, $t9
/* 236D90 802243F0 C5A80000 */  lwc1  $f8, ($t5)
/* 236D94 802243F4 25EF44FC */  addiu $t7, %lo(D_802244FC) # addiu $t7, $t7, 0x44fc
/* 236D98 802243F8 3C0D801D */  lui   $t5, %hi(D_801CB4DC) # $t5, 0x801d
/* 236D9C 802243FC E5C80000 */  swc1  $f8, ($t6)
/* 236DA0 80224400 8C780000 */  lw    $t8, ($v1)
/* 236DA4 80224404 25ADB4DC */  addiu $t5, %lo(D_801CB4DC) # addiu $t5, $t5, -0x4b24
/* 236DA8 80224408 24050023 */  li    $a1, 35
/* 236DAC 8022440C 0018C880 */  sll   $t9, $t8, 2
/* 236DB0 80224410 00390821 */  addu  $at, $at, $t9
/* 236DB4 80224414 AC2FF150 */ sw $t7, %lo(D_800DF150)($at)
/* 236DB8 80224418 ACED0098 */  sw    $t5, 0x98($a3)
/* 236DBC 8022441C 8D2E0000 */  lw    $t6, ($t1)
/* 236DC0 80224420 3C01800F */ lui $at, %hi(D_800E8920)
/* 236DC4 80224424 24060010 */  li    $a2, 16
/* 236DC8 80224428 8DD80000 */  lw    $t8, ($t6)
/* 236DCC 8022442C 00187880 */  sll   $t7, $t8, 2
/* 236DD0 80224430 002F0821 */  addu  $at, $at, $t7
/* 236DD4 80224434 0C02A619 */  jal   func_800A9864_ovl18
/* 236DD8 80224438 AC208920 */ sw $zero, %lo(D_800E8920)($at)
/* 236DDC 8022443C 3C040001 */  lui   $a0, (0x00010523 >> 16) # lui $a0, 1
/* 236DE0 80224440 0C02A806 */  jal   func_800AA018_ovl18
/* 236DE4 80224444 34840523 */   ori   $a0, (0x00010523 & 0xFFFF) # ori $a0, $a0, 0x523
/* 236DE8 80224448 3C01800D */  lui   $at, %hi(D_800D6B10) # $at, 0x800d
/* 236DEC 8022444C C42A6B10 */  lwc1  $f10, %lo(D_800D6B10)($at)
/* 236DF0 80224450 3C013F40 */  li    $at, 0x3F400000 # 0.750000
/* 236DF4 80224454 44818000 */  mtc1  $at, $f16
/* 236DF8 80224458 00000000 */  nop   
/* 236DFC 8022445C 46105302 */  mul.s $f12, $f10, $f16
/* 236E00 80224460 0C02BB30 */  jal   func_800AECC0_ovl18
/* 236E04 80224464 00000000 */   nop   
/* 236E08 80224468 3C01800D */  lui   $at, %hi(D_800D6B10) # $at, 0x800d
/* 236E0C 8022446C C4326B10 */  lwc1  $f18, %lo(D_800D6B10)($at)
/* 236E10 80224470 3C013F40 */  li    $at, 0x3F400000 # 0.750000
/* 236E14 80224474 44812000 */  mtc1  $at, $f4
/* 236E18 80224478 00000000 */  nop   
/* 236E1C 8022447C 46049302 */  mul.s $f12, $f18, $f4
/* 236E20 80224480 0C02BB48 */  jal   func_800AED20_ovl18
/* 236E24 80224484 00000000 */   nop   
/* 236E28 80224488 3C038005 */  lui   $v1, %hi(D_8004A7C4) # $v1, 0x8005
/* 236E2C 8022448C 8C63A7C4 */  lw    $v1, %lo(D_8004A7C4)($v1)
/* 236E30 80224490 3C014110 */  li    $at, 0x41100000 # 9.000000
/* 236E34 80224494 44810000 */  mtc1  $at, $f0
/* 236E38 80224498 8C620000 */  lw    $v0, ($v1)
/* 236E3C 8022449C 3C01800E */ lui $at, %hi(D_800E6A10)
/* 236E40 802244A0 44805000 */  mtc1  $zero, $f10
/* 236E44 802244A4 00021080 */  sll   $v0, $v0, 2
/* 236E48 802244A8 00220821 */  addu  $at, $at, $v0
/* 236E4C 802244AC C4266A10 */ lwc1 $f6, %lo(D_800E6A10)($at)
/* 236E50 802244B0 3C01800E */ lui $at, %hi(D_800E64D0)
/* 236E54 802244B4 00220821 */  addu  $at, $at, $v0
/* 236E58 802244B8 46003202 */  mul.s $f8, $f6, $f0
/* 236E5C 802244BC E42864D0 */ swc1 $f8, %lo(D_800E64D0)($at)
/* 236E60 802244C0 8C790000 */  lw    $t9, ($v1)
/* 236E64 802244C4 3C01800E */ lui $at, %hi(D_800E6690)
/* 236E68 802244C8 00196880 */  sll   $t5, $t9, 2
/* 236E6C 802244CC 002D0821 */  addu  $at, $at, $t5
/* 236E70 802244D0 E42A6690 */ swc1 $f10, %lo(D_800E6690)($at)
/* 236E74 802244D4 8C6E0000 */  lw    $t6, ($v1)
/* 236E78 802244D8 3C01800E */ lui $at, %hi(D_800E6850)
/* 236E7C 802244DC 000EC080 */  sll   $t8, $t6, 2
/* 236E80 802244E0 00380821 */  addu  $at, $at, $t8
/* 236E84 802244E4 0C02BE85 */  jal   func_800AFA14_ovl18
/* 236E88 802244E8 E4206850 */ swc1 $f0, %lo(D_800E6850)($at)
/* 236E8C 802244EC 8FBF0014 */  lw    $ra, 0x14($sp)
/* 236E90 802244F0 27BD0018 */  addiu $sp, $sp, 0x18
/* 236E94 802244F4 03E00008 */  jr    $ra
/* 236E98 802244F8 00000000 */   nop   
