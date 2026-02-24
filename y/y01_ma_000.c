section "y01_ma_000"{
    Still_Event("EV_91_01", #1, 0, 60);
    Still_StillFace(0, 0, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("NS_91_000_04000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Still_StillFace(0, 0, 2);
    System_ButtonWait();
    Still_StillFace(0, 0, 3);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
