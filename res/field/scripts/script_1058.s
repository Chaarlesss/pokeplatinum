    .include "macros/scrcmd.inc"

    .data

    ScriptEntry _000A
    ScriptEntry _0033
    .short 0xFD13

_000A:
    PlayFanfare 0x5DC
    LockAll
    FacePlayer
    GoToIfSet 144, _0028
    Message 0
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0028:
    Message 1
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0033:
    PlayFanfare 0x5DC
    LockAll
    FacePlayer
    ScrCmd_0CD 0
    GoToIfSet 144, _0054
    Message 2
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0054:
    Message 3
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

    .byte 0
