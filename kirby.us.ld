
OUTPUT_ARCH (mips)

#define BEGIN_SEG(name, addr) \
    _##name##SegmentStart = ADDR(.name); \
    _##name##SegmentRomStart = __romPos; \
    .name addr : AT(__romPos)

#define MARK(name, prevName) \
    _##name##_RomStart = __romPos; \
    _##prevName##_RomEnd = __romPos;

#define END_SEG(name) \
    _##name##SegmentEnd = ADDR(.name) + SIZEOF(.name); \
    _##name##SegmentRomEnd = __romPos + SIZEOF(.name); \
    __romPos += SIZEOF(.name);

#define BEGIN_NOLOAD(name) \
    _##name##SegNoloadStart = ADDR(.name.noload); \
    .name.noload (NOLOAD) :

#define END_NOLOAD(name) \
    _##name##SegNoloadEnd = ADDR(.name.noload) + SIZEOF(.name.noload);


SECTIONS
{
   __romPos = 0x0;

   /* header and boot */
   BEGIN_SEG(boot, 0xA4000000) {
      BUILD_DIR/src/rom_header.o(.data);
      BUILD_DIR/asm/boot2.o(.text);
   }
   END_SEG(boot)

   /* 0x80000400 001000-039DF0 [38DF0] */
   BEGIN_SEG(ovl0, 0x80000400) {
      BUILD_DIR/asm/EntryPoint.o(.text);
      BUILD_DIR/src/ovl0/main.o(.text);
      BUILD_DIR/asm/ovl0/ovl0.o(.text);
      BUILD_DIR/src/ovl0/ovl0_1.o(.text);
      BUILD_DIR/asm/ovl0/ovl0_2.o(.text);
      BUILD_DIR/src/ovl0/ovl0_2_5.o(.text);
      /*. += 0x8;*/
      BUILD_DIR/src/ovl0/ovl0_2_5_2.o(.text);
      BUILD_DIR/src/ovl0/ovl0_3.o(.text);
      BUILD_DIR/src/ovl0/ovl0_4.o(.text);
      BUILD_DIR/src/ovl0/ovl0_5.o(.text);
      BUILD_DIR/src/ovl0/ovl0_6.o(.text);
      BUILD_DIR/src/ovl0/ovl0_7.o(.text);
      BUILD_DIR/src/ovl0/ovl0_8.o(.text);
      BUILD_DIR/asm/ovl0/ovl0_9.o(.text);
      BUILD_DIR/asm/ovl0/exception.o(.text);
      /*libreultra/build/2.0I/libultra_rom.a:__osDequeueThread.o(.text);*/
      BUILD_DIR/asm/ovl0/ovl0_afterException.o(.text);
      BUILD_DIR/asm/ovl0/lib/osViGetCurrentFramebuffer.o(.text);
      BUILD_DIR/asm/ovl0/lib/__osSPSetPc.o(.text);
      BUILD_DIR/data/kirby.039DF0.o(.data);
   }
   END_SEG(ovl0)
   BEGIN_NOLOAD(ovl0) {
      BUILD_DIR/src/ovl0/main.o(.bss);
      BUILD_DIR/src/ovl0/ovl0_3.o(.rodata);
   }
   END_NOLOAD(ovl0)

   /* 0x8009B540 043790-066630 [22EA0] */
   BEGIN_SEG(ovl1, 0x8009B540) {
      . += 0x10;
      BUILD_DIR/src/ovl1/ovl1.o(.text);
      BUILD_DIR/src/ovl1/ovl1_1.o(.text);
      BUILD_DIR/src/ovl1/ovl1_2.o(.text);
      BUILD_DIR/src/ovl1/ovl1_3.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_4.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_5.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_6.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_7.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_8.o(.text);
      BUILD_DIR/src/ovl1/save_file.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_10.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_11.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_12.o(.text);
      BUILD_DIR/asm/ovl1/ovl1_13.o(.text);
   }
   END_SEG(ovl1)
   BEGIN_SEG(ovl1Data, _ovl1SegmentEnd) {
      BUILD_DIR/data/kirby.066630.o(.data);
   }
   END_SEG(ovl1Data)
   BEGIN_NOLOAD(ovl1) {
      BUILD_DIR/asm/ovl1/ovl1_bss.o(.bss);
   }
   END_NOLOAD(ovl1)

   /* 0x800F61A0 07EC10-0AC900 [2DCF0] */
   BEGIN_SEG(ovl2, 0x800F61A0) {
      BUILD_DIR/src/ovl2/ovl2.o(.text);
      BUILD_DIR/src/ovl2/ovl2_2.o(.text);
      BUILD_DIR/src/ovl2/ovl2_3.o(.text);
      BUILD_DIR/src/ovl2/ovl2_4.o(.text);
      BUILD_DIR/src/ovl2/ovl2_5.o(.text);
      BUILD_DIR/src/ovl2/ovl2_6.o(.text);
      BUILD_DIR/src/ovl2/ovl2_7.o(.text);
      BUILD_DIR/src/ovl2/ovl2_8.o(.text);
      BUILD_DIR/data/kirby.0AC900.o(.data);
   }
   END_SEG(ovl2)
   BEGIN_NOLOAD(ovl2) {
      BUILD_DIR/asm/ovl2/ovl2_bss.o(.bss);
   }
   END_NOLOAD(ovl2)

   /* 0x80151100 0B1B40-0F0D50 [3F210] */
   BEGIN_SEG(ovl3, 0x80151100) {
      BUILD_DIR/src/ovl3/ovl3.o(.text);
      BUILD_DIR/src/ovl3/ovl3_1.o(.text);
      BUILD_DIR/src/ovl3/ovl3_2.o(.text);
      BUILD_DIR/asm/ovl3/ovl3_3.o(.text);
      BUILD_DIR/asm/ovl3/ovl3_4.o(.text);
      BUILD_DIR/src/ovl3/ovl3_5.o(.text);
      BUILD_DIR/data/kirby.0F0D50.o(.data);
   }
   END_SEG(ovl3)
   BEGIN_NOLOAD(ovl3) {
      BUILD_DIR/src/ovl3/ovl3_5.o(.rodata);
   }
   END_NOLOAD(ovl3)

   /* 0x80151100 0F8630-1014F0 [8EC0] */
   BEGIN_SEG(ovl4, 0x80151100) {
      BUILD_DIR/asm/ovl4/ovl4.o(.text);
      BUILD_DIR/data/kirby.1014F0.o(.data);
   }
   END_SEG(ovl4)
   BEGIN_NOLOAD(ovl4) {
      BUILD_DIR/src/ovl4/ovl4_bss.o(.bss);
   }
   END_NOLOAD(ovl4)

   /* 0x8015C740 103BB0-12D410 [29860] */
   BEGIN_SEG(ovl5, 0x8015C740) {
      BUILD_DIR/asm/ovl5/ovl5.o(.text);
   }
   END_SEG(ovl5)

   /* 0x80151100 135490-139150 [3CC0] */
   BEGIN_SEG(ovl6, 0x80151100) {
      BUILD_DIR/src/ovl6/ovl6.o(.text);
      BUILD_DIR/data/kirby.139150.o(.data);
   }
   END_SEG(ovl6)

   /* 0x80198880 13E8F0-168840 [29F50] */
   BEGIN_SEG(ovl7, 0x80198880) {
      BUILD_DIR/asm/ovl7/ovl7.o(.text);
      BUILD_DIR/data/ovl7/data.o(.data);
   }
   END_SEG(ovl7)

   /* 0x801D0C60 174740-17B360 [6C20] */
   BEGIN_SEG(ovl8, 0x801D0C60) {
      BUILD_DIR/asm/ovl8/ovl8.o(.text);
   }
   END_SEG(ovl8)

   /* 0x801D0C60 17ECB0-1C9B00 [4AE50] */
   BEGIN_SEG(ovl9, 0x801D0C60) {
      BUILD_DIR/asm/ovl9/ovl9.o(.text);
   }
   END_SEG(ovl9)

   /* 0x801DB1E0 1CBF50-1E4160 [18210] */
   BEGIN_SEG(ovl10, 0x801DB1E0) {
      BUILD_DIR/asm/ovl10/ovl10.o(.text);
   }
   END_SEG(ovl10)

   /* 0x801DB1E0 1E5AA0-1EB3C0 [5920] */
   BEGIN_SEG(ovl11, 0x801DB1E0) {
      BUILD_DIR/src/ovl11/boss2.o(.text);
      BUILD_DIR/asm/ovl11/ovl11_2.o(.text);
   }
   END_SEG(ovl11)

   /* 0x801DB1E0 1EB520-1F2DE0 [78C0] */
   BEGIN_SEG(ovl12, 0x801DB1E0) {
      BUILD_DIR/asm/ovl12/ovl12.o(.text);
   }
   END_SEG(ovl12)

   /* 0x801DB1E0 1F3160-1FDA00 [A8A0] */
   BEGIN_SEG(ovl13, 0x801DB1E0) {
      BUILD_DIR/asm/ovl13/ovl13.o(.text);
   }
   END_SEG(ovl13)

   /* 0x801DB1E0 1FDDD0-205A90 [7CC0] */
   BEGIN_SEG(ovl14, 0x801DB1E0) {
      BUILD_DIR/asm/ovl14/ovl14.o(.text);
   }
   END_SEG(ovl14)

   /* 0x801DB1E0 205D40-210FB0 [B270] */
   BEGIN_SEG(ovl15, 0x801DB1E0) {
      BUILD_DIR/asm/ovl15/ovl15.o(.text);
   }
   END_SEG(ovl15)

   /* 0x801DB1E0 211490-225770 [142E0] */
   BEGIN_SEG(ovl16, 0x801DB1E0) {
      BUILD_DIR/asm/ovl16/ovl16.o(.text);
   }
   END_SEG(ovl16)

   /* 0x801DB1E0 2263D0-230050 [9C80] */
   BEGIN_SEG(ovl17, 0x801DB1E0) {
      BUILD_DIR/asm/ovl17/ovl17.o(.text);
   }
   END_SEG(ovl17)

   /* 0x8021DF20 2308C0-239D80 [94C0] */
   BEGIN_SEG(ovl18, 0x8021DF20) {
      BUILD_DIR/asm/ovl18/ovl18.o(.text);
      BUILD_DIR/src/ovl18/ovl18_1.o(.text);
      BUILD_DIR/src/ovl18/ovl18_2.o(.text);
      BUILD_DIR/src/ovl18/ovl18_3.o(.text);
      BUILD_DIR/src/ovl18/ovl18_4.o(.text);
      /*. += 0x10;*/
      BUILD_DIR/src/ovl18/ovl18_5.o(.text);
      BUILD_DIR/asm/ovl18/ovl18_6.o(.text);
      BUILD_DIR/src/ovl18/ovl18_7.o(.text);
   }
   END_SEG(ovl18)
   BEGIN_SEG(ovl18Data, _ovl18SegmentEnd) {
      BUILD_DIR/data/ovl18/data.o(.data);
   }
   END_SEG(ovl18Data)
   BEGIN_NOLOAD(ovl18) {
      BUILD_DIR/asm/ovl18/ovl18_bss.o(.bss);
      BUILD_DIR/src/ovl18/ovl18_5.o(.rodata);
   }
   END_NOLOAD(ovl18)

   /* 0x8021DF20 23E630-24F750 [11120] */
   BEGIN_SEG(ovl19, 0x8021DF20) {
      BUILD_DIR/asm/ovl19/ovl19.o(.text);
      BUILD_DIR/src/ovl19/ovl19_2.o(.text);
      BUILD_DIR/asm/ovl19/ovl19_3.o(.text);
      BUILD_DIR/asm/ovl19/ovl19_4.o(.text);
      BUILD_DIR/src/ovl19/ovl19_5.o(.text);
   }
   END_SEG(ovl19)
   BEGIN_SEG(ovl19Data, _ovl19SegmentEnd) {
      BUILD_DIR/data/kirby.ovl19.data.o(.data);
   }
   END_SEG(ovl19Data)
   BEGIN_NOLOAD(ovl19) {
      BUILD_DIR/asm/ovl19/ovl19_bss.o(.bss);
   }
   END_NOLOAD(ovl19)

   /* 0x80300000 2501C0-2502A0 [E0] */
   BEGIN_SEG(ovl20, 0x80300000) {
      BUILD_DIR/src/ovl20.o(.text);
   }
   END_SEG(ovl20)
   BEGIN_SEG(ovl20Data, _ovl20SegmentEnd){
      BUILD_DIR/src/ovl20.o(.data);
   }
   END_SEG(ovl20Data)
   BEGIN_NOLOAD(ovl20) {
      BUILD_DIR/src/ovl20.o(.bss);
   }
   END_NOLOAD(ovl20)

   BEGIN_SEG(data_250320, 0) {
      BUILD_DIR/asm/data/kirby.u.250320.o(.data);
   }
   END_SEG(data_250320)
   BEGIN_SEG(data_2A8CB0, 0) {
      BUILD_DIR/asm/data/kirby.u.2A8CB0.o(.data);
   }
   END_SEG(data_2A8CB0)

   BEGIN_SEG(data_2B1510, 0) {
      BUILD_DIR/asm/data/kirby.u.2B1510.o(.data);
   }
   END_SEG(data_2B1510)
   BEGIN_SEG(data_3E1400, 0) {
      BUILD_DIR/asm/data/kirby.u.3E1400.o(.data);
   }
   END_SEG(data_3E1400)
   BEGIN_SEG(data_3E6BC0, 0) {
      BUILD_DIR/asm/data/kirby.u.3E6BC0.o(.data);
   }
   END_SEG(data_3E6BC0)
   BEGIN_SEG(data_49F590, 0) {
      BUILD_DIR/asm/data/kirby.u.49F590.o(.data);
   }
   END_SEG(data_49F590)
   BEGIN_SEG(data_4A0340, 0) {
      BUILD_DIR/asm/data/kirby.u.4A0340.o(.data);
   }
   END_SEG(data_4A0340)
   BEGIN_SEG(data_4A3B60, 0) {
      BUILD_DIR/asm/data/kirby.u.4A3B60.o(.data);
   }
   END_SEG(data_4A3B60)

   BEGIN_SEG(bank_data, __romPos) { /*TODO: get a good addr for this*/
      BUILD_DIR/asm/banks/bank0.o(.data);
      BUILD_DIR/asm/banks/bank1.o(.data);
      BUILD_DIR/asm/banks/bank2.o(.data);
      BUILD_DIR/asm/banks/bank3.o(.data);
      BUILD_DIR/asm/banks/bank4.o(.data);
      BUILD_DIR/asm/banks/bank5.o(.data);
      BUILD_DIR/asm/banks/bank6.o(.data);
      BUILD_DIR/asm/banks/bank7.o(.data);
   }
   END_SEG(bank_data)

   /DISCARD/ :
   {
      *(*);
   }
}
