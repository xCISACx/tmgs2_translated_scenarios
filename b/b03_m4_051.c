section "b03_m4_051"{
    Character_Chara_GS2(4, "M4_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0304050_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Have the fireworks begun, yet?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "M4_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M4", 53);
    System_Call_GS2("B04", "M4", 52);
    Date_NightDate(0, 1);
    }
