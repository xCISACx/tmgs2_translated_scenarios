section "y01_m2_008"{
    Still_Event("EV_02_09", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0102004_B03200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_02_10", #1, 1, 60);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
