section "y01_m1_013"{
    Still_Event("EV_01_14", #1, 0, 20);
    Still_StillFace(0, 0, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("P2401000_A01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 0);
    System_ButtonWait();
    Still_StillFace(0, 0, 2);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
