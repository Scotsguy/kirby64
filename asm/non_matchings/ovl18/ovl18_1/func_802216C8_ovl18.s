glabel func_802216C8_ovl18
/* 234068 802216C8 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 23406C 802216CC 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 234070 802216D0 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 234074 802216D4 AFBF0014 */  sw    $ra, 0x14($sp)
/* 234078 802216D8 AFA40018 */  sw    $a0, 0x18($sp)
/* 23407C 802216DC 8C4F0000 */  lw    $t7, ($v0)
/* 234080 802216E0 3C0E800B */  lui   $t6, %hi(D_800B7790) # $t6, 0x800b
/* 234084 802216E4 3C01800E */ lui $at, %hi(D_800DEF90)
/* 234088 802216E8 000FC080 */  sll   $t8, $t7, 2
/* 23408C 802216EC 00380821 */  addu  $at, $at, $t8
/* 234090 802216F0 25CE7790 */  addiu $t6, %lo(D_800B7790) # addiu $t6, $t6, 0x7790
/* 234094 802216F4 AC2EEF90 */ sw $t6, %lo(D_800DEF90)($at)
/* 234098 802216F8 8C480000 */  lw    $t0, ($v0)
/* 23409C 802216FC 3C01800F */ lui $at, %hi(D_800E9720)
/* 2340A0 80221700 2419000F */  li    $t9, 15
/* 2340A4 80221704 00084880 */  sll   $t1, $t0, 2
/* 2340A8 80221708 00290821 */  addu  $at, $at, $t1
/* 2340AC 8022170C AC399720 */ sw $t9, %lo(D_800E9720)($at)
/* 2340B0 80221710 8C4B0000 */  lw    $t3, ($v0)
/* 2340B4 80221714 3C01800F */ lui $at, %hi(D_800E9560)
/* 2340B8 80221718 240A0001 */  li    $t2, 1
/* 2340BC 8022171C 000B6080 */  sll   $t4, $t3, 2
/* 2340C0 80221720 002C0821 */  addu  $at, $at, $t4
/* 2340C4 80221724 AC2A9560 */ sw $t2, %lo(D_800E9560)($at)
/* 2340C8 80221728 8C4D0000 */  lw    $t5, ($v0)
/* 2340CC 8022172C 3C04800E */ lui $a0, %hi(D_800E7880)
/* 2340D0 80221730 3C068023 */  lui   $a2, %hi(D_8022ABAC) # $a2, 0x8023
/* 2340D4 80221734 008D2021 */  addu  $a0, $a0, $t5
/* 2340D8 80221738 90847880 */ lbu $a0, %lo(D_800E7880)($a0)
/* 2340DC 8022173C 24C6ABAC */  addiu $a2, %lo(D_8022ABAC) # addiu $a2, $a2, -0x5454
/* 2340E0 80221740 0C02911F */  jal   func_800A447C_ovl18
/* 2340E4 80221744 24050001 */   li    $a1, 1
/* 2340E8 80221748 8FBF0014 */  lw    $ra, 0x14($sp)
/* 2340EC 8022174C 27BD0018 */  addiu $sp, $sp, 0x18
/* 2340F0 80221750 03E00008 */  jr    $ra
/* 2340F4 80221754 00000000 */   nop   
