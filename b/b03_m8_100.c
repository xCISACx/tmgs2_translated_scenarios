section "b03_m8_100"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308100_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I hope it isn't crowded that much.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 100);
    }
