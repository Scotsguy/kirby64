glabel func_80224790_ovl18
/* 237130 80224790 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 237134 80224794 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 237138 80224798 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 23713C 8022479C AFBF0014 */  sw    $ra, 0x14($sp)
/* 237140 802247A0 AFA40018 */  sw    $a0, 0x18($sp)
/* 237144 802247A4 8C4E0000 */  lw    $t6, ($v0)
/* 237148 802247A8 3C01800E */ lui $at, %hi(D_800DDFD0)
/* 23714C 802247AC 44802000 */  mtc1  $zero, $f4
/* 237150 802247B0 000E7880 */  sll   $t7, $t6, 2
/* 237154 802247B4 002F0821 */  addu  $at, $at, $t7
/* 237158 802247B8 AC20DFD0 */ sw $zero, %lo(D_800DDFD0)($at)
/* 23715C 802247BC 8C580000 */  lw    $t8, ($v0)
/* 237160 802247C0 3C01800F */ lui $at, %hi(D_800E9E20)
/* 237164 802247C4 3C06800E */  lui   $a2, %hi(D_800E6690) # $a2, 0x800e
/* 237168 802247C8 0018C880 */  sll   $t9, $t8, 2
/* 23716C 802247CC 00390821 */  addu  $at, $at, $t9
/* 237170 802247D0 AC209E20 */ sw $zero, %lo(D_800E9E20)($at)
/* 237174 802247D4 8C480000 */  lw    $t0, ($v0)
/* 237178 802247D8 24C66690 */  addiu $a2, %lo(D_800E6690) # addiu $a2, $a2, 0x6690
/* 23717C 802247DC 3C01800E */ lui $at, %hi(D_800E64D0)
/* 237180 802247E0 00084880 */  sll   $t1, $t0, 2
/* 237184 802247E4 00C95021 */  addu  $t2, $a2, $t1
/* 237188 802247E8 E5440000 */  swc1  $f4, ($t2)
/* 23718C 802247EC 8C430000 */  lw    $v1, ($v0)
/* 237190 802247F0 3C040001 */  lui   $a0, (0x0001003C >> 16) # lui $a0, 1
/* 237194 802247F4 3484003C */  ori   $a0, (0x0001003C & 0xFFFF) # ori $a0, $a0, 0x3c
/* 237198 802247F8 00031880 */  sll   $v1, $v1, 2
/* 23719C 802247FC 00C35821 */  addu  $t3, $a2, $v1
/* 2371A0 80224800 C5660000 */  lwc1  $f6, ($t3)
/* 2371A4 80224804 00230821 */  addu  $at, $at, $v1
/* 2371A8 80224808 24050002 */  li    $a1, 2
/* 2371AC 8022480C E42664D0 */ swc1 $f6, %lo(D_800E64D0)($at)
/* 2371B0 80224810 8C4C0000 */  lw    $t4, ($v0)
/* 2371B4 80224814 3C018023 */  lui   $at, %hi(D_8022BC40) # $at, 0x8023
/* 2371B8 80224818 C428BC40 */  lwc1  $f8, %lo(D_8022BC40)($at)
/* 2371BC 8022481C 3C01800E */ lui $at, %hi(D_800E6850)
/* 2371C0 80224820 000C6880 */  sll   $t5, $t4, 2
/* 2371C4 80224824 002D0821 */  addu  $at, $at, $t5
/* 2371C8 80224828 0C02AA19 */  jal   func_800AA864_ovl18
/* 2371CC 8022482C E4286850 */ swc1 $f8, %lo(D_800E6850)($at)
/* 2371D0 80224830 3C0F8005 */  lui   $t7, %hi(D_8004A7C4) # $t7, 0x8005
/* 2371D4 80224834 8DEFA7C4 */  lw    $t7, %lo(D_8004A7C4)($t7)
/* 2371D8 80224838 3C01800F */ lui $at, %hi(D_800E9E20)
/* 2371DC 8022483C 240E0001 */  li    $t6, 1
/* 2371E0 80224840 8DF80000 */  lw    $t8, ($t7)
/* 2371E4 80224844 0018C880 */  sll   $t9, $t8, 2
/* 2371E8 80224848 00390821 */  addu  $at, $at, $t9
/* 2371EC 8022484C 0C02BE85 */  jal   func_800AFA14_ovl18
/* 2371F0 80224850 AC2E9E20 */ sw $t6, %lo(D_800E9E20)($at)
/* 2371F4 80224854 8FBF0014 */  lw    $ra, 0x14($sp)
/* 2371F8 80224858 27BD0018 */  addiu $sp, $sp, 0x18
/* 2371FC 8022485C 03E00008 */  jr    $ra
/* 237200 80224860 00000000 */   nop   
