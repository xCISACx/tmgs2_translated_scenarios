section "y01_m8_009"{
    Still_Event("EV_08_08", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0108001_H00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
