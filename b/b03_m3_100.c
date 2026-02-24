section "b03_m3_100"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303100_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... Now then.\nLet us relax and enjoy ourselves.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 100);
    }
