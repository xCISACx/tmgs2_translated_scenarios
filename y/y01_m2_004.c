section "y01_m2_004"{
    Still_Event("EV_02_05", #1, 0, 60);
    Still_StillFace(0, 0, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0102000_B01700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
