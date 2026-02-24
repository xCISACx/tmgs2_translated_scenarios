section "b03_m2_100"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
    Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0302100_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "It would be nice if the skating rink\nwasn't so crowded.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 100);
    }
