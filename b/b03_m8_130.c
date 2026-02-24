section "b03_m8_130"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308130_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Is there a shop you want to go to?\nIf so, don't hesitate to say it.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 130);
    }
