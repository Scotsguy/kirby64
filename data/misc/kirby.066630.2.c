#include "types.h"
#include "segments.h"

u32 D_800D00C4 = 0x800D7C50;

u32 D_800D00C8 = 0x800D7C80;

u32 D_800D00CC = 0x800D8050;

u32 D_800D00D0 = 0x800D8258;

u32 D_800D00D4 = 0x800D8570;

u32 D_800D00D8 = 0x800D87D8;

u32 D_800D00DC = 0x800D87E0;

u32 D_800D00E0 = 0x800D8C80;

u32 D_800D00E4 = 0x0000000B;

u32 D_800D00E8 = 0x000000F4;

u32 D_800D00EC = 0x00000081;

u32 D_800D00F0 = 0x000000C5;

u32 D_800D00F4 = 0x0000009A;

u32 D_800D00F8 = 0x00000001;

u32 D_800D00FC = 0x00000127;

u32 D_800D0100 = 0x000000D3;

u32 D_800D0104 = 0x800D8FD0;

u32 D_800D0108 = 0x800D9040;

u32 D_800D010C = 0x800D9E70;

u32 D_800D0110 = 0x800DA298;

u32 D_800D0114 = 0x800DB2C0;

u32 D_800D0118 = 0x800DBDC8;

u32 D_800D011C = 0x800DC2B0;

u32 D_800D0120 = 0x800DC538;

u32 D_800D0124 = 0x0000001C;

u32 D_800D0128 = 0x0000038B;

u32 D_800D012C = 0x00000109;

u32 D_800D0130 = 0x0000040A;

u32 D_800D0134 = 0x000002C1;

u32 D_800D0138 = 0x00000139;

u32 D_800D013C = 0x000000A2;

u32 D_800D0140 = 0x00000469;

u32 D_800D0144 = 0x00000013;

u32 D_800D0148 = 0x00000693;

u32 D_800D014C = 0x00000402;

u32 D_800D0150 = 0x000001DB;

u32 D_800D0154 = 0x0000022E;

u32 D_800D0158 = 0x00000001;

u32 D_800D015C = 0x0000014B;

u32 D_800D0160 = 0x00000097;

u32 D_800D0164 = 0x00000005;

u32 D_800D0168 = 0x00000003;

u32 D_800D016C = 0x00000003;

u32 D_800D0170 = 0x00000016;

u32 D_800D0174 = 0x00000003;

u32 D_800D0178 = 0x00000001;

u32 D_800D017C = 0x00000115;

u32 D_800D0180 = 0x000000F0;

u32 D_800D0184 = 0x800C47D4;

u32 D_800D0188 = 0x800C7824;

u32 D_800D018C = 0x800C9090;

u32 D_800D0190 = 0x800CAED0;

u32 D_800D0194 = 0x800CC794;

u32 D_800D0198 = 0x800CCCB4;

u32 D_800D019C = 0x800CE220;

u32 D_800D01A0 = 0x800D00A4;

extern char D_800D5E00[]; 
struct StageArea D_800D01A4[0xD5] = {
	{
		LIST_INDEX(7, 1),
		LIST_INDEX(0, 0),
		2,
		0x007F,
		0xD,
		BANK_INDEX(7, 0x3B),
		0x3C,
		0,
		BANK_INDEX(7, 0xD),
		BANK_INDEX(7, 0xE),
		0x800D5E00,
	},
    {
        LIST_INDEX(7, 2),
        LIST_INDEX(0, 0),
        3,
        127,
        0x22,
        BANK_INDEX(7, 60),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E0C,
    },
    {
        LIST_INDEX(7, 3),
        LIST_INDEX(0, 0),
        4,
        127,
        0xd,
        BANK_INDEX(7, 61),
        60,
        0,
        BANK_INDEX(7, 13),
        BANK_INDEX(7, 14),
        0x800D5E18,
    },
    {
        LIST_INDEX(7, 4),
        LIST_INDEX(0, 0),
        5,
        127,
        0x27,
        BANK_INDEX(7, 62),
        60,
        1,
        BANK_INDEX(7, 37),
        BANK_INDEX(7, 38),
        0x800D5E24,
    },
    {
        LIST_INDEX(7, 5),
        LIST_INDEX(0, 0),
        6,
        127,
        0x18,
        BANK_INDEX(7, 63),
        60,
        3,
        BANK_INDEX(7, 13),
        BANK_INDEX(7, 14),
        0x800D5E30,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 6),
        LIST_INDEX(0, 0),
        7,
        127,
        0x12,
        BANK_INDEX(7, 64),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E34,
    },
    {
        LIST_INDEX(7, 7),
        LIST_INDEX(0, 0),
        0,
        127,
        0x12,
        BANK_INDEX(7, 65),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E40,
    },
    {
        LIST_INDEX(7, 8),
        LIST_INDEX(0, 0),
        0,
        127,
        0x12,
        BANK_INDEX(7, 66),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E4C,
    },
    {
        LIST_INDEX(7, 9),
        LIST_INDEX(0, 0),
        0,
        127,
        0x12,
        BANK_INDEX(7, 67),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E58,
    },
    {
        LIST_INDEX(7, 10),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 68),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E64,
    },
    {
        LIST_INDEX(7, 11),
        LIST_INDEX(0, 0),
        8,
        127,
        0x28,
        BANK_INDEX(7, 69),
        60,
        1,
        BANK_INDEX(7, 25),
        BANK_INDEX(7, 26),
        0x800D5E70,
    },
    {
        LIST_INDEX(7, 12),
        LIST_INDEX(0, 0),
        9,
        127,
        0x18,
        BANK_INDEX(7, 70),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E78,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 13),
        LIST_INDEX(0, 0),
        10,
        127,
        0xd,
        BANK_INDEX(7, 71),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E7C,
    },
    {
        LIST_INDEX(7, 14),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 72),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E88,
    },
    {
        LIST_INDEX(7, 15),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 73),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5E94,
    },
    {
        LIST_INDEX(7, 16),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 74),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EA0,
    },
    {
        LIST_INDEX(7, 17),
        LIST_INDEX(0, 0),
        11,
        127,
        0xd,
        BANK_INDEX(7, 75),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EAC,
    },
    {
        LIST_INDEX(7, 18),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 76),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EB8,
    },
    {
        LIST_INDEX(7, 19),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 77),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EC4,
    },
    {
        LIST_INDEX(7, 20),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 78),
        60,
        0,
        BANK_INDEX(7, 45),
        BANK_INDEX(7, 46),
        0x800D5ED4,
    },
    {
        LIST_INDEX(7, 21),
        LIST_INDEX(0, 0),
        12,
        127,
        0x29,
        BANK_INDEX(7, 79),
        60,
        1,
        BANK_INDEX(7, 7),
        BANK_INDEX(7, 8),
        0x800D5EE0,
    },
    {
        LIST_INDEX(7, 22),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 80),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EEC,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 23),
        LIST_INDEX(0, 0),
        13,
        127,
        0x1,
        BANK_INDEX(7, 81),
        60,
        2,
        BANK_INDEX(7, 11),
        BANK_INDEX(7, 12),
        0x800D5EF0,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 24),
        LIST_INDEX(0, 0),
        14,
        127,
        0xc,
        BANK_INDEX(7, 82),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5EFC,
    },
    {
        LIST_INDEX(7, 25),
        LIST_INDEX(0, 0),
        15,
        127,
        0xc,
        BANK_INDEX(7, 83),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F08,
    },
    {
        LIST_INDEX(7, 26),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 84),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F14,
    },
    {
        LIST_INDEX(7, 27),
        LIST_INDEX(0, 0),
        0,
        127,
        0xc,
        BANK_INDEX(7, 85),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F20,
    },
    {
        LIST_INDEX(7, 28),
        LIST_INDEX(0, 0),
        16,
        127,
        0xc,
        BANK_INDEX(7, 86),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F2C,
    },
    {
        LIST_INDEX(7, 29),
        LIST_INDEX(0, 0),
        17,
        127,
        0x18,
        BANK_INDEX(7, 87),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F38,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 30),
        LIST_INDEX(0, 0),
        18,
        127,
        0x13,
        BANK_INDEX(7, 88),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F3C,
    },
    {
        LIST_INDEX(7, 31),
        LIST_INDEX(0, 0),
        19,
        127,
        0x13,
        BANK_INDEX(7, 89),
        60,
        0,
        BANK_INDEX(7, 47),
        BANK_INDEX(7, 48),
        0x800D5F48,
    },
    {
        LIST_INDEX(7, 32),
        LIST_INDEX(0, 0),
        0,
        127,
        0x13,
        BANK_INDEX(7, 90),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F54,
    },
    {
        LIST_INDEX(7, 33),
        LIST_INDEX(7, 34),
        18,
        127,
        0x13,
        BANK_INDEX(7, 91),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F60,
    },
    {
        LIST_INDEX(7, 35),
        LIST_INDEX(0, 0),
        19,
        127,
        0x13,
        BANK_INDEX(7, 92),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F6C,
    },
    {
        LIST_INDEX(7, 36),
        LIST_INDEX(0, 0),
        0,
        127,
        0x13,
        BANK_INDEX(7, 93),
        60,
        8,
        BANK_INDEX(7, 47),
        BANK_INDEX(7, 48),
        0x800D5F78,
    },
    {
        LIST_INDEX(7, 37),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 94),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F88,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 38),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 95),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F8C,
    },
    {
        LIST_INDEX(7, 39),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 96),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5F98,
    },
    {
        LIST_INDEX(7, 40),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 97),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5FA4,
    },
    {
        LIST_INDEX(7, 41),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 98),
        60,
        0,
        BANK_INDEX(7, 57),
        BANK_INDEX(7, 58),
        0x800D5FB0,
    },
    {
        LIST_INDEX(7, 42),
        LIST_INDEX(7, 43),
        0,
        127,
        0x8,
        BANK_INDEX(7, 99),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5FBC,
    },
    {
        LIST_INDEX(7, 44),
        LIST_INDEX(7, 45),
        0,
        127,
        0x8,
        BANK_INDEX(7, 100),
        60,
        0,
        BANK_INDEX(7, 57),
        BANK_INDEX(7, 58),
        0x800D5FC8,
    },
    {
        LIST_INDEX(7, 46),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 101),
        0,
        0,
        BANK_INDEX(7, 57),
        BANK_INDEX(7, 58),
        0x800D5FD4,
    },
    {
        LIST_INDEX(7, 47),
        LIST_INDEX(0, 0),
        0,
        127,
        0x8,
        BANK_INDEX(7, 102),
        0,
        0,
        BANK_INDEX(7, 57),
        BANK_INDEX(7, 58),
        0x800D5FE0,
    },
    {
        LIST_INDEX(7, 48),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 103),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D5FEC,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 49),
        LIST_INDEX(0, 0),
        20,
        127,
        0xc,
        BANK_INDEX(7, 104),
        0,
        0,
        BANK_INDEX(7, 15),
        BANK_INDEX(7, 16),
        0x800D5FF0,
    },
    {
        LIST_INDEX(7, 50),
        LIST_INDEX(7, 51),
        0,
        127,
        0x11,
        BANK_INDEX(7, 105),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6000,
    },
    {
        LIST_INDEX(7, 52),
        LIST_INDEX(7, 53),
        0,
        127,
        0x11,
        BANK_INDEX(7, 106),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6010,
    },
    {
        LIST_INDEX(7, 54),
        LIST_INDEX(0, 0),
        0,
        127,
        0x11,
        BANK_INDEX(7, 107),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6020,
    },
    {
        LIST_INDEX(7, 55),
        LIST_INDEX(0, 0),
        0,
        127,
        0x11,
        BANK_INDEX(7, 108),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6030,
    },
    {
        LIST_INDEX(7, 56),
        LIST_INDEX(0, 0),
        21,
        127,
        0x11,
        BANK_INDEX(7, 109),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6040,
    },
    {
        LIST_INDEX(7, 57),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 110),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6050,
    },
    {
        LIST_INDEX(7, 58),
        LIST_INDEX(0, 0),
        0,
        127,
        0x11,
        BANK_INDEX(7, 111),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6060,
    },
    {
        LIST_INDEX(7, 59),
        LIST_INDEX(0, 0),
        22,
        127,
        0x18,
        BANK_INDEX(7, 112),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6070,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 60),
        LIST_INDEX(0, 0),
        23,
        127,
        0x1,
        BANK_INDEX(7, 113),
        60,
        2,
        BANK_INDEX(7, 23),
        BANK_INDEX(7, 24),
        0x800D6074,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 61),
        LIST_INDEX(7, 62),
        24,
        127,
        0xa,
        BANK_INDEX(7, 114),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D607C,
    },
    {
        LIST_INDEX(7, 63),
        LIST_INDEX(0, 0),
        24,
        127,
        0xa,
        BANK_INDEX(7, 115),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D608C,
    },
    {
        LIST_INDEX(7, 64),
        LIST_INDEX(0, 0),
        0,
        127,
        0xa,
        BANK_INDEX(7, 116),
        60,
        0,
        BANK_INDEX(7, 49),
        BANK_INDEX(7, 50),
        0x800D609C,
    },
    {
        LIST_INDEX(7, 65),
        LIST_INDEX(7, 66),
        0,
        127,
        0xa,
        BANK_INDEX(7, 117),
        60,
        0,
        BANK_INDEX(7, 49),
        BANK_INDEX(7, 50),
        0x800D60AC,
    },
    {
        LIST_INDEX(7, 67),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 118),
        60,
        10,
        BANK_INDEX(7, 49),
        BANK_INDEX(7, 50),
        0x800D60BC,
    },
    {
        LIST_INDEX(7, 68),
        LIST_INDEX(0, 0),
        24,
        127,
        0xa,
        BANK_INDEX(7, 119),
        0,
        0,
        BANK_INDEX(7, 49),
        BANK_INDEX(7, 50),
        0x800D60CC,
    },
    {
        LIST_INDEX(7, 69),
        LIST_INDEX(0, 0),
        25,
        127,
        0x18,
        BANK_INDEX(7, 120),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D60DC,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 70),
        LIST_INDEX(7, 71),
        27,
        127,
        0xf,
        BANK_INDEX(7, 121),
        60,
        0,
        BANK_INDEX(7, 21),
        BANK_INDEX(7, 22),
        0x800D60E0,
    },
    {
        LIST_INDEX(7, 72),
        LIST_INDEX(7, 73),
        0,
        127,
        0xf,
        BANK_INDEX(7, 122),
        0,
        0,
        BANK_INDEX(7, 21),
        BANK_INDEX(7, 22),
        0x800D60EC,
    },
    {
        LIST_INDEX(7, 74),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 123),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D60F8,
    },
    {
        LIST_INDEX(7, 75),
        LIST_INDEX(0, 0),
        29,
        127,
        0xf,
        BANK_INDEX(7, 124),
        60,
        4,
        BANK_INDEX(7, 21),
        BANK_INDEX(7, 22),
        0x800D6104,
    },
    {
        LIST_INDEX(7, 76),
        LIST_INDEX(0, 0),
        28,
        127,
        0xf,
        BANK_INDEX(7, 125),
        60,
        0,
        BANK_INDEX(7, 21),
        BANK_INDEX(7, 22),
        0x800D6110,
    },
    {
        LIST_INDEX(7, 77),
        LIST_INDEX(7, 78),
        26,
        127,
        0xf,
        BANK_INDEX(7, 126),
        60,
        0,
        BANK_INDEX(7, 21),
        BANK_INDEX(7, 22),
        0x800D611C,
    },
    {
        LIST_INDEX(7, 79),
        LIST_INDEX(0, 0),
        30,
        127,
        0x18,
        BANK_INDEX(7, 127),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6128,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 80),
        LIST_INDEX(0, 0),
        0,
        127,
        0xa,
        BANK_INDEX(7, 128),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D612C,
    },
    {
        LIST_INDEX(7, 81),
        LIST_INDEX(7, 82),
        31,
        127,
        0xa,
        BANK_INDEX(7, 129),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6138,
    },
    {
        LIST_INDEX(7, 83),
        LIST_INDEX(0, 0),
        0,
        127,
        0xa,
        BANK_INDEX(7, 130),
        60,
        0,
        BANK_INDEX(7, 55),
        BANK_INDEX(7, 56),
        0x800D6144,
    },
    {
        LIST_INDEX(7, 84),
        LIST_INDEX(0, 0),
        32,
        5,
        0xa,
        BANK_INDEX(7, 131),
        60,
        0,
        BANK_INDEX(7, 55),
        BANK_INDEX(7, 56),
        0x800D6150,
    },
    {
        LIST_INDEX(7, 85),
        LIST_INDEX(7, 86),
        33,
        127,
        0xa,
        BANK_INDEX(7, 132),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D615C,
    },
    {
        LIST_INDEX(7, 87),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 133),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6168,
    },
    {
        LIST_INDEX(7, 88),
        LIST_INDEX(7, 89),
        0,
        127,
        0xa,
        BANK_INDEX(7, 134),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6174,
    },
    {
        LIST_INDEX(7, 90),
        LIST_INDEX(0, 0),
        34,
        127,
        0x18,
        BANK_INDEX(7, 135),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6180,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 91),
        LIST_INDEX(0, 0),
        35,
        57,
        0x13,
        BANK_INDEX(7, 136),
        60,
        0,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D6184,
    },
    {
        LIST_INDEX(7, 92),
        LIST_INDEX(0, 0),
        36,
        127,
        0x13,
        BANK_INDEX(7, 137),
        60,
        0,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D6194,
    },
    {
        LIST_INDEX(7, 93),
        LIST_INDEX(0, 0),
        0,
        127,
        0x13,
        BANK_INDEX(7, 138),
        60,
        0,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D61A4,
    },
    {
        LIST_INDEX(7, 94),
        LIST_INDEX(0, 0),
        0,
        127,
        0x13,
        BANK_INDEX(7, 139),
        60,
        0,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D61B4,
    },
    {
        LIST_INDEX(7, 95),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 140),
        60,
        10,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D61C4,
    },
    {
        LIST_INDEX(7, 96),
        LIST_INDEX(0, 0),
        0,
        127,
        0x13,
        BANK_INDEX(7, 141),
        60,
        0,
        BANK_INDEX(7, 39),
        BANK_INDEX(7, 40),
        0x800D61D4,
    },
    {
        LIST_INDEX(7, 97),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 142),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D61E4,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 98),
        LIST_INDEX(0, 0),
        0,
        127,
        0x1,
        BANK_INDEX(7, 143),
        0,
        2,
        BANK_INDEX(7, 51),
        BANK_INDEX(7, 52),
        0x800D61E8,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 99),
        LIST_INDEX(0, 0),
        37,
        127,
        0xd,
        BANK_INDEX(7, 144),
        60,
        0,
        BANK_INDEX(7, 3),
        BANK_INDEX(7, 4),
        0x800D61F0,
    },
    {
        LIST_INDEX(7, 100),
        LIST_INDEX(0, 0),
        38,
        19,
        0xd,
        BANK_INDEX(7, 145),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D61FC,
    },
    {
        LIST_INDEX(7, 101),
        LIST_INDEX(0, 0),
        39,
        19,
        0xd,
        BANK_INDEX(7, 146),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6208,
    },
    {
        LIST_INDEX(7, 102),
        LIST_INDEX(0, 0),
        40,
        19,
        0x22,
        BANK_INDEX(7, 147),
        0,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6214,
    },
    {
        LIST_INDEX(7, 103),
        LIST_INDEX(0, 0),
        41,
        19,
        0xd,
        BANK_INDEX(7, 148),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6220,
    },
    {
        LIST_INDEX(7, 104),
        LIST_INDEX(0, 0),
        42,
        19,
        0xd,
        BANK_INDEX(7, 149),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D622C,
    },
    {
        LIST_INDEX(7, 105),
        LIST_INDEX(0, 0),
        43,
        127,
        0x18,
        BANK_INDEX(7, 150),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6238,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 106),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 151),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D623C,
    },
    {
        LIST_INDEX(7, 107),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 152),
        0,
        6,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6248,
    },
    {
        LIST_INDEX(7, 108),
        LIST_INDEX(7, 109),
        0,
        127,
        0xb,
        BANK_INDEX(7, 153),
        60,
        0,
        BANK_INDEX(7, 41),
        BANK_INDEX(7, 42),
        0x800D6258,
    },
    {
        LIST_INDEX(7, 110),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 154),
        0,
        0,
        BANK_INDEX(7, 41),
        BANK_INDEX(7, 42),
        0x800D6264,
    },
    {
        LIST_INDEX(7, 111),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 155),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6270,
    },
    {
        LIST_INDEX(7, 112),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 156),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D627C,
    },
    {
        LIST_INDEX(7, 113),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 157),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6288,
    },
    {
        LIST_INDEX(7, 114),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 158),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6294,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 115),
        LIST_INDEX(7, 116),
        44,
        5,
        0xc,
        BANK_INDEX(7, 159),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6298,
    },
    {
        LIST_INDEX(7, 117),
        LIST_INDEX(0, 0),
        45,
        5,
        0xc,
        BANK_INDEX(7, 160),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D62A4,
    },
    {
        LIST_INDEX(7, 118),
        LIST_INDEX(0, 0),
        47,
        5,
        0xc,
        BANK_INDEX(7, 161),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D62B0,
    },
    {
        LIST_INDEX(7, 119),
        LIST_INDEX(0, 0),
        47,
        5,
        0xc,
        BANK_INDEX(7, 162),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D62BC,
    },
    {
        LIST_INDEX(7, 120),
        LIST_INDEX(0, 0),
        46,
        5,
        0xc,
        BANK_INDEX(7, 163),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D62C8,
    },
    {
        LIST_INDEX(7, 121),
        LIST_INDEX(0, 0),
        48,
        5,
        0x18,
        BANK_INDEX(7, 164),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D62D4,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 122),
        LIST_INDEX(0, 0),
        49,
        127,
        0xb,
        BANK_INDEX(7, 165),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D62D8,
    },
    {
        LIST_INDEX(7, 123),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 166),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D62E4,
    },
    {
        LIST_INDEX(7, 124),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 167),
        60,
        8,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D62F0,
    },
    {
        LIST_INDEX(7, 125),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 168),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D62FC,
    },
    {
        LIST_INDEX(7, 126),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 169),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D6308,
    },
    {
        LIST_INDEX(7, 127),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 170),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D6314,
    },
    {
        LIST_INDEX(7, 128),
        LIST_INDEX(0, 0),
        0,
        127,
        0xb,
        BANK_INDEX(7, 171),
        60,
        0,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D6320,
    },
    {
        LIST_INDEX(7, 129),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 172),
        60,
        3,
        BANK_INDEX(7, 29),
        BANK_INDEX(7, 30),
        0x800D632C,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 130),
        LIST_INDEX(0, 0),
        0,
        127,
        0x1,
        BANK_INDEX(7, 173),
        60,
        2,
        BANK_INDEX(7, 53),
        BANK_INDEX(7, 54),
        0x800D6330,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 131),
        LIST_INDEX(0, 0),
        50,
        127,
        0x10,
        BANK_INDEX(7, 174),
        60,
        0,
        BANK_INDEX(7, 1),
        BANK_INDEX(7, 2),
        0x800D633C,
    },
    {
        LIST_INDEX(7, 132),
        LIST_INDEX(7, 133),
        51,
        127,
        0x10,
        BANK_INDEX(7, 175),
        60,
        0,
        BANK_INDEX(7, 1),
        BANK_INDEX(7, 2),
        0x800D6348,
    },
    {
        LIST_INDEX(7, 134),
        LIST_INDEX(0, 0),
        0,
        51,
        0x10,
        BANK_INDEX(7, 176),
        0,
        5,
        BANK_INDEX(7, 1),
        BANK_INDEX(7, 2),
        0x800D6354,
    },
    {
        LIST_INDEX(7, 135),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 177),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6360,
    },
    {
        LIST_INDEX(7, 136),
        LIST_INDEX(7, 137),
        0,
        51,
        0x10,
        BANK_INDEX(7, 178),
        60,
        0,
        BANK_INDEX(7, 1),
        BANK_INDEX(7, 2),
        0x800D636C,
    },
    {
        LIST_INDEX(7, 138),
        LIST_INDEX(7, 139),
        50,
        127,
        0x10,
        BANK_INDEX(7, 179),
        60,
        0,
        BANK_INDEX(7, 1),
        BANK_INDEX(7, 2),
        0x800D6378,
    },
    {
        LIST_INDEX(7, 140),
        LIST_INDEX(0, 0),
        53,
        127,
        0x18,
        BANK_INDEX(7, 180),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6384,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 141),
        LIST_INDEX(0, 0),
        54,
        55,
        0xe,
        BANK_INDEX(7, 181),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6388,
    },
    {
        LIST_INDEX(7, 142),
        LIST_INDEX(0, 0),
        56,
        55,
        0xe,
        BANK_INDEX(7, 182),
        0,
        0,
        BANK_INDEX(7, 33),
        BANK_INDEX(7, 34),
        0x800D6394,
    },
    {
        LIST_INDEX(7, 143),
        LIST_INDEX(0, 0),
        55,
        55,
        0xe,
        BANK_INDEX(7, 183),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D63A0,
    },
    {
        LIST_INDEX(7, 144),
        LIST_INDEX(0, 0),
        58,
        55,
        0xe,
        BANK_INDEX(7, 184),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D63AC,
    },
    {
        LIST_INDEX(7, 145),
        LIST_INDEX(0, 0),
        57,
        55,
        0xe,
        BANK_INDEX(7, 185),
        0,
        0,
        BANK_INDEX(7, 33),
        BANK_INDEX(7, 34),
        0x800D63B8,
    },
    {
        LIST_INDEX(7, 146),
        LIST_INDEX(0, 0),
        0,
        5,
        0x22,
        BANK_INDEX(7, 186),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D63C4,
    },
    {
        LIST_INDEX(7, 147),
        LIST_INDEX(0, 0),
        59,
        55,
        0x18,
        BANK_INDEX(7, 187),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D63D0,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 148),
        LIST_INDEX(0, 0),
        60,
        5,
        0x10,
        BANK_INDEX(7, 188),
        60,
        0,
        BANK_INDEX(7, 9),
        BANK_INDEX(7, 10),
        0x800D63D4,
    },
    {
        LIST_INDEX(7, 149),
        LIST_INDEX(0, 0),
        61,
        5,
        0x10,
        BANK_INDEX(7, 189),
        60,
        0,
        BANK_INDEX(7, 9),
        BANK_INDEX(7, 10),
        0x800D63E4,
    },
    {
        LIST_INDEX(7, 150),
        LIST_INDEX(0, 0),
        0,
        127,
        0x10,
        BANK_INDEX(7, 190),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D63F4,
    },
    {
        LIST_INDEX(7, 151),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 191),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6404,
    },
    {
        LIST_INDEX(7, 152),
        LIST_INDEX(0, 0),
        0,
        127,
        0x10,
        BANK_INDEX(7, 192),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6414,
    },
    {
        LIST_INDEX(7, 153),
        LIST_INDEX(0, 0),
        0,
        127,
        0x10,
        BANK_INDEX(7, 193),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6424,
    },
    {
        LIST_INDEX(7, 154),
        LIST_INDEX(7, 155),
        0,
        127,
        0x10,
        BANK_INDEX(7, 194),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6434,
    },
    {
        LIST_INDEX(7, 156),
        LIST_INDEX(0, 0),
        62,
        5,
        0x10,
        BANK_INDEX(7, 195),
        60,
        0,
        BANK_INDEX(7, 9),
        BANK_INDEX(7, 10),
        0x800D6444,
    },
    {
        LIST_INDEX(7, 157),
        LIST_INDEX(0, 0),
        0,
        5,
        0x18,
        BANK_INDEX(7, 196),
        60,
        3,
        BANK_INDEX(7, 9),
        BANK_INDEX(7, 10),
        0x800D6454,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 158),
        LIST_INDEX(0, 0),
        63,
        127,
        0x10,
        BANK_INDEX(7, 197),
        60,
        0,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D6458,
    },
    {
        LIST_INDEX(7, 159),
        LIST_INDEX(0, 0),
        0,
        127,
        0x15,
        BANK_INDEX(7, 198),
        60,
        0,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D6468,
    },
    {
        LIST_INDEX(7, 160),
        LIST_INDEX(7, 161),
        0,
        127,
        0x15,
        BANK_INDEX(7, 199),
        60,
        8,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D6478,
    },
    {
        LIST_INDEX(7, 162),
        LIST_INDEX(0, 0),
        64,
        127,
        0x15,
        BANK_INDEX(7, 200),
        60,
        0,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D6488,
    },
    {
        LIST_INDEX(7, 163),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 201),
        60,
        10,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D6498,
    },
    {
        LIST_INDEX(7, 164),
        LIST_INDEX(7, 165),
        64,
        127,
        0x15,
        BANK_INDEX(7, 202),
        60,
        0,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D64A8,
    },
    {
        LIST_INDEX(7, 166),
        LIST_INDEX(7, 167),
        0,
        127,
        0x15,
        BANK_INDEX(7, 203),
        60,
        0,
        BANK_INDEX(7, 35),
        BANK_INDEX(7, 36),
        0x800D64B8,
    },
    {
        LIST_INDEX(7, 168),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 204),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D64C8,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 169),
        LIST_INDEX(0, 0),
        65,
        127,
        0x1,
        BANK_INDEX(7, 205),
        0,
        2,
        BANK_INDEX(7, 19),
        BANK_INDEX(7, 20),
        0x800D64CC,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 170),
        LIST_INDEX(7, 171),
        66,
        127,
        0xd,
        BANK_INDEX(7, 206),
        60,
        0,
        BANK_INDEX(7, 43),
        BANK_INDEX(7, 44),
        0x800D64D4,
    },
    {
        LIST_INDEX(7, 172),
        LIST_INDEX(0, 0),
        0,
        127,
        0x22,
        BANK_INDEX(7, 207),
        60,
        10,
        BANK_INDEX(7, 43),
        BANK_INDEX(7, 44),
        0x800D64E0,
    },
    {
        LIST_INDEX(7, 173),
        LIST_INDEX(0, 0),
        67,
        127,
        0xd,
        BANK_INDEX(7, 208),
        60,
        0,
        BANK_INDEX(7, 43),
        BANK_INDEX(7, 44),
        0x800D64EC,
    },
    {
        LIST_INDEX(7, 174),
        LIST_INDEX(0, 0),
        69,
        127,
        0x18,
        BANK_INDEX(7, 209),
        60,
        3,
        BANK_INDEX(7, 43),
        BANK_INDEX(7, 44),
        0x800D64F8,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 175),
        LIST_INDEX(7, 176),
        70,
        127,
        0x14,
        BANK_INDEX(7, 210),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D64FC,
    },
    {
        LIST_INDEX(7, 177),
        LIST_INDEX(7, 178),
        0,
        127,
        0x14,
        BANK_INDEX(7, 211),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D650C,
    },
    {
        LIST_INDEX(7, 179),
        LIST_INDEX(7, 180),
        0,
        127,
        0x14,
        BANK_INDEX(7, 212),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D651C,
    },
    {
        LIST_INDEX(7, 181),
        LIST_INDEX(7, 182),
        0,
        127,
        0x14,
        BANK_INDEX(7, 213),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D652C,
    },
    {
        LIST_INDEX(7, 183),
        LIST_INDEX(0, 0),
        0,
        127,
        0x14,
        BANK_INDEX(7, 214),
        60,
        0,
        BANK_INDEX(7, 17),
        BANK_INDEX(7, 18),
        0x800D653C,
    },
    {
        LIST_INDEX(7, 184),
        LIST_INDEX(0, 0),
        0,
        127,
        0x14,
        BANK_INDEX(7, 215),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D654C,
    },
    {
        LIST_INDEX(7, 185),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 216),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D655C,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 186),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 217),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6560,
    },
    {
        LIST_INDEX(7, 187),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 218),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6570,
    },
    {
        LIST_INDEX(7, 188),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 219),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6580,
    },
    {
        LIST_INDEX(7, 189),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 220),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6590,
    },
    {
        LIST_INDEX(7, 190),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 221),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65A0,
    },
    {
        LIST_INDEX(7, 191),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 222),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65B0,
    },
    {
        LIST_INDEX(7, 192),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 223),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65C0,
    },
    {
        LIST_INDEX(7, 193),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 224),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65D0,
    },
    {
        LIST_INDEX(7, 194),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 225),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65E0,
    },
    {
        LIST_INDEX(7, 195),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 226),
        60,
        10,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D65F0,
    },
    {
        LIST_INDEX(7, 196),
        LIST_INDEX(0, 0),
        0,
        127,
        0x16,
        BANK_INDEX(7, 227),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6600,
    },
    {
        LIST_INDEX(7, 197),
        LIST_INDEX(0, 0),
        0,
        127,
        0x18,
        BANK_INDEX(7, 228),
        60,
        3,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6610,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 198),
        LIST_INDEX(0, 0),
        0,
        127,
        0x3d,
        BANK_INDEX(7, 229),
        60,
        2,
        BANK_INDEX(7, 27),
        BANK_INDEX(7, 28),
        0x800D6614,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 199),
        LIST_INDEX(7, 200),
        71,
        127,
        0x3c,
        BANK_INDEX(7, 230),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6620,
    },
    {
        LIST_INDEX(7, 201),
        LIST_INDEX(7, 202),
        71,
        127,
        0x3c,
        BANK_INDEX(7, 231),
        0,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6628,
    },
    {
        LIST_INDEX(7, 203),
        LIST_INDEX(0, 0),
        71,
        127,
        0x2,
        BANK_INDEX(7, 232),
        60,
        9,
        BANK_INDEX(7, 5),
        BANK_INDEX(7, 6),
        0x800D6630,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 204),
        LIST_INDEX(0, 0),
        0,
        127,
        0x27,
        BANK_INDEX(7, 233),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6638,
    },
    {
        LIST_INDEX(7, 205),
        LIST_INDEX(0, 0),
        0,
        127,
        0x27,
        BANK_INDEX(7, 234),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6640,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 206),
        LIST_INDEX(0, 0),
        72,
        127,
        0x20,
        BANK_INDEX(7, 235),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6648,
    },
    NULL_STAGE,
    {
        LIST_INDEX(7, 207),
        LIST_INDEX(0, 0),
        0,
        1,
        0x27,
        BANK_INDEX(7, 236),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6654,
    },
    {
        LIST_INDEX(7, 208),
        LIST_INDEX(0, 0),
        0,
        127,
        0x27,
        BANK_INDEX(7, 237),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6660,
    },
    {
        LIST_INDEX(7, 209),
        LIST_INDEX(0, 0),
        0,
        127,
        0x27,
        BANK_INDEX(7, 238),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D666C,
    },
    {
        LIST_INDEX(7, 210),
        LIST_INDEX(0, 0),
        1,
        127,
        0x27,
        BANK_INDEX(7, 239),
        60,
        0,
        BANK_INDEX(7, 31),
        BANK_INDEX(7, 32),
        0x800D6674,
    },
    NULL_STAGE,
   
};

