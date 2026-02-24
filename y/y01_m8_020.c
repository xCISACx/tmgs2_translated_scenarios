section "y01_m8_020"{
    Still_Event("EV_08_20", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_08_00_H16100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
