section "y01_m7_011"{
    Still_Event("EV_07_12", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0707010_G00400", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
