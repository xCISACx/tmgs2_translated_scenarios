section "b03_m8_051"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308050_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It's time for the fireworks.\nLet's go to the festival.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "M8_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M8", 53);
    System_Call_GS2("B04", "M8", 52);
    Date_NightDate(0, 1);
    }
