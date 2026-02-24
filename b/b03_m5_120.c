section "b03_m5_120"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305120_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Even going around to places seems\nfun.\nLet's go.");
    Character_Chara_GS2(5, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 120);
    }
