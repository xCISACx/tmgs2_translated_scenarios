section "y01_m1_009"{
    Still_Event("EV_01_10", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("D0101004_A00500", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
