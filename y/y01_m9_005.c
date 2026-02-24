section "y01_m9_005"{
    Still_Event("EV_09_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0109008_I00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
