glabel func_800075DC
/* 0081DC 800075DC 3C018005 */  lui   $at, %hi(D_800492D8) # $at, 0x8005
/* 0081E0 800075E0 A42492D8 */  sh    $a0, %lo(D_800492D8)($at)
/* 0081E4 800075E4 3C018005 */  lui   $at, 0x8005
/* 0081E8 800075E8 AFA40000 */  sw    $a0, ($sp)
/* 0081EC 800075EC AFA50004 */  sw    $a1, 4($sp)
/* 0081F0 800075F0 03E00008 */  jr    $ra
/* 0081F4 800075F4 A42592DA */   sh    $a1, -0x6d26($at)
