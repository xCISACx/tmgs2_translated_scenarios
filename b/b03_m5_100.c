section "b03_m5_100"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305100_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "It would be nice if it's not crowded\ninside.\nNow then, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 100);
    }
