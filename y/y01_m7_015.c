section "y01_m7_015"{
    Still_Event("EV_07_16", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0207000_G01700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_07_16", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