struct StageArea *D_800D1F98[][12] = {
	{
		&D_800D01A4[0],
		&D_800D01A4[6],
		&D_800D01A4[14],
		&D_800D01A4[25],
	},
	{
		&D_800D01A4[27],
		&D_800D01A4[34],
		&D_800D01A4[42],
		&D_800D01A4[52],
		&D_800D01A4[62],
	},
	{
		&D_800D01A4[64],
		&D_800D01A4[72],
		&D_800D01A4[80],
		&D_800D01A4[89],
		&D_800D01A4[97],
	},
	{
		&D_800D01A4[99],
		&D_800D01A4[107],
		&D_800D01A4[116],
		&D_800D01A4[123],
		&D_800D01A4[132],
	},
	{
		&D_800D01A4[134],
		&D_800D01A4[142],
		&D_800D01A4[150],
		&D_800D01A4[160],
		&D_800D01A4[169],
	},
	{
		&D_800D01A4[171],
		&D_800D01A4[176],
		&D_800D01A4[184],
		&D_800D01A4[197],
	},
	{
		&D_800D01A4[199],
		&D_800D01A4[203],
		&D_800D01A4[206],
		&D_800D01A4[208],
	},
};


u32 D_800D20E8 = 0x00000000;

u32 D_800D20EC = 0x00000000;

u32 D_800D20F0 = 0x00000000;

u32 D_800D20F4 = 0x00000000;

u32 D_800D20F8 = 0x00000000;

u32 D_800D20FC = 0x00000000;

u32 D_800D2100 = 0x00000000;

u32 D_800D2104 = 0x00000000;

u32 D_800D2108 = 0x00000000;

u32 D_800D210C = 0x00000000;

u32 D_800D2110 = 0x00000000;

u32 D_800D2114 = 0x00000000;

u32 D_800D2118 = 0x00000000;

u32 D_800D211C = 0x00000000;

u32 D_800D2120 = 0x00000000;

u32 D_800D2124 = 0x00000000;

u32 D_800D2128 = 0x00000000;

u32 D_800D212C = 0x00000000;

u32 D_800D2130 = 0x00000000;

u32 D_800D2134 = 0x00000000;

u32 D_800D2138 = 0x00000000;

u32 D_800D213C = 0x00000000;

u32 D_800D2140 = 0x00000000;

u32 D_800D2144 = 0x00000000;

u32 D_800D2148 = 0x00070007;

u32 D_800D214C = 0x00000016;

u32 D_800D2150 = 0x004F0038;

u32 D_800D2154 = 0xFF88FF88;

f32 D_800D2158 = 1.0f;

u32 D_800D215C = 0x406CCCCD;

u32 D_800D2160 = 0x00000000;

u32 D_800D2164 = 0x00000000;

f32 D_800D2168 = 0.2f;

u32 D_800D216C = 0x3E666666;

f32 D_800D2170 = 0.9f;

f32 D_800D2174 = 1.0f;

u32 D_800D2178 = 0x00000000;

u32 D_800D217C = 0x00000000;

u32 D_800D2180 = 0x00000000;

u32 D_800D2184 = 0x00000000;

u32 D_800D2188 = 0x00000000;

u32 D_800D218C = 0x00000000;

u32 D_800D2190 = 0x00000000;

u32 D_800D2194 = 0x00000000;

u32 D_800D2198 = 0x00000000;

u32 D_800D219C = 0x00000000;

u32 D_800D21A0 = 0x00000000;

u32 D_800D21A4 = 0x00000000;

u32 D_800D21A8 = 0x00070025;

u32 D_800D21AC = 0x00000016;

u32 D_800D21B0 = 0x000D0000;

u32 D_800D21B4 = 0x00000064;

f32 D_800D21B8 = 1.2f;

f32 D_800D21BC = 1.0f;

u32 D_800D21C0 = 0x00000000;

u32 D_800D21C4 = 0x00000000;

u32 D_800D21C8 = 0x3E800000;

u32 D_800D21CC = 0x00000000;

f32 D_800D21D0 = 0.6f;

f32 D_800D21D4 = 1.0f;

u32 D_800D21D8 = 0x00000000;

u32 D_800D21DC = 0x00000000;

u32 D_800D21E0 = 0x00000000;

u32 D_800D21E4 = 0x00000000;

u32 D_800D21E8 = 0x00000000;

u32 D_800D21EC = 0x00000000;

u32 D_800D21F0 = 0x00000000;

u32 D_800D21F4 = 0x00000000;

u32 D_800D21F8 = 0x00000000;

u32 D_800D21FC = 0x00000000;

u32 D_800D2200 = 0x00000000;

u32 D_800D2204 = 0x00000000;

u32 D_800D2208 = 0x00070023;

u32 D_800D220C = 0x00000016;

u32 D_800D2210 = 0x000C0000;

u32 D_800D2214 = 0x0000000A;

u32 D_800D2218 = 0x40000000;

f32 D_800D221C = 1.0f;

u32 D_800D2220 = 0x00000000;

u32 D_800D2224 = 0x00000000;

u32 D_800D2228 = 0x00000000;

u32 D_800D222C = 0x00000000;

f32 D_800D2230 = 1.3f;

f32 D_800D2234 = 1.1f;

u32 D_800D2238 = 0x0007000C;

u32 D_800D223C = 0x00000012;

u32 D_800D2240 = 0x000C0000;

u32 D_800D2244 = 0x0000000A;

f32 D_800D2248 = 1.7f;

f32 D_800D224C = 1.3f;

u32 D_800D2250 = 0x00000000;

u32 D_800D2254 = 0x00000000;

u32 D_800D2258 = 0x00000000;

u32 D_800D225C = 0x00000000;

f32 D_800D2260 = 1.2f;

f32 D_800D2264 = 1.05f;

u32 D_800D2268 = 0x00000000;

u32 D_800D226C = 0x00000000;

u32 D_800D2270 = 0x00000000;

u32 D_800D2274 = 0x00000000;

u32 D_800D2278 = 0x00000000;

u32 D_800D227C = 0x00000000;

u32 D_800D2280 = 0x00000000;

u32 D_800D2284 = 0x00000000;

u32 D_800D2288 = 0x00000000;

u32 D_800D228C = 0x00000000;

u32 D_800D2290 = 0x00000000;

u32 D_800D2294 = 0x00000000;

u32 D_800D2298 = 0x00070024;

u32 D_800D229C = 0x00000016;

u32 D_800D22A0 = 0x004F001D;

u32 D_800D22A4 = 0x00000032;

f32 D_800D22A8 = 0.7f;

f32 D_800D22AC = 0.7f;

u32 D_800D22B0 = 0x00000000;

u32 D_800D22B4 = 0x00000000;

f32 D_800D22B8 = 0.01f;

f32 D_800D22BC = 0.01f;

f32 D_800D22C0 = 1.0f;

f32 D_800D22C4 = 1.0f;

u32 D_800D22C8 = 0x0007001A;

u32 D_800D22CC = 0x00000016;

u32 D_800D22D0 = 0x002F0000;

u32 D_800D22D4 = 0x00000046;

f32 D_800D22D8 = 1.0f;

f32 D_800D22DC = 1.0f;

u32 D_800D22E0 = 0x00000000;

u32 D_800D22E4 = 0x00000000;

f32 D_800D22E8 = 0.15f;

f32 D_800D22EC = 0.05f;

f32 D_800D22F0 = 1.0f;

f32 D_800D22F4 = 1.0f;

u32 D_800D22F8 = 0x00070016;

u32 D_800D22FC = 0x00000012;

u32 D_800D2300 = 0x002F0000;

u32 D_800D2304 = 0x0000005A;

f32 D_800D2308 = 1.0f;

f32 D_800D230C = 1.0f;

u32 D_800D2310 = 0x00000000;

u32 D_800D2314 = 0x00000000;

f32 D_800D2318 = 0.2f;

f32 D_800D231C = 0.05f;

f32 D_800D2320 = 1.0f;

f32 D_800D2324 = 1.0f;

u32 D_800D2328 = 0x00000000;

u32 D_800D232C = 0x00000000;

u32 D_800D2330 = 0x00000000;

u32 D_800D2334 = 0x00000000;

u32 D_800D2338 = 0x00000000;

u32 D_800D233C = 0x00000000;

u32 D_800D2340 = 0x00000000;

u32 D_800D2344 = 0x00000000;

u32 D_800D2348 = 0x00000000;

u32 D_800D234C = 0x00000000;

u32 D_800D2350 = 0x00000000;

u32 D_800D2354 = 0x00000000;

u32 D_800D2358 = 0x00070006;

u32 D_800D235C = 0x00000016;

u32 D_800D2360 = 0x004C000A;

u32 D_800D2364 = 0x0000001E;

f32 D_800D2368 = 0.6f;

f32 D_800D236C = 0.6f;

u32 D_800D2370 = 0x00000000;

u32 D_800D2374 = 0x00000000;

u32 D_800D2378 = 0x00000000;

u32 D_800D237C = 0x00000000;

f32 D_800D2380 = 1.0f;

f32 D_800D2384 = 1.0f;

u32 D_800D2388 = 0x00070005;

u32 D_800D238C = 0x00000012;

u32 D_800D2390 = 0x000C0000;

u32 D_800D2394 = 0x0000002D;

u32 D_800D2398 = 0x40000000;

f32 D_800D239C = 1.0f;

u32 D_800D23A0 = 0x00000000;

u32 D_800D23A4 = 0x00000000;

u32 D_800D23A8 = 0x00000000;

u32 D_800D23AC = 0x00000000;

f32 D_800D23B0 = 1.2f;

f32 D_800D23B4 = 1.0f;

u32 D_800D23B8 = 0x00070026;

u32 D_800D23BC = 0x00000012;

u32 D_800D23C0 = 0x002C0000;

u32 D_800D23C4 = 0x0000000A;

f32 D_800D23C8 = 1.3f;

f32 D_800D23CC = 1.0f;

f32 D_800D23D0 = -0.15f;

u32 D_800D23D4 = 0x00000000;

u32 D_800D23D8 = 0x00000000;

u32 D_800D23DC = 0x00000000;

f32 D_800D23E0 = 1.0f;

f32 D_800D23E4 = 1.0f;

u32 D_800D23E8 = 0x00000000;

u32 D_800D23EC = 0x00000000;

u32 D_800D23F0 = 0x00000000;

u32 D_800D23F4 = 0x00000000;

u32 D_800D23F8 = 0x00000000;

u32 D_800D23FC = 0x00000000;

u32 D_800D2400 = 0x00000000;

u32 D_800D2404 = 0x00000000;

u32 D_800D2408 = 0x00000000;

u32 D_800D240C = 0x00000000;

u32 D_800D2410 = 0x00000000;

u32 D_800D2414 = 0x00000000;

u32 D_800D2418 = 0x00070010;

u32 D_800D241C = 0x00000016;

u32 D_800D2420 = 0x000F0000;

u32 D_800D2424 = 0xFF6AFFEC;

f32 D_800D2428 = 1.0f;

f32 D_800D242C = 1.1f;

u32 D_800D2430 = 0x00000000;

u32 D_800D2434 = 0x00000000;

f32 D_800D2438 = 0.1f;

f32 D_800D243C = 0.01f;

f32 D_800D2440 = 1.0f;

f32 D_800D2444 = 1.0f;

u32 D_800D2448 = 0x00000000;

u32 D_800D244C = 0x00000000;

u32 D_800D2450 = 0x00000000;

u32 D_800D2454 = 0x00000000;

u32 D_800D2458 = 0x00000000;

u32 D_800D245C = 0x00000000;

u32 D_800D2460 = 0x00000000;

u32 D_800D2464 = 0x00000000;

u32 D_800D2468 = 0x00000000;

u32 D_800D246C = 0x00000000;

u32 D_800D2470 = 0x00000000;

u32 D_800D2474 = 0x00000000;

u32 D_800D2478 = 0x00070022;

u32 D_800D247C = 0x00000016;

u32 D_800D2480 = 0x000F0000;

u32 D_800D2484 = 0x000000AA;

f32 D_800D2488 = 1.0f;

f32 D_800D248C = 1.0f;

u32 D_800D2490 = 0x00000000;

u32 D_800D2494 = 0x00000000;

f32 D_800D2498 = 0.025f;

f32 D_800D249C = 0.1f;

u32 D_800D24A0 = 0x3F733333;

f32 D_800D24A4 = 1.0f;

u32 D_800D24A8 = 0x00070019;

u32 D_800D24AC = 0x00000012;

u32 D_800D24B0 = 0x000F0000;

u32 D_800D24B4 = 0x000000C8;

f32 D_800D24B8 = 0.9f;

f32 D_800D24BC = 0.9f;

u32 D_800D24C0 = 0x00000000;

u32 D_800D24C4 = 0x00000000;

f32 D_800D24C8 = 0.09f;

f32 D_800D24CC = 0.075f;

f32 D_800D24D0 = 0.9f;

f32 D_800D24D4 = 1.0f;

u32 D_800D24D8 = 0x00070015;

u32 D_800D24DC = 0x00000012;

u32 D_800D24E0 = 0x000F0000;

u32 D_800D24E4 = 0x000000C8;

f32 D_800D24E8 = 1.0f;

f32 D_800D24EC = 1.0f;

u32 D_800D24F0 = 0x00000000;

u32 D_800D24F4 = 0x00000000;

f32 D_800D24F8 = 0.09f;

f32 D_800D24FC = 0.075f;

f32 D_800D2500 = 0.85f;

f32 D_800D2504 = 1.0f;

u32 D_800D2508 = 0x00070003;

u32 D_800D250C = 0x00000012;

u32 D_800D2510 = 0x006F000F;

u32 D_800D2514 = 0x00000064;

f32 D_800D2518 = 1.5f;

u32 D_800D251C = 0x40000000;

f32 D_800D2520 = -0.1f;

u32 D_800D2524 = 0x00000000;

f32 D_800D2528 = 0.05f;

f32 D_800D252C = 0.075f;

f32 D_800D2530 = 0.9f;

f32 D_800D2534 = 1.0f;

u32 D_800D2538 = 0x00000000;

u32 D_800D253C = 0x00000000;

u32 D_800D2540 = 0x00000000;

u32 D_800D2544 = 0x00000000;

u32 D_800D2548 = 0x00000000;

u32 D_800D254C = 0x00000000;

u32 D_800D2550 = 0x00000000;

u32 D_800D2554 = 0x00000000;

u32 D_800D2558 = 0x00000000;

u32 D_800D255C = 0x00000000;

u32 D_800D2560 = 0x00000000;

u32 D_800D2564 = 0x00000000;

u32 D_800D2568 = 0x0007001B;

u32 D_800D256C = 0x00000012;

u32 D_800D2570 = 0x002F0000;

u32 D_800D2574 = 0x0000FF4C;

f32 D_800D2578 = 1.6f;

f32 D_800D257C = 1.2f;

f32 D_800D2580 = 0.2f;

u32 D_800D2584 = 0x00000000;

f32 D_800D2588 = 0.06f;

f32 D_800D258C = 0.06f;

f32 D_800D2590 = 1.0f;

f32 D_800D2594 = 1.0f;

u32 D_800D2598 = 0x00000000;

u32 D_800D259C = 0x00000000;

u32 D_800D25A0 = 0x00000000;

u32 D_800D25A4 = 0x00000000;

u32 D_800D25A8 = 0x00000000;

u32 D_800D25AC = 0x00000000;

u32 D_800D25B0 = 0x00000000;

u32 D_800D25B4 = 0x00000000;

u32 D_800D25B8 = 0x00000000;

u32 D_800D25BC = 0x00000000;

u32 D_800D25C0 = 0x00000000;

u32 D_800D25C4 = 0x00000000;

u32 D_800D25C8 = 0x00070002;

u32 D_800D25CC = 0x00000012;

u32 D_800D25D0 = 0x006F0036;

u32 D_800D25D4 = 0x00000032;

u32 D_800D25D8 = 0x40000000;

f32 D_800D25DC = 0.8f;

f32 D_800D25E0 = -0.1f;

u32 D_800D25E4 = 0x00000000;

f32 D_800D25E8 = 0.15f;

f32 D_800D25EC = 0.15f;

f32 D_800D25F0 = 1.0f;

f32 D_800D25F4 = 1.0f;

u32 D_800D25F8 = 0x00000000;

u32 D_800D25FC = 0x00000000;

u32 D_800D2600 = 0x00000000;

u32 D_800D2604 = 0x00000000;

u32 D_800D2608 = 0x00000000;

u32 D_800D260C = 0x00000000;

u32 D_800D2610 = 0x00000000;

u32 D_800D2614 = 0x00000000;

u32 D_800D2618 = 0x00000000;

u32 D_800D261C = 0x00000000;

u32 D_800D2620 = 0x00000000;

u32 D_800D2624 = 0x00000000;

u32 D_800D2628 = 0x00070007;

u32 D_800D262C = 0x00000016;

u32 D_800D2630 = 0x004D0018;

u32 D_800D2634 = 0x00000000;

u32 D_800D2638 = 0x40A00000;

u32 D_800D263C = 0x40400000;

u32 D_800D2640 = 0x00000000;

u32 D_800D2644 = 0x00000000;

f32 D_800D2648 = 0.025f;

u32 D_800D264C = 0x00000000;

f32 D_800D2650 = 0.1f;

f32 D_800D2654 = 1.0f;

u32 D_800D2658 = 0x00070026;

u32 D_800D265C = 0x00000012;

u32 D_800D2660 = 0x002F0000;

u32 D_800D2664 = 0x0000001E;

u32 D_800D2668 = 0x40066666;

u32 D_800D266C = 0x4019999A;

u32 D_800D2670 = 0x00000000;

u32 D_800D2674 = 0x00000000;

f32 D_800D2678 = 0.08f;

u32 D_800D267C = 0x3D23D70A;

f32 D_800D2680 = 1.0f;

f32 D_800D2684 = 1.0f;

u32 D_800D2688 = 0x00000000;

u32 D_800D268C = 0x00000000;

u32 D_800D2690 = 0x00000000;

u32 D_800D2694 = 0x00000000;

u32 D_800D2698 = 0x00000000;

u32 D_800D269C = 0x00000000;

u32 D_800D26A0 = 0x00000000;

u32 D_800D26A4 = 0x00000000;

u32 D_800D26A8 = 0x00000000;

u32 D_800D26AC = 0x00000000;

u32 D_800D26B0 = 0x00000000;

u32 D_800D26B4 = 0x00000000;

u32 D_800D26B8 = 0x00070011;

u32 D_800D26BC = 0x00000016;

u32 D_800D26C0 = 0x004F000E;

u32 D_800D26C4 = 0xFF6AFFC4;

f32 D_800D26C8 = 1.0f;

f32 D_800D26CC = 1.2f;

u32 D_800D26D0 = 0x00000000;

u32 D_800D26D4 = 0x00000000;

f32 D_800D26D8 = 0.01f;

f32 D_800D26DC = 0.01f;

f32 D_800D26E0 = 1.0f;

f32 D_800D26E4 = 1.0f;

u32 D_800D26E8 = 0x00070026;

u32 D_800D26EC = 0x00000012;

u32 D_800D26F0 = 0x002C0000;

u32 D_800D26F4 = 0x0000FFEC;

f32 D_800D26F8 = 1.1f;

f32 D_800D26FC = 1.0f;

f32 D_800D2700 = -0.2f;

u32 D_800D2704 = 0x00000000;

u32 D_800D2708 = 0x00000000;

u32 D_800D270C = 0x00000000;

f32 D_800D2710 = 1.0f;

f32 D_800D2714 = 1.0f;

u32 D_800D2718 = 0x0007001F;

u32 D_800D271C = 0x00000012;

u32 D_800D2720 = 0x000F0000;

u32 D_800D2724 = 0xFF6A0032;

f32 D_800D2728 = 1.1f;

f32 D_800D272C = 1.1f;

u32 D_800D2730 = 0x00000000;

u32 D_800D2734 = 0x00000000;

u32 D_800D2738 = 0x3D23D70A;

u32 D_800D273C = 0x3D23D70A;

f32 D_800D2740 = 1.0f;

f32 D_800D2744 = 1.0f;

u32 D_800D2748 = 0x00000000;

u32 D_800D274C = 0x00000000;

u32 D_800D2750 = 0x00000000;

u32 D_800D2754 = 0x00000000;

u32 D_800D2758 = 0x00000000;

u32 D_800D275C = 0x00000000;

u32 D_800D2760 = 0x00000000;

u32 D_800D2764 = 0x00000000;

u32 D_800D2768 = 0x00000000;

u32 D_800D276C = 0x00000000;

u32 D_800D2770 = 0x00000000;

u32 D_800D2774 = 0x00000000;

u32 D_800D2778 = 0x00070002;

u32 D_800D277C = 0x00000012;

u32 D_800D2780 = 0x002E0000;

u32 D_800D2784 = 0x00000000;

f32 D_800D2788 = 1.4f;

f32 D_800D278C = 1.0f;

f32 D_800D2790 = -0.15f;

u32 D_800D2794 = 0x00000000;

u32 D_800D2798 = 0x00000000;

f32 D_800D279C = 0.06f;

f32 D_800D27A0 = 1.0f;

f32 D_800D27A4 = 1.0f;

u32 D_800D27A8 = 0x00000000;

u32 D_800D27AC = 0x00000000;

u32 D_800D27B0 = 0x00000000;

u32 D_800D27B4 = 0x00000000;

u32 D_800D27B8 = 0x00000000;

u32 D_800D27BC = 0x00000000;

u32 D_800D27C0 = 0x00000000;

u32 D_800D27C4 = 0x00000000;

u32 D_800D27C8 = 0x00000000;

u32 D_800D27CC = 0x00000000;

u32 D_800D27D0 = 0x00000000;

u32 D_800D27D4 = 0x00000000;

u32 D_800D27D8 = 0x00070006;

u32 D_800D27DC = 0x00000016;

u32 D_800D27E0 = 0x004D000A;

u32 D_800D27E4 = 0x0000001E;

f32 D_800D27E8 = 0.9f;

f32 D_800D27EC = 0.9f;

u32 D_800D27F0 = 0x00000000;

u32 D_800D27F4 = 0x00000000;

f32 D_800D27F8 = 0.08f;

u32 D_800D27FC = 0x00000000;

f32 D_800D2800 = 1.0f;

f32 D_800D2804 = 1.0f;

u32 D_800D2808 = 0x00070005;

u32 D_800D280C = 0x00000012;

u32 D_800D2810 = 0x000D0000;

u32 D_800D2814 = 0x0000004B;

u32 D_800D2818 = 0x40000000;

f32 D_800D281C = 1.0f;

u32 D_800D2820 = 0x00000000;

u32 D_800D2824 = 0x00000000;

f32 D_800D2828 = 0.125f;

u32 D_800D282C = 0x00000000;

f32 D_800D2830 = 1.2f;

f32 D_800D2834 = 1.0f;

u32 D_800D2838 = 0x00070026;

u32 D_800D283C = 0x00000012;

u32 D_800D2840 = 0x002D0000;

u32 D_800D2844 = 0x00000023;

f32 D_800D2848 = 1.3f;

f32 D_800D284C = 1.0f;

f32 D_800D2850 = -0.15f;

u32 D_800D2854 = 0x00000000;

f32 D_800D2858 = 0.08f;

u32 D_800D285C = 0x00000000;

f32 D_800D2860 = 1.0f;

f32 D_800D2864 = 1.0f;

u32 D_800D2868 = 0x00000000;

u32 D_800D286C = 0x00000000;

u32 D_800D2870 = 0x00000000;

u32 D_800D2874 = 0x00000000;

u32 D_800D2878 = 0x00000000;

u32 D_800D287C = 0x00000000;

u32 D_800D2880 = 0x00000000;

u32 D_800D2884 = 0x00000000;

u32 D_800D2888 = 0x00000000;

u32 D_800D288C = 0x00000000;

u32 D_800D2890 = 0x00000000;

u32 D_800D2894 = 0x00000000;

u32 D_800D2898 = 0x00070023;

u32 D_800D289C = 0x00000016;

u32 D_800D28A0 = 0x000F0000;

u32 D_800D28A4 = 0x0000FF9C;

u32 D_800D28A8 = 0x404CCCCD;

u32 D_800D28AC = 0x40A00000;

u32 D_800D28B0 = 0x00000000;

u32 D_800D28B4 = 0x00000000;

u32 D_800D28B8 = 0x3D23D70A;

f32 D_800D28BC = 0.05f;

f32 D_800D28C0 = 0.4f;

f32 D_800D28C4 = 0.3f;

u32 D_800D28C8 = 0x00000000;

u32 D_800D28CC = 0x00000000;

u32 D_800D28D0 = 0x00000000;

u32 D_800D28D4 = 0x00000000;

u32 D_800D28D8 = 0x00000000;

u32 D_800D28DC = 0x00000000;

u32 D_800D28E0 = 0x00000000;

u32 D_800D28E4 = 0x00000000;

u32 D_800D28E8 = 0x00000000;

u32 D_800D28EC = 0x00000000;

u32 D_800D28F0 = 0x00000000;

u32 D_800D28F4 = 0x00000000;

u32 D_800D28F8 = 0x00070010;

u32 D_800D28FC = 0x00000016;

u32 D_800D2900 = 0x000F0000;

u32 D_800D2904 = 0xFF600028;

f32 D_800D2908 = 1.1f;

f32 D_800D290C = 1.1f;

u32 D_800D2910 = 0x00000000;

u32 D_800D2914 = 0x00000000;

f32 D_800D2918 = 0.1f;

f32 D_800D291C = 0.01f;

f32 D_800D2920 = 1.0f;

f32 D_800D2924 = 1.0f;

u32 D_800D2928 = 0x00000000;

u32 D_800D292C = 0x00000000;

u32 D_800D2930 = 0x00000000;

u32 D_800D2934 = 0x00000000;

u32 D_800D2938 = 0x00000000;

u32 D_800D293C = 0x00000000;

u32 D_800D2940 = 0x00000000;

u32 D_800D2944 = 0x00000000;

u32 D_800D2948 = 0x00000000;

u32 D_800D294C = 0x00000000;

u32 D_800D2950 = 0x00000000;

u32 D_800D2954 = 0x00000000;

u32 D_800D2958 = 0x00070011;

u32 D_800D295C = 0x00000016;

u32 D_800D2960 = 0x004F0033;

u32 D_800D2964 = 0xFF6AFE70;

u32 D_800D2968 = 0x40200000;

f32 D_800D296C = 1.6f;

u32 D_800D2970 = 0x00000000;

u32 D_800D2974 = 0x00000000;

f32 D_800D2978 = 0.01f;

f32 D_800D297C = 0.01f;

f32 D_800D2980 = 1.0f;

f32 D_800D2984 = 1.0f;

u32 D_800D2988 = 0x00000000;

u32 D_800D298C = 0x00000000;

u32 D_800D2990 = 0x00000000;

u32 D_800D2994 = 0x00000000;

u32 D_800D2998 = 0x00000000;

u32 D_800D299C = 0x00000000;

u32 D_800D29A0 = 0x00000000;

u32 D_800D29A4 = 0x00000000;

u32 D_800D29A8 = 0x00000000;

u32 D_800D29AC = 0x00000000;

u32 D_800D29B0 = 0x00000000;

u32 D_800D29B4 = 0x00000000;

u32 D_800D29B8 = 0x00070004;

u32 D_800D29BC = 0x00000012;

u32 D_800D29C0 = 0x000C0000;

u32 D_800D29C4 = 0x00000000;

u32 D_800D29C8 = 0x40000000;

f32 D_800D29CC = 1.0f;

u32 D_800D29D0 = 0x00000000;

u32 D_800D29D4 = 0x00000000;

u32 D_800D29D8 = 0x00000000;

u32 D_800D29DC = 0x00000000;

u32 D_800D29E0 = 0x3F000000;

u32 D_800D29E4 = 0x3F000000;

u32 D_800D29E8 = 0x00000000;

u32 D_800D29EC = 0x00000000;

u32 D_800D29F0 = 0x00000000;

u32 D_800D29F4 = 0x00000000;

u32 D_800D29F8 = 0x00000000;

u32 D_800D29FC = 0x00000000;

u32 D_800D2A00 = 0x00000000;

u32 D_800D2A04 = 0x00000000;

u32 D_800D2A08 = 0x00000000;

u32 D_800D2A0C = 0x00000000;

u32 D_800D2A10 = 0x00000000;

u32 D_800D2A14 = 0x00000000;

u32 D_800D2A18 = 0x00070028;

u32 D_800D2A1C = 0x00000016;

u32 D_800D2A20 = 0x000F0000;

u32 D_800D2A24 = 0x00000000;

f32 D_800D2A28 = 1.5f;

f32 D_800D2A2C = 1.0f;

u32 D_800D2A30 = 0x00000000;

u32 D_800D2A34 = 0x00000000;

f32 D_800D2A38 = 0.05f;

f32 D_800D2A3C = 0.05f;

f32 D_800D2A40 = 1.0f;

f32 D_800D2A44 = 1.0f;

u32 D_800D2A48 = 0x0007001D;

u32 D_800D2A4C = 0x00000012;

u32 D_800D2A50 = 0x000F0000;

u32 D_800D2A54 = 0x0000005A;

u32 D_800D2A58 = 0x40000000;

f32 D_800D2A5C = 1.0f;

u32 D_800D2A60 = 0x00000000;

u32 D_800D2A64 = 0x00000000;

f32 D_800D2A68 = 0.065f;

f32 D_800D2A6C = 0.05f;

f32 D_800D2A70 = 1.0f;

f32 D_800D2A74 = 1.0f;

u32 D_800D2A78 = 0x00000000;

u32 D_800D2A7C = 0x00000000;

u32 D_800D2A80 = 0x00000000;

u32 D_800D2A84 = 0x00000000;

