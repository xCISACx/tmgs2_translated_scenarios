section "b03_m1_051"{
    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301050_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "We're a bit early.");
    Character_ChFace(1, 0, 10);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0301050_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, let's go take a look at the\nfestival stalls!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "M1_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M1", 53);
    System_Call_GS2("B04", "M1", 52);
    Date_NightDate(0, 1);
    }
