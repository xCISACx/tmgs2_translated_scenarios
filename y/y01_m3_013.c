section "y01_m3_013"{
    Still_Event("EV_03_15", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("R0803000_C01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
