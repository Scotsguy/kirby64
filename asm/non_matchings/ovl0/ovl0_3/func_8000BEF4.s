glabel func_8000BEF4
/* 00CAF4 8000BEF4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00CAF8 8000BEF8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00CAFC 8000BEFC AFB00020 */  sw    $s0, 0x20($sp)
/* 00CB00 8000BF00 F7B40018 */  sdc1  $f20, 0x18($sp)
/* 00CB04 8000BF04 8C90003C */  lw    $s0, 0x3c($a0)
/* 00CB08 8000BF08 4485A000 */  mtc1  $a1, $f20
/* 00CB0C 8000BF0C 52000007 */  beql  $s0, $zero, .L8000BF2C_ovl0
/* 00CB10 8000BF10 8FBF0024 */   lw    $ra, 0x24($sp)
.L8000BF14_ovl0:
/* 00CB14 8000BF14 E6140078 */  swc1  $f20, 0x78($s0)
/* 00CB18 8000BF18 0C002FA4 */  jal   func_8000BE90
/* 00CB1C 8000BF1C 02002025 */   move  $a0, $s0
/* 00CB20 8000BF20 1440FFFC */  bnez  $v0, .L8000BF14_ovl0
/* 00CB24 8000BF24 00408025 */   move  $s0, $v0
/* 00CB28 8000BF28 8FBF0024 */  lw    $ra, 0x24($sp)
.L8000BF2C_ovl0:
/* 00CB2C 8000BF2C D7B40018 */  ldc1  $f20, 0x18($sp)
/* 00CB30 8000BF30 8FB00020 */  lw    $s0, 0x20($sp)
/* 00CB34 8000BF34 03E00008 */  jr    $ra
/* 00CB38 8000BF38 27BD0028 */   addiu $sp, $sp, 0x28
