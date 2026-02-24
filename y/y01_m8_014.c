section "y01_m8_014"{
    Still_Event("EV_08_13", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("P2308000_H01600", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
