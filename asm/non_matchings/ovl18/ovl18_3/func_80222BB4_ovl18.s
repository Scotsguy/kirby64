glabel func_80222BB4_ovl18
/* 235554 80222BB4 3C0E8005 */  lui   $t6, %hi(D_8004A7C4) # $t6, 0x8005
/* 235558 80222BB8 8DCEA7C4 */  lw    $t6, %lo(D_8004A7C4)($t6)
/* 23555C 80222BBC 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 235560 80222BC0 AFBF0014 */  sw    $ra, 0x14($sp)
/* 235564 80222BC4 AFA40018 */  sw    $a0, 0x18($sp)
/* 235568 80222BC8 8DCF0000 */  lw    $t7, ($t6)
/* 23556C 80222BCC 3C02800E */ lui $v0, %hi(D_800E1B50)
/* 235570 80222BD0 3C01440C */  li    $at, 0x440C0000 # 560.000000
/* 235574 80222BD4 000FC080 */  sll   $t8, $t7, 2
/* 235578 80222BD8 00581021 */  addu  $v0, $v0, $t8
/* 23557C 80222BDC 8C421B50 */ lw $v0, %lo(D_800E1B50)($v0)
/* 235580 80222BE0 9059003C */  lbu   $t9, 0x3c($v0)
/* 235584 80222BE4 57200024 */  bnezl $t9, .L80222C78_ovl18
/* 235588 80222BE8 8FBF0014 */   lw    $ra, 0x14($sp)
/* 23558C 80222BEC 44816000 */  mtc1  $at, $f12
/* 235590 80222BF0 0C0669FA */  jal   func_8019A7E8_ovl18
/* 235594 80222BF4 00000000 */   nop   
/* 235598 80222BF8 1040001E */  beqz  $v0, .L80222C74_ovl18
/* 23559C 80222BFC 3C0142A0 */   li    $at, 0x42A00000 # 80.000000
/* 2355A0 80222C00 44816000 */  mtc1  $at, $f12
/* 2355A4 80222C04 0C066C98 */  jal   func_8019B260_ovl18
/* 2355A8 80222C08 00000000 */   nop   
/* 2355AC 80222C0C 24030001 */  li    $v1, 1
/* 2355B0 80222C10 14430009 */  bne   $v0, $v1, .L80222C38_ovl18
/* 2355B4 80222C14 3C04800E */ lui $a0, %hi(D_800DE510)
/* 2355B8 80222C18 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 2355BC 80222C1C 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 2355C0 80222C20 3C01800E */ lui $at, %hi(D_800DDC50)
/* 2355C4 80222C24 8C480000 */  lw    $t0, ($v0)
/* 2355C8 80222C28 00084880 */  sll   $t1, $t0, 2
/* 2355CC 80222C2C 00290821 */  addu  $at, $at, $t1
/* 2355D0 80222C30 10000009 */  b     .L80222C58_ovl18
/* 2355D4 80222C34 AC23DC50 */ sw $v1, %lo(D_800DDC50)($at)
.L80222C38_ovl18:
/* 2355D8 80222C38 3C028005 */  lui   $v0, %hi(D_8004A7C4) # $v0, 0x8005
/* 2355DC 80222C3C 8C42A7C4 */  lw    $v0, %lo(D_8004A7C4)($v0)
/* 2355E0 80222C40 3C01800E */ lui $at, %hi(D_800DDC50)
/* 2355E4 80222C44 240A0003 */  li    $t2, 3
/* 2355E8 80222C48 8C4B0000 */  lw    $t3, ($v0)
/* 2355EC 80222C4C 000B6080 */  sll   $t4, $t3, 2
/* 2355F0 80222C50 002C0821 */  addu  $at, $at, $t4
/* 2355F4 80222C54 AC2ADC50 */ sw $t2, %lo(D_800DDC50)($at)
.L80222C58_ovl18:
/* 2355F8 80222C58 8C4D0000 */  lw    $t5, ($v0)
/* 2355FC 80222C5C 3C058022 */  lui   $a1, %hi(D_802228F8) # $a1, 0x8022
/* 235600 80222C60 24A528F8 */  addiu $a1, %lo(D_802228F8) # addiu $a1, $a1, 0x28f8
/* 235604 80222C64 000D7080 */  sll   $t6, $t5, 2
/* 235608 80222C68 008E2021 */  addu  $a0, $a0, $t6
/* 23560C 80222C6C 0C02C7B2 */  jal   func_800B1EC8_ovl18
/* 235610 80222C70 8C84E510 */ lw $a0, %lo(D_800DE510)($a0)
.L80222C74_ovl18:
/* 235614 80222C74 8FBF0014 */  lw    $ra, 0x14($sp)
.L80222C78_ovl18:
/* 235618 80222C78 27BD0018 */  addiu $sp, $sp, 0x18
/* 23561C 80222C7C 03E00008 */  jr    $ra
/* 235620 80222C80 00000000 */   nop   