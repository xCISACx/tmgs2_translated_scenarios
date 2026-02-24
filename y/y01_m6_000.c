section "y01_m6_000"{
    Still_Event("EV_06_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0206000_F00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
