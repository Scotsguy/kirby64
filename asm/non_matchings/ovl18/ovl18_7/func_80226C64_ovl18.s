glabel func_80226C64_ovl18
/* 239604 80226C64 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 239608 80226C68 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 23960C 80226C6C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 239610 80226C70 AFBF001C */  sw    $ra, 0x1c($sp)
/* 239614 80226C74 AFA40020 */  sw    $a0, 0x20($sp)
/* 239618 80226C78 8C4E0000 */  lw    $t6, ($v0)
/* 23961C 80226C7C 3C0142EA */  li    $at, 0x42EA0000 # 117.000000
/* 239620 80226C80 3C18800D */  lui   $t8, %hi(D_800D6B64) # $t8, 0x800d
/* 239624 80226C84 44812000 */  mtc1  $at, $f4
/* 239628 80226C88 8F186B64 */  lw    $t8, %lo(D_800D6B64)($t8)
/* 23962C 80226C8C 3C01800E */ lui $at, %hi(D_800E2790)
/* 239630 80226C90 000E7880 */  sll   $t7, $t6, 2
/* 239634 80226C94 002F0821 */  addu  $at, $at, $t7
/* 239638 80226C98 1300000B */  beqz  $t8, .L80226CC8_ovl18
/* 23963C 80226C9C E4242790 */ swc1 $f4, %lo(D_800E2790)($at)
/* 239640 80226CA0 8C590000 */  lw    $t9, ($v0)
/* 239644 80226CA4 3C014331 */  li    $at, 0x43310000 # 177.000000
/* 239648 80226CA8 44813000 */  mtc1  $at, $f6
/* 23964C 80226CAC 3C01800E */ lui $at, %hi(D_800E25D0)
/* 239650 80226CB0 00194080 */  sll   $t0, $t9, 2
/* 239654 80226CB4 00280821 */  addu  $at, $at, $t0
/* 239658 80226CB8 3C040005 */  lui   $a0, (0x00050135 >> 16) # lui $a0, 5
/* 23965C 80226CBC 34840135 */  ori   $a0, (0x00050135 & 0xFFFF) # ori $a0, $a0, 0x135
/* 239660 80226CC0 1000000A */  b     .L80226CEC_ovl18
/* 239664 80226CC4 E42625D0 */ swc1 $f6, %lo(D_800E25D0)($at)
.L80226CC8_ovl18:
/* 239668 80226CC8 8C490000 */  lw    $t1, ($v0)
/* 23966C 80226CCC 3C01425C */  li    $at, 0x425C0000 # 55.000000
/* 239670 80226CD0 44814000 */  mtc1  $at, $f8
/* 239674 80226CD4 3C01800E */ lui $at, %hi(D_800E25D0)
/* 239678 80226CD8 00095080 */  sll   $t2, $t1, 2
/* 23967C 80226CDC 002A0821 */  addu  $at, $at, $t2
/* 239680 80226CE0 3C040005 */  lui   $a0, (0x00050134 >> 16) # lui $a0, 5
/* 239684 80226CE4 34840134 */  ori   $a0, (0x00050134 & 0xFFFF) # ori $a0, $a0, 0x134
/* 239688 80226CE8 E42825D0 */ swc1 $f8, %lo(D_800E25D0)($at)
.L80226CEC_ovl18:
/* 23968C 80226CEC 2405000E */  li    $a1, 14
/* 239690 80226CF0 0C02BE30 */  jal   func_800AF8C0_ovl18
/* 239694 80226CF4 24060002 */   li    $a2, 2
/* 239698 80226CF8 240B00FF */  li    $t3, 255
/* 23969C 80226CFC AFAB0010 */  sw    $t3, 0x10($sp)
/* 2396A0 80226D00 8FA40020 */  lw    $a0, 0x20($sp)
/* 2396A4 80226D04 24050046 */  li    $a1, 70
/* 2396A8 80226D08 24060046 */  li    $a2, 70
/* 2396AC 80226D0C 0C0296C5 */  jal   func_800A5B14_ovl18
/* 2396B0 80226D10 00003825 */   move  $a3, $zero
/* 2396B4 80226D14 0C02BE85 */  jal   func_800AFA14_ovl18
/* 2396B8 80226D18 00000000 */   nop   
/* 2396BC 80226D1C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 2396C0 80226D20 27BD0020 */  addiu $sp, $sp, 0x20
/* 2396C4 80226D24 03E00008 */  jr    $ra
/* 2396C8 80226D28 00000000 */   nop   
