section "y01_m7_005"{
    Still_Event("EV_07_06", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0107001_G01200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
