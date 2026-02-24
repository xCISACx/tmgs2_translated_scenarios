section "y01_m4_010"{
    Still_Event("EV_04_09", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0104003_D00700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
