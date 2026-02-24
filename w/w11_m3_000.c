section "w11_m3_000"{
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(3, 2, (#1), 1);
    Character_Chara_GS2(3, "M3_??F", 0);
    Voice_PlayVoice("W1103000_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Today was nice for a change.");
    Voice_PlayVoice("W1103000_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I played earnestly without worrying\nabout anything.\nThis is nice to do occasionally....\nWell, let's do it again.");
    Character_Chara_GS2(3, "NON");
    Parameter_AddCh1Param(3, 60, 1);
    Parameter_AddCh1Param(3, 62, #1);
    Parameter_AddCh1Param(3, 86, 1);
    }
