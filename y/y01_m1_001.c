section "y01_m1_001"{
    Still_Event("EV_01_02", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0501000_A00200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Still_Event("EV_01_31", #1, 0, 60);
    Screen_WipeIn(2);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
