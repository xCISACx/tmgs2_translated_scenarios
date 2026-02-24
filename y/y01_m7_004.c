section "y01_m7_004"{
    Still_Event("EV_07_05", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_07_CG_G01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 2, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
