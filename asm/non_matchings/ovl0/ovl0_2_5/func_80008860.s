glabel func_80008860
/* 009460 80008860 3C028005 */  lui   $v0, %hi(D_8004A79C) # $v0, 0x8005
/* 009464 80008864 2442A79C */  addiu $v0, %lo(D_8004A79C) # addiu $v0, $v0, -0x5864
/* 009468 80008868 8C4E0000 */  lw    $t6, ($v0)
/* 00946C 8000886C 3C038005 */  lui   $v1, %hi(D_8004A7A0) # $v1, 0x8005
/* 009470 80008870 2463A7A0 */  addiu $v1, %lo(D_8004A7A0) # addiu $v1, $v1, -0x5860
/* 009474 80008874 AC8E0000 */  sw    $t6, ($a0)
/* 009478 80008878 8C6F0000 */  lw    $t7, ($v1)
/* 00947C 8000887C AC440000 */  sw    $a0, ($v0)
/* 009480 80008880 25F8FFFF */  addiu $t8, $t7, -1
/* 009484 80008884 03E00008 */  jr    $ra
/* 009488 80008888 AC780000 */   sw    $t8, ($v1)