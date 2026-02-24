section "y01_m2_013"{
    Still_Event("EV_02_15", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0702010_B02000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 2, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
