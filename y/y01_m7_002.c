section "y01_m7_002"{
    Still_Event("EV_07_03", #1, 0, 60);
    Still_StillFace(0, 0, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0507002_G01100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
