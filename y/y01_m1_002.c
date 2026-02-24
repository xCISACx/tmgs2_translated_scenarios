section "y01_m1_002"{
    Still_Event("EV_01_03", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("SK_01_CG_A00200", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
