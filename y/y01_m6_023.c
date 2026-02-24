section "y01_m6_023"{
    Still_Event("EV_06_09", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0106003_F00200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
