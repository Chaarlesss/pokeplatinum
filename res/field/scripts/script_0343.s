    .include "macros/scrcmd.inc"

    .data

    .long _000E-.-4
    .long _0021-.-4
    .long _00B8-.-4
    .short 0xFD13

_000E:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_02C 0
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0021:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_07E 0x1B8, 1, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _0049
    ScrCmd_02C 1
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0049:
    ScrCmd_02C 2
    ScrCmd_03E 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _006C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _00A0
    ScrCmd_002

_006C:
    ScrCmd_0CD 0
    ScrCmd_02C 3
    ScrCmd_031
    ScrCmd_04B 0x5DC
    ScrCmd_049 0x608
    ScrCmd_05E 5, _00A8
    ScrCmd_05E 6, _00B0
    ScrCmd_05F
    ScrCmd_01E 0x225
    ScrCmd_065 5
    ScrCmd_065 6
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_00A0:
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

    .balign 4, 0
_00A8:
    .short 18, 1
    .short 0xFE, 0x00

    .balign 4, 0
_00B0:
    .short 19, 1
    .short 0xFE, 0x00

_00B8:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_02C 4
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

    .byte 0
    .byte 0
    .byte 0