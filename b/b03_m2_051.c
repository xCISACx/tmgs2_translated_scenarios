section "b03_m2_051"{
    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wow, festival stalls!");
    Voice_PlayVoice("B0302050_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nShould we go around to some before\nthe fireworks start?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(2, "M2_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M2", 53);
    System_Call_GS2("B04", "M2", 52);
    Date_NightDate(0, 1);
    }