u32 D_800D2A88 = 0x00000000;

u32 D_800D2A8C = 0x00000000;

u32 D_800D2A90 = 0x00000000;

u32 D_800D2A94 = 0x00000000;

u32 D_800D2A98 = 0x00000000;

u32 D_800D2A9C = 0x00000000;

u32 D_800D2AA0 = 0x00000000;

u32 D_800D2AA4 = 0x00000000;

u32 D_800D2AA8 = 0x00070023;

u32 D_800D2AAC = 0x00000016;

u32 D_800D2AB0 = 0x000F0000;

u32 D_800D2AB4 = 0x0000FFEC;

u32 D_800D2AB8 = 0x404CCCCD;

u32 D_800D2ABC = 0x404CCCCD;

u32 D_800D2AC0 = 0x00000000;

u32 D_800D2AC4 = 0x00000000;

u32 D_800D2AC8 = 0x3D23D70A;

f32 D_800D2ACC = 0.05f;

f32 D_800D2AD0 = 0.4f;

f32 D_800D2AD4 = 0.3f;

u32 D_800D2AD8 = 0x00000000;

u32 D_800D2ADC = 0x00000000;

u32 D_800D2AE0 = 0x00000000;

u32 D_800D2AE4 = 0x00000000;

u32 D_800D2AE8 = 0x00000000;

u32 D_800D2AEC = 0x00000000;

u32 D_800D2AF0 = 0x00000000;

u32 D_800D2AF4 = 0x00000000;

u32 D_800D2AF8 = 0x00000000;

u32 D_800D2AFC = 0x00000000;

u32 D_800D2B00 = 0x00000000;

u32 D_800D2B04 = 0x00000000;

u32 D_800D2B08 = 0x00070011;

u32 D_800D2B0C = 0x00000016;

u32 D_800D2B10 = 0x004F000E;

u32 D_800D2B14 = 0xFF74FFC4;

f32 D_800D2B18 = 1.0f;

f32 D_800D2B1C = 1.1f;

u32 D_800D2B20 = 0x00000000;

u32 D_800D2B24 = 0x00000000;

f32 D_800D2B28 = 0.01f;

f32 D_800D2B2C = 0.01f;

f32 D_800D2B30 = 1.0f;

f32 D_800D2B34 = 1.0f;

u32 D_800D2B38 = 0x00070026;

u32 D_800D2B3C = 0x00000012;

u32 D_800D2B40 = 0x002D0000;

u32 D_800D2B44 = 0x0000FFEC;

f32 D_800D2B48 = 1.2f;

f32 D_800D2B4C = 0.8f;

f32 D_800D2B50 = -0.2f;

u32 D_800D2B54 = 0x00000000;

f32 D_800D2B58 = 0.01f;

u32 D_800D2B5C = 0x00000000;

f32 D_800D2B60 = 1.0f;

f32 D_800D2B64 = 1.0f;

u32 D_800D2B68 = 0x0007001F;

u32 D_800D2B6C = 0x00000012;

u32 D_800D2B70 = 0x000F0000;

u32 D_800D2B74 = 0x00000028;

f32 D_800D2B78 = 1.0f;

f32 D_800D2B7C = 0.8f;

u32 D_800D2B80 = 0x00000000;

u32 D_800D2B84 = 0x00000000;

u32 D_800D2B88 = 0x3D23D70A;

u32 D_800D2B8C = 0x3D23D70A;

f32 D_800D2B90 = 1.0f;

f32 D_800D2B94 = 1.0f;

u32 D_800D2B98 = 0x00000000;

u32 D_800D2B9C = 0x00000000;

u32 D_800D2BA0 = 0x00000000;

u32 D_800D2BA4 = 0x00000000;

u32 D_800D2BA8 = 0x00000000;

u32 D_800D2BAC = 0x00000000;

u32 D_800D2BB0 = 0x00000000;

u32 D_800D2BB4 = 0x00000000;

u32 D_800D2BB8 = 0x00000000;

u32 D_800D2BBC = 0x00000000;

u32 D_800D2BC0 = 0x00000000;

u32 D_800D2BC4 = 0x00000000;

u32 D_800D2BC8 = 0x00070004;

u32 D_800D2BCC = 0x00000012;

u32 D_800D2BD0 = 0x000D0000;

u32 D_800D2BD4 = 0x00000028;

u32 D_800D2BD8 = 0x40200000;

f32 D_800D2BDC = 1.5f;

u32 D_800D2BE0 = 0x00000000;

u32 D_800D2BE4 = 0x00000000;

f32 D_800D2BE8 = 0.075f;

u32 D_800D2BEC = 0x00000000;

u32 D_800D2BF0 = 0x3F000000;

f32 D_800D2BF4 = 1.0f;

u32 D_800D2BF8 = 0x00000000;

u32 D_800D2BFC = 0x00000000;

u32 D_800D2C00 = 0x00000000;

u32 D_800D2C04 = 0x00000000;

u32 D_800D2C08 = 0x00000000;

u32 D_800D2C0C = 0x00000000;

u32 D_800D2C10 = 0x00000000;

u32 D_800D2C14 = 0x00000000;

u32 D_800D2C18 = 0x00000000;

u32 D_800D2C1C = 0x00000000;

u32 D_800D2C20 = 0x00000000;

u32 D_800D2C24 = 0x00000000;

u32 D_800D2C28 = 0x00070010;

u32 D_800D2C2C = 0x00000016;

u32 D_800D2C30 = 0x000F0000;

u32 D_800D2C34 = 0xFF600032;

f32 D_800D2C38 = 1.1f;

u32 D_800D2C3C = 0x3F933333;

u32 D_800D2C40 = 0x00000000;

u32 D_800D2C44 = 0x00000000;

f32 D_800D2C48 = 0.1f;

f32 D_800D2C4C = 0.01f;

f32 D_800D2C50 = 1.0f;

f32 D_800D2C54 = 1.0f;

u32 D_800D2C58 = 0x00000000;

u32 D_800D2C5C = 0x00000000;

u32 D_800D2C60 = 0x00000000;

u32 D_800D2C64 = 0x00000000;

u32 D_800D2C68 = 0x00000000;

u32 D_800D2C6C = 0x00000000;

u32 D_800D2C70 = 0x00000000;

u32 D_800D2C74 = 0x00000000;

u32 D_800D2C78 = 0x00000000;

u32 D_800D2C7C = 0x00000000;

u32 D_800D2C80 = 0x00000000;

u32 D_800D2C84 = 0x00000000;

u32 D_800D2C88 = 0x00070013;

u32 D_800D2C8C = 0x00000016;

u32 D_800D2C90 = 0x000F0000;

u32 D_800D2C94 = 0x0000FFF6;

f32 D_800D2C98 = 1.7f;

u32 D_800D2C9C = 0x40066666;

u32 D_800D2CA0 = 0x00000000;

u32 D_800D2CA4 = 0x00000000;

f32 D_800D2CA8 = 0.01f;

f32 D_800D2CAC = 0.01f;

f32 D_800D2CB0 = 1.0f;

f32 D_800D2CB4 = 1.0f;

u32 D_800D2CB8 = 0x00000000;

u32 D_800D2CBC = 0x00000000;

u32 D_800D2CC0 = 0x00000000;

u32 D_800D2CC4 = 0x00000000;

u32 D_800D2CC8 = 0x00000000;

u32 D_800D2CCC = 0x00000000;

u32 D_800D2CD0 = 0x00000000;

u32 D_800D2CD4 = 0x00000000;

u32 D_800D2CD8 = 0x00000000;

u32 D_800D2CDC = 0x00000000;

u32 D_800D2CE0 = 0x00000000;

u32 D_800D2CE4 = 0x00000000;

u32 D_800D2CE8 = 0x0007001B;

u32 D_800D2CEC = 0x00000012;

u32 D_800D2CF0 = 0x002F0000;

u32 D_800D2CF4 = 0x0000FF42;

f32 D_800D2CF8 = 1.0f;

f32 D_800D2CFC = 0.8f;

u32 D_800D2D00 = 0x00000000;

u32 D_800D2D04 = 0x00000000;

f32 D_800D2D08 = 0.075f;

f32 D_800D2D0C = 0.15f;

f32 D_800D2D10 = 1.0f;

f32 D_800D2D14 = 1.0f;

u32 D_800D2D18 = 0x00000000;

u32 D_800D2D1C = 0x00000000;

u32 D_800D2D20 = 0x00000000;

u32 D_800D2D24 = 0x00000000;

u32 D_800D2D28 = 0x00000000;

u32 D_800D2D2C = 0x00000000;

u32 D_800D2D30 = 0x00000000;

u32 D_800D2D34 = 0x00000000;

u32 D_800D2D38 = 0x00000000;

u32 D_800D2D3C = 0x00000000;

u32 D_800D2D40 = 0x00000000;

u32 D_800D2D44 = 0x00000000;

u32 D_800D2D48 = 0x00070011;

u32 D_800D2D4C = 0x00000016;

u32 D_800D2D50 = 0x004F0033;

u32 D_800D2D54 = 0x00000000;

f32 D_800D2D58 = 0.9f;

f32 D_800D2D5C = 0.9f;

u32 D_800D2D60 = 0x00000000;

u32 D_800D2D64 = 0x00000000;

f32 D_800D2D68 = 0.01f;

f32 D_800D2D6C = 0.01f;

f32 D_800D2D70 = 1.0f;

f32 D_800D2D74 = 1.0f;

u32 D_800D2D78 = 0x00000000;

u32 D_800D2D7C = 0x00000000;

u32 D_800D2D80 = 0x00000000;

u32 D_800D2D84 = 0x00000000;

u32 D_800D2D88 = 0x00000000;

u32 D_800D2D8C = 0x00000000;

u32 D_800D2D90 = 0x00000000;

u32 D_800D2D94 = 0x00000000;

u32 D_800D2D98 = 0x00000000;

u32 D_800D2D9C = 0x00000000;

u32 D_800D2DA0 = 0x00000000;

u32 D_800D2DA4 = 0x00000000;

u32 D_800D2DA8 = 0x00070014;

u32 D_800D2DAC = 0x00000012;

u32 D_800D2DB0 = 0x0046002F;

u32 D_800D2DB4 = 0x0000FFEC;

u32 D_800D2DB8 = 0x40000000;

u32 D_800D2DBC = 0x40266666;

u32 D_800D2DC0 = 0x00000000;

u32 D_800D2DC4 = 0x00000000;

u32 D_800D2DC8 = 0x00000000;

f32 D_800D2DCC = 0.05f;

f32 D_800D2DD0 = 0.4f;

u32 D_800D2DD4 = 0x00000000;

u32 D_800D2DD8 = 0x00000000;

u32 D_800D2DDC = 0x00000000;

u32 D_800D2DE0 = 0x00000000;

u32 D_800D2DE4 = 0x00000000;

u32 D_800D2DE8 = 0x00000000;

u32 D_800D2DEC = 0x00000000;

u32 D_800D2DF0 = 0x00000000;

u32 D_800D2DF4 = 0x00000000;

u32 D_800D2DF8 = 0x00000000;

u32 D_800D2DFC = 0x00000000;

u32 D_800D2E00 = 0x00000000;

u32 D_800D2E04 = 0x00000000;

u32 D_800D2E08 = 0x0007000A;

u32 D_800D2E0C = 0x00000012;

u32 D_800D2E10 = 0x000F0000;

u32 D_800D2E14 = 0x0000FFF6;

u32 D_800D2E18 = 0x40000000;

f32 D_800D2E1C = 1.2f;

u32 D_800D2E20 = 0x00000000;

u32 D_800D2E24 = 0x00000000;

f32 D_800D2E28 = 0.025f;

u32 D_800D2E2C = 0x3BA3D70A;

f32 D_800D2E30 = 1.0f;

f32 D_800D2E34 = 0.05f;

u32 D_800D2E38 = 0x00000000;

u32 D_800D2E3C = 0x00000000;

u32 D_800D2E40 = 0x00000000;

u32 D_800D2E44 = 0x00000000;

u32 D_800D2E48 = 0x00000000;

u32 D_800D2E4C = 0x00000000;

u32 D_800D2E50 = 0x00000000;

u32 D_800D2E54 = 0x00000000;

u32 D_800D2E58 = 0x00000000;

u32 D_800D2E5C = 0x00000000;

u32 D_800D2E60 = 0x00000000;

u32 D_800D2E64 = 0x00000000;

u32 D_800D2E68 = 0x00070006;

u32 D_800D2E6C = 0x00000016;

u32 D_800D2E70 = 0x004D000A;

u32 D_800D2E74 = 0x00000023;

f32 D_800D2E78 = 1.0f;

f32 D_800D2E7C = 1.0f;

u32 D_800D2E80 = 0x00000000;

u32 D_800D2E84 = 0x00000000;

f32 D_800D2E88 = 0.08f;

u32 D_800D2E8C = 0x00000000;

f32 D_800D2E90 = 1.0f;

f32 D_800D2E94 = 1.0f;

u32 D_800D2E98 = 0x00070005;

u32 D_800D2E9C = 0x00000012;

u32 D_800D2EA0 = 0x002D0000;

u32 D_800D2EA4 = 0x0000005A;

u32 D_800D2EA8 = 0x40000000;

f32 D_800D2EAC = 1.0f;

u32 D_800D2EB0 = 0x00000000;

u32 D_800D2EB4 = 0x00000000;

f32 D_800D2EB8 = 0.125f;

u32 D_800D2EBC = 0x00000000;

f32 D_800D2EC0 = 1.2f;

f32 D_800D2EC4 = 1.0f;

u32 D_800D2EC8 = 0x00070026;

u32 D_800D2ECC = 0x00000012;

u32 D_800D2ED0 = 0x002D0000;

u32 D_800D2ED4 = 0x00000037;

f32 D_800D2ED8 = 1.3f;

f32 D_800D2EDC = 1.0f;

f32 D_800D2EE0 = -0.15f;

u32 D_800D2EE4 = 0x00000000;

f32 D_800D2EE8 = 0.08f;

u32 D_800D2EEC = 0x00000000;

f32 D_800D2EF0 = 1.0f;

f32 D_800D2EF4 = 1.0f;

u32 D_800D2EF8 = 0x00000000;

u32 D_800D2EFC = 0x00000000;

u32 D_800D2F00 = 0x00000000;

u32 D_800D2F04 = 0x00000000;

u32 D_800D2F08 = 0x00000000;

u32 D_800D2F0C = 0x00000000;

u32 D_800D2F10 = 0x00000000;

u32 D_800D2F14 = 0x00000000;

u32 D_800D2F18 = 0x00000000;

u32 D_800D2F1C = 0x00000000;

u32 D_800D2F20 = 0x00000000;

u32 D_800D2F24 = 0x00000000;

u32 D_800D2F28 = 0x00070007;

u32 D_800D2F2C = 0x00000016;

u32 D_800D2F30 = 0x004F0041;

u32 D_800D2F34 = 0x00000028;

f32 D_800D2F38 = 1.0f;

f32 D_800D2F3C = 0.9f;

u32 D_800D2F40 = 0x00000000;

u32 D_800D2F44 = 0x00000000;

f32 D_800D2F48 = 0.05f;

f32 D_800D2F4C = 0.01f;

f32 D_800D2F50 = 0.7f;

f32 D_800D2F54 = 1.0f;

u32 D_800D2F58 = 0x0007000B;

u32 D_800D2F5C = 0x00000012;

u32 D_800D2F60 = 0x046F0042;

u32 D_800D2F64 = 0x0000003C;

f32 D_800D2F68 = 1.1f;

f32 D_800D2F6C = 1.6f;

f32 D_800D2F70 = 0.2f;

u32 D_800D2F74 = 0x00000000;

f32 D_800D2F78 = 0.05f;

f32 D_800D2F7C = 0.07f;

f32 D_800D2F80 = 1.0f;

f32 D_800D2F84 = 1.0f;

u32 D_800D2F88 = 0x00000000;

u32 D_800D2F8C = 0x00000000;

u32 D_800D2F90 = 0x00000000;

u32 D_800D2F94 = 0x00000000;

u32 D_800D2F98 = 0x00000000;

u32 D_800D2F9C = 0x00000000;

u32 D_800D2FA0 = 0x00000000;

u32 D_800D2FA4 = 0x00000000;

u32 D_800D2FA8 = 0x00000000;

u32 D_800D2FAC = 0x00000000;

u32 D_800D2FB0 = 0x00000000;

u32 D_800D2FB4 = 0x00000000;

u32 D_800D2FB8 = 0x00070006;

u32 D_800D2FBC = 0x00000016;

u32 D_800D2FC0 = 0x004D000A;

u32 D_800D2FC4 = 0x00000014;

f32 D_800D2FC8 = 1.0f;

f32 D_800D2FCC = 1.0f;

u32 D_800D2FD0 = 0x00000000;

u32 D_800D2FD4 = 0x00000000;

f32 D_800D2FD8 = 0.05f;

u32 D_800D2FDC = 0x00000000;

f32 D_800D2FE0 = 1.0f;

f32 D_800D2FE4 = 1.0f;

u32 D_800D2FE8 = 0x00070005;

u32 D_800D2FEC = 0x00000012;

u32 D_800D2FF0 = 0x000D0000;

u32 D_800D2FF4 = 0x00000050;

u32 D_800D2FF8 = 0x40000000;

f32 D_800D2FFC = 1.0f;

u32 D_800D3000 = 0x00000000;

u32 D_800D3004 = 0x00000000;

f32 D_800D3008 = 0.125f;

u32 D_800D300C = 0x00000000;

f32 D_800D3010 = 1.2f;

f32 D_800D3014 = 1.0f;

u32 D_800D3018 = 0x00070026;

u32 D_800D301C = 0x00000012;

u32 D_800D3020 = 0x002D0000;

u32 D_800D3024 = 0x00000014;

f32 D_800D3028 = 1.3f;

f32 D_800D302C = 1.0f;

f32 D_800D3030 = -0.15f;

u32 D_800D3034 = 0x00000000;

f32 D_800D3038 = 0.08f;

u32 D_800D303C = 0x00000000;

f32 D_800D3040 = 1.0f;

f32 D_800D3044 = 1.0f;

u32 D_800D3048 = 0x00000000;

u32 D_800D304C = 0x00000000;

u32 D_800D3050 = 0x00000000;

u32 D_800D3054 = 0x00000000;

u32 D_800D3058 = 0x00000000;

u32 D_800D305C = 0x00000000;

u32 D_800D3060 = 0x00000000;

u32 D_800D3064 = 0x00000000;

u32 D_800D3068 = 0x00000000;

u32 D_800D306C = 0x00000000;

u32 D_800D3070 = 0x00000000;

u32 D_800D3074 = 0x00000000;

u32 D_800D3078 = 0x00070028;

u32 D_800D307C = 0x00000016;

u32 D_800D3080 = 0x000F0000;

u32 D_800D3084 = 0x00000014;

f32 D_800D3088 = 1.5f;

f32 D_800D308C = 1.0f;

u32 D_800D3090 = 0x00000000;

u32 D_800D3094 = 0x00000000;

f32 D_800D3098 = 0.05f;

f32 D_800D309C = 0.05f;

f32 D_800D30A0 = 1.0f;

f32 D_800D30A4 = 1.0f;

u32 D_800D30A8 = 0x0007001D;

u32 D_800D30AC = 0x00000012;

u32 D_800D30B0 = 0x000F0000;

u32 D_800D30B4 = 0x0000008C;

u32 D_800D30B8 = 0x40000000;

f32 D_800D30BC = 1.8f;

u32 D_800D30C0 = 0x00000000;

u32 D_800D30C4 = 0x00000000;

f32 D_800D30C8 = 0.065f;

f32 D_800D30CC = 0.05f;

f32 D_800D30D0 = 1.0f;

f32 D_800D30D4 = 1.0f;

u32 D_800D30D8 = 0x00000000;

u32 D_800D30DC = 0x00000000;

u32 D_800D30E0 = 0x00000000;

u32 D_800D30E4 = 0x00000000;

u32 D_800D30E8 = 0x00000000;

u32 D_800D30EC = 0x00000000;

u32 D_800D30F0 = 0x00000000;

u32 D_800D30F4 = 0x00000000;

u32 D_800D30F8 = 0x00000000;

u32 D_800D30FC = 0x00000000;

u32 D_800D3100 = 0x00000000;

u32 D_800D3104 = 0x00000000;

u32 D_800D3108 = 0x00070012;

u32 D_800D310C = 0x00000016;

u32 D_800D3110 = 0x024F0055;

u32 D_800D3114 = 0x00000004;

f32 D_800D3118 = 1.5f;

f32 D_800D311C = 1.5f;

u32 D_800D3120 = 0x00000000;

u32 D_800D3124 = 0x00000000;

u32 D_800D3128 = 0x3E800000;

f32 D_800D312C = 0.01f;

f32 D_800D3130 = 1.0f;

f32 D_800D3134 = 1.0f;

u32 D_800D3138 = 0x00000000;

u32 D_800D313C = 0x00000000;

u32 D_800D3140 = 0x00000000;

u32 D_800D3144 = 0x00000000;

u32 D_800D3148 = 0x00000000;

u32 D_800D314C = 0x00000000;

u32 D_800D3150 = 0x00000000;

u32 D_800D3154 = 0x00000000;

u32 D_800D3158 = 0x00000000;

u32 D_800D315C = 0x00000000;

u32 D_800D3160 = 0x00000000;

u32 D_800D3164 = 0x00000000;

u32 D_800D3168 = 0x00070025;

u32 D_800D316C = 0x00000016;

u32 D_800D3170 = 0x000C0000;

u32 D_800D3174 = 0x00000028;

f32 D_800D3178 = 1.2f;

f32 D_800D317C = 1.0f;

u32 D_800D3180 = 0x00000000;

u32 D_800D3184 = 0x00000000;

u32 D_800D3188 = 0x00000000;

u32 D_800D318C = 0x00000000;

f32 D_800D3190 = 0.6f;

f32 D_800D3194 = 1.0f;

u32 D_800D3198 = 0x00000000;

u32 D_800D319C = 0x00000000;

u32 D_800D31A0 = 0x00000000;

u32 D_800D31A4 = 0x00000000;

u32 D_800D31A8 = 0x00000000;

u32 D_800D31AC = 0x00000000;

u32 D_800D31B0 = 0x00000000;

u32 D_800D31B4 = 0x00000000;

u32 D_800D31B8 = 0x00000000;

u32 D_800D31BC = 0x00000000;

u32 D_800D31C0 = 0x00000000;

u32 D_800D31C4 = 0x00000000;

u32 D_800D31C8 = 0x00070020;

u32 D_800D31CC = 0x00000016;

u32 D_800D31D0 = 0x000D0000;

u32 D_800D31D4 = 0x0000FFBF;

f32 D_800D31D8 = 1.0f;

f32 D_800D31DC = 1.0f;

u32 D_800D31E0 = 0x00000000;

u32 D_800D31E4 = 0x00000000;

f32 D_800D31E8 = 0.05f;

u32 D_800D31EC = 0x00000000;

f32 D_800D31F0 = 1.0f;

f32 D_800D31F4 = 1.0f;

u32 D_800D31F8 = 0x00000000;

u32 D_800D31FC = 0x00000000;

u32 D_800D3200 = 0x00000000;

u32 D_800D3204 = 0x00000000;

u32 D_800D3208 = 0x00000000;

u32 D_800D320C = 0x00000000;

u32 D_800D3210 = 0x00000000;

u32 D_800D3214 = 0x00000000;

u32 D_800D3218 = 0x00000000;

u32 D_800D321C = 0x00000000;

u32 D_800D3220 = 0x00000000;

u32 D_800D3224 = 0x00000000;

u32 D_800D3228 = 0x00070011;

u32 D_800D322C = 0x00000016;

u32 D_800D3230 = 0x004F0033;

u32 D_800D3234 = 0xFF6A0014;

u32 D_800D3238 = 0x40200000;

f32 D_800D323C = 1.0f;

u32 D_800D3240 = 0x00000000;

u32 D_800D3244 = 0x00000000;

f32 D_800D3248 = 0.01f;

f32 D_800D324C = 0.01f;

f32 D_800D3250 = 1.0f;

f32 D_800D3254 = 1.0f;

u32 D_800D3258 = 0x00000000;

u32 D_800D325C = 0x00000000;

u32 D_800D3260 = 0x00000000;

u32 D_800D3264 = 0x00000000;

u32 D_800D3268 = 0x00000000;

u32 D_800D326C = 0x00000000;

u32 D_800D3270 = 0x00000000;

u32 D_800D3274 = 0x00000000;

u32 D_800D3278 = 0x00000000;

u32 D_800D327C = 0x00000000;

u32 D_800D3280 = 0x00000000;

u32 D_800D3284 = 0x00000000;

u32 D_800D3288 = 0x00070004;

u32 D_800D328C = 0x00000012;

u32 D_800D3290 = 0x000F0000;

u32 D_800D3294 = 0x00000028;

f32 D_800D3298 = 1.5f;

f32 D_800D329C = 1.2f;

u32 D_800D32A0 = 0x00000000;

u32 D_800D32A4 = 0x00000000;

f32 D_800D32A8 = 0.075f;

f32 D_800D32AC = 0.1f;

u32 D_800D32B0 = 0x3F000000;

f32 D_800D32B4 = 1.0f;

u32 D_800D32B8 = 0x00000000;

u32 D_800D32BC = 0x00000000;

u32 D_800D32C0 = 0x00000000;

u32 D_800D32C4 = 0x00000000;

u32 D_800D32C8 = 0x00000000;

u32 D_800D32CC = 0x00000000;

u32 D_800D32D0 = 0x00000000;

u32 D_800D32D4 = 0x00000000;

u32 D_800D32D8 = 0x00000000;

u32 D_800D32DC = 0x00000000;

u32 D_800D32E0 = 0x00000000;

u32 D_800D32E4 = 0x00000000;

u32 D_800D32E8 = 0x0007001C;

u32 D_800D32EC = 0x00000012;

u32 D_800D32F0 = 0x000D0000;

u32 D_800D32F4 = 0x0000FFF6;

f32 D_800D32F8 = 1.0f;

f32 D_800D32FC = 1.0f;

u32 D_800D3300 = 0x00000000;

u32 D_800D3304 = 0x00000000;

f32 D_800D3308 = 0.08f;

u32 D_800D330C = 0x00000000;

f32 D_800D3310 = 1.0f;

f32 D_800D3314 = 1.0f;

u32 D_800D3318 = 0x00000000;

u32 D_800D331C = 0x00000000;

u32 D_800D3320 = 0x00000000;

u32 D_800D3324 = 0x00000000;

u32 D_800D3328 = 0x00000000;

u32 D_800D332C = 0x00000000;

u32 D_800D3330 = 0x00000000;

u32 D_800D3334 = 0x00000000;

u32 D_800D3338 = 0x00000000;

u32 D_800D333C = 0x00000000;

u32 D_800D3340 = 0x00000000;

u32 D_800D3344 = 0x00000000;

u32 D_800D3348 = 0x00070022;

u32 D_800D334C = 0x00000016;

u32 D_800D3350 = 0x000F0000;

u32 D_800D3354 = 0x00000078;

f32 D_800D3358 = 1.0f;

f32 D_800D335C = 1.0f;

u32 D_800D3360 = 0x00000000;

u32 D_800D3364 = 0x00000000;

f32 D_800D3368 = 0.025f;

f32 D_800D336C = 0.025f;

f32 D_800D3370 = 0.8f;

f32 D_800D3374 = 0.9f;

u32 D_800D3378 = 0x00070019;

u32 D_800D337C = 0x00000012;

u32 D_800D3380 = 0x000F0000;

u32 D_800D3384 = 0x00000096;

f32 D_800D3388 = 1.0f;

f32 D_800D338C = 1.0f;

u32 D_800D3390 = 0x00000000;

u32 D_800D3394 = 0x00000000;

f32 D_800D3398 = 0.05f;

f32 D_800D339C = 0.05f;

f32 D_800D33A0 = 0.9f;

f32 D_800D33A4 = 1.0f;

u32 D_800D33A8 = 0x00070015;

u32 D_800D33AC = 0x00000012;

u32 D_800D33B0 = 0x000F0000;

u32 D_800D33B4 = 0x000000AF;

f32 D_800D33B8 = 1.0f;

f32 D_800D33BC = 1.0f;

u32 D_800D33C0 = 0x00000000;

u32 D_800D33C4 = 0x00000000;

f32 D_800D33C8 = 0.1f;

f32 D_800D33CC = 0.1f;

f32 D_800D33D0 = 1.0f;

f32 D_800D33D4 = 1.1f;

u32 D_800D33D8 = 0x00070003;

u32 D_800D33DC = 0x00000012;

u32 D_800D33E0 = 0x006F000F;

u32 D_800D33E4 = 0x0000003C;

f32 D_800D33E8 = 1.5f;

u32 D_800D33EC = 0x40000000;

f32 D_800D33F0 = -0.1f;

u32 D_800D33F4 = 0x00000000;

f32 D_800D33F8 = 0.025f;

f32 D_800D33FC = 0.025f;

u32 D_800D3400 = 0x3F000000;

f32 D_800D3404 = 0.9f;

u32 D_800D3408 = 0x00000000;

u32 D_800D340C = 0x00000000;

u32 D_800D3410 = 0x00000000;

u32 D_800D3414 = 0x00000000;

u32 D_800D3418 = 0x00000000;

u32 D_800D341C = 0x00000000;

u32 D_800D3420 = 0x00000000;

u32 D_800D3424 = 0x00000000;

u32 D_800D3428 = 0x00000000;

u32 D_800D342C = 0x00000000;

u32 D_800D3430 = 0x00000000;

u32 D_800D3434 = 0x00000000;

u32 D_800D3438 = 0x00070011;

u32 D_800D343C = 0x00000016;

u32 D_800D3440 = 0x004F000E;

u32 D_800D3444 = 0xFF6AFFC4;

f32 D_800D3448 = 1.5f;

f32 D_800D344C = 1.2f;

u32 D_800D3450 = 0x00000000;

u32 D_800D3454 = 0x00000000;

f32 D_800D3458 = 0.01f;

f32 D_800D345C = 0.01f;

f32 D_800D3460 = 1.0f;

f32 D_800D3464 = 1.0f;

u32 D_800D3468 = 0x00070026;

u32 D_800D346C = 0x00000012;

u32 D_800D3470 = 0x002C0000;

u32 D_800D3474 = 0xFF6AFFE2;

f32 D_800D3478 = 1.4f;

f32 D_800D347C = 1.2f;

f32 D_800D3480 = -0.2f;

u32 D_800D3484 = 0x00000000;

u32 D_800D3488 = 0x00000000;

u32 D_800D348C = 0x00000000;

f32 D_800D3490 = 1.0f;

f32 D_800D3494 = 1.0f;

u32 D_800D3498 = 0x00000000;

u32 D_800D349C = 0x00000000;

u32 D_800D34A0 = 0x00000000;

u32 D_800D34A4 = 0x00000000;

u32 D_800D34A8 = 0x00000000;

u32 D_800D34AC = 0x00000000;

u32 D_800D34B0 = 0x00000000;

u32 D_800D34B4 = 0x00000000;

u32 D_800D34B8 = 0x00000000;

u32 D_800D34BC = 0x00000000;

u32 D_800D34C0 = 0x00000000;

u32 D_800D34C4 = 0x00000000;

u32 D_800D34C8 = 0x00070002;

u32 D_800D34CC = 0x00000012;

u32 D_800D34D0 = 0x002F0000;

u32 D_800D34D4 = 0x00000028;

f32 D_800D34D8 = 1.3f;

f32 D_800D34DC = 1.0f;

f32 D_800D34E0 = -0.2f;

u32 D_800D34E4 = 0x00000000;

f32 D_800D34E8 = 0.15f;

f32 D_800D34EC = 0.15f;

f32 D_800D34F0 = 1.0f;

f32 D_800D34F4 = 1.0f;

u32 D_800D34F8 = 0x00000000;

u32 D_800D34FC = 0x00000000;

u32 D_800D3500 = 0x00000000;

u32 D_800D3504 = 0x00000000;

u32 D_800D3508 = 0x00000000;

u32 D_800D350C = 0x00000000;

u32 D_800D3510 = 0x00000000;

u32 D_800D3514 = 0x00000000;

u32 D_800D3518 = 0x00000000;

u32 D_800D351C = 0x00000000;

