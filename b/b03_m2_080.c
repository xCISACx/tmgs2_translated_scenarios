section "b03_m2_080"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0302080_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Should we go in?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 80);
    }
