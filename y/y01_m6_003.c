section "y01_m6_003"{
    Still_Event("EV_06_04", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0506002_F01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