u32 D_800D3520 = 0x00000000;

u32 D_800D3524 = 0x00000000;

u32 D_800D3528 = 0x00070013;

u32 D_800D352C = 0x00000016;

u32 D_800D3530 = 0x000E0000;

u32 D_800D3534 = 0x0000FFA1;

f32 D_800D3538 = 1.7f;

f32 D_800D353C = 2.2f;

u32 D_800D3540 = 0x00000000;

u32 D_800D3544 = 0x00000000;

u32 D_800D3548 = 0x00000000;

f32 D_800D354C = 0.07f;

f32 D_800D3550 = 0.8f;

f32 D_800D3554 = 1.0f;

u32 D_800D3558 = 0x00000000;

u32 D_800D355C = 0x00000000;

u32 D_800D3560 = 0x00000000;

u32 D_800D3564 = 0x00000000;

u32 D_800D3568 = 0x00000000;

u32 D_800D356C = 0x00000000;

u32 D_800D3570 = 0x00000000;

u32 D_800D3574 = 0x00000000;

u32 D_800D3578 = 0x00000000;

u32 D_800D357C = 0x00000000;

u32 D_800D3580 = 0x00000000;

u32 D_800D3584 = 0x00000000;

u32 D_800D3588 = 0x00070004;

u32 D_800D358C = 0x00000012;

u32 D_800D3590 = 0x000D0000;

u32 D_800D3594 = 0x0000000A;

u32 D_800D3598 = 0x40000000;

f32 D_800D359C = 1.2f;

u32 D_800D35A0 = 0x00000000;

u32 D_800D35A4 = 0x00000000;

f32 D_800D35A8 = 0.075f;

u32 D_800D35AC = 0x00000000;

f32 D_800D35B0 = 1.0f;

u32 D_800D35B4 = 0x3F000000;

u32 D_800D35B8 = 0x00000000;

u32 D_800D35BC = 0x00000000;

u32 D_800D35C0 = 0x00000000;

u32 D_800D35C4 = 0x00000000;

u32 D_800D35C8 = 0x00000000;

u32 D_800D35CC = 0x00000000;

u32 D_800D35D0 = 0x00000000;

u32 D_800D35D4 = 0x00000000;

u32 D_800D35D8 = 0x00000000;

u32 D_800D35DC = 0x00000000;

u32 D_800D35E0 = 0x00000000;

u32 D_800D35E4 = 0x00000000;

u32 D_800D35E8 = 0x0007000E;

u32 D_800D35EC = 0x00000016;

u32 D_800D35F0 = 0x026F0045;

u32 D_800D35F4 = 0xFF600032;

u32 D_800D35F8 = 0x40800000;

u32 D_800D35FC = 0x40000000;

u32 D_800D3600 = 0x3F000000;

u32 D_800D3604 = 0x3F000000;

f32 D_800D3608 = 0.1f;

f32 D_800D360C = 0.01f;

f32 D_800D3610 = 1.0f;

f32 D_800D3614 = 1.0f;

u32 D_800D3618 = 0x00070009;

u32 D_800D361C = 0x00000016;

u32 D_800D3620 = 0x026F0045;

u32 D_800D3624 = 0xFF600032;

u32 D_800D3628 = 0x40800000;

u32 D_800D362C = 0x40000000;

u32 D_800D3630 = 0xBF000000;

u32 D_800D3634 = 0xBF000000;

f32 D_800D3638 = 0.1f;

f32 D_800D363C = 0.01f;

f32 D_800D3640 = 1.0f;

f32 D_800D3644 = 1.0f;

u32 D_800D3648 = 0x00070017;

u32 D_800D364C = 0x00000016;

u32 D_800D3650 = 0x026F0045;

u32 D_800D3654 = 0xFF600032;

u32 D_800D3658 = 0x40800000;

u32 D_800D365C = 0x40000000;

u32 D_800D3660 = 0x3F000000;

u32 D_800D3664 = 0xBF000000;

f32 D_800D3668 = 0.1f;

f32 D_800D366C = 0.01f;

f32 D_800D3670 = 1.0f;

f32 D_800D3674 = 1.0f;

u32 D_800D3678 = 0x00000000;

u32 D_800D367C = 0x00000000;

u32 D_800D3680 = 0x00000000;

u32 D_800D3684 = 0x00000000;

u32 D_800D3688 = 0x00000000;

u32 D_800D368C = 0x00000000;

u32 D_800D3690 = 0x00000000;

u32 D_800D3694 = 0x00000000;

u32 D_800D3698 = 0x00000000;

u32 D_800D369C = 0x00000000;

u32 D_800D36A0 = 0x00000000;

u32 D_800D36A4 = 0x00000000;

u32 D_800D36A8 = 0x00070007;

u32 D_800D36AC = 0x00000016;

u32 D_800D36B0 = 0x004D0023;

u32 D_800D36B4 = 0x00000019;

f32 D_800D36B8 = 1.0f;

f32 D_800D36BC = 0.6f;

u32 D_800D36C0 = 0x00000000;

u32 D_800D36C4 = 0x00000000;

f32 D_800D36C8 = 0.025f;

u32 D_800D36CC = 0x00000000;

f32 D_800D36D0 = 0.1f;

f32 D_800D36D4 = 1.0f;

u32 D_800D36D8 = 0x0007001E;

u32 D_800D36DC = 0x00000012;

u32 D_800D36E0 = 0x006D0024;

u32 D_800D36E4 = 0x00000050;

f32 D_800D36E8 = 1.0f;

u32 D_800D36EC = 0x3F000000;

u32 D_800D36F0 = 0x00000000;

u32 D_800D36F4 = 0x00000000;

f32 D_800D36F8 = 0.025f;

u32 D_800D36FC = 0x00000000;

f32 D_800D3700 = 1.0f;

f32 D_800D3704 = 1.0f;

u32 D_800D3708 = 0x00000000;

u32 D_800D370C = 0x00000000;

u32 D_800D3710 = 0x00000000;

u32 D_800D3714 = 0x00000000;

u32 D_800D3718 = 0x00000000;

u32 D_800D371C = 0x00000000;

u32 D_800D3720 = 0x00000000;

u32 D_800D3724 = 0x00000000;

u32 D_800D3728 = 0x00000000;

u32 D_800D372C = 0x00000000;

u32 D_800D3730 = 0x00000000;

u32 D_800D3734 = 0x00000000;

u32 D_800D3738 = 0x00070022;

u32 D_800D373C = 0x00000016;

u32 D_800D3740 = 0x000F0000;

u32 D_800D3744 = 0x00000050;

f32 D_800D3748 = 1.2f;

f32 D_800D374C = 1.2f;

u32 D_800D3750 = 0x00000000;

u32 D_800D3754 = 0x00000000;

f32 D_800D3758 = 0.025f;

f32 D_800D375C = 0.025f;

f32 D_800D3760 = 1.0f;

u32 D_800D3764 = 0x3F000000;

u32 D_800D3768 = 0x00070019;

u32 D_800D376C = 0x00000012;

u32 D_800D3770 = 0x00070000;

u32 D_800D3774 = 0x0000000A;

f32 D_800D3778 = 1.2f;

f32 D_800D377C = 1.2f;

u32 D_800D3780 = 0x00000000;

u32 D_800D3784 = 0x00000000;

f32 D_800D3788 = 0.05f;

u32 D_800D378C = 0x3D23D70A;

f32 D_800D3790 = 0.9f;

u32 D_800D3794 = 0x00000000;

u32 D_800D3798 = 0x00070015;

u32 D_800D379C = 0x00000012;

u32 D_800D37A0 = 0x000F0000;

u32 D_800D37A4 = 0x0000000F;

f32 D_800D37A8 = 1.2f;

f32 D_800D37AC = 1.2f;

u32 D_800D37B0 = 0x00000000;

u32 D_800D37B4 = 0x00000000;

f32 D_800D37B8 = 0.1f;

f32 D_800D37BC = 0.06f;

f32 D_800D37C0 = 0.8f;

f32 D_800D37C4 = -0.1f;

u32 D_800D37C8 = 0x00070003;

u32 D_800D37CC = 0x00000012;

u32 D_800D37D0 = 0x006F000F;

u32 D_800D37D4 = 0x0000FFBA;

f32 D_800D37D8 = 1.5f;

f32 D_800D37DC = 1.5f;

f32 D_800D37E0 = -0.1f;

u32 D_800D37E4 = 0x00000000;

f32 D_800D37E8 = 0.05f;

f32 D_800D37EC = 0.025f;

f32 D_800D37F0 = 0.9f;

f32 D_800D37F4 = -0.2f;

u32 D_800D37F8 = 0x00000000;

u32 D_800D37FC = 0x00000000;

u32 D_800D3800 = 0x00000000;

u32 D_800D3804 = 0x00000000;

u32 D_800D3808 = 0x00000000;

u32 D_800D380C = 0x00000000;

u32 D_800D3810 = 0x00000000;

u32 D_800D3814 = 0x00000000;

u32 D_800D3818 = 0x00000000;

u32 D_800D381C = 0x00000000;

u32 D_800D3820 = 0x00000000;

u32 D_800D3824 = 0x00000000;

u32 D_800D3828 = 0x0007000A;

u32 D_800D382C = 0x00000012;

u32 D_800D3830 = 0x000D0000;

u32 D_800D3834 = 0xFF6AFFE2;

u32 D_800D3838 = 0x40000000;

f32 D_800D383C = 1.2f;

u32 D_800D3840 = 0x00000000;

u32 D_800D3844 = 0x00000000;

f32 D_800D3848 = 0.025f;

u32 D_800D384C = 0x00000000;

f32 D_800D3850 = 1.0f;

f32 D_800D3854 = 0.2f;

u32 D_800D3858 = 0x00000000;

u32 D_800D385C = 0x00000000;

u32 D_800D3860 = 0x00000000;

u32 D_800D3864 = 0x00000000;

u32 D_800D3868 = 0x00000000;

u32 D_800D386C = 0x00000000;

u32 D_800D3870 = 0x00000000;

u32 D_800D3874 = 0x00000000;

u32 D_800D3878 = 0x00000000;

u32 D_800D387C = 0x00000000;

u32 D_800D3880 = 0x00000000;

u32 D_800D3884 = 0x00000000;

u32 D_800D3888 = 0x00070023;

u32 D_800D388C = 0x00000016;

u32 D_800D3890 = 0x000D0000;

u32 D_800D3894 = 0x00000055;

u32 D_800D3898 = 0x40000000;

f32 D_800D389C = 1.0f;

u32 D_800D38A0 = 0x00000000;

u32 D_800D38A4 = 0x00000000;

f32 D_800D38A8 = 0.125f;

u32 D_800D38AC = 0x00000000;

f32 D_800D38B0 = 1.3f;

f32 D_800D38B4 = 1.1f;

u32 D_800D38B8 = 0x0007000C;

u32 D_800D38BC = 0x00000012;

u32 D_800D38C0 = 0x000D0000;

u32 D_800D38C4 = 0x00000055;

f32 D_800D38C8 = 1.7f;

f32 D_800D38CC = 1.3f;

u32 D_800D38D0 = 0x00000000;

u32 D_800D38D4 = 0x00000000;

f32 D_800D38D8 = 0.13f;

u32 D_800D38DC = 0x00000000;

f32 D_800D38E0 = 1.2f;

f32 D_800D38E4 = 1.05f;

u32 D_800D38E8 = 0x00000000;

u32 D_800D38EC = 0x00000000;

u32 D_800D38F0 = 0x00000000;

u32 D_800D38F4 = 0x00000000;

u32 D_800D38F8 = 0x00000000;

u32 D_800D38FC = 0x00000000;

u32 D_800D3900 = 0x00000000;

u32 D_800D3904 = 0x00000000;

u32 D_800D3908 = 0x00000000;

u32 D_800D390C = 0x00000000;

u32 D_800D3910 = 0x00000000;

u32 D_800D3914 = 0x00000000;

u32 D_800D3918 = 0x0007000A;

u32 D_800D391C = 0x00000012;

u32 D_800D3920 = 0x000C0000;

u32 D_800D3924 = 0xFF6AFFE2;

u32 D_800D3928 = 0x40000000;

f32 D_800D392C = 1.2f;

u32 D_800D3930 = 0x00000000;

u32 D_800D3934 = 0x00000000;

u32 D_800D3938 = 0x00000000;

u32 D_800D393C = 0x00000000;

f32 D_800D3940 = 1.0f;

f32 D_800D3944 = 0.2f;

u32 D_800D3948 = 0x00000000;

u32 D_800D394C = 0x00000000;

u32 D_800D3950 = 0x00000000;

u32 D_800D3954 = 0x00000000;

u32 D_800D3958 = 0x00000000;

u32 D_800D395C = 0x00000000;

u32 D_800D3960 = 0x00000000;

u32 D_800D3964 = 0x00000000;

u32 D_800D3968 = 0x00000000;

u32 D_800D396C = 0x00000000;

u32 D_800D3970 = 0x00000000;

u32 D_800D3974 = 0x00000000;

u32 D_800D3978 = 0x00070001;

u32 D_800D397C = 0x00000012;

u32 D_800D3980 = 0x00070000;

u32 D_800D3984 = 0x0000FF92;

u32 D_800D3988 = 0x40200000;

f32 D_800D398C = 1.2f;

u32 D_800D3990 = 0x00000000;

u32 D_800D3994 = 0x00000000;

f32 D_800D3998 = 0.075f;

u32 D_800D399C = 0x3C75C28F;

u32 D_800D39A0 = 0x3F000000;

u32 D_800D39A4 = 0x00000000;

u32 D_800D39A8 = 0x00000000;

u32 D_800D39AC = 0x00000000;

u32 D_800D39B0 = 0x00000000;

u32 D_800D39B4 = 0x00000000;

u32 D_800D39B8 = 0x00000000;

u32 D_800D39BC = 0x00000000;

u32 D_800D39C0 = 0x00000000;

u32 D_800D39C4 = 0x00000000;

u32 D_800D39C8 = 0x00000000;

u32 D_800D39CC = 0x00000000;

u32 D_800D39D0 = 0x00000000;

u32 D_800D39D4 = 0x00000000;

u32 D_800D39D8 = 0x00070010;

u32 D_800D39DC = 0x00000016;

u32 D_800D39E0 = 0x000E0000;

u32 D_800D39E4 = 0xFF600028;

f32 D_800D39E8 = 1.1f;

f32 D_800D39EC = 1.1f;

u32 D_800D39F0 = 0x00000000;

u32 D_800D39F4 = 0x00000000;

u32 D_800D39F8 = 0x00000000;

f32 D_800D39FC = 0.01f;

f32 D_800D3A00 = 1.0f;

f32 D_800D3A04 = 1.0f;

u32 D_800D3A08 = 0x00000000;

u32 D_800D3A0C = 0x00000000;

u32 D_800D3A10 = 0x00000000;

u32 D_800D3A14 = 0x00000000;

u32 D_800D3A18 = 0x00000000;

u32 D_800D3A1C = 0x00000000;

u32 D_800D3A20 = 0x00000000;

u32 D_800D3A24 = 0x00000000;

u32 D_800D3A28 = 0x00000000;

u32 D_800D3A2C = 0x00000000;

u32 D_800D3A30 = 0x00000000;

u32 D_800D3A34 = 0x00000000;

u32 D_800D3A38 = 0x00070004;

u32 D_800D3A3C = 0x00000012;

u32 D_800D3A40 = 0x000D0000;

u32 D_800D3A44 = 0x0000FFF6;

u32 D_800D3A48 = 0x40A00000;

f32 D_800D3A4C = 1.5f;

u32 D_800D3A50 = 0x00000000;

u32 D_800D3A54 = 0x00000000;

u32 D_800D3A58 = 0x3DFBE76D;

u32 D_800D3A5C = 0x00000000;

f32 D_800D3A60 = 1.2f;

f32 D_800D3A64 = 1.0f;

u32 D_800D3A68 = 0x00070026;

u32 D_800D3A6C = 0x00000012;

u32 D_800D3A70 = 0x002D0000;

u32 D_800D3A74 = 0x00000000;

f32 D_800D3A78 = 1.3f;

f32 D_800D3A7C = 1.0f;

u32 D_800D3A80 = 0x00000000;

u32 D_800D3A84 = 0x00000000;

f32 D_800D3A88 = 0.08f;

u32 D_800D3A8C = 0x00000000;

f32 D_800D3A90 = 1.0f;

f32 D_800D3A94 = 1.0f;

u32 D_800D3A98 = 0x00000000;

u32 D_800D3A9C = 0x00000000;

u32 D_800D3AA0 = 0x00000000;

u32 D_800D3AA4 = 0x00000000;

u32 D_800D3AA8 = 0x00000000;

u32 D_800D3AAC = 0x00000000;

u32 D_800D3AB0 = 0x00000000;

u32 D_800D3AB4 = 0x00000000;

u32 D_800D3AB8 = 0x00000000;

u32 D_800D3ABC = 0x00000000;

u32 D_800D3AC0 = 0x00000000;

u32 D_800D3AC4 = 0x00000000;

u32 D_800D3AC8 = 0x00070007;

u32 D_800D3ACC = 0x00000016;

u32 D_800D3AD0 = 0x004E0041;

u32 D_800D3AD4 = 0x00000032;

f32 D_800D3AD8 = 1.0f;

u32 D_800D3ADC = 0x3F000000;

u32 D_800D3AE0 = 0x00000000;

u32 D_800D3AE4 = 0x00000000;

u32 D_800D3AE8 = 0x00000000;

f32 D_800D3AEC = 0.025f;

u32 D_800D3AF0 = 0x3F000000;

f32 D_800D3AF4 = 1.0f;

u32 D_800D3AF8 = 0x0007000B;

u32 D_800D3AFC = 0x00000012;

u32 D_800D3B00 = 0x046E0042;

u32 D_800D3B04 = 0x0000003C;

f32 D_800D3B08 = 1.0f;

f32 D_800D3B0C = 1.5f;

f32 D_800D3B10 = 0.2f;

u32 D_800D3B14 = 0x00000000;

u32 D_800D3B18 = 0x00000000;

f32 D_800D3B1C = 0.05f;

u32 D_800D3B20 = 0x3F000000;

f32 D_800D3B24 = 1.0f;

u32 D_800D3B28 = 0x00000000;

u32 D_800D3B2C = 0x00000000;

u32 D_800D3B30 = 0x00000000;

u32 D_800D3B34 = 0x00000000;

u32 D_800D3B38 = 0x00000000;

u32 D_800D3B3C = 0x00000000;

u32 D_800D3B40 = 0x00000000;

u32 D_800D3B44 = 0x00000000;

u32 D_800D3B48 = 0x00000000;

u32 D_800D3B4C = 0x00000000;

u32 D_800D3B50 = 0x00000000;

u32 D_800D3B54 = 0x00000000;

u32 D_800D3B58 = 0x00070011;

u32 D_800D3B5C = 0x00000016;

u32 D_800D3B60 = 0x004E0033;

u32 D_800D3B64 = 0xFF6A0000;

u32 D_800D3B68 = 0x40200000;

f32 D_800D3B6C = 1.0f;

u32 D_800D3B70 = 0x00000000;

u32 D_800D3B74 = 0x00000000;

u32 D_800D3B78 = 0x00000000;

f32 D_800D3B7C = 0.01f;

f32 D_800D3B80 = 1.0f;

f32 D_800D3B84 = 1.0f;

u32 D_800D3B88 = 0x00000000;

u32 D_800D3B8C = 0x00000000;

u32 D_800D3B90 = 0x00000000;

u32 D_800D3B94 = 0x00000000;

u32 D_800D3B98 = 0x00000000;

u32 D_800D3B9C = 0x00000000;

u32 D_800D3BA0 = 0x00000000;

u32 D_800D3BA4 = 0x00000000;

u32 D_800D3BA8 = 0x00000000;

u32 D_800D3BAC = 0x00000000;

u32 D_800D3BB0 = 0x00000000;

u32 D_800D3BB4 = 0x00000000;

u32 D_800D3BB8 = 0x00070008;

u32 D_800D3BBC = 0x00000016;

u32 D_800D3BC0 = 0x000F0000;

u32 D_800D3BC4 = 0xFF6AFFAB;

f32 D_800D3BC8 = 1.0f;

f32 D_800D3BCC = 1.0f;

u32 D_800D3BD0 = 0x00000000;

u32 D_800D3BD4 = 0x00000000;

f32 D_800D3BD8 = 0.01f;

f32 D_800D3BDC = 0.01f;

f32 D_800D3BE0 = 1.0f;

f32 D_800D3BE4 = 1.0f;

u32 D_800D3BE8 = 0x00000000;

u32 D_800D3BEC = 0x00000000;

u32 D_800D3BF0 = 0x00000000;

u32 D_800D3BF4 = 0x00000000;

u32 D_800D3BF8 = 0x00000000;

u32 D_800D3BFC = 0x00000000;

u32 D_800D3C00 = 0x00000000;

u32 D_800D3C04 = 0x00000000;

u32 D_800D3C08 = 0x00000000;

u32 D_800D3C0C = 0x00000000;

u32 D_800D3C10 = 0x00000000;

u32 D_800D3C14 = 0x00000000;

u32 D_800D3C18 = 0x00070007;

u32 D_800D3C1C = 0x00000016;

u32 D_800D3C20 = 0x004C0018;

u32 D_800D3C24 = 0x00000000;

u32 D_800D3C28 = 0x40A00000;

u32 D_800D3C2C = 0x40400000;

u32 D_800D3C30 = 0x00000000;

u32 D_800D3C34 = 0x00000000;

u32 D_800D3C38 = 0x00000000;

u32 D_800D3C3C = 0x00000000;

f32 D_800D3C40 = 0.1f;

f32 D_800D3C44 = 1.0f;

u32 D_800D3C48 = 0x00070026;

u32 D_800D3C4C = 0x00000012;

u32 D_800D3C50 = 0x002C0000;

u32 D_800D3C54 = 0x00000000;

u32 D_800D3C58 = 0x40066666;

u32 D_800D3C5C = 0x4019999A;

u32 D_800D3C60 = 0x00000000;

u32 D_800D3C64 = 0x00000000;

u32 D_800D3C68 = 0x00000000;

u32 D_800D3C6C = 0x00000000;

f32 D_800D3C70 = 1.0f;

f32 D_800D3C74 = 1.0f;

u32 D_800D3C78 = 0x00000000;

u32 D_800D3C7C = 0x00000000;

u32 D_800D3C80 = 0x00000000;

u32 D_800D3C84 = 0x00000000;

u32 D_800D3C88 = 0x00000000;

u32 D_800D3C8C = 0x00000000;

u32 D_800D3C90 = 0x00000000;

u32 D_800D3C94 = 0x00000000;

u32 D_800D3C98 = 0x00000000;

u32 D_800D3C9C = 0x00000000;

u32 D_800D3CA0 = 0x00000000;

u32 D_800D3CA4 = 0x00000000;

u32 D_800D3CA8 = 0x00070021;

u32 D_800D3CAC = 0x00000016;

u32 D_800D3CB0 = 0x000F0000;

u32 D_800D3CB4 = 0xFFF60000;

f32 D_800D3CB8 = 1.2f;

f32 D_800D3CBC = 1.2f;

u32 D_800D3CC0 = 0x00000000;

u32 D_800D3CC4 = 0x00000000;

u32 D_800D3CC8 = 0x3E800000;

u32 D_800D3CCC = 0x3E800000;

f32 D_800D3CD0 = 1.0f;

f32 D_800D3CD4 = 1.0f;

u32 D_800D3CD8 = 0x00000000;

u32 D_800D3CDC = 0x00000000;

u32 D_800D3CE0 = 0x00000000;

u32 D_800D3CE4 = 0x00000000;

u32 D_800D3CE8 = 0x00000000;

u32 D_800D3CEC = 0x00000000;

u32 D_800D3CF0 = 0x00000000;

u32 D_800D3CF4 = 0x00000000;

u32 D_800D3CF8 = 0x00000000;

u32 D_800D3CFC = 0x00000000;

u32 D_800D3D00 = 0x00000000;

u32 D_800D3D04 = 0x00000000;

u32 D_800D3D08 = 0x00070007;

u32 D_800D3D0C = 0x00000016;

u32 D_800D3D10 = 0x004F0041;

u32 D_800D3D14 = 0x00000046;

f32 D_800D3D18 = 1.0f;

f32 D_800D3D1C = 0.4f;

u32 D_800D3D20 = 0x00000000;

u32 D_800D3D24 = 0x00000000;

f32 D_800D3D28 = 0.05f;

f32 D_800D3D2C = 0.025f;

f32 D_800D3D30 = 0.5f;

f32 D_800D3D34 = 1.0f;

u32 D_800D3D38 = 0x0007000B;

u32 D_800D3D3C = 0x00000012;

u32 D_800D3D40 = 0x046F0042;

u32 D_800D3D44 = 0x0000004B;

f32 D_800D3D48 = 1.0f;

f32 D_800D3D4C = 1.2f;

f32 D_800D3D50 = 0.2f;

u32 D_800D3D54 = 0x00000000;

f32 D_800D3D58 = 0.06f;

f32 D_800D3D5C = 0.05f;

f32 D_800D3D60 = 0.5f;

f32 D_800D3D64 = 1.0f;

u32 D_800D3D68 = 0x00000000;

u32 D_800D3D6C = 0x00000000;

u32 D_800D3D70 = 0x00000000;

u32 D_800D3D74 = 0x00000000;

u32 D_800D3D78 = 0x00000000;

u32 D_800D3D7C = 0x00000000;

u32 D_800D3D80 = 0x00000000;

u32 D_800D3D84 = 0x00000000;

u32 D_800D3D88 = 0x00000000;

u32 D_800D3D8C = 0x00000000;

u32 D_800D3D90 = 0x00000000;

u32 D_800D3D94 = 0x00000000;

u32 D_800D3D98 = 0x00070013;

u32 D_800D3D9C = 0x00000016;

u32 D_800D3DA0 = 0x000F0000;

u32 D_800D3DA4 = 0x00000050;

f32 D_800D3DA8 = 1.4f;

f32 D_800D3DAC = 1.4f;

u32 D_800D3DB0 = 0x00000000;

u32 D_800D3DB4 = 0x00000000;

f32 D_800D3DB8 = 0.01f;

f32 D_800D3DBC = 0.01f;

f32 D_800D3DC0 = 1.0f;

f32 D_800D3DC4 = 1.0f;

u32 D_800D3DC8 = 0x00000000;

u32 D_800D3DCC = 0x00000000;

u32 D_800D3DD0 = 0x00000000;

u32 D_800D3DD4 = 0x00000000;

u32 D_800D3DD8 = 0x00000000;

u32 D_800D3DDC = 0x00000000;

u32 D_800D3DE0 = 0x00000000;

u32 D_800D3DE4 = 0x00000000;

u32 D_800D3DE8 = 0x00000000;

u32 D_800D3DEC = 0x00000000;

u32 D_800D3DF0 = 0x00000000;

u32 D_800D3DF4 = 0x00000000;

u32 D_800D3DF8 = 0x00070022;

u32 D_800D3DFC = 0x00000016;

u32 D_800D3E00 = 0x000F0000;

u32 D_800D3E04 = 0x000000A0;

f32 D_800D3E08 = 1.0f;

f32 D_800D3E0C = 1.0f;

u32 D_800D3E10 = 0x00000000;

u32 D_800D3E14 = 0x00000000;

f32 D_800D3E18 = 0.075f;

f32 D_800D3E1C = 0.02f;

f32 D_800D3E20 = 0.9f;

f32 D_800D3E24 = 0.6f;

u32 D_800D3E28 = 0x00070019;

u32 D_800D3E2C = 0x00000012;

u32 D_800D3E30 = 0x000F0000;

u32 D_800D3E34 = 0x000000C8;

f32 D_800D3E38 = 1.0f;

f32 D_800D3E3C = 1.0f;

u32 D_800D3E40 = 0x00000000;

u32 D_800D3E44 = 0x00000000;

f32 D_800D3E48 = 0.075f;

f32 D_800D3E4C = 0.03f;

f32 D_800D3E50 = 1.0f;

f32 D_800D3E54 = 0.8f;

u32 D_800D3E58 = 0x00070015;

u32 D_800D3E5C = 0x00000012;

u32 D_800D3E60 = 0x000F0000;

u32 D_800D3E64 = 0x000000DC;

f32 D_800D3E68 = 1.0f;

f32 D_800D3E6C = 1.0f;

u32 D_800D3E70 = 0x00000000;

u32 D_800D3E74 = 0x00000000;

f32 D_800D3E78 = 0.09f;

f32 D_800D3E7C = 0.05f;

f32 D_800D3E80 = 1.0f;

f32 D_800D3E84 = 1.0f;

u32 D_800D3E88 = 0x00070003;

u32 D_800D3E8C = 0x00000012;

u32 D_800D3E90 = 0x006F000F;

u32 D_800D3E94 = 0x00000032;

f32 D_800D3E98 = 1.8f;

u32 D_800D3E9C = 0x40200000;

f32 D_800D3EA0 = -0.1f;

u32 D_800D3EA4 = 0x00000000;

f32 D_800D3EA8 = 0.075f;

u32 D_800D3EAC = 0x3D0F5C29;

f32 D_800D3EB0 = 0.9f;

u32 D_800D3EB4 = 0x3F000000;

u32 D_800D3EB8 = 0x00000000;

u32 D_800D3EBC = 0x00000000;

u32 D_800D3EC0 = 0x00000000;

u32 D_800D3EC4 = 0x00000000;

u32 D_800D3EC8 = 0x00000000;

u32 D_800D3ECC = 0x00000000;

u32 D_800D3ED0 = 0x00000000;

u32 D_800D3ED4 = 0x00000000;

u32 D_800D3ED8 = 0x00000000;

u32 D_800D3EDC = 0x00000000;

u32 D_800D3EE0 = 0x00000000;

u32 D_800D3EE4 = 0x00000000;

u32 D_800D3EE8 = 0x00070011;

u32 D_800D3EEC = 0x00000016;

u32 D_800D3EF0 = 0x004F0033;

u32 D_800D3EF4 = 0xFF6AFFEC;

u32 D_800D3EF8 = 0x40200000;

u32 D_800D3EFC = 0x40066666;

u32 D_800D3F00 = 0x00000000;

u32 D_800D3F04 = 0x00000000;

f32 D_800D3F08 = 0.01f;

f32 D_800D3F0C = 0.01f;

f32 D_800D3F10 = 1.0f;

f32 D_800D3F14 = 1.0f;

u32 D_800D3F18 = 0x00000000;

u32 D_800D3F1C = 0x00000000;

u32 D_800D3F20 = 0x00000000;

u32 D_800D3F24 = 0x00000000;

u32 D_800D3F28 = 0x00000000;

u32 D_800D3F2C = 0x00000000;

u32 D_800D3F30 = 0x00000000;

u32 D_800D3F34 = 0x00000000;

u32 D_800D3F38 = 0x00000000;

u32 D_800D3F3C = 0x00000000;

u32 D_800D3F40 = 0x00000000;

u32 D_800D3F44 = 0x00000000;

u32 D_800D3F48 = 0x00070023;

u32 D_800D3F4C = 0x00000016;

u32 D_800D3F50 = 0x000F0000;

u32 D_800D3F54 = 0x0000FF6F;

u32 D_800D3F58 = 0x404CCCCD;

u32 D_800D3F5C = 0x40266666;

u32 D_800D3F60 = 0x00000000;

u32 D_800D3F64 = 0x00000000;

u32 D_800D3F68 = 0x3D23D70A;

f32 D_800D3F6C = 0.05f;

f32 D_800D3F70 = 0.4f;

f32 D_800D3F74 = 0.3f;

u32 D_800D3F78 = 0x00000000;

u32 D_800D3F7C = 0x00000000;

u32 D_800D3F80 = 0x00000000;

u32 D_800D3F84 = 0x00000000;

u32 D_800D3F88 = 0x00000000;

u32 D_800D3F8C = 0x00000000;

u32 D_800D3F90 = 0x00000000;

u32 D_800D3F94 = 0x00000000;

u32 D_800D3F98 = 0x00000000;

u32 D_800D3F9C = 0x00000000;

u32 D_800D3FA0 = 0x00000000;

u32 D_800D3FA4 = 0x00000000;

u32 D_800D3FA8 = 0x0007000A;

u32 D_800D3FAC = 0x00000012;

