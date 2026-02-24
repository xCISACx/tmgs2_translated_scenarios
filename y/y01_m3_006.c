section "y01_m3_006"{
    Still_Event("EV_03_08", #1, 0, 60);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(2, "SS_T_00_100_M00");
    System_ButtonWait();
    SoundEffect_StopStream(2, 40);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
