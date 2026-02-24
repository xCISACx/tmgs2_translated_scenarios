section "y01_m5_012"{
    Still_Event("EV_05_11", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0105004_E01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
