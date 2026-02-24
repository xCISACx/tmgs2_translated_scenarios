section "b03_m5_080"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Character_BlinkStart(5, 2, (#1), 2);
    Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305080_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "There are also peculiar plants.\nI'm looking forward to it.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 80);
    }
