section "y01_m4_005"{
    Still_Event("EV_04_05", #1, 0, 60);
    Still_StillFace(0, 0, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0504003_D01500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Still_StillFace(0, 0, 2);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
