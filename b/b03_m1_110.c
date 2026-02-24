section "b03_m1_110"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_BlinkStart(1, 2, (#1), 2);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301110_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Pools are...... Ah, whatever.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 110);
    }
