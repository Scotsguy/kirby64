glabel func_800BA284
/* 0624D4 800BA284 00047080 */  sll   $t6, $a0, 2
/* 0624D8 800BA288 01C47023 */  subu  $t6, $t6, $a0
/* 0624DC 800BA28C 000E7080 */  sll   $t6, $t6, 2
/* 0624E0 800BA290 01C47023 */  subu  $t6, $t6, $a0
/* 0624E4 800BA294 3C0F800F */  lui   $t7, %hi(gSaveBuffer1) # $t7, 0x800f
/* 0624E8 800BA298 25EFC9F8 */  addiu $t7, %lo(gSaveBuffer1) # addiu $t7, $t7, -0x3608
/* 0624EC 800BA29C 000E70C0 */  sll   $t6, $t6, 3
/* 0624F0 800BA2A0 01CF2821 */  addu  $a1, $t6, $t7
/* 0624F4 800BA2A4 90A8002E */  lbu   $t0, 0x2e($a1)
/* 0624F8 800BA2A8 3C01800D */  lui   $at, %hi(D_800D6C10) # $at, 0x800d
/* 0624FC 800BA2AC 3C03800D */  lui   $v1, %hi(D_800D6C18) # $v1, 0x800d
/* 062500 800BA2B0 31180003 */  andi  $t8, $t0, 3
/* 062504 800BA2B4 A0386C10 */  sb    $t8, %lo(D_800D6C10)($at)
/* 062508 800BA2B8 0008C883 */  sra   $t9, $t0, 2
/* 06250C 800BA2BC 332A0003 */  andi  $t2, $t9, 3
/* 062510 800BA2C0 3C01800D */  lui   $at, %hi(D_800D6C11) # $at, 0x800d
/* 062514 800BA2C4 A02A6C11 */  sb    $t2, %lo(D_800D6C11)($at)
/* 062518 800BA2C8 00085903 */  sra   $t3, $t0, 4
/* 06251C 800BA2CC 316C0003 */  andi  $t4, $t3, 3
/* 062520 800BA2D0 3C01800D */  lui   $at, %hi(D_800D6C12) # $at, 0x800d
/* 062524 800BA2D4 A02C6C12 */  sb    $t4, %lo(D_800D6C12)($at)
/* 062528 800BA2D8 00086983 */  sra   $t5, $t0, 6
/* 06252C 800BA2DC 31AE0003 */  andi  $t6, $t5, 3
/* 062530 800BA2E0 3C01800D */  lui   $at, %hi(D_800D6C13) # $at, 0x800d
/* 062534 800BA2E4 A02E6C13 */  sb    $t6, %lo(D_800D6C13)($at)
/* 062538 800BA2E8 90A9002F */  lbu   $t1, 0x2f($a1)
/* 06253C 800BA2EC 3C01800D */  lui   $at, %hi(D_800D6C14) # $at, 0x800d
/* 062540 800BA2F0 3C08800D */  lui   $t0, %hi(D_800D6C68) # $t0, 0x800d
/* 062544 800BA2F4 312F0003 */  andi  $t7, $t1, 3
/* 062548 800BA2F8 A02F6C14 */  sb    $t7, %lo(D_800D6C14)($at)
/* 06254C 800BA2FC 0009C083 */  sra   $t8, $t1, 2
/* 062550 800BA300 33190003 */  andi  $t9, $t8, 3
/* 062554 800BA304 3C01800D */  lui   $at, %hi(D_800D6C15) # $at, 0x800d
/* 062558 800BA308 A0396C15 */  sb    $t9, %lo(D_800D6C15)($at)
/* 06255C 800BA30C 00095103 */  sra   $t2, $t1, 4
/* 062560 800BA310 314B0003 */  andi  $t3, $t2, 3
/* 062564 800BA314 3C01800D */  lui   $at, %hi(D_800D6C16) # $at, 0x800d
/* 062568 800BA318 A02B6C16 */  sb    $t3, %lo(D_800D6C16)($at)
/* 06256C 800BA31C 00096183 */  sra   $t4, $t1, 6
/* 062570 800BA320 318D0003 */  andi  $t5, $t4, 3
/* 062574 800BA324 3C01800D */  lui   $at, %hi(D_800D6C17) # $at, 0x800d
/* 062578 800BA328 A02D6C17 */  sb    $t5, %lo(D_800D6C17)($at)
/* 06257C 800BA32C 25086C68 */  addiu $t0, %lo(D_800D6C68) # addiu $t0, $t0, 0x6c68
/* 062580 800BA330 24636C18 */  addiu $v1, %lo(D_800D6C18) # addiu $v1, $v1, 0x6c18
/* 062584 800BA334 24A60002 */  addiu $a2, $a1, 2
.L800BA338_ovl1:
/* 062588 800BA338 90C2002E */  lbu   $v0, 0x2e($a2)
/* 06258C 800BA33C 90C4002F */  lbu   $a0, 0x2f($a2)
/* 062590 800BA340 90C50030 */  lbu   $a1, 0x30($a2)
/* 062594 800BA344 00027883 */  sra   $t7, $v0, 2
/* 062598 800BA348 31F80003 */  andi  $t8, $t7, 3
/* 06259C 800BA34C 304E0003 */  andi  $t6, $v0, 3
/* 0625A0 800BA350 A06E0000 */  sb    $t6, ($v1)
/* 0625A4 800BA354 0002C903 */  sra   $t9, $v0, 4
/* 0625A8 800BA358 A0780001 */  sb    $t8, 1($v1)
/* 0625AC 800BA35C 332A0003 */  andi  $t2, $t9, 3
/* 0625B0 800BA360 00025983 */  sra   $t3, $v0, 6
/* 0625B4 800BA364 00047083 */  sra   $t6, $a0, 2
/* 0625B8 800BA368 90C70031 */  lbu   $a3, 0x31($a2)
/* 0625BC 800BA36C 31CF0003 */  andi  $t7, $t6, 3
/* 0625C0 800BA370 316C0003 */  andi  $t4, $t3, 3
/* 0625C4 800BA374 0004C103 */  sra   $t8, $a0, 4
/* 0625C8 800BA378 308D0003 */  andi  $t5, $a0, 3
/* 0625CC 800BA37C A06D0004 */  sb    $t5, 4($v1)
/* 0625D0 800BA380 33190003 */  andi  $t9, $t8, 3
/* 0625D4 800BA384 A06F0005 */  sb    $t7, 5($v1)
/* 0625D8 800BA388 A06A0002 */  sb    $t2, 2($v1)
/* 0625DC 800BA38C A06C0003 */  sb    $t4, 3($v1)
/* 0625E0 800BA390 00045183 */  sra   $t2, $a0, 6
/* 0625E4 800BA394 00057903 */  sra   $t7, $a1, 4
/* 0625E8 800BA398 00056883 */  sra   $t5, $a1, 2
/* 0625EC 800BA39C 31AE0003 */  andi  $t6, $t5, 3
/* 0625F0 800BA3A0 31F80003 */  andi  $t8, $t7, 3
/* 0625F4 800BA3A4 314B0003 */  andi  $t3, $t2, 3
/* 0625F8 800BA3A8 A0790006 */  sb    $t9, 6($v1)
/* 0625FC 800BA3AC 30AC0003 */  andi  $t4, $a1, 3
/* 062600 800BA3B0 A06C0008 */  sb    $t4, 8($v1)
/* 062604 800BA3B4 A078000A */  sb    $t8, 0xa($v1)
/* 062608 800BA3B8 A06E0009 */  sb    $t6, 9($v1)
/* 06260C 800BA3BC 0005C983 */  sra   $t9, $a1, 6
/* 062610 800BA3C0 332A0003 */  andi  $t2, $t9, 3
/* 062614 800BA3C4 A06B0007 */  sb    $t3, 7($v1)
/* 062618 800BA3C8 00077103 */  sra   $t6, $a3, 4
/* 06261C 800BA3CC 0007C183 */  sra   $t8, $a3, 6
/* 062620 800BA3D0 00076083 */  sra   $t4, $a3, 2
/* 062624 800BA3D4 318D0003 */  andi  $t5, $t4, 3
/* 062628 800BA3D8 33190003 */  andi  $t9, $t8, 3
/* 06262C 800BA3DC 31CF0003 */  andi  $t7, $t6, 3
/* 062630 800BA3E0 24630010 */  addiu $v1, $v1, 0x10
/* 062634 800BA3E4 30EB0003 */  andi  $t3, $a3, 3
/* 062638 800BA3E8 A06BFFFC */  sb    $t3, -4($v1)
/* 06263C 800BA3EC A06FFFFE */  sb    $t7, -2($v1)
/* 062640 800BA3F0 A079FFFF */  sb    $t9, -1($v1)
/* 062644 800BA3F4 A06DFFFD */  sb    $t5, -3($v1)
/* 062648 800BA3F8 A06AFFFB */  sb    $t2, -5($v1)
/* 06264C 800BA3FC 1468FFCE */  bne   $v1, $t0, .L800BA338_ovl1
/* 062650 800BA400 24C60004 */   addiu $a2, $a2, 4
/* 062654 800BA404 03E00008 */  jr    $ra
/* 062658 800BA408 00000000 */   nop   
