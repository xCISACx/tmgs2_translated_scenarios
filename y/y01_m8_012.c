section "y01_m8_012"{
    Still_Event("EV_08_11", #1, 0, 60);
    Still_StillFace(0, 0, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0208000_H01000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
