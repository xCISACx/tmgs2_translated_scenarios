section "y01_m6_005"{
    Still_Event("EV_06_06", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0106000_F00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
