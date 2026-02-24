section "y01_m1_006"{
    Still_Event("EV_01_07", #1, 0, 60);
    Still_StillFace(0, 6, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0101001_A00800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_01_07", #1, 1, 60);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
