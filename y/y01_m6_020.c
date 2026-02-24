section "y01_m6_020"{
    Still_Event("EV_06_20", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0206010_F00900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_06_20", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
