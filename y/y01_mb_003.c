section "y01_mb_003"{
    Still_Event("EV_92_04", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("NS_92_000_19800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_92_04", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
