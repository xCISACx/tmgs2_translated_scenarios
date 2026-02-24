section "y01_m6_016"{
    Still_Event("EV_06_16", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0206000_F01500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_06_16", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
