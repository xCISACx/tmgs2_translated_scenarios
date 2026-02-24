section "y01_m4_018"{
    Still_Event("EV_04_17", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0204000_D01900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_04_17", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
