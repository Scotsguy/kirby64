#include <ultra64.h>
#include <macros.h>

extern Gfx *gDisplayListHeads[4];
#ifdef MIPS_TO_C
void func_800FDA40_ovl2(Vtx *vtxList, f32 arg1, f32 arg2) {
    vtxList[1].v.ob[1] = arg2;
    vtxList[0].v.ob[1] = arg2;
    vtxList[3].v.ob[1] = arg1;
    vtxList[2].v.ob[1] = arg1;
     vtxList +=3;
    gSPVertex(gDisplayListHeads[0]++, vtxList, 4, 0);
    gSP2Triangles(gDisplayListHeads[0]++, 2, 3, 1, 0, 0, 2, 1, 0);
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDA40_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FDAB8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f18;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f6_3;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;

    temp_v0 = arg0 + 0x40;
    temp_f6 = (s32) arg2;
    temp_a0 = temp_v0 + 0x30;
    temp_f18 = (s32) ((-40.0f * arg4) + 20.0f);
    temp_v0->unk2 = (s16) temp_f6;
    temp_v0->unk12 = (s16) temp_f6;
    temp_f6_2 = (s32) (4032.0f * arg4);
    temp_v0->unk4 = (s16) temp_f18;
    temp_v0->unk14 = (s16) temp_f18;
    temp_v0->unkA = (s16) temp_f6_2;
    temp_v0->unk1A = (s16) temp_f6_2;
    temp_f10 = (s32) arg1;
    temp_f6_3 = (s32) ((-40.0f * arg3) + 20.0f);
    temp_v0->unk22 = (s16) temp_f10;
    temp_f10_2 = (s32) (4032.0f * arg3);
    temp_v0->unk24 = (s16) temp_f6_3;
    temp_v0->unk2A = (s16) temp_f10_2;
    temp_a0->unk2 = (s16) temp_f10;
    temp_a0->unk4 = (s16) temp_f6_3;
    temp_a0->unkA = (s16) temp_f10_2;

    temp_a1 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_a1 + 8);
    temp_a1->unk4 = temp_v0;
    temp_a1->unk0 = 0x1004008;

    temp_a1_2 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_a1_2 + 8);
    temp_a1_2->unk4 = 0x402;
    temp_a1_2->unk0 = 0x6040602;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDAB8.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FDBB0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_f14;
    s32 temp_f12;
    s32 temp_f12_2;
    s32 temp_f16;
    s32 temp_f18;
    s32 temp_f18_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    temp_f14 = -40.0f * arg4;
    arg0->unk2 = arg2;
    arg0->unk12 = arg2;
    temp_f12 = (s32) arg1;
    arg0->unk22 = (s16) arg1;
    temp_f18_2 = (s32) (temp_f14 + 20.0f);
    arg0->unk32 = (s16) temp_f12;
    temp_f16 = (s32) (4032.0f * arg4);
    temp_f12_2 = (s32) arg3;
    arg0->unk44 = (s16) temp_f18_2;
    arg0->unk54 = (s16) temp_f18_2;
    arg0->unk4A = (s16) temp_f16;
    arg0->unk5A = (s16) temp_f16;
    arg0->unk42 = (s16) temp_f12_2;
    arg0->unk52 = (s16) temp_f12_2;

    temp_a1 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_a1 + 8);
    temp_a1->unk0 = 0x100600C;
    temp_a1->unk4 = arg0;
    temp_a1_2 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_a1_2 + 8);
    temp_a1_2->unk0 = 0x604060A;
    temp_a1_2->unk4 = 0x8040A;
    temp_a1_3 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_a1_3 + 8);
    temp_a1_3->unk0 = 0x6080A02;
    temp_a1_3->unk4 = 0x802;
    return arg0;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDBB0.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
