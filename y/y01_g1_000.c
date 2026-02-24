section "y01_g1_000"{
    Still_Event("EV_10_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0110000_J00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
