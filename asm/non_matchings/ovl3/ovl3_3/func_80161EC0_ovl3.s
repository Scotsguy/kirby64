glabel func_80161EC0_ovl3
/* 0C2900 80161EC0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0C2904 80161EC4 44856000 */  mtc1  $a1, $f12
/* 0C2908 80161EC8 00802825 */  move  $a1, $a0
/* 0C290C 80161ECC AFBF0014 */  sw    $ra, 0x14($sp)
/* 0C2910 80161ED0 AFA40030 */  sw    $a0, 0x30($sp)
/* 0C2914 80161ED4 1080000F */  beqz  $a0, .L80161F14_ovl3
/* 0C2918 80161ED8 AFA60038 */   sw    $a2, 0x38($sp)
/* 0C291C 80161EDC 3C0E8005 */  lui   $t6, %hi(D_8004A7C4) # $t6, 0x8005
/* 0C2920 80161EE0 8DCEA7C4 */  lw    $t6, %lo(D_8004A7C4)($t6)
/* 0C2924 80161EE4 3C06800E */  lui   $a2, 0x800e
/* 0C2928 80161EE8 27A40024 */  addiu $a0, $sp, 0x24
/* 0C292C 80161EEC 8DCF0000 */  lw    $t7, ($t6)
/* 0C2930 80161EF0 E7AC0034 */  swc1  $f12, 0x34($sp)
/* 0C2934 80161EF4 000FC080 */  sll   $t8, $t7, 2
/* 0C2938 80161EF8 00D83021 */  addu  $a2, $a2, $t8
/* 0C293C 80161EFC 0C02C8D0 */  jal   func_800B2340_ovl3
/* 0C2940 80161F00 8CC60D50 */   lw    $a2, 0xd50($a2)
/* 0C2944 80161F04 3C048005 */  lui   $a0, %hi(D_8004A7C4) # $a0, 0x8005
/* 0C2948 80161F08 8C84A7C4 */  lw    $a0, %lo(D_8004A7C4)($a0)
/* 0C294C 80161F0C 1000000D */  b     .L80161F44_ovl3
/* 0C2950 80161F10 C7AC0034 */   lwc1  $f12, 0x34($sp)
.L80161F14_ovl3:
/* 0C2954 80161F14 3C048005 */  lui   $a0, %hi(D_8004A7C4) # $a0, 0x8005
/* 0C2958 80161F18 8C84A7C4 */  lw    $a0, %lo(D_8004A7C4)($a0)
/* 0C295C 80161F1C 3C09800E */  lui   $t1, 0x800e
/* 0C2960 80161F20 3C01800E */  lui   $at, 0x800e
/* 0C2964 80161F24 8C990000 */  lw    $t9, ($a0)
/* 0C2968 80161F28 00194080 */  sll   $t0, $t9, 2
/* 0C296C 80161F2C 01284821 */  addu  $t1, $t1, $t0
/* 0C2970 80161F30 8D290D50 */  lw    $t1, 0xd50($t1)
/* 0C2974 80161F34 00095080 */  sll   $t2, $t1, 2
/* 0C2978 80161F38 002A0821 */  addu  $at, $at, $t2
/* 0C297C 80161F3C C4242790 */  lwc1  $f4, 0x2790($at)
/* 0C2980 80161F40 E7A40028 */  swc1  $f4, 0x28($sp)
.L80161F44_ovl3:
/* 0C2984 80161F44 8C8B0000 */  lw    $t3, ($a0)
/* 0C2988 80161F48 44800000 */  mtc1  $zero, $f0
/* 0C298C 80161F4C 3C01800E */  lui   $at, 0x800e
/* 0C2990 80161F50 000B6080 */  sll   $t4, $t3, 2
/* 0C2994 80161F54 C7A60028 */  lwc1  $f6, 0x28($sp)
/* 0C2998 80161F58 C7A80038 */  lwc1  $f8, 0x38($sp)
/* 0C299C 80161F5C 002C0821 */  addu  $at, $at, $t4
/* 0C29A0 80161F60 E42025D0 */  swc1  $f0, 0x25d0($at)
/* 0C29A4 80161F64 8C8D0000 */  lw    $t5, ($a0)
/* 0C29A8 80161F68 46083280 */  add.s $f10, $f6, $f8
/* 0C29AC 80161F6C 3C01800E */  lui   $at, 0x800e
/* 0C29B0 80161F70 000D7080 */  sll   $t6, $t5, 2
/* 0C29B4 80161F74 002E0821 */  addu  $at, $at, $t6
/* 0C29B8 80161F78 E42A2790 */  swc1  $f10, 0x2790($at)
/* 0C29BC 80161F7C 8C8F0000 */  lw    $t7, ($a0)
/* 0C29C0 80161F80 3C01800E */  lui   $at, 0x800e
/* 0C29C4 80161F84 44802000 */  mtc1  $zero, $f4
/* 0C29C8 80161F88 000FC080 */  sll   $t8, $t7, 2
/* 0C29CC 80161F8C 00380821 */  addu  $at, $at, $t8
/* 0C29D0 80161F90 E4202950 */  swc1  $f0, 0x2950($at)
/* 0C29D4 80161F94 8C820000 */  lw    $v0, ($a0)
/* 0C29D8 80161F98 3C01BF80 */  li    $at, 0xBF800000 # -1.000000
/* 0C29DC 80161F9C 44818000 */  mtc1  $at, $f16
/* 0C29E0 80161FA0 3C01800E */  lui   $at, 0x800e
/* 0C29E4 80161FA4 0002C880 */  sll   $t9, $v0, 2
/* 0C29E8 80161FA8 00390821 */  addu  $at, $at, $t9
/* 0C29EC 80161FAC C4326A10 */  lwc1  $f18, 0x6a10($at)
/* 0C29F0 80161FB0 46128032 */  c.eq.s $f16, $f18
/* 0C29F4 80161FB4 00000000 */  nop   
/* 0C29F8 80161FB8 45020003 */  bc1fl .L80161FC8_ovl3
/* 0C29FC 80161FBC 46046032 */   c.eq.s $f12, $f4
/* 0C2A00 80161FC0 46006307 */  neg.s $f12, $f12
/* 0C2A04 80161FC4 46046032 */  c.eq.s $f12, $f4
.L80161FC8_ovl3:
/* 0C2A08 80161FC8 00000000 */  nop   
/* 0C2A0C 80161FCC 45010006 */  bc1t  .L80161FE8_ovl3
/* 0C2A10 80161FD0 00000000 */   nop   
/* 0C2A14 80161FD4 44056000 */  mfc1  $a1, $f12
/* 0C2A18 80161FD8 0C03E63B */  jal   func_800F98EC_ovl3
/* 0C2A1C 80161FDC 00402025 */   move  $a0, $v0
/* 0C2A20 80161FE0 3C048005 */  lui   $a0, %hi(D_8004A7C4) # $a0, 0x8005
/* 0C2A24 80161FE4 8C84A7C4 */  lw    $a0, %lo(D_8004A7C4)($a0)
.L80161FE8_ovl3:
/* 0C2A28 80161FE8 0C03E39B */  jal   func_800F8E6C_ovl3
/* 0C2A2C 80161FEC 00000000 */   nop   
/* 0C2A30 80161FF0 8FBF0014 */  lw    $ra, 0x14($sp)
/* 0C2A34 80161FF4 27BD0030 */  addiu $sp, $sp, 0x30
/* 0C2A38 80161FF8 03E00008 */  jr    $ra
/* 0C2A3C 80161FFC 00000000 */   nop   