section "y01_m4_000"{
    Still_Event("EV_04_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0204100_D00800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
