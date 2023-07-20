
//`include "tb_hierarchy.sv"
#define TRIGGER_TB_CONNECT_FUSE_CHECK_OPT0 (TRIGGER_VIP_FUSE + 0)
#define TRIGGER_TB_CONNECT_FUSE_CHECK_OPT1 (TRIGGER_VIP_FUSE + 1)

#define LOBS_LAR 0xFB0
#define LOBS_LSR 0xFB4

#define LOBS_CTRL 0x000
#define LOBS_TIMECTRL 0x004
#define LOBS_TSSR 0x008
#define LOBS_BURSTCTRL 0x00c
#define LOBS_PTACTION 0x010
#define LOBS_STARTADDR 0x014
#define LOBS_ENDADDR 0x018
#define LOBS_SYNCCTRL 0x01c
#define LOBS_CTSR 0x020
#define LOBS_CCVR 0x024
#define LOBS_CAVR 0x028
#define LOBS_RDCAPTID 0x02c
#define LOBS_FIFOSTATE 0x030
#define LOBS_RRAR 0x040
#define LOBS_RRDR 0x044
#define LOBS_RWAR 0x048
#define LOBS_RWDR 0x04c
// Trigger State Register0
#define LOBS_SIGSEL0 0x100
#define LOBS_TRIGCTRL0 0x104
#define LOBS_NEXTSTATE0 0x108
#define LOBS_ACTION0 0x10c
#define LOBS_ALTNEXTSTATE0 0x110
#define LOBS_ALTACTION0 0x114
#define LOBS_COUNTCOMP0 0x120
#define LOBS_EXTMASK0 0x130
#define LOBS_EXTCOMP0 0x134
#define LOBS_SIGMASK0_00 0x140 //[31-0]
#define LOBS_SIGMASK0_01 0x144 //[63-32]
#define LOBS_SIGMASK0_10 0x148 //[95:64]
#define LOBS_SIGMASK0_11 0x14c //[127:96]
#define LOBS_SIGCOMP0_00 0x180 //[31-0]
#define LOBS_SIGCOMP0_01 0x184 //[63-32]
#define LOBS_SIGCOMP0_10 0x188 //[95:64]
#define LOBS_SIGCOMP0_11 0x18c //[127:96]

#define LOBS_SIGSEL1 0x200
#define LOBS_TRIGCTRL1 0x204
#define LOBS_NEXTSTATE1 0x208
#define LOBS_ACTION1 0x20c
#define LOBS_ALTNEXTSTATE1 0x210
#define LOBS_ALTACTION1 0x214
#define LOBS_COUNTCOMP1 0x220
#define LOBS_EXTMASK1 0x230
#define LOBS_EXTCOMP1 0x234
#define LOBS_SIGMASK1_00 0x240 //[31-0]
#define LOBS_SIGMASK1_01 0x244 //[63-32]
#define LOBS_SIGMASK1_10 0x248 //[95:64]
#define LOBS_SIGMASK1_11 0x24c //[127:96]
#define LOBS_SIGCOMP1_00 0x280 //[31-0]
#define LOBS_SIGCOMP1_01 0x284 //[63-32]
#define LOBS_SIGCOMP1_10 0x288 //[95:64]
#define LOBS_SIGCOMP1_11 0x28c //[127:96]

#define LOBS_SIGSEL2 0x300
#define LOBS_TRIGCTRL2 0x304
#define LOBS_NEXTSTATE2 0x308
#define LOBS_ACTION2 0x30c
#define LOBS_ALTNEXTSTATE2 0x310
#define LOBS_ALTACTION2 0x314
#define LOBS_COUNTCOMP2 0x320
#define LOBS_EXTMASK2 0x330
#define LOBS_EXTCOMP2 0x334
#define LOBS_SIGMASK2_00 0x340 //[31-0]
#define LOBS_SIGMASK2_01 0x344 //[63-32]
#define LOBS_SIGMASK2_10 0x348 //[95:64]
#define LOBS_SIGMASK2_11 0x34c //[127:96]
#define LOBS_SIGCOMP2_00 0x380 //[31-0]
#define LOBS_SIGCOMP2_01 0x384 //[63-32]
#define LOBS_SIGCOMP2_10 0x388 //[95:64]
#define LOBS_SIGCOMP2_11 0x38c //[127:96]

