glabel func_80010B20
/* 011720 80010B20 3C018004 */  lui   $at, %hi(D_8003DF10) # $at, 0x8004
/* 011724 80010B24 AC24DF10 */  sw    $a0, %lo(D_8003DF10)($at)
/* 011728 80010B28 3C018004 */  lui   $at, %hi(D_8003DF14) # $at, 0x8004
/* 01172C 80010B2C AC25DF14 */  sw    $a1, %lo(D_8003DF14)($at)
/* 011730 80010B30 3C018004 */  lui   $at, %hi(D_8003DF18) # $at, 0x8004
/* 011734 80010B34 AC26DF18 */  sw    $a2, %lo(D_8003DF18)($at)
/* 011738 80010B38 3C018004 */  lui   $at, 0x8004
/* 01173C 80010B3C 03E00008 */  jr    $ra
/* 011740 80010B40 AC27DF1C */   sw    $a3, -0x20e4($at)