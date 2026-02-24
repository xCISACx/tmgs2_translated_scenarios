section "y01_m3_011"{
    Still_Event("EV_03_13", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("P2403000_C00200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
