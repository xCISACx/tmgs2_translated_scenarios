section "b03_m8_080"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 2, 4);
    Character_BlinkStart(8, 2, (#1), 2);
    Character_ChFace(1, 3, 3);
    Background_Bg_GS2("BG_FP300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308080_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Here is a strange plant.\nIt's lovely and I'm fond of it.");
    Character_ChFace(1, 7, 0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 80);
    }
