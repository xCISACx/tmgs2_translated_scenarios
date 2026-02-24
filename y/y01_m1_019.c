section "y01_m1_019"{
    Still_Event("EV_01_20", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0201000_A03900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_01_20", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
