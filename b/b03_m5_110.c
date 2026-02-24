section "b03_m5_110"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Character_BlinkStart(5, 2, (#1), 2);
    Character_ChFace(1, 4, 1);
    Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305110_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Swimsuits, swimsuits▼ I'm really\nlooking forward to it.\nNow then, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 110);
    }
