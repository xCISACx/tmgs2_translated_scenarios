section "y01_m4_002"{
    Still_Event("EV_04_02", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0504000_D00400", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
