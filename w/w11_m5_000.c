section "w11_m5_000"{
    Character_ChFace(0, 2, 3);
    Character_BlinkStart(5, 3, (#1), 1);
    Character_ChFace(0, 3, 0);
    Character_Chara_GS2(5, "M5_??F", 0);
    Voice_PlayVoice("W1105000_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "*Sigh～* That was fun.\nI should thank you.\nI would love to do this, again.");
    Character_BlinkStart(5, 0, (#1));
    Voice_PlayVoice("W1105000_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "When that time comes, I wish for the\nbest.\nWell then, later.");
    Character_Chara_GS2(5, "NON");
    Parameter_AddCh1Param(5, 60, 1);
    Parameter_AddCh1Param(5, 62, #1);
    Parameter_AddCh1Param(5, 86, 1);
    }
