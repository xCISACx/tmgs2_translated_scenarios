section "y01_m7_007"{
    Still_Event("EV_07_08", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0107003_G01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 2, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