s32 func_800FDCB0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8) {
    s32 temp_f18;
    s32 temp_f18_2;
    s32 temp_f18_3;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f8;
    s32 temp_f8_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a2_7;

    temp_f4 = (s32) arg2;
    arg0->unk2 = (s16) temp_f4;
    arg0->unk12 = (s16) temp_f4;
    temp_f8 = (s32) arg1;
    arg0->unk22 = (s16) temp_f8;
    arg0->unk32 = (s16) temp_f8;
    temp_f8_2 = (s32) ((-40.0f * arg6) + 20.0f);
    temp_f18 = (s32) arg4;
    temp_a0 = arg0 + 0x70;
    temp_a0->unk-2C = (s16) temp_f8_2;
    temp_a0->unk-2E = (s16) temp_f18;
    temp_f18_2 = (s32) (4032.0f * arg6);
    temp_a0->unk-1C = (s16) temp_f8_2;
    temp_a0->unk-1E = (s16) temp_f18;
    temp_a0->unk-26 = (s16) temp_f18_2;
    temp_a0->unk-16 = (s16) temp_f18_2;
    temp_f6 = (s32) arg3;
    temp_f18_3 = (s32) ((-40.0f * arg5) + 20.0f);
    temp_a0->unk-E = (s16) temp_f6;
    temp_a0->unk2 = (s16) temp_f6;
    temp_f6_2 = (s32) (4032.0f * arg5);
    temp_a0->unk-C = (s16) temp_f18_3;
    temp_a0->unk4 = (s16) temp_f18_3;
    temp_a0->unk-6 = (s16) temp_f6_2;
    temp_a0->unkA = (s16) temp_f6_2;
    gDPPipeSync(gDisplayListHead++);
    gDPSetPrimColor(gDisplayListHead, 0, 0, 0, 0, 0, arg7 & 0xFF);
    gSPVertex(gDisplayListHead++, 8, 16, arg0);
    gSP2Triangles(gDisplayListHead++, 2, 3, 7, 0, 6, 2, 7, 0);
    gDPPipeSync(gDisplayListHead++);
    gDPSetPrimColor(gDisplayListHead, 0, 0, 0, 0, 0, arg8 & 0xFF);
    gSP2Triangles(gDisplayListHead++, 4, 5, 1, 0, 0, 4, 1, 0);
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDCB0.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FDE64(s32 arg0) {

}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDE64.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FDE6C(void *arg0) {
    f32 sp2C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;

    sp2C = func_80035810_ovl2(arg0->unk1C);
    temp_f0 = func_8002D6E0_ovl2(arg0->unk1C, arg0);
    sp18.unk0 = (s32) arg0->unk4;
    temp_f12 = arg0->unk10 * temp_f0;
    sp18.unk4 = (s32) arg0->unk8;
    sp18.unk8 = (s32) arg0->unkC;
    D_8012B9AC->unk0 = (f32) (temp_f12 + sp18);
    D_8012B9AC->unk4 = (f32) (arg0->unk14 + sp1C);
    temp_f14 = arg0->unk10 * sp2C;
    D_8012B9AC->unk8 = (f32) (temp_f14 + sp20);
    D_8012B9AC->unkC = (f32) D_8012B9AC->unk0;
    D_8012B9AC->unk10 = (f32) (arg0->unk18 + sp1C);
    D_8012B9AC->unk14 = (f32) D_8012B9AC->unk8;
    D_8012B9AC->unk18 = (f32) (sp18 - temp_f12);
    D_8012B9AC->unk1C = (f32) D_8012B9AC->unk4;
    D_8012B9AC->unk20 = (f32) (sp20 - temp_f14);
    D_8012B9AC->unk24 = (f32) D_8012B9AC->unk18;
    D_8012B9AC->unk28 = (f32) D_8012B9AC->unk10;
    D_8012B9AC->unk2C = (f32) D_8012B9AC->unk20;
    return D_8012B9AC;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDE6C.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FDF88_ovl2(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;

    temp_f0 = arg1->unk10 / 20.0f;
    arg0->unk48 = temp_f0;
    arg0->unk40 = temp_f0;
    arg0->unk1C = (f32) arg1->unk4;
    arg0->unk24 = (f32) arg1->unkC;
    arg0->unk34 = (f32) arg1->unk1C;
    *arg2 = func_80011180_ovl2(&gDisplayListHead, arg0, arg1);
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDF88_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FDFF4_ovl2(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (arg0 != D_8012B9AC->unk30) {
        if (arg0 != 0) {
            gDPPipeSync(gDisplayListHead++);
            gDPSetAlphaCompare(gDisplayListHead++, )
            temp_v1_2 = gDisplayListHead;
            gDisplayListHead = (void *) (temp_v1_2 + 8);
            temp_v1_2->unk0 = 0xE200001C;
            temp_v1_2->unk4 = 0x504340;
        } else {
            gDPPipeSync(gDisplayListHead++);
            temp_v1_4 = *(void *)0x8004A3D0;
            *(void *)0x8004A3D0 = (void *) (temp_v1_4 + 8);
            temp_v1_4->unk0 = 0xE200001C;
            temp_v1_4->unk4 = 0x504F50;
        }
        D_8012B9AC->unk30 = arg0;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FDFF4_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
f32 func_800FE0AC_ovl2(f32 arg0, f32 arg1) {
    f32 temp_f2;
    void *temp_v1;
    void *temp_v1_2;
    f32 phi_f0;
    f32 phi_return;

    temp_f2 = arg1 - arg0;
    if (80.0f <= temp_f2) {
        temp_v1 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v1 + 8);
        temp_v1->unk4 = 0xFF;
        temp_v1->unk0 = 0xFA000000;
        return temp_f2;
    }
    phi_f0 = temp_f2;
    phi_return = temp_f2;
    if (temp_f2 < 0.0f) {
        phi_f0 = 0.0f;
        phi_return = 0.0f;
    }
    temp_v1_2 = gDisplayListHead;
    gDisplayListHead = (void *) (temp_v1_2 + 8);
    temp_v1_2->unk0 = 0xFA000000;
    temp_v1_2->unk4 = (s32) ((s32) ((phi_f0 / 80.0f) * 255.0f) & 0xFF);
    return phi_return;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FE0AC_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FE154_ovl2(void *arg0, s32 arg1, void *arg2) {
    void *sp194;
    s32 sp190;
    f32 sp18C;
    f32 sp188;
    f32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    ? sp16C;
    void *sp168;
    void *sp164;
    void *sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp14C;
    f32 sp140;
    void *sp13C;
    void *sp138;
    void *sp134;
    void *sp130;
    s32 sp12C;
    s32 sp128;
    void *sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp104;
    f32 sp100;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    s32 spE8;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    ? spA8;
    void *spA4;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    ? sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    ? sp50;
    f32 sp4C;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_a1_4;
    f32 *temp_a1_5;
    f32 *temp_a1_6;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    void *phi_a3;
    s32 phi_v1;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f16;
    f32 phi_f16_2;
    f32 phi_f0_2;

    sp190 = 0;
    sp194 = arg0->unk84;
    if ((arg0->unk84->unk20 & 4) == 0) {
        if (arg0->unk84->unk21 == 1) {
            sp184 = arg0->unk84->unk4;
            temp_a1 = &sp178;
            sp188 = arg0->unk84->unk8 + arg0->unk84->unk14;
            sp178 = arg0->unk84->unk4;
            sp18C = arg0->unk84->unkC;
            sp180 = arg0->unk84->unkC;
            sp17C = arg0->unk84->unk8 + arg0->unk84->unk18;
            if (arg2(&sp184, temp_a1, &sp16C, &sp168, &sp164) != 0) {
                if (func_80101920_ovl2(sp164, sp168, 0, &D_8012B9A0) != 0) {
                    func_800FDE6C_ovl2(sp194);
                    func_800FDF88_ovl2(arg0, sp194, arg1);
                    phi_a3 = sp194 + 0x28;
                    if (D_8004A450 != 0) {
                        phi_a3 = sp194 + 0xA8;
                    }
                    if (sp164->unk12 == 0x14) {
                        sp190 = 1;
                    }
                    sp160 = phi_a3;
                    func_800FDFF4_ovl2(sp190, phi_a3);
                    temp_f6 = -(((sp168->unk0 * D_8012B9AC->unk0) + (sp168->unk8 * D_8012B9AC->unk8)) + sp168->unkC) / sp168->unk4;
                    sp15C = temp_f6;
                    temp_f10 = -(((sp168->unk0 * D_8012B9AC->unk18) + (sp168->unk8 * D_8012B9AC->unk20)) + sp168->unkC) / sp168->unk4;
                    sp158 = temp_f10;
                    func_800FE0AC_ovl2(sp17C, (temp_f6 + temp_f10) * 0.5f);
                    func_800FDA40_ovl2(sp160, (bitwise s32) sp15C, (bitwise s32) sp158);
                    return;
                }
            }
        } else {
            func_800FDE6C_ovl2(sp194);
            temp_v0 = arg2(D_8012B9AC, D_8012B9AC + 0xC, &sp14C, &sp13C, &sp134);
            sp12C = temp_v0;
            if (temp_v0 != 0) {
                if (func_80101920_ovl2(sp134, sp13C, 0, &D_8012B9A0) != 0) {
block_11:
                    temp_v0_2 = arg2(D_8012B9AC + 0x18, D_8012B9AC + 0x24, &sp140, &sp138, &sp130);
                    phi_v1 = temp_v0_2;
                    if (temp_v0_2 != 0) {
                        sp128 = temp_v0_2;
                        phi_v1 = sp128;
                        if (func_80101920_ovl2(sp130, sp138, 0, &D_8012B9A0) != 0) {
block_13:
                            if (phi_v1 == 0) {
                                if (sp12C != 0) {
block_15:
                                    sp128 = phi_v1;
                                    func_800FDF88_ovl2(arg0, sp194, arg1);
                                    temp_v1 = phi_v1;
                                    if (D_8004A450 != 0) {
                                        sp124 = sp194 + 0xA8;
                                    } else {
                                        sp124 = sp194 + 0x28;
                                    }
                                    if (sp12C != 0) {
                                        if (sp134->unk12 != 0x14) {
block_20:
                                            if (temp_v1 != 0) {
                                                if (sp130->unk12 == 0x14) {
block_22:
                                                    sp190 = 1;
                                                }
                                            }
                                        } else {
                                            goto block_22;
                                        }
                                    } else {
                                        goto block_20;
                                    }
                                    sp128 = temp_v1;
                                    func_800FDFF4_ovl2(sp190);
                                    if (sp12C != 0) {
                                        if (temp_v1 != 0) {
                                            if (sp13C == sp138) {
block_32:
                                                func_800FE0AC_ovl2(D_8012B9AC->unk10, (sp150 + sp144) * 0.5f);
                                                func_800FDA40_ovl2(sp150, sp124, sp150, (bitwise s32) sp144);
                                                return;
                                            }
                                            if (sp138->unk0 == sp13C->unk0) {
                                                if (sp138->unk4 == sp13C->unk4) {
                                                    if (sp138->unk8 == sp13C->unk8) {
                                                        if (sp138->unkC == sp13C->unkC) {
                                                            goto block_32;
                                                        }
                                                    }
                                                }
                                            }
                                            if (-sp138->unkC == sp13C->unkC) {
                                                if (-1.0f == (((sp13C->unk0 * sp138->unk0) + (sp13C->unk4 * sp138->unk4)) + (sp13C->unk8 * sp138->unk8))) {
                                                    goto block_32;
                                                }
                                            }
                                            temp_a1_2 = &sp10C;
                                            sp10C = D_8012B9AC->unk18;
                                            sp114 = D_8012B9AC->unk20;
                                            sp110 = -(((sp13C->unk0 * sp10C) + (sp13C->unk8 * sp114)) + sp13C->unkC) / sp13C->unk4;
                                            temp_v0_3 = func_80104468_ovl2(sp13C->unk0, &sp14C, temp_a1_2, sp13C, &spF0, &sp100, 0, 0, 0);
                                            temp_v1_2 = temp_v0_3;
                                            if (temp_v0_3 == 0) {
                                                spF0 = 1.0f;
                                            }
                                            temp_a1_3 = &sp118;
                                            sp118 = D_8012B9AC->unk0;
                                            sp120 = D_8012B9AC->unk8;
                                            spE8 = temp_v1_2;
                                            sp11C = -(((sp138->unk0 * sp118) + (sp138->unk8 * sp120)) + sp138->unkC) / sp138->unk4;
                                            temp_v0_4 = func_80104468_ovl2(&sp140, temp_a1_3, sp138, &spEC, &spF4, 0, 0, 0);
                                            if (temp_v0_4 == 0) {
                                                spEC = 0.0f;
                                            } else {
                                                spEC = 1.0f - spEC;
                                            }
                                            if (temp_v1_2 != 0) {
block_50:
                                                if (temp_v1_2 != 0) {
                                                    if (temp_v0_4 == 0) {
                                                        spEC = spF0;
                                                        spF8 = -(((sp138->unk0 * sp100) + (sp138->unk8 * sp108)) + sp138->unkC) / sp138->unk4;
                                                    }
                                                } else {
                                                    if (temp_v0_4 != 0) {
                                                        spF0 = spEC;
                                                        sp104 = -(((sp13C->unk0 * spF4) + (sp13C->unk8 * spFC)) + sp13C->unkC) / sp13C->unk4;
                                                    }
                                                }
                                                if (spEC < spF0) {
                                                    if (spF8 < sp104) {
                                                        spEC = spF0;
                                                        spF8 = -(((sp138->unk0 * sp100) + (sp138->unk8 * sp108)) + sp138->unkC) / sp138->unk4;
                                                    } else {
                                                        spF0 = spEC;
                                                        sp104 = -(((sp13C->unk0 * spF4) + (sp13C->unk8 * spFC)) + sp13C->unkC) / sp13C->unk4;
                                                    }
                                                }
                                                temp_f2 = ((sp150 + sp104) * 0.5f) - D_8012B9AC->unk10;
                                                temp_f12 = ((sp144 + spF8) * 0.5f) - D_8012B9AC->unk10;
                                                if (80.0f <= temp_f2) {
                                                    phi_f16_2 = 255.0f;
                                                } else {
                                                    phi_f16_2 = (temp_f2 / 80.0f) * 255.0f;
                                                }
                                                if (80.0f <= temp_f12) {
                                                    phi_f0_2 = 255.0f;
                                                } else {
                                                    phi_f0_2 = (temp_f12 / 80.0f) * 255.0f;
                                                }
                                                if (sp104 < spF8) {
                                                    if (spF0 < D_80128994) {
                                                        phi_f16 = 0.0f;
                                                        phi_f0 = phi_f0_2;
                                                    } else {
                                                        phi_f16 = phi_f16_2 * ((spF0 - D_80128994) * D_8012899C);
                                                        phi_f0 = phi_f0_2;
                                                    }
                                                } else {
                                                    temp_f2_2 = 1.0f - spF0;
                                                    if (temp_f2_2 < *(void *)0x80130000) {
                                                        phi_f16 = phi_f16_2;
                                                        phi_f0 = 0.0f;
                                                    } else {
                                                        phi_f16 = phi_f16_2;
                                                        phi_f0 = phi_f0_2 * ((temp_f2_2 - *(void *)0x80130000) * *(void *)0x80130000);
                                                    }
                                                }
                                                func_800FDCB0_ovl2(sp150, 80.0f, sp124, sp150, (bitwise s32) sp144, (bitwise s32) sp104, spF8, spF0, spEC, (s32) phi_f16, (s32) phi_f0);
                                                return;
                                            }
                                            if (temp_v0_4 != 0) {
                                                goto block_50;
                                            }
                                            temp_f16 = -(((sp13C->unk0 * sp140) + (sp13C->unk8 * sp148)) + sp13C->unkC) / sp13C->unk4;
                                            temp_f18 = sp13C->unk0 - sp138->unk0;
                                            temp_f10_2 = sp13C->unk4 - sp138->unk4;
                                            spDC = temp_f10_2;
                                            spD8 = sp13C->unk8 - sp138->unk8;
                                            temp_f0 = (((sp140 - sp14C) * temp_f18) + (spDC * (temp_f16 - sp150))) + (spD8 * (sp148 - sp154));
                                            if (temp_f0 < 0.0f) {
                                                phi_f2 = -temp_f0;
                                            } else {
                                                phi_f2 = temp_f0;
                                            }
                                            if (*(void *)0x80130000 < phi_f2) {
                                                temp_f2_3 = -(((((temp_f18 * sp14C) + (temp_f10_2 * sp150)) + (spD8 * sp154)) + sp13C->unkC) - sp138->unkC) / temp_f0;
                                                if (0.0f < temp_f2_3) {
                                                    if (temp_f2_3 < 1.0f) {
                                                        spCC = temp_f2_3;
                                                        spD4 = temp_f16;
                                                        func_800FE0AC_ovl2(D_8012B9AC->unk10, (sp150 + sp144) * 0.5f);
                                                        func_800FDBB0_ovl2(sp150, sp124, sp150, (bitwise s32) sp144, ((temp_f16 - sp150) * temp_f2_3) + sp150, temp_f2_3);
                                                        return;
                                                    }
                                                }
                                            }
                                            spC0 = sp194->unk4;
                                            temp_a1_4 = &spB4;
                                            spC4 = sp194->unk8 + sp194->unk14;
                                            spB4 = spC0;
                                            spC8 = sp194->unkC;
                                            spBC = spC8;
                                            spB8 = sp194->unk8 + sp194->unk18;
                                            if (arg2(sp150, sp13C->unkC, &spC0, temp_a1_4, &spA8, &spA4, &spA0) != 0) {
                                                if (func_80101920_ovl2(spA0, spA4, 0, &D_8012B9A0) != 0) {
                                                    temp_f6_2 = -(((spA4->unk0 * D_8012B9AC->unk0) + (spA4->unk8 * D_8012B9AC->unk8)) + spA4->unkC) / spA4->unk4;
                                                    sp9C = temp_f6_2;
                                                    temp_f10_3 = -(((spA4->unk0 * D_8012B9AC->unk18) + (spA4->unk8 * D_8012B9AC->unk20)) + spA4->unkC) / spA4->unk4;
                                                    sp98 = temp_f10_3;
                                                    func_800FE0AC_ovl2(D_8012B9AC->unk10, (temp_f6_2 + temp_f10_3) * 0.5f);
                                                    func_800FDA40_ovl2(sp124, (bitwise s32) sp9C, (bitwise s32) sp98);
                                                    return;
                                                }
                                            }
                                        } else {
block_73:
                                            if (sp12C != 0) {
                                                temp_a1_5 = &sp78;
                                                sp78 = D_8012B9AC->unk18;
                                                sp80 = D_8012B9AC->unk20;
                                                sp7C = -(((sp13C->unk0 * sp78) + (sp13C->unk8 * sp80)) + sp13C->unkC) / sp13C->unk4;
                                                if (func_80104468_ovl2(&sp14C, temp_a1_5, sp13C, &sp68, &sp6C, 0, 0, 0) == 0) {
                                                    func_800FE0AC_ovl2(D_8012B9AC->unk10, (sp150 + sp7C) * 0.5f);
                                                    func_800FDA40_ovl2(sp150, sp124, sp150, (bitwise s32) sp7C);
                                                    return;
                                                }
                                                func_800FE0AC_ovl2(D_8012B9AC->unk10, (sp150 + sp70) * 0.5f);
                                                func_800FDAB8_ovl2(sp150, sp124, sp150, (bitwise s32) sp70, 0, sp68);
                                                return;
                                            }
                                            temp_a1_6 = &sp5C;
                                            sp5C = (*(void *)0x8012B9AC)->unk0;
                                            sp64 = (*(void *)0x8012B9AC)->unk8;
                                            temp_f4 = -(((sp138->unk0 * sp5C) + (sp138->unk8 * sp64)) + sp138->unkC) / sp138->unk4;
                                            sp60 = temp_f4;
                                            if (func_80104468_ovl2(&sp140, temp_a1_6, sp138, &sp4C, &sp50, 0, 0, 0) != 0) {
                                                func_800FE0AC_ovl2(D_8012B9AC->unk10, (sp54 + sp144) * 0.5f);
                                                func_800FDAB8_ovl2(sp124, (bitwise s32) sp54, (bitwise s32) sp144, 1.0f - sp4C, 1.0f);
                                                return;
                                            }
                                            func_800FE0AC_ovl2(D_8012B9AC->unk10, (temp_f4 + sp144) * 0.5f);
                                            func_800FDA40_ovl2(sp124, (bitwise s32) sp60, (bitwise s32) sp144);
                                        }
                                    } else {
                                        goto block_73;
                                    }
                                }
                            } else {
                                goto block_15;
                            }
                        }
                    } else {
                        goto block_13;
                    }
                }
            } else {
                goto block_11;
            }
        }
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FE154_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
u8 func_800FEE6C_ovl2(void *arg0) {
    s32 sp34;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *phi_a2;
    void *phi_s0;
    u8 phi_return;
    u8 phi_return_2;

    sp34 = 0;
    phi_return_2 = arg0->unk84->unk20;
    if ((arg0->unk84->unk20 & 3) == 0) {
        if ((arg0->unk84->unk20 & 8) != 0) {
            phi_a2 = &D_80104A08;
        } else {
            phi_a2 = (void *)0x80104958;
        }
        phi_return_2 = func_800FE154_ovl2(&sp34, phi_a2);
    }
    if (sp34 != 0) {
        if (arg0->unk14 != 1) {
            if (arg0->unk8 != 0) {
block_8:
                temp_v1 = gDisplayListHead;
                gDisplayListHead = (void *) (temp_v1 + 8);
                temp_v1->unk4 = 0x40;
                temp_v1->unk0 = 0xD8380002;
            }
        } else {
            goto block_8;
        }
    }
    phi_return = phi_return_2;
    if (arg0->unkC == 0) {
        temp_s0 = arg0->unk8;
        phi_s0 = temp_s0;
        phi_return = phi_return_2;
        if (temp_s0 != 0) {
loop_11:
            temp_s0_2 = phi_s0->unk8;
            phi_s0 = temp_s0_2;
            phi_return = func_800FEE6C_ovl2(phi_s0);
            if (temp_s0_2 != 0) {
                goto loop_11;
            }
        }
    }
    return phi_return;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FEE6C_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FEF44_ovl2(void *arg0) {
    ?32 sp6C;
    ? sp3C;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    if (arg0->unk3C != 0) {
        D_8012B9AC = &sp3C;
        sp6C = 0;
        gSPDisplayList(gDisplayListHead++, &D_801246C0);
        gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_I, G_IM_SIZ_16b, 1, D_8012B99C);
        temp_v0_3 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v0_3 + 8);
        temp_v0_3->unk4 = 0x7054150;
        temp_v0_3->unk0 = 0xF5900000;
        gDPLoadSync(gDisplayListHead++);
        temp_v0_5 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v0_5 + 8);
        temp_v0_5->unk4 = 0x71FF200;
        temp_v0_5->unk0 = 0xF3000000;
        gDPPipeSync(gDisplayListHead++);
        temp_v0_7 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v0_7 + 8);
        temp_v0_7->unk4 = 0x54150;
        temp_v0_7->unk0 = 0xF5880800;
        temp_v0_8 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v0_8 + 8);
        temp_v0_8->unk0 = 0xF2000000;
        temp_v0_8->unk4 = 0x7C07C;
        func_800FEE6C_ovl2(arg0->unk3C);
        temp_v0_9 = gDisplayListHead;
        gDisplayListHead = (void *) (temp_v0_9 + 8);
        temp_v0_9->unk0 = 0xDE000000;
        temp_v0_9->unk4 = &D_80124708;
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FEF44_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FF0A8_ovl2(void *arg0) {
    if (arg0 != 0) {
        arg0->unk20 = (u8) (arg0->unk20 | 2);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF0A8_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FF0C4_ovl2(void *arg0) {
    if (arg0 != 0) {
        arg0->unk20 = (u8) (arg0->unk20 & 0xFFFD);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF0C4_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FF0E0_ovl2(void *arg0) {
    if (arg0 != 0) {
        arg0->unk20 = (u8) (arg0->unk20 | 8);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF0E0_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FF0FC_ovl2(void) {
    void *temp_v0;

    if (D_8012B990 == 0) {
        return NULL;
    }
    temp_v0 = D_8012B990;
    D_8012B990 = (void *) *D_8012B990;
    return temp_v0;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF0FC_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FF12C_ovl2(void *arg0) {
    *arg0 = (void *) D_8012B990;
    D_8012B990 = arg0;
    return &D_8012B990;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF12C_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FF144(void) {
    void *sp1C;
    void *sp18;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_800FF0FC_ovl2();
    if (temp_v0 == 0) {
        return NULL;
    }
    sp1C = temp_v0;
    temp_v0_2 = func_80009C38_ovl2(D_8012B998, 0, temp_v0);
    if (temp_v0_2 == 0) {
        func_800FF12C_ovl2(temp_v0, temp_v0);
        return NULL;
    }
    sp18 = temp_v0_2;
    sp1C = temp_v0;
    func_80009628_ovl2(temp_v0_2, 0x1C, 0, temp_v0);
    temp_v0_2->unk84 = sp1C;
    sp1C->unk20 = (u8)0;
    sp1C->unk24 = temp_v0_2;
    return sp1C;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF144.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FF1CC_ovl2(void *arg0) {
    s32 temp_a0;
    void *temp_a1;

    temp_a1 = arg0;
    if (arg0 != 0) {
        temp_a0 = arg0->unk24;
        arg0 = temp_a1;
        func_80009DF4_ovl2(temp_a0, temp_a1);
        func_800FF12C_ovl2(arg0);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF1CC_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void func_800FF200_ovl2(void *arg0) {
    s32 temp_v1;
    void *temp_a1;
    s32 phi_a2;

    if (arg0 != 0) {
        temp_v1 = *D_8004A7C4 * 4;
        arg0->unk4 = (f32) (temp_v1 + 0x800E0000)->unk25D0;
        arg0->unk8 = (f32) (temp_v1 + 0x800E0000)->unk2790;
        arg0->unkC = (f32) (temp_v1 + 0x800E0000)->unk2950;
        temp_a1 = temp_v1 + 0x800E0000;
        arg0->unk1C = (f32) (temp_v1 + 0x800E0000)->unk17D0;
        phi_a2 = 0;
        if (temp_a1->unk-1CB0 != 0) {
            phi_a2 = 0;
            if ((temp_a1->unk-1CB0->unk44 & 1) == 0) {
                phi_a2 = 0;
                if (temp_a1->unk-1CB0->unk3C != 0) {
                    phi_a2 = 0;
                    if ((temp_a1->unk-1CB0->unk3C->unk54 & 3) == 0) {
                        phi_a2 = 1;
                    }
                }
            }
        }
        if (phi_a2 != 0) {
            arg0->unk20 = (u8) (arg0->unk20 & 0xFFFE);
            return;
        }
        arg0->unk20 = (u8) (arg0->unk20 | 1);
    }
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF200_ovl2.s")
#endif

#ifdef MIPS_TO_C
//generated by mips_to_c commit 09d006c9da5d6bbcd31ac6ca5c9165c1a8533a83
void *func_800FF2C8_ovl2(void) {
    s32 sp5C;
    s32 sp54;
    ? sp30;
    s32 sp2C;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    u32 temp_t2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_2;
    void *phi_v1;
    void *phi_v0;
    u32 phi_t2;
    void *phi_a2;
    void *phi_v1_2;
    void *phi_v0_2;
    void *phi_a3;
    void *phi_t0;
    void *phi_a1;
    s32 phi_t2_2;
    s32 phi_t3;

    sp5C = D_8004A7C4;
    D_8012B998.unk4 = func_800A8BAC_ovl2(0x20004);
    temp_v0 = func_800AEC08_ovl2(0x23, 0x3C, 0x50);
    temp_v1 = temp_v0 * 4;
    temp_a0 = temp_v1 + 0x800E0000;
    D_8012B998.unk0 = (s32) (temp_v1 + 0x800E0000)->unk-1CB0;
    sp54 = temp_v0;
    func_80008DA8_ovl2(temp_a0->unk-1930);
    temp_v0_2 = temp_v0 * 4;
    sp2C = temp_v0_2;
    func_80008DA8_ovl2((temp_v0_2 + 0x800E0000)->unk-1AF0);
    func_80008DA8_ovl2((temp_v0_2 + 0x800E0000)->unk-13F0);
    D_8004A7C4 = (s32) D_8012B998.unk0;
    func_800AF9B8_ovl2(0x29, 0x10);
    D_8004A7C4 = sp5C;
    D_8012B998.unk8 = 0.0f;
    D_8012B998.unk10 = 0.0f;
    D_8012B998.unkC = -1.0f;
    D_8012B990 = 0x80129490;
    phi_v1 = &D_801295B8;
    phi_v0 = &D_80129490;
    phi_t2 = 0U;
loop_1:
    temp_t2 = phi_t2 + 1;
    *phi_v0 = phi_v1;
    temp_v0_3 = phi_v0 + 0x128;
    phi_v1 = phi_v1 + 0x128;
    phi_v0 = temp_v0_3;
    phi_t2 = temp_t2;
    if (temp_t2 < 0x1FU) {
        goto loop_1;
    }
    *temp_v0_3 = 0;
    phi_t2_2 = 0;
    phi_t3 = 0x80129490;
loop_3:
    phi_a2 = &D_80124640;
    phi_v1_2 = phi_t3 + 0xA8;
    phi_v0_2 = phi_t3 + 0x28;
    phi_a3 = &D_80124650;
    phi_t0 = &D_80124660;
    phi_a1 = &D_80124670;
loop_4:
    temp_a1 = phi_a1 + 0x40;

    sp30.unk0 = (s32) phi_a2->unk0;
    sp30.unk4 = (s32) phi_a2->unk4;
    sp30.unkC = (s32) phi_a2->unkC;
    sp30.unk8 = (s32) phi_a2->unk8;
    phi_v1_2->unk0 = (s32) sp30.unk0;
    temp_a3 = phi_a3 + 0x40;
    phi_v1_2->unk4 = (s32) sp30.unk4;
    temp_t0 = phi_t0 + 0x40;
    temp_v0_4 = phi_v0_2 + 0x40;
    phi_v1_2->unk8 = (s32) sp30.unk8;
    temp_v1_2 = phi_v1_2 + 0x40;
    temp_v1_2->unk-34 = (s32) sp30.unkC;
    temp_v0_4->unk-40 = (s32) sp30.unk0;
    temp_v0_4->unk-3C = (s32) sp30.unk4;
    temp_v0_4->unk-38 = (s32) sp30.unk8;
    temp_v0_4->unk-34 = (s32) sp30.unkC;

    sp30.unk4 = (s32) temp_a3->unk-3C;
    sp30.unk0 = (s32) temp_a3->unk-40;
    sp30.unk8 = (s32) temp_a3->unk-38;
    sp30.unkC = (s32) temp_a3->unk-34;
    temp_v1_2->unk-30 = (s32) sp30.unk0;
    temp_v1_2->unk-2C = (s32) sp30.unk4;
    temp_v1_2->unk-28 = (s32) sp30.unk8;
    temp_v1_2->unk-24 = (s32) sp30.unkC;
    temp_v0_4->unk-30 = (s32) sp30.unk0;
    temp_v0_4->unk-2C = (s32) sp30.unk4;
    temp_v0_4->unk-28 = (s32) sp30.unk8;
    temp_v0_4->unk-24 = (s32) sp30.unkC;

    sp30.unk4 = (s32) temp_t0->unk-3C;
    sp30.unk0 = (s32) temp_t0->unk-40;
    sp30.unk8 = (s32) temp_t0->unk-38;
    sp30.unkC = (s32) temp_t0->unk-34;
    temp_v1_2->unk-20 = (s32) sp30.unk0;
    temp_v1_2->unk-1C = (s32) sp30.unk4;
    temp_v1_2->unk-18 = (s32) sp30.unk8;
    temp_v1_2->unk-14 = (s32) sp30.unkC;
    temp_v0_4->unk-20 = (s32) sp30.unk0;
    temp_v0_4->unk-1C = (s32) sp30.unk4;
    temp_v0_4->unk-18 = (s32) sp30.unk8;
    temp_v0_4->unk-14 = (s32) sp30.unkC;

    sp30.unk4 = (s32) temp_a1->unk-3C;
    sp30.unk0 = (s32) temp_a1->unk-40;
    sp30.unk8 = (s32) temp_a1->unk-38;
    sp30.unkC = (s32) temp_a1->unk-34;
    temp_v1_2->unk-10 = (s32) sp30.unk0;
    temp_v1_2->unk-C = (s32) sp30.unk4;
    temp_v1_2->unk-8 = (s32) sp30.unk8;
    temp_v1_2->unk-4 = (s32) sp30.unkC;
    temp_v0_4->unk-10 = (s32) sp30.unk0;
    temp_v0_4->unk-C = (s32) sp30.unk4;
    temp_v0_4->unk-8 = (s32) sp30.unk8;
    temp_v0_4->unk-4 = (s32) sp30.unkC;
    phi_a2 = phi_a2 + 0x40;
    phi_v1_2 = temp_v1_2;
    phi_v0_2 = temp_v0_4;
    phi_a3 = temp_a3;
    phi_t0 = temp_t0;
    phi_a1 = temp_a1;
    if (temp_a1 != &D_801246F0) {
        goto loop_4;
    }
    temp_t2_2 = phi_t2_2 + 1;
    phi_t2_2 = temp_t2_2;
    phi_t3 = phi_t3 + 0x128;
    if (temp_t2_2 != 0x20) {
        goto loop_3;
    }
    return temp_v0_4;
}
#else
GLOBAL_ASM("asm/non_matchings/ovl2_5/func_800FF2C8_ovl2.s")
#endif
