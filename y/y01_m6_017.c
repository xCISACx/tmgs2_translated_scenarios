section "y01_m6_017"{
    Still_Event("EV_06_17", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("FD_06_220_01600", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_06_17", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
