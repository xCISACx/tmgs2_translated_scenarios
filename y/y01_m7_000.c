section "y01_m7_000"{
    Still_Event("EV_07_01", #1, 0, 60);
    Still_StillFace(0, 0, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0507000_G00600", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 0);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
