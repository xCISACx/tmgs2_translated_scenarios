section "y01_pl_006"{
    Still_Event("EV_01_24", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0100100_A02000", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
