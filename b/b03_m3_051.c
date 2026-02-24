section "b03_m3_051"{
    Character_Chara_GS2(3, "M3_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303050_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "There is still time before the\nlaunch....\nSince we are here, let us go around\nto the festival stalls.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(3, "M3_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M3", 53);
    System_Call_GS2("B04", "M3", 52);
    Date_NightDate(0, 1);
    }
