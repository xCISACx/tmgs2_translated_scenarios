section "y01_m8_007"{
    Still_Event("EV_08_06", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508003_H00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_08_19", #1, 1, 60);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
