section "q01_pl_003"{
    Background_Bg_GS2("BG_SCB40_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Today was the 4th group activity.\nI'm exhausted after getting back and\nmy schedule's quite tight...");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("Q00", "PL", 0);
    }
