section "w11_m1_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(1, "M1_??F", 0);
    Voice_PlayVoice("W1101000_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This was really fun.\nWell, for me it was.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Thank you!");
    Character_ChFace(0, 0, 9);
    Voice_PlayVoice("W1101000_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I'm tired...");
    Character_Chara_GS2(1, "NON");
    Parameter_AddCh1Param(1, 60, 1);
    Parameter_AddCh1Param(1, 62, #1);
    Parameter_AddCh1Param(1, 86, 1);
    }
