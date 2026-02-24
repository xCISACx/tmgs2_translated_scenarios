section "y01_m4_004"{
    Still_Event("EV_04_04", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_04_CG_D00400", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
