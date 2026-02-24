section "y01_m6_013"{
    Still_Event("EV_06_13", #1, 0, 60, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("R0806000_F00700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