u32 D_800D3FB0 = 0x000D0000;

u32 D_800D3FB4 = 0xFF6A0000;

u32 D_800D3FB8 = 0x40000000;

f32 D_800D3FBC = 1.2f;

u32 D_800D3FC0 = 0x00000000;

u32 D_800D3FC4 = 0x00000000;

f32 D_800D3FC8 = 0.025f;

u32 D_800D3FCC = 0x00000000;

f32 D_800D3FD0 = 1.0f;

f32 D_800D3FD4 = 0.2f;

u32 D_800D3FD8 = 0x00000000;

u32 D_800D3FDC = 0x00000000;

u32 D_800D3FE0 = 0x00000000;

u32 D_800D3FE4 = 0x00000000;

u32 D_800D3FE8 = 0x00000000;

u32 D_800D3FEC = 0x00000000;

u32 D_800D3FF0 = 0x00000000;

u32 D_800D3FF4 = 0x00000000;

u32 D_800D3FF8 = 0x00000000;

u32 D_800D3FFC = 0x00000000;

u32 D_800D4000 = 0x00000000;

u32 D_800D4004 = 0x00000000;

u32 D_800D4008 = 0x00070002;

u32 D_800D400C = 0x00000012;

u32 D_800D4010 = 0x002F0000;

u32 D_800D4014 = 0x00000032;

f32 D_800D4018 = 1.0f;

f32 D_800D401C = 0.8f;

f32 D_800D4020 = -0.15f;

u32 D_800D4024 = 0x00000000;

f32 D_800D4028 = 0.15f;

f32 D_800D402C = 0.15f;

f32 D_800D4030 = 1.0f;

f32 D_800D4034 = 1.0f;

u32 D_800D4038 = 0x00000000;

u32 D_800D403C = 0x00000000;

u32 D_800D4040 = 0x00000000;

u32 D_800D4044 = 0x00000000;

u32 D_800D4048 = 0x00000000;

u32 D_800D404C = 0x00000000;

u32 D_800D4050 = 0x00000000;

u32 D_800D4054 = 0x00000000;

u32 D_800D4058 = 0x00000000;

u32 D_800D405C = 0x00000000;

u32 D_800D4060 = 0x00000000;

u32 D_800D4064 = 0x00000000;

u32 D_800D4068 = 0x00070024;

u32 D_800D406C = 0x00000016;

u32 D_800D4070 = 0x004E001D;

u32 D_800D4074 = 0x00000032;

f32 D_800D4078 = 0.7f;

f32 D_800D407C = 0.7f;

u32 D_800D4080 = 0x00000000;

u32 D_800D4084 = 0x00000000;

u32 D_800D4088 = 0x00000000;

f32 D_800D408C = 0.01f;

f32 D_800D4090 = 1.0f;

f32 D_800D4094 = 1.0f;

u32 D_800D4098 = 0x0007001A;

u32 D_800D409C = 0x00000016;

u32 D_800D40A0 = 0x002E0000;

u32 D_800D40A4 = 0x00000046;

f32 D_800D40A8 = 1.0f;

f32 D_800D40AC = 1.0f;

u32 D_800D40B0 = 0x00000000;

u32 D_800D40B4 = 0x00000000;

u32 D_800D40B8 = 0x00000000;

f32 D_800D40BC = 0.05f;

f32 D_800D40C0 = 1.0f;

f32 D_800D40C4 = 1.0f;

u32 D_800D40C8 = 0x00070016;

u32 D_800D40CC = 0x00000012;

u32 D_800D40D0 = 0x002E0000;

u32 D_800D40D4 = 0x00000046;

f32 D_800D40D8 = 1.0f;

f32 D_800D40DC = 1.0f;

u32 D_800D40E0 = 0x00000000;

u32 D_800D40E4 = 0x00000000;

u32 D_800D40E8 = 0x00000000;

f32 D_800D40EC = 0.05f;

f32 D_800D40F0 = 1.0f;

f32 D_800D40F4 = 1.0f;

u32 D_800D40F8 = 0x00000000;

u32 D_800D40FC = 0x00000000;

u32 D_800D4100 = 0x00000000;

u32 D_800D4104 = 0x00000000;

u32 D_800D4108 = 0x00000000;

u32 D_800D410C = 0x00000000;

u32 D_800D4110 = 0x00000000;

u32 D_800D4114 = 0x00000000;

u32 D_800D4118 = 0x00000000;

u32 D_800D411C = 0x00000000;

u32 D_800D4120 = 0x00000000;

u32 D_800D4124 = 0x00000000;

u32 D_800D4128 = 0x00070006;

u32 D_800D412C = 0x00000016;

u32 D_800D4130 = 0x004D000A;

u32 D_800D4134 = 0x0000001E;

f32 D_800D4138 = 1.0f;

f32 D_800D413C = 1.0f;

u32 D_800D4140 = 0x00000000;

u32 D_800D4144 = 0x00000000;

f32 D_800D4148 = 0.05f;

u32 D_800D414C = 0x00000000;

f32 D_800D4150 = 1.0f;

f32 D_800D4154 = 1.0f;

u32 D_800D4158 = 0x00070005;

u32 D_800D415C = 0x00000012;

u32 D_800D4160 = 0x000D0000;

u32 D_800D4164 = 0x00000055;

u32 D_800D4168 = 0x40000000;

f32 D_800D416C = 1.0f;

u32 D_800D4170 = 0x00000000;

u32 D_800D4174 = 0x00000000;

f32 D_800D4178 = 0.125f;

u32 D_800D417C = 0x00000000;

f32 D_800D4180 = 1.2f;

f32 D_800D4184 = 1.0f;

u32 D_800D4188 = 0x00070026;

u32 D_800D418C = 0x00000012;

u32 D_800D4190 = 0x002D0000;

u32 D_800D4194 = 0x00000032;

f32 D_800D4198 = 1.3f;

f32 D_800D419C = 1.0f;

f32 D_800D41A0 = -0.15f;

u32 D_800D41A4 = 0x00000000;

f32 D_800D41A8 = 0.08f;

u32 D_800D41AC = 0x00000000;

f32 D_800D41B0 = 1.0f;

f32 D_800D41B4 = 1.0f;

u32 D_800D41B8 = 0x00000000;

u32 D_800D41BC = 0x00000000;

u32 D_800D41C0 = 0x00000000;

u32 D_800D41C4 = 0x00000000;

u32 D_800D41C8 = 0x00000000;

u32 D_800D41CC = 0x00000000;

u32 D_800D41D0 = 0x00000000;

u32 D_800D41D4 = 0x00000000;

u32 D_800D41D8 = 0x00000000;

u32 D_800D41DC = 0x00000000;

u32 D_800D41E0 = 0x00000000;

u32 D_800D41E4 = 0x00000000;

u32 D_800D41E8 = 0x0007000D;

u32 D_800D41EC = 0x00000016;

u32 D_800D41F0 = 0x060D0000;

u32 D_800D41F4 = 0xFF6AFFC9;

f32 D_800D41F8 = 1.0f;

f32 D_800D41FC = 1.0f;

u32 D_800D4200 = 0x00000000;

u32 D_800D4204 = 0x00000000;

f32 D_800D4208 = 0.05f;

u32 D_800D420C = 0x00000000;

f32 D_800D4210 = 1.0f;

f32 D_800D4214 = 1.0f;

u32 D_800D4218 = 0x00070018;

u32 D_800D421C = 0x00000012;

u32 D_800D4220 = 0x002D0000;

u32 D_800D4224 = 0xFF6AFFC9;

f32 D_800D4228 = 1.0f;

f32 D_800D422C = 1.0f;

u32 D_800D4230 = 0x00000000;

u32 D_800D4234 = 0x00000000;

f32 D_800D4238 = 0.05f;

u32 D_800D423C = 0x00000000;

f32 D_800D4240 = 1.0f;

f32 D_800D4244 = 1.0f;

u32 D_800D4248 = 0x00070027;

u32 D_800D424C = 0x0000000E;

u32 D_800D4250 = 0x062D0000;

u32 D_800D4254 = 0xFF6AFFC9;

f32 D_800D4258 = 1.0f;

f32 D_800D425C = 1.0f;

u32 D_800D4260 = 0x00000000;

u32 D_800D4264 = 0x00000000;

f32 D_800D4268 = 0.05f;

u32 D_800D426C = 0x00000000;

f32 D_800D4270 = 1.0f;

f32 D_800D4274 = 1.0f;

u32 D_800D4278 = 0x00000000;

u32 D_800D427C = 0x00000000;

u32 D_800D4280 = 0x00000000;

u32 D_800D4284 = 0x00000000;

u32 D_800D4288 = 0x00000000;

u32 D_800D428C = 0x00000000;

u32 D_800D4290 = 0x00000000;

u32 D_800D4294 = 0x00000000;

u32 D_800D4298 = 0x00000000;

u32 D_800D429C = 0x00000000;

u32 D_800D42A0 = 0x00000000;

u32 D_800D42A4 = 0x00000000;

u32 D_800D42A8 = 0x00070006;

u32 D_800D42AC = 0x00000016;

u32 D_800D42B0 = 0x004D000A;

u32 D_800D42B4 = 0x00000032;

u32 D_800D42B8 = 0x3F000000;

f32 D_800D42BC = 0.6f;

u32 D_800D42C0 = 0x00000000;

u32 D_800D42C4 = 0x00000000;

f32 D_800D42C8 = 0.08f;

u32 D_800D42CC = 0x00000000;

f32 D_800D42D0 = 1.0f;

f32 D_800D42D4 = 1.0f;

u32 D_800D42D8 = 0x00070005;

u32 D_800D42DC = 0x00000012;

u32 D_800D42E0 = 0x002D0000;

u32 D_800D42E4 = 0x00000055;

u32 D_800D42E8 = 0x40000000;

f32 D_800D42EC = 1.0f;

u32 D_800D42F0 = 0x00000000;

u32 D_800D42F4 = 0x00000000;

f32 D_800D42F8 = 0.125f;

u32 D_800D42FC = 0x00000000;

f32 D_800D4300 = 1.2f;

f32 D_800D4304 = 1.0f;

u32 D_800D4308 = 0x00070026;

u32 D_800D430C = 0x00000012;

u32 D_800D4310 = 0x002D0000;

u32 D_800D4314 = 0x00000032;

f32 D_800D4318 = 1.3f;

f32 D_800D431C = 1.0f;

f32 D_800D4320 = -0.15f;

u32 D_800D4324 = 0x00000000;

f32 D_800D4328 = 0.08f;

u32 D_800D432C = 0x00000000;

f32 D_800D4330 = 1.0f;

f32 D_800D4334 = 1.0f;

u32 D_800D4338 = 0x00000000;

u32 D_800D433C = 0x00000000;

u32 D_800D4340 = 0x00000000;

u32 D_800D4344 = 0x00000000;

u32 D_800D4348 = 0x00000000;

u32 D_800D434C = 0x00000000;

u32 D_800D4350 = 0x00000000;

u32 D_800D4354 = 0x00000000;

u32 D_800D4358 = 0x00000000;

u32 D_800D435C = 0x00000000;

u32 D_800D4360 = 0x00000000;

u32 D_800D4364 = 0x00000000;

u32 D_800D4368 = 0x00070022;

u32 D_800D436C = 0x00000016;

u32 D_800D4370 = 0x000F0000;

u32 D_800D4374 = 0x000000BE;

f32 D_800D4378 = 1.0f;

f32 D_800D437C = 1.0f;

u32 D_800D4380 = 0x00000000;

u32 D_800D4384 = 0x00000000;

f32 D_800D4388 = 0.025f;

f32 D_800D438C = 0.1f;

u32 D_800D4390 = 0x3F733333;

f32 D_800D4394 = 1.0f;

u32 D_800D4398 = 0x00070019;

u32 D_800D439C = 0x00000012;

u32 D_800D43A0 = 0x000F0000;

u32 D_800D43A4 = 0x000000DC;

f32 D_800D43A8 = 0.9f;

f32 D_800D43AC = 0.9f;

u32 D_800D43B0 = 0x00000000;

u32 D_800D43B4 = 0x00000000;

f32 D_800D43B8 = 0.05f;

f32 D_800D43BC = 0.075f;

f32 D_800D43C0 = 0.9f;

f32 D_800D43C4 = 1.0f;

u32 D_800D43C8 = 0x00070015;

u32 D_800D43CC = 0x00000012;

u32 D_800D43D0 = 0x000F0000;

u32 D_800D43D4 = 0x000000FA;

f32 D_800D43D8 = 1.0f;

f32 D_800D43DC = 1.0f;

u32 D_800D43E0 = 0x00000000;

u32 D_800D43E4 = 0x00000000;

f32 D_800D43E8 = 0.1f;

f32 D_800D43EC = 0.05f;

f32 D_800D43F0 = 0.85f;

f32 D_800D43F4 = 1.0f;

u32 D_800D43F8 = 0x00070003;

u32 D_800D43FC = 0x00000012;

u32 D_800D4400 = 0x006F000F;

u32 D_800D4404 = 0x00000078;

f32 D_800D4408 = 1.5f;

u32 D_800D440C = 0x40000000;

f32 D_800D4410 = -0.1f;

u32 D_800D4414 = 0x00000000;

f32 D_800D4418 = 0.025f;

f32 D_800D441C = 0.1f;

u32 D_800D4420 = 0x3F733333;

f32 D_800D4424 = 1.0f;

u32 D_800D4428 = 0x00000000;

u32 D_800D442C = 0x00000000;

u32 D_800D4430 = 0x00000000;

u32 D_800D4434 = 0x00000000;

u32 D_800D4438 = 0x00000000;

u32 D_800D443C = 0x00000000;

u32 D_800D4440 = 0x00000000;

u32 D_800D4444 = 0x00000000;

u32 D_800D4448 = 0x00000000;

u32 D_800D444C = 0x00000000;

u32 D_800D4450 = 0x00000000;

u32 D_800D4454 = 0x00000000;

u32 D_800D4458 = 0x00070007;

u32 D_800D445C = 0x00000016;

u32 D_800D4460 = 0x004F0041;

u32 D_800D4464 = 0x0000001E;

f32 D_800D4468 = 1.0f;

f32 D_800D446C = 0.7f;

u32 D_800D4470 = 0x00000000;

u32 D_800D4474 = 0x00000000;

f32 D_800D4478 = 0.06f;

f32 D_800D447C = 0.025f;

u32 D_800D4480 = 0x3F000000;

f32 D_800D4484 = 1.0f;

u32 D_800D4488 = 0x0007000B;

u32 D_800D448C = 0x00000012;

u32 D_800D4490 = 0x046F0042;

u32 D_800D4494 = 0x00000032;

f32 D_800D4498 = 1.0f;

f32 D_800D449C = 1.8f;

f32 D_800D44A0 = 0.2f;

u32 D_800D44A4 = 0x00000000;

f32 D_800D44A8 = 0.06f;

f32 D_800D44AC = 0.05f;

u32 D_800D44B0 = 0x3F000000;

f32 D_800D44B4 = 1.0f;

u32 D_800D44B8 = 0x00000000;

u32 D_800D44BC = 0x00000000;

u32 D_800D44C0 = 0x00000000;

u32 D_800D44C4 = 0x00000000;

u32 D_800D44C8 = 0x00000000;

u32 D_800D44CC = 0x00000000;

u32 D_800D44D0 = 0x00000000;

u32 D_800D44D4 = 0x00000000;

u32 D_800D44D8 = 0x00000000;

u32 D_800D44DC = 0x00000000;

u32 D_800D44E0 = 0x00000000;

u32 D_800D44E4 = 0x00000000;

u32 D_800D44E8 = 0x00070006;

u32 D_800D44EC = 0x00000016;

u32 D_800D44F0 = 0x004C000A;

u32 D_800D44F4 = 0x00000032;

f32 D_800D44F8 = 0.8f;

f32 D_800D44FC = 0.8f;

u32 D_800D4500 = 0x00000000;

u32 D_800D4504 = 0x00000000;

u32 D_800D4508 = 0x00000000;

u32 D_800D450C = 0x00000000;

f32 D_800D4510 = 1.0f;

f32 D_800D4514 = 1.0f;

u32 D_800D4518 = 0x00070005;

u32 D_800D451C = 0x00000012;

u32 D_800D4520 = 0x000C0000;

u32 D_800D4524 = 0x0000005A;

u32 D_800D4528 = 0x40000000;

f32 D_800D452C = 1.0f;

u32 D_800D4530 = 0x00000000;

u32 D_800D4534 = 0x00000000;

u32 D_800D4538 = 0x00000000;

u32 D_800D453C = 0x00000000;

f32 D_800D4540 = 1.2f;

f32 D_800D4544 = 1.0f;

u32 D_800D4548 = 0x00070026;

u32 D_800D454C = 0x00000012;

u32 D_800D4550 = 0x002C0000;

u32 D_800D4554 = 0x00000037;

f32 D_800D4558 = 1.3f;

f32 D_800D455C = 1.0f;

f32 D_800D4560 = -0.15f;

u32 D_800D4564 = 0x00000000;

u32 D_800D4568 = 0x00000000;

u32 D_800D456C = 0x00000000;

f32 D_800D4570 = 1.0f;

f32 D_800D4574 = 1.0f;

u32 D_800D4578 = 0x00000000;

u32 D_800D457C = 0x00000000;

u32 D_800D4580 = 0x00000000;

u32 D_800D4584 = 0x00000000;

u32 D_800D4588 = 0x00000000;

u32 D_800D458C = 0x00000000;

u32 D_800D4590 = 0x00000000;

u32 D_800D4594 = 0x00000000;

u32 D_800D4598 = 0x00000000;

u32 D_800D459C = 0x00000000;

u32 D_800D45A0 = 0x00000000;

u32 D_800D45A4 = 0x00000000;

u32 D_800D45A8 = 0x0007000F;

u32 D_800D45AC = 0x00000016;

u32 D_800D45B0 = 0x004F003D;

u32 D_800D45B4 = 0xFD6CFFF1;

u32 D_800D45B8 = 0x4099999A;

u32 D_800D45BC = 0x40133333;

u32 D_800D45C0 = 0x00000000;

u32 D_800D45C4 = 0x00000000;

f32 D_800D45C8 = 0.1f;

f32 D_800D45CC = 0.01f;

f32 D_800D45D0 = 1.0f;

f32 D_800D45D4 = 1.0f;

u32 D_800D45D8 = 0x00000000;

u32 D_800D45DC = 0x00000000;

u32 D_800D45E0 = 0x00000000;

u32 D_800D45E4 = 0x00000000;

u32 D_800D45E8 = 0x00000000;

u32 D_800D45EC = 0x00000000;

u32 D_800D45F0 = 0x00000000;

u32 D_800D45F4 = 0x00000000;

u32 D_800D45F8 = 0x00000000;

u32 D_800D45FC = 0x00000000;

u32 D_800D4600 = 0x00000000;

u32 D_800D4604 = 0x00000000;

u32 D_800D4608 = 0x0007000A;

u32 D_800D460C = 0x00000012;

u32 D_800D4610 = 0x000D0000;

u32 D_800D4614 = 0xFF6AFFE2;

u32 D_800D4618 = 0x40000000;

f32 D_800D461C = 1.2f;

u32 D_800D4620 = 0x00000000;

u32 D_800D4624 = 0x00000000;

f32 D_800D4628 = 0.025f;

u32 D_800D462C = 0x00000000;

f32 D_800D4630 = 1.0f;

f32 D_800D4634 = 0.2f;

u32 D_800D4638 = 0x00000000;

u32 D_800D463C = 0x00000000;

u32 D_800D4640 = 0x00000000;

u32 D_800D4644 = 0x00000000;

u32 D_800D4648 = 0x00000000;

u32 D_800D464C = 0x00000000;

u32 D_800D4650 = 0x00000000;

u32 D_800D4654 = 0x00000000;

u32 D_800D4658 = 0x00000000;

u32 D_800D465C = 0x00000000;

u32 D_800D4660 = 0x00000000;

u32 D_800D4664 = 0x00000000;

u32 D_800D4668 = 0x00000000;

u32 D_800D466C = 0x800D41E8;

u32 D_800D4670 = 0x800D42A8;

u32 D_800D4674 = 0x800D2FB8;

u32 D_800D4678 = 0x800D2E68;

u32 D_800D467C = 0x800D27D8;

u32 D_800D4680 = 0x800D44E8;

u32 D_800D4684 = 0x800D31C8;

u32 D_800D4688 = 0x800D4128;

u32 D_800D468C = 0x800D2358;

u32 D_800D4690 = 0x800D2B08;

u32 D_800D4694 = 0x800D26B8;

u32 D_800D4698 = 0x800D3438;

u32 D_800D469C = 0x800D32E8;

u32 D_800D46A0 = 0x800D3588;

u32 D_800D46A4 = 0x800D3288;

u32 D_800D46A8 = 0x800D2BC8;

u32 D_800D46AC = 0x800D29B8;

u32 D_800D46B0 = 0x800D2A18;

u32 D_800D46B4 = 0x800D3078;

u32 D_800D46B8 = 0x800D3A38;

u32 D_800D46BC = 0x800D2628;

u32 D_800D46C0 = 0x800D3C18;

u32 D_800D46C4 = 0x800D3978;

u32 D_800D46C8 = 0x800D2298;

u32 D_800D46CC = 0x800D4068;

u32 D_800D46D0 = 0x800D3F48;

u32 D_800D46D4 = 0x800D3888;

u32 D_800D46D8 = 0x800D2AA8;

u32 D_800D46DC = 0x800D2898;

u32 D_800D46E0 = 0x800D2208;

u32 D_800D46E4 = 0x800D3D08;

u32 D_800D46E8 = 0x800D4458;

u32 D_800D46EC = 0x800D2F28;

u32 D_800D46F0 = 0x800D3AC8;

u32 D_800D46F4 = 0x800D2148;

u32 D_800D46F8 = 0x800D36A8;

u32 D_800D46FC = 0x800D21A8;

u32 D_800D4700 = 0x800D3DF8;

u32 D_800D4704 = 0x800D3348;

u32 D_800D4708 = 0x800D2478;

u32 D_800D470C = 0x800D3738;

u32 D_800D4710 = 0x800D4368;

u32 D_800D4714 = 0x800D3168;

u32 D_800D4718 = 0x800D3828;

u32 D_800D471C = 0x800D4608;

u32 D_800D4720 = 0x800D2E08;

u32 D_800D4724 = 0x800D3FA8;

u32 D_800D4728 = 0x800D3918;

u32 D_800D472C = 0x800D2DA8;

u32 D_800D4730 = 0x800D3228;

u32 D_800D4734 = 0x800D3EE8;

u32 D_800D4738 = 0x800D2958;

u32 D_800D473C = 0x800D3B58;

u32 D_800D4740 = 0x800D2568;

u32 D_800D4744 = 0x800D2CE8;

u32 D_800D4748 = 0x800D34C8;

u32 D_800D474C = 0x800D4008;

u32 D_800D4750 = 0x800D25C8;

u32 D_800D4754 = 0x800D2778;

u32 D_800D4758 = 0x800D2C88;

u32 D_800D475C = 0x800D3528;

u32 D_800D4760 = 0x800D3D98;

u32 D_800D4764 = 0x800D2D48;

u32 D_800D4768 = 0x800D3CA8;

u32 D_800D476C = 0x800D3BB8;

u32 D_800D4770 = 0x800D2C28;

u32 D_800D4774 = 0x800D28F8;

u32 D_800D4778 = 0x800D2418;

u32 D_800D477C = 0x800D39D8;

u32 D_800D4780 = 0x800D45A8;

u32 D_800D4784 = 0x800D35E8;

u32 D_800D4788 = 0x800D3108;

u32 D_800D478C = 0xB4B4B4FF;

u32 D_800D4790 = 0xFFFF323C;

u32 D_800D4794 = 0x28000000;

u32 D_800D4798 = 0x5A5A5A80;

u32 D_800D479C = 0x80803232;

u32 D_800D47A0 = 0x32000000;

u32 D_800D47A4 = 0xB42828FF;

u32 D_800D47A8 = 0xC8C83232;

u32 D_800D47AC = 0x32000000;

u32 D_800D47B0 = 0xFFFFFF00;

u32 D_800D47B4 = 0x0000323C;

u32 D_800D47B8 = 0x28000000;

u32 D_800D47BC = 0x00000000;

u32 D_800D47C0 = 0x0000323C;

u32 D_800D47C4 = 0x28000000;

u32 D_800D47C8 = 0xFFFFFFFF;

u32 D_800D47CC = 0xFFFF323C;

u32 D_800D47D0 = 0x28000000;

u32 D_800D47D4 = 0x7878788A;

u32 D_800D47D8 = 0x8A8A323C;

u32 D_800D47DC = 0x28000000;

u32 D_800D47E0 = 0x6496FFCD;

u32 D_800D47E4 = 0xCDCD323C;

u32 D_800D47E8 = 0xD8000000;

u32 D_800D47EC = 0x00000000;

u32 D_800D47F0 = 0x00000000;

u32 D_800D47F4 = 0x00000000;

u32 D_800D47F8 = 0x00000000;

u32 D_800D47FC = 0x00000000;

u32 D_800D4800 = 0x00000000;

u32 D_800D4804 = 0xC8FFFF00;

u32 D_800D4808 = 0xC8C8323C;

u32 D_800D480C = 0xD8000000;

u32 D_800D4810 = 0x6E6E6ECD;

u32 D_800D4814 = 0xCDCD323C;

u32 D_800D4818 = 0xD8000000;

u32 D_800D481C = 0xC4C0981F;

u32 D_800D4820 = 0x15183232;

u32 D_800D4824 = 0x32000000;

u32 D_800D4828 = 0x00000000;

u32 D_800D482C = 0x00000000;

u32 D_800D4830 = 0x00000000;

u32 D_800D4834 = 0x0000C83C;

u32 D_800D4838 = 0xFFFF3232;

u32 D_800D483C = 0x32000000;

u32 D_800D4840 = 0xDCE6FF14;

u32 D_800D4844 = 0xC8C83232;

u32 D_800D4848 = 0x32000000;

u32 D_800D484C = 0x00000000;

u32 D_800D4850 = 0x00000000;

u32 D_800D4854 = 0x00000000;

u32 D_800D4858 = 0x00000000;

u32 D_800D485C = 0x00000000;

u32 D_800D4860 = 0x00000000;

u32 D_800D4864 = 0x00000000;

u32 D_800D4868 = 0x00000000;

u32 D_800D486C = 0x00000000;

u32 D_800D4870 = 0x5087DC00;

u32 D_800D4874 = 0x14003232;

u32 D_800D4878 = 0x32000000;

u32 D_800D487C = 0x786EBE7D;

u32 D_800D4880 = 0x6EF50028;

u32 D_800D4884 = 0x00000000;

u32 D_800D4888 = 0x786EBE7D;

u32 D_800D488C = 0x6EF5CE28;

u32 D_800D4890 = 0x00000000;

u32 D_800D4894 = 0x786EBE7D;

u32 D_800D4898 = 0x6EF53228;

u32 D_800D489C = 0x00000000;

u32 D_800D48A0 = 0x4614785A;

u32 D_800D48A4 = 0x0A9B3232;

u32 D_800D48A8 = 0x32000000;

u32 D_800D48AC = 0x5050D28C;

u32 D_800D48B0 = 0xFFFF3232;

u32 D_800D48B4 = 0x32000000;

u32 D_800D48B8 = 0x826EB469;

u32 D_800D48BC = 0x5AFF00CE;

u32 D_800D48C0 = 0x00000000;

u32 D_800D48C4 = 0x6432AA19;

u32 D_800D48C8 = 0x4BB90028;

u32 D_800D48CC = 0x1E000000;

u32 D_800D48D0 = 0x28283C96;

u32 D_800D48D4 = 0x9696005A;

u32 D_800D48D8 = 0x3C000000;

u32 D_800D48DC = 0x3C3214E6;

u32 D_800D48E0 = 0xD296323C;

u32 D_800D48E4 = 0x00000000;

u32 D_800D48E8 = 0x78E6FF00;

u32 D_800D48EC = 0x96963232;

u32 D_800D48F0 = 0x32000000;

u32 D_800D48F4 = 0x00000000;

u32 D_800D48F8 = 0x00000000;

u32 D_800D48FC = 0x00000000;

u32 D_800D4900 = 0x64786478;

u32 D_800D4904 = 0xF0783232;

u32 D_800D4908 = 0x32000000;

u32 D_800D490C = 0x6E786464;

u32 D_800D4910 = 0x78323232;

u32 D_800D4914 = 0x32000000;

u32 D_800D4918 = 0x8C64DCC8;

u32 D_800D491C = 0x78A03232;

u32 D_800D4920 = 0x32000000;

u32 D_800D4924 = 0x003CFF0A;

u32 D_800D4928 = 0x00143232;

u32 D_800D492C = 0x32000000;

u32 D_800D4930 = 0x0082C83C;

u32 D_800D4934 = 0x00323232;

u32 D_800D4938 = 0x32000000;

u32 D_800D493C = 0x005AAA14;

u32 D_800D4940 = 0x00143232;

u32 D_800D4944 = 0x32000000;

u32 D_800D4948 = 0x0078FFC8;

u32 D_800D494C = 0xFFFF3232;

u32 D_800D4950 = 0x32000000;

u32 D_800D4954 = 0x505A5AD2;

u32 D_800D4958 = 0xFFBE1E28;

u32 D_800D495C = 0x1E000000;

u32 D_800D4960 = 0xFFFFFFAF;

u32 D_800D4964 = 0xD7FF3232;

u32 D_800D4968 = 0x32000000;

u32 D_800D496C = 0x00000000;

u32 D_800D4970 = 0x00000000;

u32 D_800D4974 = 0x00000000;

u32 D_800D4978 = 0x00B4FA00;

u32 D_800D497C = 0x14003232;

u32 D_800D4980 = 0x32000000;

u32 D_800D4984 = 0x503C0000;

u32 D_800D4988 = 0x50003232;

u32 D_800D498C = 0x32000000;

u32 D_800D4990 = 0x0014918C;

u32 D_800D4994 = 0xFFFF3232;

u32 D_800D4998 = 0x32000000;

u32 D_800D499C = 0x0000FF64;

u32 D_800D49A0 = 0xC8FF3232;

u32 D_800D49A4 = 0x32000000;

u32 D_800D49A8 = 0x001450FF;

u32 D_800D49AC = 0xFFFF3232;

u32 D_800D49B0 = 0x32000000;

u32 D_800D49B4 = 0x3719A5FF;

u32 D_800D49B8 = 0xFFFF3232;

u32 D_800D49BC = 0x32000000;

u32 D_800D49C0 = 0x871E3700;

u32 D_800D49C4 = 0x00003232;

u32 D_800D49C8 = 0x32000000;

u32 D_800D49CC = 0xAF695AFF;

u32 D_800D49D0 = 0xFFEB3232;

u32 D_800D49D4 = 0x32000000;

u32 D_800D49D8 = 0x00000000;

u32 D_800D49DC = 0x00000000;

u32 D_800D49E0 = 0x00000000;

u32 D_800D49E4 = 0x00000000;

u32 D_800D49E8 = 0x00000000;

u32 D_800D49EC = 0x00000000;

u32 D_800D49F0 = 0xA0AABEE6;

u32 D_800D49F4 = 0xEBEB3232;

u32 D_800D49F8 = 0x32000000;

u32 D_800D49FC = 0x00000000;

u32 D_800D4A00 = 0x00000000;

u32 D_800D4A04 = 0x00000000;

u32 D_800D4A08 = 0x00000000;

u32 D_800D4A0C = 0x00000000;

u32 D_800D4A10 = 0x00000000;

u32 D_800D4A14 = 0x96BEFF00;

u32 D_800D4A18 = 0x91FF323C;

u32 D_800D4A1C = 0xD8000000;

u32 D_800D4A20 = 0x6496FFCD;

u32 D_800D4A24 = 0xCDCD323C;

u32 D_800D4A28 = 0xD8000000;

u32 D_800D4A2C = 0x00BEFF0A;

u32 D_800D4A30 = 0x00323232;

u32 D_800D4A34 = 0x32000000;

u32 D_800D4A38 = 0x00BBFF00;

u32 D_800D4A3C = 0x00003232;

u32 D_800D4A40 = 0x32000000;

u32 D_800D4A44 = 0x7882A094;

u32 D_800D4A48 = 0x94A8323C;

