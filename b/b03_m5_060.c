section "b03_m5_060"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305060_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Since we're taking a walk, let's\njust take it easy.");
    Character_Chara_GS2(5, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 60);
    }
