section "w11_m2_000"{
    Character_Chara_GS2(2, "M2_??F", 0);
    Voice_PlayVoice("W1102000_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I'm a little tired.");
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(2, 2, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("W1102000_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I don't hate being tired like this.\nIt's not bad to do this every once\nin a while.");
    Voice_PlayVoice("W1102000_B00200", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Later, ｛主人公｝.");
    Character_Chara_GS2(2, "NON");
    Parameter_AddCh1Param(2, 60, 1);
    Parameter_AddCh1Param(2, 62, #1);
    Parameter_AddCh1Param(2, 86, 1);
    }
