section "y01_m2_007"{
    Still_Event("EV_02_08", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0102003_B00700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
