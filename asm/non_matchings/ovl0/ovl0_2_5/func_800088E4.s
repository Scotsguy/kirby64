glabel func_800088E4
/* 0094E4 800088E4 3C028005 */  lui   $v0, %hi(D_8004A7A4) # $v0, 0x8005
/* 0094E8 800088E8 2442A7A4 */  addiu $v0, %lo(D_8004A7A4) # addiu $v0, $v0, -0x585c
/* 0094EC 800088EC 8C4E0000 */  lw    $t6, ($v0)
/* 0094F0 800088F0 3C038005 */  lui   $v1, %hi(D_8004A7A8) # $v1, 0x8005
/* 0094F4 800088F4 2463A7A8 */  addiu $v1, %lo(D_8004A7A8) # addiu $v1, $v1, -0x5858
/* 0094F8 800088F8 AC8E0000 */  sw    $t6, ($a0)
/* 0094FC 800088FC 8C6F0000 */  lw    $t7, ($v1)
/* 009500 80008900 AC440000 */  sw    $a0, ($v0)
/* 009504 80008904 25F8FFFF */  addiu $t8, $t7, -1
/* 009508 80008908 03E00008 */  jr    $ra
/* 00950C 8000890C AC780000 */   sw    $t8, ($v1)
