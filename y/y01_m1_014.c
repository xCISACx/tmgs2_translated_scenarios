section "y01_m1_014"{
    Still_Event("EV_01_15", #1, 0, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0701010_A00700", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
