glabel func_80224ABC_ovl18
/* 23745C 80224ABC 44866000 */  mtc1  $a2, $f12
/* 237460 80224AC0 14A0000A */  bnez  $a1, .L80224AEC_ovl18
/* 237464 80224AC4 AFA40000 */   sw    $a0, ($sp)
/* 237468 80224AC8 3C188005 */  lui   $t8, %hi(D_8004A7C4) # $t8, 0x8005
/* 23746C 80224ACC 8F18A7C4 */  lw    $t8, %lo(D_8004A7C4)($t8)
/* 237470 80224AD0 4600610D */  trunc.w.s $f4, $f12
/* 237474 80224AD4 3C01800F */ lui $at, %hi(D_800E9C60)
/* 237478 80224AD8 8F190000 */  lw    $t9, ($t8)
/* 23747C 80224ADC 440F2000 */  mfc1  $t7, $f4
/* 237480 80224AE0 00194080 */  sll   $t0, $t9, 2
/* 237484 80224AE4 00280821 */  addu  $at, $at, $t0
/* 237488 80224AE8 AC2F9C60 */ sw $t7, %lo(D_800E9C60)($at)
.L80224AEC_ovl18:
/* 23748C 80224AEC 03E00008 */  jr    $ra
/* 237490 80224AF0 00000000 */   nop   
