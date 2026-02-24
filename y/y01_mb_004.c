section "y01_mb_004"{
    Still_Event("EV_92_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_92_CG_Y00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 6, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
