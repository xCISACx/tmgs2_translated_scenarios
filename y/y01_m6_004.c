section "y01_m6_004"{
    Still_Event("EV_06_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0506003_F00800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