#define LOBS_SIGSEL3 0x400
#define LOBS_TRIGCTRL3 0x404
#define LOBS_NEXTSTATE3 0x408
#define LOBS_ACTION3 0x40c
#define LOBS_ALTNEXTSTATE3 0x410
#define LOBS_ALTACTION3 0x414
#define LOBS_COUNTCOMP3 0x420
#define LOBS_EXTMASK3 0x430
#define LOBS_EXTCOMP3 0x434
#define LOBS_SIGMASK3_00 0x440 //[31-0]
#define LOBS_SIGMASK3_01 0x444 //[63-32]
#define LOBS_SIGMASK3_10 0x448 //[95:64]
#define LOBS_SIGMASK3_11 0x44c //[127:96]
#define LOBS_SIGCOMP3_00 0x480 //[31-0]
#define LOBS_SIGCOMP3_01 0x484 //[63-32]
#define LOBS_SIGCOMP3_10 0x488 //[95:64]
#define LOBS_SIGCOMP3_11 0x48c //[127:96]

#define LOBS_SIGSEL4 0x500
#define LOBS_TRIGCTRL4 0x504
#define LOBS_NEXTSTATE4 0x508
#define LOBS_ACTION4 0x50c
#define LOBS_ALTNEXTSTATE4 0x510
#define LOBS_ALTACTION4 0x514
#define LOBS_COUNTCOMP4 0x520
#define LOBS_EXTMASK4 0x530
#define LOBS_EXTCOMP4 0x534
#define LOBS_SIGMASK4_00 0x540 //[31-0]
#define LOBS_SIGMASK4_01 0x544 //[63-32]
#define LOBS_SIGMASK4_10 0x548 //[95:64]
#define LOBS_SIGMASK4_11 0x54c //[127:96]
#define LOBS_SIGCOMP4_00 0x580 //[31-0]
#define LOBS_SIGCOMP4_01 0x584 //[63-32]
#define LOBS_SIGCOMP4_10 0x588 //[95:64]
#define LOBS_SIGCOMP4_11 0x58c //[127:96]

#define LOBS_ITTRIGOUT 0xee8
#define LOBS_ITTRIGIN 0xef8
#define LOBS_ITCTRL 0xf00
#define LOBS_DEVID 0xfc8
#define LOBS_DEVID1 0xfc4
#define LOBS_DEVID2 0xfc0
#define LOBS_DEVARCH 0xFBC 
#define LOBS_DEVTYPE 0xFCC 

//SIGSEL<n>
#define Group0 0x1
#define Group1 0x2
#define Group2 0x4
#define Group3 0x8
#define Group4 0x10
#define Group5 0x20
#define Group6 0x40
#define Group7 0x80
#define Group8 0x100
#define Group9 0x200
#define Group10 0x400
#define Group11 0x800
//NEXTSTATE
#define Keep_State 0x0
#define State0 0x1 
#define State1 0x2 
#define State2 0x4 
#define State3 0x8 
#define State4 0x10
// HRAM
#define STARTADDR 0x014
#define ENDADDR 0x018

void toggle_flag(uint32_t i)
{
    PRINTF("Start to toggle PA%d, which is pass flag", i);

    REG32_WRITE(MAP_BASE_GPIO0 + 0x200, (1 << i)); // OE PAi
    REG32_WRITE(MAP_BASE_GPIO0 + 0x100, (1 << i)); // DO PAi

    // PRINTF("Toggle GPIO PA%d end",i);
}
uint32_t wait_delay(int timeOut)
{
    if (!timeOut)
        timeOut = 1000;
    for (int i = 0; i < timeOut; i++)
    {
        ;
    }
}
