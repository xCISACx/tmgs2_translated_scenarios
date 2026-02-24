section "y01_m8_006"{
    Still_Event("EV_08_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508002_H00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
