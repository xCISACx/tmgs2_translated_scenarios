section "y01_m8_003"{
    Still_Event("EV_08_02", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0208300_H01900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
