section "y01_m4_020"{
    Still_Event("EV_04_19", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("P2404000_D01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_04_12", #1, 1, 60);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
