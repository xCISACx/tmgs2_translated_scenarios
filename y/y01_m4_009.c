section "y01_m4_009"{
    Still_Event("EV_04_08", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0104002_D00900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
