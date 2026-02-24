section "b03_m1_080"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 2);
    Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301080_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This place... is nice.\nNo matter what season it is when you\ncome here, it has the scent of\nsummer.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 80);
    }
