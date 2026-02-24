section "y01_m5_006"{
    Still_Event("EV_05_06", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0505004_E01600", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
