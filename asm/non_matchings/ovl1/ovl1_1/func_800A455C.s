glabel vec3_dist_square
/* 04C7AC 800A455C C4A40000 */  lwc1  $f4, ($a1)
/* 04C7B0 800A4560 C4860000 */  lwc1  $f6, ($a0)
/* 04C7B4 800A4564 C4A80004 */  lwc1  $f8, 4($a1)
/* 04C7B8 800A4568 C48A0004 */  lwc1  $f10, 4($a0)
/* 04C7BC 800A456C 46062081 */  sub.s $f2, $f4, $f6
/* 04C7C0 800A4570 C4B00008 */  lwc1  $f16, 8($a1)
/* 04C7C4 800A4574 C4920008 */  lwc1  $f18, 8($a0)
/* 04C7C8 800A4578 460A4301 */  sub.s $f12, $f8, $f10
/* 04C7CC 800A457C 46021102 */  mul.s $f4, $f2, $f2
/* 04C7D0 800A4580 46128381 */  sub.s $f14, $f16, $f18
/* 04C7D4 800A4584 460C6182 */  mul.s $f6, $f12, $f12
/* 04C7D8 800A4588 46062200 */  add.s $f8, $f4, $f6
/* 04C7DC 800A458C 460E7282 */  mul.s $f10, $f14, $f14
/* 04C7E0 800A4590 03E00008 */  jr    $ra
/* 04C7E4 800A4594 460A4000 */   add.s $f0, $f8, $f10
