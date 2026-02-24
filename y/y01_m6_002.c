section "y01_m6_002"{
    Still_Event("EV_06_03", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0506001_F00900", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 3, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
