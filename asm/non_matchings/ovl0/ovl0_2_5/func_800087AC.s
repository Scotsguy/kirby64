glabel func_800087AC
/* 0093AC 800087AC 3C028005 */  lui   $v0, %hi(D_8004A790) # $v0, 0x8005
/* 0093B0 800087B0 2442A790 */  addiu $v0, %lo(D_8004A790) # addiu $v0, $v0, -0x5870
/* 0093B4 800087B4 8C4E0000 */  lw    $t6, ($v0)
/* 0093B8 800087B8 3C038005 */  lui   $v1, %hi(D_8004A794) # $v1, 0x8005
/* 0093BC 800087BC 2463A794 */  addiu $v1, %lo(D_8004A794) # addiu $v1, $v1, -0x586c
/* 0093C0 800087C0 AC8E0000 */  sw    $t6, ($a0)
/* 0093C4 800087C4 8C6F0000 */  lw    $t7, ($v1)
/* 0093C8 800087C8 AC440000 */  sw    $a0, ($v0)
/* 0093CC 800087CC 25F8FFFF */  addiu $t8, $t7, -1
/* 0093D0 800087D0 03E00008 */  jr    $ra
/* 0093D4 800087D4 AC780000 */   sw    $t8, ($v1)