u32 D_800D4A4C = 0x28000000;

u32 D_800D4A50 = 0x00000000;

u32 D_800D4A54 = 0x00000000;

u32 D_800D4A58 = 0x00000000;

u32 D_800D4A5C = 0x00000000;

u32 D_800D4A60 = 0x00000000;

u32 D_800D4A64 = 0x00000000;

u32 D_800D4A68 = 0x00A5FF00;

u32 D_800D4A6C = 0x00003232;

u32 D_800D4A70 = 0x32000000;

u32 D_800D4A74 = 0x000000FF;

u32 D_800D4A78 = 0xFFFF3232;

u32 D_800D4A7C = 0x32000000;

u32 D_800D4A80 = 0x00000000;

u32 D_800D4A84 = 0x00000000;

u32 D_800D4A88 = 0x00000000;

u32 D_800D4A8C = 0x00000000;

u32 D_800D4A90 = 0x00000000;

u32 D_800D4A94 = 0x00000000;

u32 D_800D4A98 = 0x003CDC64;

u32 D_800D4A9C = 0xFFFF3232;

u32 D_800D4AA0 = 0x32000000;

u32 D_800D4AA4 = 0xFFFFFF55;

u32 D_800D4AA8 = 0xF5FF323C;

u32 D_800D4AAC = 0xD8000000;

u32 D_800D4AB0 = 0x00000000;

u32 D_800D4AB4 = 0x00000000;

u32 D_800D4AB8 = 0x00000000;

u32 D_800D4ABC = 0x00000000;

u32 D_800D4AC0 = 0x00000000;

u32 D_800D4AC4 = 0x00000000;

u32 D_800D4AC8 = 0x0000003C;

u32 D_800D4ACC = 0x00003232;

u32 D_800D4AD0 = 0x32000000;

u32 D_800D4AD4 = 0x70554BCD;

u32 D_800D4AD8 = 0xE1EB0A32;

u32 D_800D4ADC = 0x0A000000;

u32 D_800D4AE0 = 0x70554BCD;

u32 D_800D4AE4 = 0xE1EB14A6;

u32 D_800D4AE8 = 0x28000000;

u32 D_800D4AEC = 0xB4B4B4FF;

u32 D_800D4AF0 = 0xFFFF323C;

u32 D_800D4AF4 = 0x28000000;

u32 D_800D4AF8 = 0xB4B4B4FF;

u32 D_800D4AFC = 0xFFFFEC3C;

u32 D_800D4B00 = 0x28000000;

u32 D_800D4B04 = 0xB4B4B4FF;

u32 D_800D4B08 = 0xFFFFD83C;

u32 D_800D4B0C = 0x1E000000;

u32 D_800D4B10 = 0x28283CA5;

u32 D_800D4B14 = 0xA5A55A28;

u32 D_800D4B18 = 0x28000000;

u32 D_800D4B1C = 0x28283CA5;

u32 D_800D4B20 = 0xA5A5A628;

u32 D_800D4B24 = 0x28000000;

u32 D_800D4B28 = 0x28323C46;

u32 D_800D4B2C = 0x4646005A;

u32 D_800D4B30 = 0x3C000000;

u32 D_800D4B34 = 0x00000000;

u32 D_800D4B38 = 0x00000000;

u32 D_800D4B3C = 0x00000000;

u32 D_800D4B40 = 0x00000000;

u32 D_800D4B44 = 0x00000000;

u32 D_800D4B48 = 0x00000000;

u32 D_800D4B4C = 0x00000000;

u32 D_800D4B50 = 0x00000000;

u32 D_800D4B54 = 0x00000000;

u32 D_800D4B58 = 0x00000000;

u32 D_800D4B5C = 0x00000000;

u32 D_800D4B60 = 0x00000000;

u32 D_800D4B64 = 0x00000000;

u32 D_800D4B68 = 0x00000000;

u32 D_800D4B6C = 0x00000000;

u32 D_800D4B70 = 0x7878FA28;

u32 D_800D4B74 = 0x82FF323C;

u32 D_800D4B78 = 0x28000000;

u32 D_800D4B7C = 0x5A5A5A55;

u32 D_800D4B80 = 0x5F73323C;

u32 D_800D4B84 = 0x28000000;

u32 D_800D4B88 = 0x1469A0B4;

u32 D_800D4B8C = 0xB4B4323C;

u32 D_800D4B90 = 0x28000000;

u32 D_800D4B94 = 0x00000000;

u32 D_800D4B98 = 0x00000000;

u32 D_800D4B9C = 0x00000000;

u32 D_800D4BA0 = 0x00000000;

u32 D_800D4BA4 = 0x00000000;

u32 D_800D4BA8 = 0x00000000;

u32 D_800D4BAC = 0x00000000;

u32 D_800D4BB0 = 0x00000000;

u32 D_800D4BB4 = 0x00000000;

u32 D_800D4BB8 = 0x00000000;

u32 D_800D4BBC = 0x00000000;

u32 D_800D4BC0 = 0x00000000;

u32 D_800D4BC4 = 0x00000000;

u32 D_800D4BC8 = 0x00000000;

u32 D_800D4BCC = 0x00000000;

u32 D_800D4BD0 = 0x00000000;

u32 D_800D4BD4 = 0x00000000;

u32 D_800D4BD8 = 0x00000000;

u32 D_800D4BDC = 0x00000000;

u32 D_800D4BE0 = 0x00000000;

u32 D_800D4BE4 = 0x00000000;

u32 D_800D4BE8 = 0x05000F6E;

u32 D_800D4BEC = 0x32EB3263;

u32 D_800D4BF0 = 0x32000000;

u32 D_800D4BF4 = 0x786EB4BE;

u32 D_800D4BF8 = 0x8CFF3263;

u32 D_800D4BFC = 0x32000000;

u32 D_800D4C00 = 0x7878FA28;

u32 D_800D4C04 = 0x82FF323C;

u32 D_800D4C08 = 0x28000000;

u32 D_800D4C0C = 0x5A5A5A55;

u32 D_800D4C10 = 0x5F73323C;

u32 D_800D4C14 = 0x28000000;

u32 D_800D4C18 = 0x28283CA5;

u32 D_800D4C1C = 0xA5A55A28;

u32 D_800D4C20 = 0x28000000;

u32 D_800D4C24 = 0x28283CA5;

u32 D_800D4C28 = 0xA5A5A628;

u32 D_800D4C2C = 0x28000000;

u32 D_800D4C30 = 0x14143241;

u32 D_800D4C34 = 0x4141005A;

u32 D_800D4C38 = 0x3C000000;

u32 D_800D4C3C = 0x00000000;

u32 D_800D4C40 = 0x00000000;

u32 D_800D4C44 = 0x00000000;

u32 D_800D4C48 = 0x00000000;

u32 D_800D4C4C = 0x00000000;

u32 D_800D4C50 = 0x00000000;

u32 D_800D4C54 = 0x00000000;

u32 D_800D4C58 = 0x00000000;

u32 D_800D4C5C = 0x00000000;

u32 D_800D4C60 = 0x00000000;

u32 D_800D4C64 = 0x00000000;

u32 D_800D4C68 = 0x00000000;

u32 D_800D4C6C = 0x00000000;

u32 D_800D4C70 = 0x00000000;

u32 D_800D4C74 = 0x00000000;

u32 D_800D4C78 = 0x00000000;

u32 D_800D4C7C = 0x00000000;

u32 D_800D4C80 = 0x00000000;

u32 D_800D4C84 = 0x00000000;

u32 D_800D4C88 = 0x00000000;

u32 D_800D4C8C = 0x00000000;

u32 D_800D4C90 = 0x00000000;

u32 D_800D4C94 = 0x00000000;

u32 D_800D4C98 = 0x00000000;

u32 D_800D4C9C = 0x00000000;

u32 D_800D4CA0 = 0x00000000;

u32 D_800D4CA4 = 0x00000000;

u32 D_800D4CA8 = 0x00000000;

u32 D_800D4CAC = 0x00000000;

u32 D_800D4CB0 = 0x00000000;

u32 D_800D4CB4 = 0x00000000;

u32 D_800D4CB8 = 0x00000000;

u32 D_800D4CBC = 0x00000000;

u32 D_800D4CC0 = 0x00000000;

u32 D_800D4CC4 = 0x00000000;

u32 D_800D4CC8 = 0x00000000;

u32 D_800D4CCC = 0x00000000;

u32 D_800D4CD0 = 0x00000000;

u32 D_800D4CD4 = 0x00000000;

u32 D_800D4CD8 = 0x00000000;

u32 D_800D4CDC = 0x00000000;

u32 D_800D4CE0 = 0x00000000;

u32 D_800D4CE4 = 0x00000000;

u32 D_800D4CE8 = 0x00000000;

u32 D_800D4CEC = 0x00000000;

u32 D_800D4CF0 = 0x00000000;

u32 D_800D4CF4 = 0x00000000;

u32 D_800D4CF8 = 0x00000000;

u32 D_800D4CFC = 0x00000000;

u32 D_800D4D00 = 0x00000000;

u32 D_800D4D04 = 0x00000000;

u32 D_800D4D08 = 0x00000000;

u32 D_800D4D0C = 0x00000000;

u32 D_800D4D10 = 0x00000000;

u32 D_800D4D14 = 0x00000000;

u32 D_800D4D18 = 0x00000000;

u32 D_800D4D1C = 0x00000000;

u32 D_800D4D20 = 0x00000000;

u32 D_800D4D24 = 0x00000000;

u32 D_800D4D28 = 0x00000000;

u32 D_800D4D2C = 0x00000000;

u32 D_800D4D30 = 0x00000000;

u32 D_800D4D34 = 0x00000000;

u32 D_800D4D38 = 0x00000000;

u32 D_800D4D3C = 0x00000000;

u32 D_800D4D40 = 0x00000000;

u32 D_800D4D44 = 0x00000000;

u32 D_800D4D48 = 0x00000000;

u32 D_800D4D4C = 0x00000000;

u32 D_800D4D50 = 0x00000000;

u32 D_800D4D54 = 0x00000000;

u32 D_800D4D58 = 0x00000000;

u32 D_800D4D5C = 0x00000000;

u32 D_800D4D60 = 0x00000000;

u32 D_800D4D64 = 0x00000000;

u32 D_800D4D68 = 0x00000000;

u32 D_800D4D6C = 0x00000000;

u32 D_800D4D70 = 0x00000000;

u32 D_800D4D74 = 0x00000000;

u32 D_800D4D78 = 0x00000000;

u32 D_800D4D7C = 0x00000000;

u32 D_800D4D80 = 0x00000000;

u32 D_800D4D84 = 0x00000000;

u32 D_800D4D88 = 0x00000000;

u32 D_800D4D8C = 0x01020304;

u32 D_800D4D90 = 0x05060708;

u32 D_800D4D94 = 0x090A0B0C;

u32 D_800D4D98 = 0x0D0E0F10;

u32 D_800D4D9C = 0x11121314;

u32 D_800D4DA0 = 0x15161718;

u32 D_800D4DA4 = 0xFF191A1B;

u32 D_800D4DA8 = 0x1C1D1E1F;

u32 D_800D4DAC = 0x20212223;

u32 D_800D4DB0 = 0x24252627;

u32 D_800D4DB4 = 0x28292A2B;

u32 D_800D4DB8 = 0x2C2D2E2F;

u32 D_800D4DBC = 0x30000000;

u32 D_800D4DC0 = 0x00000101;

u32 D_800D4DC4 = 0x01000000;

u32 D_800D4DC8 = 0x01010101;

u32 D_800D4DCC = 0x01000101;

u32 D_800D4DD0 = 0x01010101;

u32 D_800D4DD4 = 0x01010101;

u32 D_800D4DD8 = 0x01010101;

u32 D_800D4DDC = 0x01010101;

u32 D_800D4DE0 = 0x00000000;

u32 D_800D4DE4 = 0x01010100;

u32 D_800D4DE8 = 0x00000000;

u32 D_800D4DEC = 0x01010000;

u32 D_800D4DF0 = 0x00000000;

u32 D_800D4DF4 = 0x01000000;

u32 D_800D4DF8 = 0x00000101;

u32 D_800D4DFC = 0x01000000;

u32 D_800D4E00 = 0x01010101;

u32 D_800D4E04 = 0x01000101;

u32 D_800D4E08 = 0x01010101;

u32 D_800D4E0C = 0x01000000;

u32 D_800D4E10 = 0x01000000;

u32 D_800D4E14 = 0x00000001;

u32 D_800D4E18 = 0x00000000;

u32 D_800D4E1C = 0x00000100;

u32 D_800D4E20 = 0x00000001;

u32 D_800D4E24 = 0x01010101;

u32 D_800D4E28 = 0x00000101;

u32 D_800D4E2C = 0x01010100;

u32 D_800D4E30 = 0x00010101;

u32 D_800D4E34 = 0x01010000;

u32 D_800D4E38 = 0x01010101;

u32 D_800D4E3C = 0x01000001;

u32 D_800D4E40 = 0x01010101;

u32 D_800D4E44 = 0x00000101;

u32 D_800D4E48 = 0x01010100;

u32 D_800D4E4C = 0x01010101;

u32 D_800D4E50 = 0x01010100;

u32 D_800D4E54 = 0x00000000;

u32 D_800D4E58 = 0x00000000;

u32 D_800D4E5C = 0x00000000;

u32 D_800D4E60 = 0x0F070301;

u32 D_800D4E64 = 0x00000000;

u32 D_800D4E68 = 0x00000000;

u32 D_800D4E6C = 0x05000000;

u32 D_800D4E70 = 0x03C00000;

u32 D_800D4E74 = 0x00000000;

u32 D_800D4E78 = 0x02000200;

u32 D_800D4E7C = 0x01000200;

u32 D_800D4E80 = 0x02000000;

u32 D_800D4E84 = 0x01FF00FF;

u32 D_800D4E88 = 0x007F003F;

u32 D_800D4E8C = 0x02000100;

u32 D_800D4E90 = 0x00800040;

u32 D_800D4E94 = 0x00000000;

u32 D_800D4E98 = 0xE7000000;

u32 D_800D4E9C = 0x00000000;

u32 D_800D4EA0 = 0xE3000800;

u32 D_800D4EA4 = 0x00800000;

u32 D_800D4EA8 = 0xE3000F00;

u32 D_800D4EAC = 0x00000000;

u32 D_800D4EB0 = 0xE3001001;

u32 D_800D4EB4 = 0x00000000;

u32 D_800D4EB8 = 0xE3000D01;

u32 D_800D4EBC = 0x00000000;

u32 D_800D4EC0 = 0xE3000C00;

u32 D_800D4EC4 = 0x00000000;

u32 D_800D4EC8 = 0xE3001402;

u32 D_800D4ECC = 0x00000C00;

u32 D_800D4ED0 = 0xE3001700;

u32 D_800D4ED4 = 0x00000000;

u32 D_800D4ED8 = 0xE3001801;

u32 D_800D4EDC = 0x000000C0;

u32 D_800D4EE0 = 0xE2001E01;

u32 D_800D4EE4 = 0x00000001;

u32 D_800D4EE8 = 0xF9000000;

u32 D_800D4EEC = 0x00000008;

u32 D_800D4EF0 = 0xFCFFFFFF;

u32 D_800D4EF4 = 0xFFFCF279;

u32 D_800D4EF8 = 0xE3001201;

u32 D_800D4EFC = 0x00002000;

u32 D_800D4F00 = 0x0B000000;

u32 D_800D4F04 = 0x0000000C;

u32 D_800D4F08 = 0xDF000000;

u32 D_800D4F0C = 0x00000000;

u32 D_800D4F10 = 0x800141D4;

u32 D_800D4F14 = 0x800141F8;

u32 D_800D4F18 = 0x8001421C;

u32 D_800D4F1C = 0x80014240;

u32 D_800D4F20 = 0x800143A4;

u32 D_800D4F24 = 0x80014768;

u32 D_800D4F28 = 0x80014AD4;

u32 D_800D4F2C = 0x80013300;

u32 D_800D4F30 = 0x80014B4C;

u32 D_800D4F34 = 0x80014DF0;

u32 D_800D4F38 = 0x80014FA4;

u32 D_800D4F3C = 0x80015368;

u32 D_800D4F40 = 0x8001585C;

u32 D_800D4F44 = 0x80015BCC;

u32 D_800D4F48 = 0x80015DC4;

u32 D_800D4F4C = 0x800162D8;

u32 D_800D4F50 = 0x80016634;

u32 D_800D4F54 = 0x800AB110;

u32 D_800D4F58 = 0x800AB118;

u32 D_800D4F5C = 0x800AB120;

u32 D_800D4F60 = 0x800AB174;

u32 D_800D4F64 = 0x800AB1F0;

u32 D_800D4F68 = 0x800AB244;

u32 D_800D4F6C = 0x800AB2C0;

u32 D_800D4F70 = 0x800AB314;

u32 D_800D4F74 = 0x800AB390;

u32 D_800D4F78 = 0x800AB398;

u32 D_800D4F7C = 0x800AB3A0;

u32 D_800D4F80 = 0x800AB3F4;

u32 D_800D4F84 = 0x800AB470;

u32 D_800D4F88 = 0x800AB478;

u32 D_800D4F8C = 0x800AB480;

u32 D_800D4F90 = 0x80123354;

u32 D_800D4F94 = 0x8016264C;

u32 D_800D4F98 = 0x8016858C;

u32 D_800D4F9C = 0x8019E128;

u32 D_800D4FA0 = 0x8021DF20;

u32 D_800D4FA4 = 0x800BDD88;

u32 D_800D4FA8 = 0x800F716C;

u32 D_800D4FAC = 0x801BC978;

u32 D_800D4FB0 = 0x800BC9A4;

u32 D_800D4FB4 = 0x800FEF44;

u32 D_800D4FB8 = 0x8019E860;

u32 D_800D4FBC = 0x8019E9F0;

u32 D_800D4FC0 = 0x801F2964;

u32 D_800D4FC4 = 0x80177524;

u32 D_800D4FC8 = 0x8017CCE0;

u32 D_800D4FCC = 0x8017D6F8;

u32 D_800D4FD0 = 0x03000000;

u32 D_800D4FD4 = 0x80151338;

u32 D_800D4FD8 = 0x03000000;

u32 D_800D4FDC = 0x801553C0;

u32 D_800D4FE0 = 0x03000000;

u32 D_800D4FE4 = 0x80158190;

u32 D_800D4FE8 = 0x03000000;

u32 D_800D4FEC = 0x80151DE0;

u32 D_800D4FF0 = 0x03000000;

u32 D_800D4FF4 = 0x80151E00;

u32 D_800D4FF8 = 0x03000000;

u32 D_800D4FFC = 0x80159B00;

u32 D_800D5000 = 0x03000000;

u32 D_800D5004 = 0x8015CD00;

u32 D_800D5008 = 0x03000000;

u32 D_800D500C = 0x80165440;

u32 D_800D5010 = 0x03000000;

u32 D_800D5014 = 0x8016FB80;

u32 D_800D5018 = 0x03000000;

u32 D_800D501C = 0x8017ED60;

u32 D_800D5020 = 0x03000000;

u32 D_800D5024 = 0x80179E00;

u32 D_800D5028 = 0x03000000;

u32 D_800D502C = 0x80180360;

u32 D_800D5030 = 0x03000000;

u32 D_800D5034 = 0x8017F660;

u32 D_800D5038 = 0x03000000;

u32 D_800D503C = 0x8017E180;

u32 D_800D5040 = 0x03000000;

u32 D_800D5044 = 0x80182360;

u32 D_800D5048 = 0x03000000;

u32 D_800D504C = 0x801830A0;

u32 D_800D5050 = 0x03000000;

u32 D_800D5054 = 0x80177B00;

u32 D_800D5058 = 0x03000000;

u32 D_800D505C = 0x80152CF8;

u32 D_800D5060 = 0x03030000;

u32 D_800D5064 = 0x8011C720;

u32 D_800D5068 = 0x03000000;

u32 D_800D506C = 0x8021DF20;

u32 D_800D5070 = 0x03000000;

u32 D_800D5074 = 0x8015AC90;

u32 D_800D5078 = 0x03000000;

u32 D_800D507C = 0x80163320;

u32 D_800D5080 = 0x05000000;

u32 D_800D5084 = 0x8021EA40;

u32 D_800D5088 = 0x05000000;

u32 D_800D508C = 0x800FCF0C;

u32 D_800D5090 = 0x05000000;

u32 D_800D5094 = 0x800FCF58;

u32 D_800D5098 = 0x05000000;

u32 D_800D509C = 0x800FCFA4;

u32 D_800D50A0 = 0x04000000;

u32 D_800D50A4 = 0x801ACE60;

u32 D_800D50A8 = 0x03000000;

u32 D_800D50AC = 0x801ACFD0;

u32 D_800D50B0 = 0x05000000;

u32 D_800D50B4 = 0x800FCFF0;

u32 D_800D50B8 = 0x01000000;

u32 D_800D50BC = 0x801149C0;

u32 D_800D50C0 = 0x01000000;

u32 D_800D50C4 = 0x80114CF4;

u32 D_800D50C8 = 0x05000000;

u32 D_800D50CC = 0x800FD03C;

u32 D_800D50D0 = 0x05000000;

u32 D_800D50D4 = 0x800FD194;

u32 D_800D50D8 = 0x04000000;

u32 D_800D50DC = 0x8021F400;

u32 D_800D50E0 = 0x05000000;

u32 D_800D50E4 = 0x800FD330;

u32 D_800D50E8 = 0x05000000;

u32 D_800D50EC = 0x800FDE64;

u32 D_800D50F0 = 0x06000000;

u32 D_800D50F4 = 0x800F6E30;

u32 D_800D50F8 = 0x06000000;

u32 D_800D50FC = 0x800F72B0;

u32 D_800D5100 = 0x07030000;

u32 D_800D5104 = 0x800BCEEC;

u32 D_800D5108 = 0x07000000;

u32 D_800D510C = 0x800BCA5C;

u32 D_800D5110 = 0x07000000;

u32 D_800D5114 = 0x800F6C98;

u32 D_800D5118 = 0x03000000;

u32 D_800D511C = 0x801F28AC;

u32 D_800D5120 = 0x06000000;

u32 D_800D5124 = 0x800BDD90;

u32 D_800D5128 = 0x03000000;

u32 D_800D512C = 0x800BB580;

u32 D_800D5130 = 0x03000000;

u32 D_800D5134 = 0x80226FD8;

u32 D_800D5138 = 0x07000000;

u32 D_800D513C = 0x8022677C;

u8 D_800D5140[0x10] = "K4 Backup String";

u32 D_800D5150 = 0x0002000D;

u32 D_800D5154 = 0x00180082;

u32 D_800D5158 = 0x008D0098;

f32 D_800D515C = 70.0f;

u32 D_800D5160 = 0x00000000;

f32 D_800D5164 = 50.0f;

f32 D_800D5168 = 0.05f;

f32 D_800D516C = 40.0f;

f32 D_800D5170 = 0.1f;

f32 D_800D5174 = 30.0f;

f32 D_800D5178 = 0.15f;

f32 D_800D517C = 20.0f;

f32 D_800D5180 = 0.3f;

f32 D_800D5184 = 1.0f;

f32 D_800D5188 = 0.5f;

u32 D_800D518C = 0x00000000;

u32 D_800D5190 = 0x00000000;

u32 D_800D5194 = 0x00000000;

u32 D_800D5198 = 0x00000000;

u32 D_800D519C = 0x00000000;

u32 D_800D51A0 = 0x200A4002;

u32 D_800D51A4 = 0x00000000;

u32 D_800D51A8 = 0x600F2002;

u32 D_800D51AC = 0x40028000;

u32 D_800D51B0 = 0x00000000;

u32 D_800D51B4 = 0x601E2002;

u32 D_800D51B8 = 0x40028000;

u32 D_800D51BC = 0x00000000;

u32 D_800D51C0 = 0x60062002;

u32 D_800D51C4 = 0x40048000;

u32 D_800D51C8 = 0x00000000;

u32 D_800D51CC = 0x60032002;

u32 D_800D51D0 = 0x40048000;

u32 D_800D51D4 = 0x00000000;

u32 D_800D51D8 = 0x601E2002;

u32 D_800D51DC = 0x40048000;

u32 D_800D51E0 = 0x00000000;

u32 D_800D51E4 = 0x60042002;

u32 D_800D51E8 = 0x40068000;

u32 D_800D51EC = 0x00000000;

u32 D_800D51F0 = 0x60022002;

u32 D_800D51F4 = 0x40068000;

u32 D_800D51F8 = 0x00000000;

u32 D_800D51FC = 0x60082002;

u32 D_800D5200 = 0x40068000;

u32 D_800D5204 = 0x00000000;

u32 D_800D5208 = 0x600F2002;

u32 D_800D520C = 0x40068000;

u32 D_800D5210 = 0x00000000;

u32 D_800D5214 = 0x7F402002;

u32 D_800D5218 = 0x40028000;

u32 D_800D521C = 0x00000000;

u32 D_800D5220 = 0x7F402002;

u32 D_800D5224 = 0x40048000;

u32 D_800D5228 = 0x00000000;

u32 D_800D522C = 0x7F402002;

u32 D_800D5230 = 0x40068000;

u32 D_800D5234 = 0x00000000;

u32 D_800D5238 = 0x800D51A0;

u32 D_800D523C = 0x800D5214;

u32 D_800D5240 = 0x800D51A8;

u32 D_800D5244 = 0x800D51B4;

u32 D_800D5248 = 0x800D5220;

u32 D_800D524C = 0x800D51C0;

u32 D_800D5250 = 0x800D5220;

u32 D_800D5254 = 0x800D51CC;

u32 D_800D5258 = 0x800D51D8;

u32 D_800D525C = 0x800D522C;

u32 D_800D5260 = 0x800D51E4;

u32 D_800D5264 = 0x800D522C;

u32 D_800D5268 = 0x800D51F0;

u32 D_800D526C = 0x800D51FC;

u32 D_800D5270 = 0x800D5208;

u32 D_800D5274 = 0x090A0A0A;

u32 D_800D5278 = 0x08080505;

u32 D_800D527C = 0x05070704;

u32 D_800D5280 = 0x04040400;

u32 D_800D5284 = 0x00000000;

u32 D_800D5288 = 0x00000000;

u32 D_800D528C = 0x00000000;

u32 D_800D5290 = 0x00000009;

u32 D_800D5294 = 0x00000011;

u32 D_800D5298 = 0x00000000;

f32 D_800D529C = 0.05f;

u32 D_800D52A0 = 0x0000000A;

u32 D_800D52A4 = 0x00000012;

u32 D_800D52A8 = 0x00000000;

f32 D_800D52AC = 0.05f;

u32 D_800D52B0 = 0x00000007;

u32 D_800D52B4 = 0x0000000F;

u32 D_800D52B8 = 0x00000000;

f32 D_800D52BC = 0.05f;

u32 D_800D52C0 = 0x00000008;

u32 D_800D52C4 = 0x00000010;

u32 D_800D52C8 = 0x00000000;

f32 D_800D52CC = 0.05f;

u32 D_800D52D0 = 0x00050001;

u32 D_800D52D4 = 0x00050006;

u32 D_800D52D8 = 0x00050007;

u32 D_800D52DC = 0x00050007;

u32 D_800D52E0 = 0x00050007;

u32 D_800D52E4 = 0x00050007;

u32 D_800D52E8 = 0x00050007;

u32 D_800D52EC = 0x00050007;

u32 D_800D52F0 = 0x00050007;

u32 D_800D52F4 = 0x00050007;

u32 D_800D52F8 = 0x0000FFFF;

u32 D_800D52FC = 0x00050001;

u32 D_800D5300 = 0x00050002;

u32 D_800D5304 = 0x00050003;

u32 D_800D5308 = 0x00050004;

u32 D_800D530C = 0x00050005;

u32 D_800D5310 = 0x000500F1;

u32 D_800D5314 = 0x000500F2;

u32 D_800D5318 = 0x000500F3;

u32 D_800D531C = 0x000500F8;

u32 D_800D5320 = 0x000500F4;

u32 D_800D5324 = 0x000500F5;

u32 D_800D5328 = 0x000500F6;

u32 D_800D532C = 0x000500F7;

u32 D_800D5330 = 0x000500F9;

u32 D_800D5334 = 0x000500FA;

u32 D_800D5338 = 0x000500F1;

u32 D_800D533C = 0x000500F2;

u32 D_800D5340 = 0x000500F3;

u32 D_800D5344 = 0x000500F8;

u32 D_800D5348 = 0x000500F4;

u32 D_800D534C = 0x000500F5;

u32 D_800D5350 = 0x000500F6;

u32 D_800D5354 = 0x000500F7;

u32 D_800D5358 = 0x000500F9;

u32 D_800D535C = 0x000500FA;

u32 D_800D5360 = 0x000500F1;

u32 D_800D5364 = 0x000500F2;

u32 D_800D5368 = 0x000500F3;

u32 D_800D536C = 0x000500F8;

u32 D_800D5370 = 0x000500F4;

u32 D_800D5374 = 0x000500F5;

u32 D_800D5378 = 0x000500F6;

u32 D_800D537C = 0x000500F7;

u32 D_800D5380 = 0x000500F9;

u32 D_800D5384 = 0x000500FA;

u32 D_800D5388 = 0x000500FB;

u32 D_800D538C = 0x000500FC;

u32 D_800D5390 = 0x000500FD;

u32 D_800D5394 = 0x00050102;

u32 D_800D5398 = 0x000500FE;

u32 D_800D539C = 0x000500FF;

u32 D_800D53A0 = 0x00050100;

u32 D_800D53A4 = 0x00050101;

u32 D_800D53A8 = 0x00050103;

u32 D_800D53AC = 0x00050104;

u32 D_800D53B0 = 0x00050105;

u32 D_800D53B4 = 0x00050106;

u32 D_800D53B8 = 0x00050107;

u32 D_800D53BC = 0x0005010C;

u32 D_800D53C0 = 0x00050108;

u32 D_800D53C4 = 0x00050109;

u32 D_800D53C8 = 0x0005010A;

u32 D_800D53CC = 0x0005010B;

u32 D_800D53D0 = 0x0005010D;

u32 D_800D53D4 = 0x0005010E;

u32 D_800D53D8 = 0x0000FFFF;

u32 D_800D53DC = 0x000500A1;

u32 D_800D53E0 = 0x000500A2;

u32 D_800D53E4 = 0x000500A3;

u32 D_800D53E8 = 0x000500A4;

u32 D_800D53EC = 0x000500A5;

u32 D_800D53F0 = 0x000500A6;

u32 D_800D53F4 = 0x000500A7;

u32 D_800D53F8 = 0x000500A8;

u32 D_800D53FC = 0x000500A9;

u32 D_800D5400 = 0x000500AA;

u32 D_800D5404 = 0x0000FFFF;

u32 D_800D5408 = 0x000500B5;

u32 D_800D540C = 0x000500B6;

u32 D_800D5410 = 0x000500B7;

u32 D_800D5414 = 0x000500B8;

u32 D_800D5418 = 0x000500B9;

u32 D_800D541C = 0x000500BA;

u32 D_800D5420 = 0x000500BB;

u32 D_800D5424 = 0x000500BC;

u32 D_800D5428 = 0x000500BD;

u32 D_800D542C = 0x000500BE;

u32 D_800D5430 = 0x0000FFFF;

u32 D_800D5434 = 0x000500AB;

u32 D_800D5438 = 0x000500AC;

u32 D_800D543C = 0x000500AD;

u32 D_800D5440 = 0x000500AE;

u32 D_800D5444 = 0x000500AF;

u32 D_800D5448 = 0x000500B0;

u32 D_800D544C = 0x000500B1;

u32 D_800D5450 = 0x000500B2;

u32 D_800D5454 = 0x000500B3;

u32 D_800D5458 = 0x000500B4;

u32 D_800D545C = 0x0000FFFF;

u32 D_800D5460 = 0x000500BF;

u32 D_800D5464 = 0x000500C0;

u32 D_800D5468 = 0x000500C1;

u32 D_800D546C = 0x000500C2;

u32 D_800D5470 = 0x000500C3;

u32 D_800D5474 = 0x000500C4;

u32 D_800D5478 = 0x000500C5;

u32 D_800D547C = 0x000500C6;

u32 D_800D5480 = 0x000500C7;

