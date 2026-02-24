section "b03_m1_120"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_BlinkStart(1, 0, (#1), 2);
    Character_ChFace(1, 3, 2);
    Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301120_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "There might be a few stores that\nsell useful things.\nAlright, let's go.");
    Character_Chara_GS2(1, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 120);
    }
