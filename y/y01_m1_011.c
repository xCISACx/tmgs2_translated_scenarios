section "y01_m1_011"{
    Still_Event("EV_01_12", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0201000_A01500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_01_23", #1, 0, 60);
    System_ButtonWait();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