u32 D_800D5484 = 0x000500C8;

u32 D_800D5488 = 0x000500C9;

u32 D_800D548C = 0x000500CA;

u32 D_800D5490 = 0x000500CB;

u32 D_800D5494 = 0x000500CC;

u32 D_800D5498 = 0x000500CD;

u32 D_800D549C = 0x000500CE;

u32 D_800D54A0 = 0x000500CF;

u32 D_800D54A4 = 0x000500D0;

u32 D_800D54A8 = 0x000500D1;

u32 D_800D54AC = 0x000500D2;

u32 D_800D54B0 = 0x000500D3;

u32 D_800D54B4 = 0x000500D4;

u32 D_800D54B8 = 0x000500D5;

u32 D_800D54BC = 0x000500D6;

u32 D_800D54C0 = 0x000500D7;

u32 D_800D54C4 = 0x000500D8;

u32 D_800D54C8 = 0x000500D9;

u32 D_800D54CC = 0x000500DA;

u32 D_800D54D0 = 0x000500DB;

u32 D_800D54D4 = 0x000500DC;

u32 D_800D54D8 = 0x000500DD;

u32 D_800D54DC = 0x000500DE;

u32 D_800D54E0 = 0x000500DF;

u32 D_800D54E4 = 0x000500E0;

u32 D_800D54E8 = 0x000500E1;

u32 D_800D54EC = 0x000500E2;

u32 D_800D54F0 = 0x000500E3;

u32 D_800D54F4 = 0x000500E4;

u32 D_800D54F8 = 0x000500E5;

u32 D_800D54FC = 0x000500E6;

u32 D_800D5500 = 0x000500E7;

u32 D_800D5504 = 0x000500E8;

u32 D_800D5508 = 0x000500E9;

u32 D_800D550C = 0x000500EA;

u32 D_800D5510 = 0x000500EB;

u32 D_800D5514 = 0x000500EC;

u32 D_800D5518 = 0x000500ED;

u32 D_800D551C = 0x000500EE;

u32 D_800D5520 = 0x000500EF;

u32 D_800D5524 = 0x000500F0;

u32 D_800D5528 = 0x0000FFFF;

u32 D_800D552C = 0x00000000;

u32 D_800D5530 = 0x0000003F;

u32 D_800D5534 = 0x0005010F;

u32 D_800D5538 = 0x00000000;

u32 D_800D553C = 0x0000003F;

u32 D_800D5540 = 0x00050113;

u32 D_800D5544 = 0x00000000;

u32 D_800D5548 = 0x0000003F;

u32 D_800D554C = 0x00050117;

u32 D_800D5550 = 0x00000058;

u32 D_800D5554 = 0x00000041;

u32 D_800D5558 = 0x00050111;

u32 D_800D555C = 0x00000058;

u32 D_800D5560 = 0x00000041;

u32 D_800D5564 = 0x00050115;

u32 D_800D5568 = 0x00000058;

u32 D_800D556C = 0x00000041;

u32 D_800D5570 = 0x00050119;

u32 D_800D5574 = 0x00000036;

u32 D_800D5578 = 0x00000066;

u32 D_800D557C = 0x00050110;

u32 D_800D5580 = 0x00000000;

u32 D_800D5584 = 0x00000066;

u32 D_800D5588 = 0x00050114;

u32 D_800D558C = 0x00000036;

u32 D_800D5590 = 0x00000066;

u32 D_800D5594 = 0x00050118;

u32 D_800D5598 = 0x00000058;

u32 D_800D559C = 0x00000068;

u32 D_800D55A0 = 0x00050112;

u32 D_800D55A4 = 0x00000058;

u32 D_800D55A8 = 0x00000068;

u32 D_800D55AC = 0x00050116;

u32 D_800D55B0 = 0x00000058;

u32 D_800D55B4 = 0x00000068;

u32 D_800D55B8 = 0x0005011A;

u32 D_800D55BC = 0x00000000;

u32 D_800D55C0 = 0x800BC328;

u32 D_800D55C4 = 0x800BC4C0;

u32 D_800D55C8 = 0x800BC664;

u32 D_800D55CC = 0x800BC800;

u32 D_800D55D0 = 0x00000009;

u32 D_800D55D4 = 0x0000000A;

u32 D_800D55D8 = 0x00000009;

u32 D_800D55DC = 0x0000000E;

u32 D_800D55E0 = 0x00000009;

u32 D_800D55E4 = 0x0000000E;

u32 D_800D55E8 = 0x00000009;

u32 D_800D55EC = 0x0000000E;

u32 D_800D55F0 = 0x00000009;

u32 D_800D55F4 = 0xFFFFFFFF;

u32 D_800D55F8 = 0x00000100;

u32 D_800D55FC = 0x02000300;

u32 D_800D5600 = 0x04000500;

u32 D_800D5604 = 0x06000700;

u32 D_800D5608 = 0x01010102;

u32 D_800D560C = 0x01030104;

u32 D_800D5610 = 0x01050106;

u32 D_800D5614 = 0x01070202;

u32 D_800D5618 = 0x02030204;

u32 D_800D561C = 0x02050206;

u32 D_800D5620 = 0x02070303;

u32 D_800D5624 = 0x03040305;

u32 D_800D5628 = 0x03060307;

u32 D_800D562C = 0x04040405;

u32 D_800D5630 = 0x04060407;

u32 D_800D5634 = 0x05050506;

u32 D_800D5638 = 0x05070606;

u32 D_800D563C = 0x06070707;

u32 D_800D5640 = 0x08000809;

u32 D_800D5644 = 0x00000000;

u32 D_800D5648 = 0x00000000;

u32 D_800D564C = 0x00000000;

u32 D_800D5650 = 0x00000000;

u32 D_800D5654 = 0x00000000;

u32 D_800D5658 = 0x00000000;

u32 D_800D565C = 0x00000000;

f32 D_800D5660 = 2 * M_PI;

u32 D_800D5664 = 0x8009C5BC;

u32 D_800D5668 = 0x8009DFF4;

u32 D_800D566C = 0x8009DFF4;

u32 D_800D5670 = 0x8009DFF4;

u32 D_800D5674 = 0x8009DFF4;

u32 D_800D5678 = 0x8009DFF4;

u32 D_800D567C = 0x8009DFF4;

u32 D_800D5680 = 0x8009DFF4;

u32 D_800D5684 = 0x8009C614;

u32 D_800D5688 = 0x8009DFF4;

u32 D_800D568C = 0x8009DFF4;

u32 D_800D5690 = 0x8009DFF4;

u32 D_800D5694 = 0x8009DFF4;

u32 D_800D5698 = 0x8009DFF4;

u32 D_800D569C = 0x8009DFF4;

u32 D_800D56A0 = 0x8009DFF4;

u32 D_800D56A4 = 0x8009C69C;

u32 D_800D56A8 = 0x8009DFF4;

u32 D_800D56AC = 0x8009DFF4;

u32 D_800D56B0 = 0x8009DFF4;

u32 D_800D56B4 = 0x8009DFF4;

u32 D_800D56B8 = 0x8009DFF4;

u32 D_800D56BC = 0x8009DFF4;

u32 D_800D56C0 = 0x8009DFF4;

u32 D_800D56C4 = 0x8009C6F4;

u32 D_800D56C8 = 0x8009DFF4;

u32 D_800D56CC = 0x8009DFF4;

u32 D_800D56D0 = 0x8009DFF4;

u32 D_800D56D4 = 0x8009DFF4;

u32 D_800D56D8 = 0x8009DFF4;

u32 D_800D56DC = 0x8009DFF4;

u32 D_800D56E0 = 0x8009DFF4;

u32 D_800D56E4 = 0x8009C77C;

u32 D_800D56E8 = 0x8009C7BC;

u32 D_800D56EC = 0x8009C7CC;

u32 D_800D56F0 = 0x8009C818;

u32 D_800D56F4 = 0x8009C868;

u32 D_800D56F8 = 0x8009C8EC;

u32 D_800D56FC = 0x8009C954;

u32 D_800D5700 = 0x8009C9AC;

u32 D_800D5704 = 0x8009C9F4;

u32 D_800D5708 = 0x8009CA88;

u32 D_800D570C = 0x8009CAAC;

u32 D_800D5710 = 0x8009CB6C;

u32 D_800D5714 = 0x8009CBB0;

u32 D_800D5718 = 0x8009CC10;

u32 D_800D571C = 0x8009CC20;

u32 D_800D5720 = 0x8009CC34;

u32 D_800D5724 = 0x8009CC54;

u32 D_800D5728 = 0x8009CC74;

u32 D_800D572C = 0x8009CC84;

u32 D_800D5730 = 0x8009CC94;

u32 D_800D5734 = 0x8009CCA8;

u32 D_800D5738 = 0x8009CCB8;

u32 D_800D573C = 0x8009CCC8;

u32 D_800D5740 = 0x8009CCDC;

u32 D_800D5744 = 0x8009CD0C;

u32 D_800D5748 = 0x8009CD4C;

u32 D_800D574C = 0x8009CDE8;

u32 D_800D5750 = 0x8009D180;

u32 D_800D5754 = 0x8009D518;

u32 D_800D5758 = 0x8009D618;

u32 D_800D575C = 0x8009D6CC;

u32 D_800D5760 = 0x8009D728;

u32 D_800D5764 = 0x8009D754;

u32 D_800D5768 = 0x8009DFF4;

u32 D_800D576C = 0x8009DFF4;

u32 D_800D5770 = 0x8009DFF4;

u32 D_800D5774 = 0x8009DFF4;

u32 D_800D5778 = 0x8009DFF4;

u32 D_800D577C = 0x8009DFF4;

u32 D_800D5780 = 0x8009DFF4;

u32 D_800D5784 = 0x8009DFF4;

u32 D_800D5788 = 0x8009DFF4;

u32 D_800D578C = 0x8009DFF4;

u32 D_800D5790 = 0x8009DFF4;

u32 D_800D5794 = 0x8009DFF4;

u32 D_800D5798 = 0x8009DFF4;

u32 D_800D579C = 0x8009DFF4;

u32 D_800D57A0 = 0x8009DFF4;

u32 D_800D57A4 = 0x8009D808;

u32 D_800D57A8 = 0x8009DFF4;

u32 D_800D57AC = 0x8009DFF4;

u32 D_800D57B0 = 0x8009DFF4;

u32 D_800D57B4 = 0x8009DFF4;

u32 D_800D57B8 = 0x8009DFF4;

u32 D_800D57BC = 0x8009DFF4;

u32 D_800D57C0 = 0x8009DFF4;

u32 D_800D57C4 = 0x8009DFF4;

u32 D_800D57C8 = 0x8009DFF4;

u32 D_800D57CC = 0x8009DFF4;

u32 D_800D57D0 = 0x8009DFF4;

u32 D_800D57D4 = 0x8009DFF4;

u32 D_800D57D8 = 0x8009DFF4;

u32 D_800D57DC = 0x8009DFF4;

u32 D_800D57E0 = 0x8009DFF4;

u32 D_800D57E4 = 0x8009D8BC;

u32 D_800D57E8 = 0x8009DFF4;

u32 D_800D57EC = 0x8009DF14;

u32 D_800D57F0 = 0x8009DF24;

u32 D_800D57F4 = 0x8009DFF4;

u32 D_800D57F8 = 0x8009DFF4;

u32 D_800D57FC = 0x8009DFF4;

u32 D_800D5800 = 0x8009DFF4;

u32 D_800D5804 = 0x8009DFF4;

u32 D_800D5808 = 0x8009DFF4;

u32 D_800D580C = 0x8009DFF4;

u32 D_800D5810 = 0x8009DFF4;

u32 D_800D5814 = 0x8009DFF4;

u32 D_800D5818 = 0x8009DFF4;

u32 D_800D581C = 0x8009DFF4;

u32 D_800D5820 = 0x8009DFF4;

u32 D_800D5824 = 0x8009DFF4;

u32 D_800D5828 = 0x8009DFF4;

u32 D_800D582C = 0x8009DFF4;

u32 D_800D5830 = 0x8009DFF4;

u32 D_800D5834 = 0x8009DFF4;

u32 D_800D5838 = 0x8009DFF4;

u32 D_800D583C = 0x8009DFF4;

u32 D_800D5840 = 0x8009DFF4;

u32 D_800D5844 = 0x8009DFF4;

u32 D_800D5848 = 0x8009DFF4;

u32 D_800D584C = 0x8009DF34;

u32 D_800D5850 = 0x8009DF50;

u32 D_800D5854 = 0x8009DF74;

u32 D_800D5858 = 0x8009DF84;

u32 D_800D585C = 0x8009DF94;

u32 D_800D5860 = 0x8009DF94;

f32 D_800D5864 = 0.00001f;

f32 D_800D5868 = 2048.0f / M_PI;

f32 D_800D586C = 2048.0f / M_PI;

f32 D_800D5870 = 2048.0f / M_PI;

f32 D_800D5874 = 2048.0f / M_PI;

u32 D_800D5878 = 0x8009E9A4;

u32 D_800D587C = 0x8009E9D8;

u32 D_800D5880 = 0x8009EA0C;

u32 D_800D5884 = 0x8009EA48;

u32 D_800D5888 = 0x8009EA48;

u32 D_800D588C = 0x8009EA94;

u32 D_800D5890 = 0x8009EA94;

u32 D_800D5894 = 0x8009EADC;

u32 D_800D5898 = 0x8009EADC;

u32 D_800D589C = 0x8009EA48;

u32 D_800D58A0 = 0x8009EA48;

u32 D_800D58A4 = 0x8009EA94;

u32 D_800D58A8 = 0x8009EA94;

u32 D_800D58AC = 0x8009EADC;

u32 D_800D58B0 = 0x8009EADC;

u32 D_800D58B4 = 0x8009F50C;

u32 D_800D58B8 = 0x8009F54C;

u32 D_800D58BC = 0x8009F514;

u32 D_800D58C0 = 0x8009F54C;

u32 D_800D58C4 = 0x8009F54C;

u32 D_800D58C8 = 0x8009F54C;

u32 D_800D58CC = 0x8009F51C;

u32 D_800D58D0 = 0x8009F54C;

u32 D_800D58D4 = 0x8009F54C;

u32 D_800D58D8 = 0x8009F54C;

u32 D_800D58DC = 0x8009F54C;

u32 D_800D58E0 = 0x8009F54C;

u32 D_800D58E4 = 0x8009F54C;

u32 D_800D58E8 = 0x8009F54C;

u32 D_800D58EC = 0x8009F524;

u32 D_800D58F0 = 0x8009F54C;

u32 D_800D58F4 = 0x8009F54C;

u32 D_800D58F8 = 0x8009F54C;

u32 D_800D58FC = 0x8009F54C;

u32 D_800D5900 = 0x8009F54C;

u32 D_800D5904 = 0x8009F54C;

u32 D_800D5908 = 0x8009F54C;

u32 D_800D590C = 0x8009F54C;

u32 D_800D5910 = 0x8009F54C;

u32 D_800D5914 = 0x8009F54C;

u32 D_800D5918 = 0x8009F54C;

u32 D_800D591C = 0x8009F54C;

u32 D_800D5920 = 0x8009F54C;

u32 D_800D5924 = 0x8009F54C;

u32 D_800D5928 = 0x8009F54C;

u32 D_800D592C = 0x8009F52C;

u32 D_800D5930 = 0x8009F5D4;

u32 D_800D5934 = 0x8009F614;

u32 D_800D5938 = 0x8009F5DC;

u32 D_800D593C = 0x8009F614;

u32 D_800D5940 = 0x8009F614;

u32 D_800D5944 = 0x8009F614;

u32 D_800D5948 = 0x8009F5E4;

u32 D_800D594C = 0x8009F614;

u32 D_800D5950 = 0x8009F614;

u32 D_800D5954 = 0x8009F614;

u32 D_800D5958 = 0x8009F614;

u32 D_800D595C = 0x8009F614;

u32 D_800D5960 = 0x8009F614;

u32 D_800D5964 = 0x8009F614;

u32 D_800D5968 = 0x8009F5EC;

u32 D_800D596C = 0x8009F614;

u32 D_800D5970 = 0x8009F614;

u32 D_800D5974 = 0x8009F614;

u32 D_800D5978 = 0x8009F614;

u32 D_800D597C = 0x8009F614;

u32 D_800D5980 = 0x8009F614;

u32 D_800D5984 = 0x8009F614;

u32 D_800D5988 = 0x8009F614;

u32 D_800D598C = 0x8009F614;

u32 D_800D5990 = 0x8009F614;

u32 D_800D5994 = 0x8009F614;

u32 D_800D5998 = 0x8009F614;

u32 D_800D599C = 0x8009F614;

u32 D_800D59A0 = 0x8009F614;

u32 D_800D59A4 = 0x8009F614;

u32 D_800D59A8 = 0x8009F5F4;

u32 D_800D59AC = 0x800A0B78;

u32 D_800D59B0 = 0x800A0C20;

u32 D_800D59B4 = 0x800A0C20;

u32 D_800D59B8 = 0x800A0B78;

u32 D_800D59BC = 0x800A0B78;

u32 D_800D59C0 = 0x800A0C20;

u32 D_800D59C4 = 0x800A0BCC;

u32 D_800D59C8 = 0x800A0BCC;

f32 D_800D59CC = 2 * M_PI;

f32 D_800D59D0 = 2 * M_PI;

u32 D_800D59D4 = 0x800A0CA4;

u32 D_800D59D8 = 0x800A1204;

u32 D_800D59DC = 0x800A12C0;

u32 D_800D59E0 = 0x800A0CA4;

u32 D_800D59E4 = 0x800A0CA4;

u32 D_800D59E8 = 0x800A1420;

u32 D_800D59EC = 0x800A0CA4;

u32 D_800D59F0 = 0x800A0CA4;

u32 D_800D59F4 = 0x800A15C0;

f32 D_800D59F8 = M_PI / 2.0f;

f32 D_800D59FC = M_PI / 2.0f;

f32 D_800D5A00 = M_PI / 2.0f;

f32 D_800D5A04 = M_PI / 2.0f;

f32 D_800D5A08 = 2 * M_PI;

f32 D_800D5A0C = 2 * M_PI;

f32 D_800D5A10 = 2 * M_PI;

f32 D_800D5A14 = M_PI / 2.0f;

u32 D_800D5A18 = 0x800A1C2C;

u32 D_800D5A1C = 0x800A1C94;

u32 D_800D5A20 = 0x800A1CD4;

u32 D_800D5A24 = 0x800A1C2C;

u32 D_800D5A28 = 0x800A1C2C;

u32 D_800D5A2C = 0x800A1D58;

u32 D_800D5A30 = 0x800A1CDC;

u32 D_800D5A34 = 0x800A1CDC;

u32 D_800D5A38 = 0x800A1E34;

f32 D_800D5A3C = 2 * M_PI;

f32 D_800D5A40 = 2 * M_PI;

u32 D_800D5A44 = 0x800A2724;

u32 D_800D5A48 = 0x800A275C;

u32 D_800D5A4C = 0x800A2724;

u32 D_800D5A50 = 0x800A2724;

u32 D_800D5A54 = 0x800A2724;

u32 D_800D5A58 = 0x800A27F8;

u32 D_800D5A5C = 0x800A2724;

u32 D_800D5A60 = 0x800A2724;

u32 D_800D5A64 = 0x800A2724;

u32 D_800D5A68 = 0x00000000;

u32 D_800D5A6C = 0x00000000;

u8 D_800D5A70[] = "gobj id:%d\n";

u8 D_800D5A7C[] = "df:%x\n";

u8 D_800D5A84[] = "SYS\n";

u8 D_800D5A8C[] = "BF\n";

u8 D_800D5A90[] = "addr:%x\n";

u8 D_800D5A9C[] = "GP\n";

u8 D_800D5AA0[] = "gobj:%x\n";

u8 D_800D5AAC[] = "gp:%x\n";

u8 D_800D5AB4[] = "gobjthread:%x\n";

u8 D_800D5AC4[] = "stack:%x\n";

u8 D_800D5AD0[] = "thread pc:%x\n";

u8 D_800D5AE0[] = "id:%d\n";

u8 D_800D5AE8[] = "ptr:%x\n";

u8 D_800D5AF0[] = "func:%x\n";

u8 D_800D5AFC[] = "DFC\n";

u8 D_800D5B04[] = "addr:%x\n";

u8 D_800D5B10[] = "DFO\n";

u8 D_800D5B18[] = "cam addr:%x\n";

u8 D_800D5B28[] = "disp addr:%x\n";

u8 D_800D5B38[] = "s: %x\n";

u8 D_800D5B40[] = "t: %x\n";

u8 D_800D5B48[] = "l: %x\n";

u32 D_800D5B50 = 0x800A2938;

u32 D_800D5B54 = 0x800A294C;

u32 D_800D5B58 = 0x800A298C;

u32 D_800D5B5C = 0x800A2AB4;

u32 D_800D5B60 = 0x800A2AF4;

u32 D_800D5B64 = 0x800A384C;

u32 D_800D5B68 = 0x800A3864;

u32 D_800D5B6C = 0x800A389C;

u32 D_800D5B70 = 0x800A38D4;

u32 D_800D5B74 = 0x800A38F0;

u32 D_800D5B78 = 0x800A3928;

u32 D_800D5B7C = 0x800A3944;

u32 D_800D5B80 = 0x800A397C;

u32 D_800D5B84 = 0x800A3998;

u32 D_800D5B88 = 0x800A39D4;

u32 D_800D5B8C = 0x800A3A1C;

u32 D_800D5B90 = 0x800A3AE0;

u32 D_800D5B94 = 0x800A3818;

u32 D_800D5B98 = 0x800A3B40;

u32 D_800D5B9C = 0x800A3B4C;

u32 D_800D5BA0 = 0x800A3F5C;

u32 D_800D5BA4 = 0x800A3F5C;

u32 D_800D5BA8 = 0x800A3FB0;

u32 D_800D5BAC = 0x800A3FEC;

u32 D_800D5BB0 = 0x800A3818;

u32 D_800D5BB4 = 0x800A3F74;

u32 D_800D5BB8 = 0x800A40C4;

u32 D_800D5BBC = 0x800A40AC;

u32 D_800D5BC0 = 0x800A40FC;

u32 D_800D5BC4 = 0x800A408C;

u32 D_800D5BC8 = 0x800A40E4;

u32 D_800D5BCC = 0x800A405C;

u32 D_800D5BD0 = 0x800A4074;

u32 D_800D5BD4 = 0x800A411C;

u32 D_800D5BD8 = 0x800A4134;

u32 D_800D5BDC = 0x800A414C;

u32 D_800D5BE0 = 0x800A4164;

u32 D_800D5BE4 = 0x800A404C;

u32 D_800D5BE8 = 0x800A3FA0;

u32 D_800D5BEC = 0x800A3F10;

u32 D_800D5BF0 = 0x800A3F48;

u32 D_800D5BF4 = 0x800A3C90;

u32 D_800D5BF8 = 0x800A3CA8;

u32 D_800D5BFC = 0x800A3D34;

u32 D_800D5C00 = 0x800A3F48;

u32 D_800D5C04 = 0x800A3B90;

u32 D_800D5C08 = 0x800A3EC8;

u32 D_800D5C0C = 0x800A3D5C;

u32 D_800D5C10 = 0x800A3D5C;

u32 D_800D5C14 = 0x800A3D5C;

u32 D_800D5C18 = 0x800A3D5C;

u32 D_800D5C1C = 0x800A3D5C;

u32 D_800D5C20 = 0x800A3DC8;

u32 D_800D5C24 = 0x00000000;

u32 D_800D5C28 = 0x00000000;

u32 D_800D5C2C = 0x00000000;

f32 D_800D5C30 = 0.00001f;

f32 D_800D5C34 = 2 * M_PI;

f32 D_800D5C38 = 2 * M_PI;

f32 D_800D5C3C = M_PI / 2.0f;

f32 D_800D5C40 = -M_PI / 2.0f;

f32 D_800D5C44 = M_PI;

f32 D_800D5C48 = 2 * M_PI;

f32 D_800D5C4C = 2 * M_PI;

f32 D_800D5C50 = 2 * M_PI;

f32 D_800D5C54 = 2048.0f / M_PI;

f32 D_800D5C58 = M_PI / 2.0f;

f32 D_800D5C5C = 2048.0f / M_PI;

f32 D_800D5C60 = 2048.0f / M_PI;

f32 D_800D5C64 = M_PI / 2.0f;

f32 D_800D5C68 = -M_PI / 2.0f;

u32 D_800D5C6C = 0x00000000;

u32 D_800D5C70 = 0x800A6CC8;

u32 D_800D5C74 = 0x800A6DA4;

u32 D_800D5C78 = 0x800A6D2C;

u32 D_800D5C7C = 0x800A6DA4;

u32 D_800D5C80 = 0x800A6CC8;

u32 D_800D5C84 = 0x800A6DA4;

u32 D_800D5C88 = 0x800A6D2C;

u32 D_800D5C8C = 0x800A6DA4;

u32 D_800D5C90 = 0x800A6CC8;

u32 D_800D5C94 = 0x800A6DA4;

u32 D_800D5C98 = 0x800A6D2C;

u32 D_800D5C9C = 0x800A6DA4;

u32 D_800D5CA0 = 0x800A6CC8;

u32 D_800D5CA4 = 0x800A6DA4;

u32 D_800D5CA8 = 0x800A6D2C;

f32 D_800D5CAC = 65535.0f;

f32 D_800D5CB0 = 65535.0f;

u32 D_800D5CB4 = 0x00000000;

u32 D_800D5CB8 = 0x00000000;

u32 D_800D5CBC = 0x00000000;

u8 D_800D5CC0[] = "Error: No Entry BGM Number: %d\n";

u8 D_800D5CE0[] = "use AllStopFGM macro.\n";

u8 D_800D5CF8[] = "use stopLoopSeml function.\n";

u8 D_800D5D14[] = "Error: No Entry FGM Number: %d\n";

u8 D_800D5D34[] = "Error: No Entry FGM Number: %d\n";

u32 D_800D5D54 = 0x00000000;

u32 D_800D5D58 = 0x00000000;

u32 D_800D5D5C = 0x00000000;

u32 D_800D5D60 = 0x800A94CC;

u32 D_800D5D64 = 0x800A94CC;

u32 D_800D5D68 = 0x800A94CC;

u32 D_800D5D6C = 0x800A94CC;

u32 D_800D5D70 = 0x800A94CC;

u32 D_800D5D74 = 0x800A94CC;

u32 D_800D5D78 = 0x800A94CC;

u32 D_800D5D7C = 0x800A9490;

u32 D_800D5D80 = 0x800A94CC;

u32 D_800D5D84 = 0x800A9490;

u32 D_800D5D88 = 0x800A9490;

u32 D_800D5D8C = 0x800A9490;

u32 D_800D5D90 = 0x800A9490;

u32 D_800D5D94 = 0x800A9490;

u32 D_800D5D98 = 0x800A94CC;

u32 D_800D5D9C = 0x800A969C;

u32 D_800D5DA0 = 0x800A969C;

u32 D_800D5DA4 = 0x800A969C;

u32 D_800D5DA8 = 0x800A969C;

u32 D_800D5DAC = 0x800A969C;

u32 D_800D5DB0 = 0x800A969C;

u32 D_800D5DB4 = 0x800A96F8;

u32 D_800D5DB8 = 0x800A96F8;

u32 D_800D5DBC = 0x800A96F8;

u32 D_800D5DC0 = 0x800A96F8;

u32 D_800D5DC4 = 0x800A96F8;

u32 D_800D5DC8 = 0x800A96F8;

u32 D_800D5DCC = 0x800A96F8;

u32 D_800D5DD0 = 0x800A96F8;

u32 D_800D5DD4 = 0x800A974C;

u32 D_800D5DD8 = 0x47C34F80;

u32 D_800D5DDC = 0xFF7FFFFF;

u32 D_800D5DE0 = 0xFF7FFFFF;

u32 D_800D5DE4 = 0xFF7FFFFF;

u32 D_800D5DE8 = 0xFF7FFFFF;

f32 D_800D5DEC = 65535.0f;

u32 D_800D5DF0 = 0xFF7FFFFF;

u32 D_800D5DF4 = 0xFF7FFFFF;

u32 D_800D5DF8 = 0xFF7FFFFF;

u32 D_800D5DFC = 0xFF7FFFFF;

char D_800D5E00[] = "M11PLAIN01";

u32 D_800D5E0C = 0x4D313150;

u32 D_800D5E10 = 0x4C41494E;

u32 D_800D5E14 = 0x52470000;

u32 D_800D5E18 = 0x4D313150;

u32 D_800D5E1C = 0x4C41494E;

u32 D_800D5E20 = 0x30330000;

u32 D_800D5E24 = 0x4D313150;

u32 D_800D5E28 = 0x4C41494E;

u32 D_800D5E2C = 0x30320000;

u32 D_800D5E30 = 0x47313100;

u32 D_800D5E34 = 0x4D313257;

u32 D_800D5E38 = 0x4F4F4453;

u32 D_800D5E3C = 0x30310000;

u32 D_800D5E40 = 0x4D313257;

u32 D_800D5E44 = 0x4F4F4453;

u32 D_800D5E48 = 0x30320000;

u32 D_800D5E4C = 0x4D313257;

u32 D_800D5E50 = 0x4F4F4453;

u32 D_800D5E54 = 0x30330000;

u32 D_800D5E58 = 0x4D313257;

u32 D_800D5E5C = 0x4F4F4453;

u32 D_800D5E60 = 0x30340000;

u32 D_800D5E64 = 0x4D313257;

u32 D_800D5E68 = 0x4F4F4453;

u32 D_800D5E6C = 0x52470000;

u32 D_800D5E70 = 0x4D424144;

u32 D_800D5E74 = 0x4F303100;

u32 D_800D5E78 = 0x47313200;

u32 D_800D5E7C = 0x4D313343;

u32 D_800D5E80 = 0x4153544C;

u32 D_800D5E84 = 0x45303100;

u32 D_800D5E88 = 0x4D313343;

u32 D_800D5E8C = 0x4153544C;

u32 D_800D5E90 = 0x45303200;

u32 D_800D5E94 = 0x4D313343;

u32 D_800D5E98 = 0x4153544C;

u32 D_800D5E9C = 0x45303300;

u32 D_800D5EA0 = 0x4D313343;

u32 D_800D5EA4 = 0x4153544C;

u32 D_800D5EA8 = 0x45303400;

u32 D_800D5EAC = 0x4D313343;

u32 D_800D5EB0 = 0x4153544C;

u32 D_800D5EB4 = 0x45303500;

u32 D_800D5EB8 = 0x4D313343;

u32 D_800D5EBC = 0x4153544C;

u32 D_800D5EC0 = 0x45303600;

u32 D_800D5EC4 = 0x4D313343;

u32 D_800D5EC8 = 0x4153544C;

u32 D_800D5ECC = 0x4541444F;

u32 D_800D5ED0 = 0x00000000;

u32 D_800D5ED4 = 0x4D313343;

u32 D_800D5ED8 = 0x4153544C;

u32 D_800D5EDC = 0x45303700;

u32 D_800D5EE0 = 0x4D424445;

u32 D_800D5EE4 = 0x44454445;

u32 D_800D5EE8 = 0x30310000;

u32 D_800D5EEC = 0x47313300;

u32 D_800D5EF0 = 0x4D315748;

u32 D_800D5EF4 = 0x49535059;

u32 D_800D5EF8 = 0x00000000;

u32 D_800D5EFC = 0x4D323144;

u32 D_800D5F00 = 0x45534552;

u32 D_800D5F04 = 0x54303100;

u32 D_800D5F08 = 0x4D323144;

u32 D_800D5F0C = 0x45534552;

u32 D_800D5F10 = 0x54303200;

u32 D_800D5F14 = 0x4D323144;

u32 D_800D5F18 = 0x45534552;

u32 D_800D5F1C = 0x54524700;

u32 D_800D5F20 = 0x4D323144;

u32 D_800D5F24 = 0x45534552;

u32 D_800D5F28 = 0x54303300;

u32 D_800D5F2C = 0x4D323144;

u32 D_800D5F30 = 0x45534552;

u32 D_800D5F34 = 0x54303400;

u32 D_800D5F38 = 0x47323100;

u32 D_800D5F3C = 0x4D323252;

u32 D_800D5F40 = 0x55494E53;

u32 D_800D5F44 = 0x30310000;

