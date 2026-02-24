section "y01_m9_000"{
    Still_Event("EV_09_01", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0109001_I00100", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_09_02", #1, 1, 60);
    Still_StillFace(0, 0, 0);
    System_ButtonWait();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
