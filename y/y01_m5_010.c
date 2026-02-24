section "y01_m5_010"{
    Still_Event("EV_05_09", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0105002_E00400", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
