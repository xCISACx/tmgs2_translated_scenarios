section "y01_m3_001"{
    Still_Event("EV_03_02", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0503001_C00800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 2, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
