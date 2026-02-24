section "y01_m4_021"{
    Still_Event("EV_04_20", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_04_00_D08200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
