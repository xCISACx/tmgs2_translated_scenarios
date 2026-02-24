section "y01_m2_003"{
    Still_Event("EV_02_04", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0502003_B00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
