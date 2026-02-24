section "y01_m4_019"{
    Still_Event("EV_04_18", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("FD_04_220_01300", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_04_18", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
