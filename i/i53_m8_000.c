section "i53_m8_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("A02", "M8", 300);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
