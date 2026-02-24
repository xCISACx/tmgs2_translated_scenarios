section "y01_m2_017"{
    Still_Event("EV_02_19", #1, 1, 60);
    Screen_WipeIn(2);
    Voice_PlayVoice("T0202000_B02800", #1, "");
    System_ButtonWait();
    Voice_StopVoice_GS2();
    Still_Event("EV_02_19", #1, 0, 60, 0, 1);
    System_ButtonWait();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