u32 D_800D5F48 = 0x4D323252;

u32 D_800D5F4C = 0x55494E53;

u32 D_800D5F50 = 0x30350000;

u32 D_800D5F54 = 0x4D323252;

u32 D_800D5F58 = 0x55494E53;

u32 D_800D5F5C = 0x30320000;

u32 D_800D5F60 = 0x4D323252;

u32 D_800D5F64 = 0x55494E53;

u32 D_800D5F68 = 0x30330000;

u32 D_800D5F6C = 0x4D323252;

u32 D_800D5F70 = 0x55494E53;

u32 D_800D5F74 = 0x30340000;

u32 D_800D5F78 = 0x4D323252;

u32 D_800D5F7C = 0x55494E53;

u32 D_800D5F80 = 0x44454445;

u32 D_800D5F84 = 0x44450000;

u32 D_800D5F88 = 0x47323200;

u32 D_800D5F8C = 0x4D323353;

u32 D_800D5F90 = 0x414E4430;

u32 D_800D5F94 = 0x31000000;

u32 D_800D5F98 = 0x4D323353;

u32 D_800D5F9C = 0x414E4430;

u32 D_800D5FA0 = 0x32000000;

u32 D_800D5FA4 = 0x4D323353;

u32 D_800D5FA8 = 0x414E4452;

u32 D_800D5FAC = 0x47000000;

u32 D_800D5FB0 = 0x4D323353;

u32 D_800D5FB4 = 0x414E4430;

u32 D_800D5FB8 = 0x33000000;

u32 D_800D5FBC = 0x4D323353;

u32 D_800D5FC0 = 0x414E4430;

u32 D_800D5FC4 = 0x34000000;

u32 D_800D5FC8 = 0x4D323353;

u32 D_800D5FCC = 0x414E4430;

u32 D_800D5FD0 = 0x36000000;

u32 D_800D5FD4 = 0x4D323353;

u32 D_800D5FD8 = 0x414E4430;

u32 D_800D5FDC = 0x37000000;

u32 D_800D5FE0 = 0x4D323353;

u32 D_800D5FE4 = 0x414E4430;

u32 D_800D5FE8 = 0x35000000;

u32 D_800D5FEC = 0x47323300;

u32 D_800D5FF0 = 0x4D323450;

u32 D_800D5FF4 = 0x5952414D;

u32 D_800D5FF8 = 0x49443031;

u32 D_800D5FFC = 0x00000000;

u32 D_800D6000 = 0x4D323450;

u32 D_800D6004 = 0x5952414D;

u32 D_800D6008 = 0x49443032;

u32 D_800D600C = 0x00000000;

u32 D_800D6010 = 0x4D323450;

u32 D_800D6014 = 0x5952414D;

u32 D_800D6018 = 0x49443033;

u32 D_800D601C = 0x00000000;

u32 D_800D6020 = 0x4D323450;

u32 D_800D6024 = 0x5952414D;

u32 D_800D6028 = 0x49444144;

u32 D_800D602C = 0x4F310000;

u32 D_800D6030 = 0x4D323450;

u32 D_800D6034 = 0x5952414D;

u32 D_800D6038 = 0x49444144;

u32 D_800D603C = 0x4F320000;

u32 D_800D6040 = 0x4D323450;

u32 D_800D6044 = 0x5952414D;

u32 D_800D6048 = 0x49443034;

u32 D_800D604C = 0x00000000;

u32 D_800D6050 = 0x4D323450;

u32 D_800D6054 = 0x5952414D;

u32 D_800D6058 = 0x49445247;

u32 D_800D605C = 0x00000000;

u32 D_800D6060 = 0x4D323450;

u32 D_800D6064 = 0x5952414D;

u32 D_800D6068 = 0x49443035;

u32 D_800D606C = 0x00000000;

u32 D_800D6070 = 0x47323400;

u32 D_800D6074 = 0x4D325049;

u32 D_800D6078 = 0x58000000;

u32 D_800D607C = 0x4D333153;

u32 D_800D6080 = 0x45415349;

u32 D_800D6084 = 0x44453031;

u32 D_800D6088 = 0x00000000;

u32 D_800D608C = 0x4D333153;

u32 D_800D6090 = 0x45415349;

u32 D_800D6094 = 0x44453032;

u32 D_800D6098 = 0x00000000;

u32 D_800D609C = 0x4D333153;

u32 D_800D60A0 = 0x45415349;

u32 D_800D60A4 = 0x44453033;

u32 D_800D60A8 = 0x00000000;

u32 D_800D60AC = 0x4D333153;

u32 D_800D60B0 = 0x45415349;

u32 D_800D60B4 = 0x44453036;

u32 D_800D60B8 = 0x00000000;

u32 D_800D60BC = 0x4D333153;

u32 D_800D60C0 = 0x45415349;

u32 D_800D60C4 = 0x44455247;

u32 D_800D60C8 = 0x00000000;

u32 D_800D60CC = 0x4D333153;

u32 D_800D60D0 = 0x45415349;

u32 D_800D60D4 = 0x44453035;

u32 D_800D60D8 = 0x00000000;

u32 D_800D60DC = 0x47333100;

u32 D_800D60E0 = 0x4D333252;

u32 D_800D60E4 = 0x49564552;

u32 D_800D60E8 = 0x30310000;

u32 D_800D60EC = 0x4D333252;

u32 D_800D60F0 = 0x49564552;

u32 D_800D60F4 = 0x30330000;

u32 D_800D60F8 = 0x4D333252;

u32 D_800D60FC = 0x49564552;

u32 D_800D6100 = 0x52470000;

u32 D_800D6104 = 0x4D333252;

u32 D_800D6108 = 0x49564552;

u32 D_800D610C = 0x44454500;

u32 D_800D6110 = 0x4D333252;

u32 D_800D6114 = 0x49564552;

u32 D_800D6118 = 0x30350000;

u32 D_800D611C = 0x4D333252;

u32 D_800D6120 = 0x49564552;

u32 D_800D6124 = 0x30340000;

u32 D_800D6128 = 0x47333200;

u32 D_800D612C = 0x4D333343;

u32 D_800D6130 = 0x4F415354;

u32 D_800D6134 = 0x30360000;

u32 D_800D6138 = 0x4D333343;

u32 D_800D613C = 0x4F415354;

u32 D_800D6140 = 0x30310000;

u32 D_800D6144 = 0x4D333343;

u32 D_800D6148 = 0x4F415354;

u32 D_800D614C = 0x30330000;

u32 D_800D6150 = 0x4D333343;

u32 D_800D6154 = 0x4F415354;

u32 D_800D6158 = 0x30320000;

u32 D_800D615C = 0x4D333343;

u32 D_800D6160 = 0x4F415354;

u32 D_800D6164 = 0x30340000;

u32 D_800D6168 = 0x4D333343;

u32 D_800D616C = 0x4F415354;

u32 D_800D6170 = 0x52470000;

u32 D_800D6174 = 0x4D333343;

u32 D_800D6178 = 0x4F415354;

u32 D_800D617C = 0x30350000;

u32 D_800D6180 = 0x47333300;

u32 D_800D6184 = 0x4D333453;

u32 D_800D6188 = 0x55424D41;

u32 D_800D618C = 0x52494E45;

u32 D_800D6190 = 0x30310000;

u32 D_800D6194 = 0x4D333453;

u32 D_800D6198 = 0x55424D41;

u32 D_800D619C = 0x52494E45;

u32 D_800D61A0 = 0x30320000;

u32 D_800D61A4 = 0x4D333453;

u32 D_800D61A8 = 0x55424D41;

u32 D_800D61AC = 0x52494E45;

u32 D_800D61B0 = 0x30330000;

u32 D_800D61B4 = 0x4D333453;

u32 D_800D61B8 = 0x55424D41;

u32 D_800D61BC = 0x52494E45;

u32 D_800D61C0 = 0x30350000;

u32 D_800D61C4 = 0x4D333453;

u32 D_800D61C8 = 0x55424D41;

u32 D_800D61CC = 0x52494E45;

u32 D_800D61D0 = 0x52470000;

u32 D_800D61D4 = 0x4D333453;

u32 D_800D61D8 = 0x55424D41;

u32 D_800D61DC = 0x52494E45;

u32 D_800D61E0 = 0x30340000;

u32 D_800D61E4 = 0x47333400;

u32 D_800D61E8 = 0x4D334143;

u32 D_800D61EC = 0x524F0000;

u32 D_800D61F0 = 0x4D34314A;

u32 D_800D61F4 = 0x554E474C;

u32 D_800D61F8 = 0x45303100;

u32 D_800D61FC = 0x4D34314A;

u32 D_800D6200 = 0x554E474C;

u32 D_800D6204 = 0x45303300;

u32 D_800D6208 = 0x4D34314A;

u32 D_800D620C = 0x554E474C;

u32 D_800D6210 = 0x45303600;

u32 D_800D6214 = 0x4D34314A;

u32 D_800D6218 = 0x554E474C;

u32 D_800D621C = 0x45524700;

u32 D_800D6220 = 0x4D34314A;

u32 D_800D6224 = 0x554E474C;

u32 D_800D6228 = 0x45303500;

u32 D_800D622C = 0x4D34314A;

u32 D_800D6230 = 0x554E474C;

u32 D_800D6234 = 0x45303200;

u32 D_800D6238 = 0x47343100;

u32 D_800D623C = 0x4D343243;

u32 D_800D6240 = 0x41564552;

u32 D_800D6244 = 0x4E303100;

u32 D_800D6248 = 0x4D343243;

u32 D_800D624C = 0x41564552;

u32 D_800D6250 = 0x4E444545;

u32 D_800D6254 = 0x00000000;

u32 D_800D6258 = 0x4D343243;

u32 D_800D625C = 0x41564552;

u32 D_800D6260 = 0x4E303600;

u32 D_800D6264 = 0x4D343243;

u32 D_800D6268 = 0x41564552;

u32 D_800D626C = 0x4E303300;

u32 D_800D6270 = 0x4D343243;

u32 D_800D6274 = 0x41564552;

u32 D_800D6278 = 0x4E303500;

u32 D_800D627C = 0x4D343243;

u32 D_800D6280 = 0x41564552;

u32 D_800D6284 = 0x4E524700;

u32 D_800D6288 = 0x4D343243;

u32 D_800D628C = 0x41564552;

u32 D_800D6290 = 0x4E303400;

u32 D_800D6294 = 0x47343200;

u32 D_800D6298 = 0x4D343352;

u32 D_800D629C = 0x4F434B30;

u32 D_800D62A0 = 0x31000000;

u32 D_800D62A4 = 0x4D343352;

u32 D_800D62A8 = 0x4F434B30;

u32 D_800D62AC = 0x32000000;

u32 D_800D62B0 = 0x4D343352;

u32 D_800D62B4 = 0x4F434B41;

u32 D_800D62B8 = 0x444F3100;

u32 D_800D62BC = 0x4D343352;

u32 D_800D62C0 = 0x4F434B41;

u32 D_800D62C4 = 0x444F3200;

u32 D_800D62C8 = 0x4D343352;

u32 D_800D62CC = 0x4F434B30;

u32 D_800D62D0 = 0x33000000;

u32 D_800D62D4 = 0x47343300;

u32 D_800D62D8 = 0x4D34344C;

u32 D_800D62DC = 0x41564130;

u32 D_800D62E0 = 0x31000000;

u32 D_800D62E4 = 0x4D34344C;

u32 D_800D62E8 = 0x41564130;

u32 D_800D62EC = 0x32000000;

u32 D_800D62F0 = 0x4D34344C;

u32 D_800D62F4 = 0x41564144;

u32 D_800D62F8 = 0x45444500;

u32 D_800D62FC = 0x4D34344C;

u32 D_800D6300 = 0x41564130;

u32 D_800D6304 = 0x33000000;

u32 D_800D6308 = 0x4D34344C;

u32 D_800D630C = 0x41564130;

u32 D_800D6310 = 0x34000000;

u32 D_800D6314 = 0x4D34344C;

u32 D_800D6318 = 0x41564130;

u32 D_800D631C = 0x36000000;

u32 D_800D6320 = 0x4D34344C;

u32 D_800D6324 = 0x41564130;

u32 D_800D6328 = 0x35000000;

u32 D_800D632C = 0x47343400;

u32 D_800D6330 = 0x4D344D4F;

u32 D_800D6334 = 0x4C54454E;

u32 D_800D6338 = 0x00000000;

u32 D_800D633C = 0x4D353153;

u32 D_800D6340 = 0x4E4F5730;

u32 D_800D6344 = 0x31000000;

u32 D_800D6348 = 0x4D353153;

u32 D_800D634C = 0x4E4F5730;

u32 D_800D6350 = 0x32000000;

u32 D_800D6354 = 0x4D353153;

u32 D_800D6358 = 0x4E4F5744;

u32 D_800D635C = 0x45450000;

u32 D_800D6360 = 0x4D353153;

u32 D_800D6364 = 0x4E4F5752;

u32 D_800D6368 = 0x47303100;

u32 D_800D636C = 0x4D353153;

u32 D_800D6370 = 0x4E4F5730;

u32 D_800D6374 = 0x35000000;

u32 D_800D6378 = 0x4D353153;

u32 D_800D637C = 0x4E4F5730;

u32 D_800D6380 = 0x34000000;

u32 D_800D6384 = 0x47353100;

u32 D_800D6388 = 0x4D353243;

u32 D_800D638C = 0x4C4F5544;

u32 D_800D6390 = 0x30310000;

u32 D_800D6394 = 0x4D353243;

u32 D_800D6398 = 0x4C4F5544;

u32 D_800D639C = 0x30330000;

u32 D_800D63A0 = 0x4D353243;

u32 D_800D63A4 = 0x4C4F5544;

u32 D_800D63A8 = 0x30320000;

u32 D_800D63AC = 0x4D353243;

u32 D_800D63B0 = 0x4C4F5544;

u32 D_800D63B4 = 0x30360000;

u32 D_800D63B8 = 0x4D353243;

u32 D_800D63BC = 0x4C4F5544;

u32 D_800D63C0 = 0x30350000;

u32 D_800D63C4 = 0x4D353243;

u32 D_800D63C8 = 0x4C4F5544;

u32 D_800D63CC = 0x52470000;

u32 D_800D63D0 = 0x47353200;

u32 D_800D63D4 = 0x4D353342;

u32 D_800D63D8 = 0x55494C44;

u32 D_800D63DC = 0x494E4730;

u32 D_800D63E0 = 0x31000000;

u32 D_800D63E4 = 0x4D353342;

u32 D_800D63E8 = 0x55494C44;

u32 D_800D63EC = 0x494E4730;

u32 D_800D63F0 = 0x32000000;

u32 D_800D63F4 = 0x4D353342;

u32 D_800D63F8 = 0x55494C44;

u32 D_800D63FC = 0x494E4730;

u32 D_800D6400 = 0x35000000;

u32 D_800D6404 = 0x4D353342;

u32 D_800D6408 = 0x55494C44;

u32 D_800D640C = 0x494E4752;

u32 D_800D6410 = 0x47000000;

u32 D_800D6414 = 0x4D353342;

u32 D_800D6418 = 0x55494C44;

u32 D_800D641C = 0x494E4741;

u32 D_800D6420 = 0x444F3100;

u32 D_800D6424 = 0x4D353342;

u32 D_800D6428 = 0x55494C44;

u32 D_800D642C = 0x494E4741;

u32 D_800D6430 = 0x444F3200;

u32 D_800D6434 = 0x4D353342;

u32 D_800D6438 = 0x55494C44;

u32 D_800D643C = 0x494E4730;

u32 D_800D6440 = 0x33000000;

u32 D_800D6444 = 0x4D353342;

u32 D_800D6448 = 0x55494C44;

u32 D_800D644C = 0x494E4730;

u32 D_800D6450 = 0x34000000;

u32 D_800D6454 = 0x47353300;

u32 D_800D6458 = 0x4D353446;

u32 D_800D645C = 0x4143544F;

u32 D_800D6460 = 0x52593031;

u32 D_800D6464 = 0x00000000;

u32 D_800D6468 = 0x4D353446;

u32 D_800D646C = 0x4143544F;

u32 D_800D6470 = 0x52593032;

u32 D_800D6474 = 0x00000000;

u32 D_800D6478 = 0x4D353446;

u32 D_800D647C = 0x4143544F;

u32 D_800D6480 = 0x52594445;

u32 D_800D6484 = 0x44450000;

u32 D_800D6488 = 0x4D353446;

u32 D_800D648C = 0x4143544F;

u32 D_800D6490 = 0x52593035;

u32 D_800D6494 = 0x00000000;

u32 D_800D6498 = 0x4D353446;

u32 D_800D649C = 0x4143544F;

u32 D_800D64A0 = 0x52595247;

u32 D_800D64A4 = 0x00000000;

u32 D_800D64A8 = 0x4D353446;

u32 D_800D64AC = 0x4143544F;

u32 D_800D64B0 = 0x52593037;

u32 D_800D64B4 = 0x00000000;

u32 D_800D64B8 = 0x4D353446;

u32 D_800D64BC = 0x4143544F;

u32 D_800D64C0 = 0x52593036;

u32 D_800D64C4 = 0x00000000;

u32 D_800D64C8 = 0x47353400;

u32 D_800D64CC = 0x4D354852;

u32 D_800D64D0 = 0x00000000;

u32 D_800D64D4 = 0x4D363152;

u32 D_800D64D8 = 0x504C4149;

u32 D_800D64DC = 0x4E303200;

u32 D_800D64E0 = 0x4D363152;

u32 D_800D64E4 = 0x504C4149;

u32 D_800D64E8 = 0x4E524700;

u32 D_800D64EC = 0x4D363152;

u32 D_800D64F0 = 0x504C4149;

u32 D_800D64F4 = 0x4E303300;

u32 D_800D64F8 = 0x47363100;

u32 D_800D64FC = 0x4D363252;

u32 D_800D6500 = 0x43415354;

u32 D_800D6504 = 0x4C453031;

u32 D_800D6508 = 0x00000000;

u32 D_800D650C = 0x4D363252;

u32 D_800D6510 = 0x43415354;

u32 D_800D6514 = 0x4C453032;

u32 D_800D6518 = 0x00000000;

u32 D_800D651C = 0x4D363252;

u32 D_800D6520 = 0x43415354;

u32 D_800D6524 = 0x4C454445;

u32 D_800D6528 = 0x00000000;

u32 D_800D652C = 0x4D363252;

u32 D_800D6530 = 0x43415354;

u32 D_800D6534 = 0x4C453033;

u32 D_800D6538 = 0x00000000;

u32 D_800D653C = 0x4D363252;

u32 D_800D6540 = 0x43415354;

u32 D_800D6544 = 0x4C454144;

u32 D_800D6548 = 0x4F000000;

u32 D_800D654C = 0x4D363252;

u32 D_800D6550 = 0x43415354;

u32 D_800D6554 = 0x4C453034;

u32 D_800D6558 = 0x00000000;

u32 D_800D655C = 0x47363200;

u32 D_800D6560 = 0x4D363352;

u32 D_800D6564 = 0x43415354;

u32 D_800D6568 = 0x4C455247;

u32 D_800D656C = 0x30310000;

u32 D_800D6570 = 0x4D363352;

u32 D_800D6574 = 0x43415354;

u32 D_800D6578 = 0x4C455247;

u32 D_800D657C = 0x30320000;

u32 D_800D6580 = 0x4D363352;

u32 D_800D6584 = 0x43415354;

u32 D_800D6588 = 0x4C453035;

u32 D_800D658C = 0x00000000;

u32 D_800D6590 = 0x4D363352;

u32 D_800D6594 = 0x43415354;

u32 D_800D6598 = 0x4C455247;

u32 D_800D659C = 0x30330000;

u32 D_800D65A0 = 0x4D363352;

u32 D_800D65A4 = 0x43415354;

u32 D_800D65A8 = 0x4C453036;

u32 D_800D65AC = 0x00000000;

u32 D_800D65B0 = 0x4D363352;

u32 D_800D65B4 = 0x43415354;

u32 D_800D65B8 = 0x4C455247;

u32 D_800D65BC = 0x30340000;

u32 D_800D65C0 = 0x4D363352;

u32 D_800D65C4 = 0x43415354;

u32 D_800D65C8 = 0x4C453037;

u32 D_800D65CC = 0x00000000;

u32 D_800D65D0 = 0x4D363352;

u32 D_800D65D4 = 0x43415354;

u32 D_800D65D8 = 0x4C455247;

u32 D_800D65DC = 0x30350000;

u32 D_800D65E0 = 0x4D363352;

u32 D_800D65E4 = 0x43415354;

u32 D_800D65E8 = 0x4C453038;

u32 D_800D65EC = 0x00000000;

u32 D_800D65F0 = 0x4D363352;

u32 D_800D65F4 = 0x43415354;

u32 D_800D65F8 = 0x4C455247;

u32 D_800D65FC = 0x30360000;

u32 D_800D6600 = 0x4D363352;

u32 D_800D6604 = 0x43415354;

u32 D_800D6608 = 0x4C453039;

u32 D_800D660C = 0x00000000;

u32 D_800D6610 = 0x47363300;

u32 D_800D6614 = 0x4D364D49;

u32 D_800D6618 = 0x5241434C;

u32 D_800D661C = 0x45000000;

u32 D_800D6620 = 0x4D373157;

u32 D_800D6624 = 0x41444F00;

u32 D_800D6628 = 0x4D373144;

u32 D_800D662C = 0x45444500;

u32 D_800D6630 = 0x4D374C41;

u32 D_800D6634 = 0x53540000;

u32 D_800D6638 = 0x41424532;

u32 D_800D663C = 0x30300000;

u32 D_800D6640 = 0x41424531;

u32 D_800D6644 = 0x30300000;

u32 D_800D6648 = 0x45584552;

u32 D_800D664C = 0x43495345;

u32 D_800D6650 = 0x30310000;

u32 D_800D6654 = 0x454E4554;

u32 D_800D6658 = 0x45535431;

u32 D_800D665C = 0x00000000;

u32 D_800D6660 = 0x454E4554;

u32 D_800D6664 = 0x45535432;

u32 D_800D6668 = 0x00000000;

u32 D_800D666C = 0x4954454D;

u32 D_800D6670 = 0x30310000;

u32 D_800D6674 = 0x42524541;

u32 D_800D6678 = 0x4B544553;

u32 D_800D667C = 0x54310000;

u32 D_800D6680 = 0x800ACA5C;

u32 D_800D6684 = 0x800ACA8C;

u32 D_800D6688 = 0x800ACABC;

u32 D_800D668C = 0x800ACAF8;

u32 D_800D6690 = 0x800ACAF8;

u32 D_800D6694 = 0x800AD264;

u32 D_800D6698 = 0x800AD3D0;

u32 D_800D669C = 0x800AD860;

u32 D_800D66A0 = 0x800AD89C;

u32 D_800D66A4 = 0x800AD8D8;

u32 D_800D66A8 = 0x800AD9EC;

u32 D_800D66AC = 0x800ADA9C;

u32 D_800D66B0 = 0x800ADB28;

u32 D_800D66B4 = 0x800ADB88;

u32 D_800D66B8 = 0x800ADC18;

u32 D_800D66BC = 0x00000000;

u8 D_800D66C0[] = "Can't request job !!!\n";

u8 D_800D66D8[] = "Job Request Deep OverFlow!!\n";

f32 D_800D66F8 = 65535.0f;

f32 D_800D66FC = 9999.0f;

u32 D_800D6700 = 0xFF7FFFFF;

u32 D_800D6704 = 0xFEAAAAAA;

u32 D_800D6708 = 0xFEFFFFFF;

f32 D_800D670C = 65535.0f;

f32 D_800D6710 = 65535.0f;

f32 D_800D6714 = 65535.0f;

f32 D_800D6718 = 65535.0f;

f32 D_800D671C = 65535.0f;

f32 D_800D6720 = 65535.0f;

f32 D_800D6724 = 65535.0f;

f32 D_800D6728 = 65535.0f;

f32 D_800D672C = 65535.0f;

f32 D_800D6730 = 65535.0f;

f32 D_800D6734 = 65535.0f;

f32 D_800D6738 = 65535.0f;

f32 D_800D673C = 65535.0f;

u32 D_800D6740 = 0x800B10CC;

u32 D_800D6744 = 0x800B109C;

u32 D_800D6748 = 0x800B10FC;

u32 D_800D674C = 0x800B10FC;

u32 D_800D6750 = 0x800B10FC;

u32 D_800D6754 = 0x800B10FC;

u32 D_800D6758 = 0x800B10FC;

u32 D_800D675C = 0x800B10FC;

u32 D_800D6760 = 0x800B10FC;

u32 D_800D6764 = 0x800B10FC;

u32 D_800D6768 = 0x800B10FC;

u32 D_800D676C = 0x800B0F5C;

u32 D_800D6770 = 0x800B10FC;

u32 D_800D6774 = 0x800B10FC;

u32 D_800D6778 = 0x800B0FEC;

u32 D_800D677C = 0x800B100C;

u32 D_800D6780 = 0x800B1304;

u32 D_800D6784 = 0x800B12D4;

u32 D_800D6788 = 0x800B1334;

u32 D_800D678C = 0x800B1334;

u32 D_800D6790 = 0x800B1334;

u32 D_800D6794 = 0x800B1334;

u32 D_800D6798 = 0x800B1334;

u32 D_800D679C = 0x800B1334;

u32 D_800D67A0 = 0x800B1334;

u32 D_800D67A4 = 0x800B1334;

u32 D_800D67A8 = 0x800B1334;

u32 D_800D67AC = 0x800B1174;

u32 D_800D67B0 = 0x800B1334;

u32 D_800D67B4 = 0x800B1334;

u32 D_800D67B8 = 0x800B1204;

u32 D_800D67BC = 0x800B1264;

u32 D_800D67C0 = 0x800B1654;

u32 D_800D67C4 = 0x800B1654;

u32 D_800D67C8 = 0x800B1654;

u32 D_800D67CC = 0x800B1654;

u32 D_800D67D0 = 0x800B1690;

f32 D_800D67D4 = M_PI / 2.0f;

f32 D_800D67D8 = -M_PI / 2.0f;

u32 D_800D67DC = 0xFF7FFFFF;

u32 D_800D67E0 = 0xFF7FFFFF;

u32 D_800D67E4 = 0xFF7FFFFF;

f32 D_800D67E8 = -10000.0f;

f32 D_800D67EC = 65535.0f;

f32 D_800D67F0 = 65535.0f;

u32 D_800D67F4 = 0x00000000;

u32 D_800D67F8 = 0x00000000;

u32 D_800D67FC = 0x00000000;

f32 D_800D6800 = 2 * M_PI;

f32 D_800D6804 = 2 * M_PI;

f32 D_800D6808 = 2 * M_PI;

f32 D_800D680C = 2 * M_PI;

f32 D_800D6810 = 65535.0f;

f32 D_800D6814 = 65535.0f;

f32 D_800D6818 = 65535.0f;

f32 D_800D681C = 65535.0f;

f32 D_800D6820 = 65535.0f;

f32 D_800D6824 = 2 * M_PI;

f32 D_800D6828 = 2 * M_PI;

f32 D_800D682C = 65535.0f;

f32 D_800D6830 = 0.1f;

u32 D_800D6834 = 0x3FA3D70A;

u32 D_800D6838 = 0x3F91EB85;

f32 D_800D683C = -10000.0f;

f32 D_800D6840 = 65535.0f;

f32 D_800D6844 = -10000.0f;

f32 D_800D6848 = 2 * M_PI;

f32 D_800D684C = 2 * M_PI;

f32 D_800D6850 = 2 * M_PI;

f32 D_800D6854 = 2 * M_PI;

f32 D_800D6858 = -M_PI / 2.0f;

f32 D_800D685C = 2 * M_PI;

f32 D_800D6860 = -M_PI / 2.0f;

f32 D_800D6864 = 2 * M_PI;

f32 D_800D6868 = 2 * M_PI;

f32 D_800D686C = 2 * M_PI;

f32 D_800D6870 = -M_PI / 2.0f;

f32 D_800D6874 = 2 * M_PI;

f32 D_800D6878 = -M_PI / 2.0f;

f32 D_800D687C = 2 * M_PI;

f32 D_800D6880 = 2 * M_PI;

f32 D_800D6884 = -M_PI / 2.0f;

f32 D_800D6888 = 2 * M_PI;

f32 D_800D688C = 2 * M_PI;

f32 D_800D6890 = -M_PI / 2.0f;

f32 D_800D6894 = -M_PI / 2.0f;

f32 D_800D6898 = M_PI / 2.0f;

f32 D_800D689C = 2 * M_PI;

f32 D_800D68A0 = -M_PI / 2.0f;

f32 D_800D68A4 = M_PI / 2.0f;

f32 D_800D68A8 = 2 * M_PI;

f32 D_800D68AC = 2 * M_PI;

f32 D_800D68B0 = 2 * M_PI;

f32 D_800D68B4 = 2 * M_PI;

f32 D_800D68B8 = -M_PI / 2.0f;

f32 D_800D68BC = 2 * M_PI;

f32 D_800D68C0 = 2 * M_PI;

f32 D_800D68C4 = 2 * M_PI;

f32 D_800D68C8 = 2 * M_PI;

f32 D_800D68CC = 2 * M_PI;

f32 D_800D68D0 = 2 * M_PI;

f32 D_800D68D4 = 2 * M_PI;

u32 D_800D68D8 = 0x00000000;

u32 D_800D68DC = 0x00000000;

u32 D_800D68E0 = 0x800BA808;

u32 D_800D68E4 = 0x800BA824;

u32 D_800D68E8 = 0x800BA860;

u32 D_800D68EC = 0x800BA894;

u32 D_800D68F0 = 0x800BA8B0;

u32 D_800D68F4 = 0x800BA950;

u32 D_800D68F8 = 0x800BA96C;

u32 D_800D68FC = 0x800BA988;

u32 D_800D6900 = 0x800BA9A4;

u32 D_800D6904 = 0x800BA9C0;

u32 D_800D6908 = 0x800BAAA0;

u32 D_800D690C = 0x800BAAA8;

u32 D_800D6910 = 0x800BAAA8;

u32 D_800D6914 = 0x800BAAB0;

u32 D_800D6918 = 0x800BAAB8;

u32 D_800D691C = 0x800BAC48;

u32 D_800D6920 = 0x800BAC74;

u32 D_800D6924 = 0x800BAC60;

u32 D_800D6928 = 0x800BAC84;

u32 D_800D692C = 0x800BACA8;

u32 D_800D6930 = 0x800BACB8;

u32 D_800D6934 = 0x00000000;

u32 D_800D6938 = 0x00000000;

u32 D_800D693C = 0x00000000;

u32 D_800D6940 = 0x800BB7A0;

u32 D_800D6944 = 0x800BB7C0;

u32 D_800D6948 = 0x800BB7A0;

u32 D_800D694C = 0x800BB7C0;

u32 D_800D6950 = 0x800BB7A0;

u32 D_800D6954 = 0x800BB7C0;

u32 D_800D6958 = 0x800BB7A0;

u32 D_800D695C = 0x800BB7C0;

u32 D_800D6960 = 0x800BB7B0;

u32 D_800D6964 = 0x800BB874;

u32 D_800D6968 = 0x800BB7B0;

u32 D_800D696C = 0x800BB874;

u32 D_800D6970 = 0x453B8000;

u32 D_800D6974 = 0x00000000;

u32 D_800D6978 = 0x00000000;

u32 D_800D697C = 0x00000000;

u32 D_800D6980 = 0x800BBBEC;

u32 D_800D6984 = 0x800BBC5C;

u32 D_800D6988 = 0x800BBC5C;

u32 D_800D698C = 0x800BBBF8;

u32 D_800D6990 = 0x800BBBF8;

u32 D_800D6994 = 0x800BBC1C;

u32 D_800D6998 = 0x800BBC40;

u32 D_800D699C = 0x800BBFB8;

u32 D_800D69A0 = 0x800BBFB8;

u32 D_800D69A4 = 0x800BBFB8;

u32 D_800D69A8 = 0x800BBF90;

u32 D_800D69AC = 0x800BBF90;

u32 D_800D69B0 = 0x800BBFA0;

u32 D_800D69B4 = 0x800BBFB0;

u32 D_800D69B8 = 0x00000000;

u32 D_800D69BC = 0x00000000;

