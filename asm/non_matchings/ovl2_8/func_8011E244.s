glabel func_8011E244
/* 0A6CB4 8011E244 3C0E800F */  lui   $t6, %hi(D_800E8920) # $t6, 0x800f
/* 0A6CB8 8011E248 8DCE8920 */  lw    $t6, %lo(D_800E8920)($t6)
/* 0A6CBC 8011E24C 24010001 */  li    $at, 1
/* 0A6CC0 8011E250 24020014 */  li    $v0, 20
/* 0A6CC4 8011E254 15C10004 */  bne   $t6, $at, .L8011E268_ovl2
/* 0A6CC8 8011E258 00000000 */   nop   
/* 0A6CCC 8011E25C 3C028013 */  lui   $v0, 0x8013
/* 0A6CD0 8011E260 03E00008 */  jr    $ra
/* 0A6CD4 8011E264 9042E9B8 */   lbu   $v0, -0x1648($v0)

.L8011E268_ovl2:
/* 0A6CD8 8011E268 03E00008 */  jr    $ra
/* 0A6CDC 8011E26C 00000000 */   nop   
