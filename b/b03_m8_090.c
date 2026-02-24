section "b03_m8_090"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_FP400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308090_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Mihara...\nI hear his name in school a lot.\nHe's a celebrity from Haba Academy.\nThis is my first time seeing his\nwork.");
    Character_ChFace(0, 7, 0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 95);
    }
