glabel func_80221B5C_ovl18
/* 2344FC 80221B5C 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 234500 80221B60 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 234504 80221B64 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 234508 80221B68 AFBF0014 */  sw    $ra, 0x14($sp)
/* 23450C 80221B6C AFA40018 */  sw    $a0, 0x18($sp)
/* 234510 80221B70 8C4F0000 */  lw    $t7, ($v0)
/* 234514 80221B74 3C014120 */  li    $at, 0x41200000 # 10.000000
/* 234518 80221B78 44810000 */  mtc1  $at, $f0
/* 23451C 80221B7C 3C01800E */ lui $at, %hi(D_800DDFD0)
/* 234520 80221B80 000FC080 */  sll   $t8, $t7, 2
/* 234524 80221B84 00380821 */  addu  $at, $at, $t8
/* 234528 80221B88 240E0002 */  li    $t6, 2
/* 23452C 80221B8C AC2EDFD0 */ sw $t6, %lo(D_800DDFD0)($at)
/* 234530 80221B90 8C590000 */  lw    $t9, ($v0)
/* 234534 80221B94 3C01800E */ lui $at, %hi(D_800E3210)
/* 234538 80221B98 44802000 */  mtc1  $zero, $f4
/* 23453C 80221B9C 00194080 */  sll   $t0, $t9, 2
/* 234540 80221BA0 00280821 */  addu  $at, $at, $t0
/* 234544 80221BA4 E4203210 */ swc1 $f0, %lo(D_800E3210)($at)
/* 234548 80221BA8 8C490000 */  lw    $t1, ($v0)
/* 23454C 80221BAC 3C01800E */ lui $at, %hi(D_800E3750)
/* 234550 80221BB0 2404016A */  li    $a0, 362
/* 234554 80221BB4 00095080 */  sll   $t2, $t1, 2
/* 234558 80221BB8 002A0821 */  addu  $at, $at, $t2
/* 23455C 80221BBC E4243750 */ swc1 $f4, %lo(D_800E3750)($at)
/* 234560 80221BC0 8C4B0000 */  lw    $t3, ($v0)
/* 234564 80221BC4 3C01800E */ lui $at, %hi(D_800E3C90)
/* 234568 80221BC8 000B6080 */  sll   $t4, $t3, 2
/* 23456C 80221BCC 002C0821 */  addu  $at, $at, $t4
/* 234570 80221BD0 0C029D9E */  jal   func_800A7678
/* 234574 80221BD4 E4203C90 */ swc1 $f0, %lo(D_800E3C90)($at)
/* 234578 80221BD8 0C02BE85 */  jal   func_800AFA14_ovl18
/* 23457C 80221BDC 00000000 */   nop   
/* 234580 80221BE0 8FBF0014 */  lw    $ra, 0x14($sp)
/* 234584 80221BE4 27BD0018 */  addiu $sp, $sp, 0x18
/* 234588 80221BE8 03E00008 */  jr    $ra
/* 23458C 80221BEC 00000000 */   nop   
