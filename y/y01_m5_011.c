section "y01_m5_011"{
    Still_Event("EV_05_10", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0105003_E01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
