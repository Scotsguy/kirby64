glabel func_800AA174
/* 0523C4 800AA174 3C038005 */  lui   $v1, %hi(D_8004A7C4) # $v1, 0x8005
/* 0523C8 800AA178 2463A7C4 */  addiu $v1, %lo(D_8004A7C4) # addiu $v1, $v1, -0x583c
/* 0523CC 800AA17C 8C620000 */  lw    $v0, ($v1)
/* 0523D0 800AA180 3C01800E */  lui   $at, 0x800e
/* 0523D4 800AA184 8C4E0000 */  lw    $t6, ($v0)
/* 0523D8 800AA188 8C58003C */  lw    $t8, 0x3c($v0)
/* 0523DC 800AA18C 000E7880 */  sll   $t7, $t6, 2
/* 0523E0 800AA190 002F0821 */  addu  $at, $at, $t7
/* 0523E4 800AA194 C42425D0 */  lwc1  $f4, 0x25d0($at)
/* 0523E8 800AA198 3C01800E */  lui   $at, 0x800e
/* 0523EC 800AA19C E704001C */  swc1  $f4, 0x1c($t8)
/* 0523F0 800AA1A0 8C620000 */  lw    $v0, ($v1)
/* 0523F4 800AA1A4 8C590000 */  lw    $t9, ($v0)
/* 0523F8 800AA1A8 8C49003C */  lw    $t1, 0x3c($v0)
/* 0523FC 800AA1AC 00194080 */  sll   $t0, $t9, 2
/* 052400 800AA1B0 00280821 */  addu  $at, $at, $t0
/* 052404 800AA1B4 C4262790 */  lwc1  $f6, 0x2790($at)
/* 052408 800AA1B8 3C01800E */  lui   $at, 0x800e
/* 05240C 800AA1BC E5260020 */  swc1  $f6, 0x20($t1)
/* 052410 800AA1C0 8C620000 */  lw    $v0, ($v1)
/* 052414 800AA1C4 8C4A0000 */  lw    $t2, ($v0)
/* 052418 800AA1C8 8C4C003C */  lw    $t4, 0x3c($v0)
/* 05241C 800AA1CC 000A5880 */  sll   $t3, $t2, 2
/* 052420 800AA1D0 002B0821 */  addu  $at, $at, $t3
/* 052424 800AA1D4 C4282950 */  lwc1  $f8, 0x2950($at)
/* 052428 800AA1D8 3C01800E */  lui   $at, 0x800e
/* 05242C 800AA1DC E5880024 */  swc1  $f8, 0x24($t4)
/* 052430 800AA1E0 8C620000 */  lw    $v0, ($v1)
/* 052434 800AA1E4 8C4D0000 */  lw    $t5, ($v0)
/* 052438 800AA1E8 8C4F003C */  lw    $t7, 0x3c($v0)
/* 05243C 800AA1EC 000D7080 */  sll   $t6, $t5, 2
/* 052440 800AA1F0 002E0821 */  addu  $at, $at, $t6
/* 052444 800AA1F4 C42A4010 */  lwc1  $f10, 0x4010($at)
/* 052448 800AA1F8 3C01800E */  lui   $at, 0x800e
/* 05244C 800AA1FC E5EA0030 */  swc1  $f10, 0x30($t7)
/* 052450 800AA200 8C620000 */  lw    $v0, ($v1)
/* 052454 800AA204 8C580000 */  lw    $t8, ($v0)
/* 052458 800AA208 8C48003C */  lw    $t0, 0x3c($v0)
/* 05245C 800AA20C 0018C880 */  sll   $t9, $t8, 2
/* 052460 800AA210 00390821 */  addu  $at, $at, $t9
/* 052464 800AA214 C43041D0 */  lwc1  $f16, 0x41d0($at)
/* 052468 800AA218 3C01800E */  lui   $at, 0x800e
/* 05246C 800AA21C E5100034 */  swc1  $f16, 0x34($t0)
/* 052470 800AA220 8C620000 */  lw    $v0, ($v1)
/* 052474 800AA224 8C490000 */  lw    $t1, ($v0)
/* 052478 800AA228 8C4B003C */  lw    $t3, 0x3c($v0)
/* 05247C 800AA22C 00095080 */  sll   $t2, $t1, 2
/* 052480 800AA230 002A0821 */  addu  $at, $at, $t2
/* 052484 800AA234 C4324390 */  lwc1  $f18, 0x4390($at)
/* 052488 800AA238 3C01800E */  lui   $at, 0x800e
/* 05248C 800AA23C E5720038 */  swc1  $f18, 0x38($t3)
/* 052490 800AA240 8C620000 */  lw    $v0, ($v1)
/* 052494 800AA244 8C4C0000 */  lw    $t4, ($v0)
/* 052498 800AA248 8C4E003C */  lw    $t6, 0x3c($v0)
/* 05249C 800AA24C 000C6880 */  sll   $t5, $t4, 2
/* 0524A0 800AA250 002D0821 */  addu  $at, $at, $t5
/* 0524A4 800AA254 C4244550 */  lwc1  $f4, 0x4550($at)
/* 0524A8 800AA258 3C01800E */  lui   $at, 0x800e
/* 0524AC 800AA25C E5C40040 */  swc1  $f4, 0x40($t6)
/* 0524B0 800AA260 8C620000 */  lw    $v0, ($v1)
/* 0524B4 800AA264 8C4F0000 */  lw    $t7, ($v0)
/* 0524B8 800AA268 8C59003C */  lw    $t9, 0x3c($v0)
/* 0524BC 800AA26C 000FC080 */  sll   $t8, $t7, 2
/* 0524C0 800AA270 00380821 */  addu  $at, $at, $t8
/* 0524C4 800AA274 C4264710 */  lwc1  $f6, 0x4710($at)
/* 0524C8 800AA278 3C01800E */  lui   $at, 0x800e
/* 0524CC 800AA27C E7260044 */  swc1  $f6, 0x44($t9)
/* 0524D0 800AA280 8C620000 */  lw    $v0, ($v1)
/* 0524D4 800AA284 8C480000 */  lw    $t0, ($v0)
/* 0524D8 800AA288 8C4A003C */  lw    $t2, 0x3c($v0)
/* 0524DC 800AA28C 00084880 */  sll   $t1, $t0, 2
/* 0524E0 800AA290 00290821 */  addu  $at, $at, $t1
/* 0524E4 800AA294 C42848D0 */  lwc1  $f8, 0x48d0($at)
/* 0524E8 800AA298 03E00008 */  jr    $ra
/* 0524EC 800AA29C E5480048 */   swc1  $f8, 0x48($t2)
