section "b03_m1_130"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 2);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301130_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Should we go?\nTell me if there's a store selling\nstuff that I might be able to use.");
    Character_Chara_GS2(1, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 130);
    }
