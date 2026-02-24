section "y01_m5_000"{
    Still_Event("EV_05_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0205100_E00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
