section "y01_m3_012"{
    Still_Event("EV_03_14", #1, 0, 60);
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 4, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0703010_C01600", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 4, 0);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
