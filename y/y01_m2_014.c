section "y01_m2_014"{
    Still_Event("EV_02_16", #1, 0, 60);
    Still_StillFace(0, 0, 1);
    Screen_WipeIn(2);
    Voice_PlayVoice("R0802000_B02400", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_StillFace(0, 0, 0);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
