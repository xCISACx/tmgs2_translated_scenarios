section "y01_m1_004"{
    Still_Event("EV_01_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0501003_A01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
