section "y01_m3_004"{
    Still_Event("EV_03_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0103000_C00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 6, 1);
    System_ButtonWait();
    Still_StillFace(0, 6, 3);
    Still_Event("EV_03_06", #1, 0, 60);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
