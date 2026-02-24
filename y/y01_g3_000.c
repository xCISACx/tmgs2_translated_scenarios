section "y01_g3_000"{
    Still_Event("EV_12_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0112001_L01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
