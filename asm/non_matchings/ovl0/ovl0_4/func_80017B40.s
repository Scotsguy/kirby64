glabel func_80017B40
/* 018740 80017B40 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 018744 80017B44 AFBF0014 */  sw    $ra, 0x14($sp)
/* 018748 80017B48 8C820088 */  lw    $v0, 0x88($a0)
/* 01874C 80017B4C 50400004 */  beql  $v0, $zero, .L80017B60_ovl0
/* 018750 80017B50 8FBF0014 */   lw    $ra, 0x14($sp)
/* 018754 80017B54 0040F809 */  jalr  $v0
/* 018758 80017B58 00000000 */  nop   
/* 01875C 80017B5C 8FBF0014 */  lw    $ra, 0x14($sp)
.L80017B60_ovl0:
/* 018760 80017B60 27BD0018 */  addiu $sp, $sp, 0x18
/* 018764 80017B64 03E00008 */  jr    $ra
/* 018768 80017B68 00000000 */   nop   
