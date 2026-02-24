section "y01_m1_000"{
    Still_Event("EV_01_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_01_CG_A00000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
