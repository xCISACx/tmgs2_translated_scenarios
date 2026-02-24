section "b03_m5_051"{
    Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305050_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Hey.\nDo you want to go around to the\nfestival stalls before the fireworks\nstart?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(5, "M5_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M5", 53);
    System_Call_GS2("B04", "M5", 52);
    Date_NightDate(0, 1);
    }
