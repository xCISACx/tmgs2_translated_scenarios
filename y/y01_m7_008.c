section "y01_m7_008"{
    Still_Event("EV_07_09", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0207000_G00800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
