section "y01_m3_008"{
    Still_Event("EV_03_10", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0103005_C01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 2, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
