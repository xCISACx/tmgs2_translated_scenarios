section "w11_m4_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(4, "M4_??F", 0);
    Voice_PlayVoice("W1104000_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I had a fun time playing like this.\nWhen you have time, let's get\ntogether, again!");
    Character_BlinkStart(4, 2, (#1));
    Voice_PlayVoice("W1104000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Today was fun! See ya later!");
    Character_Chara_GS2(4, "NON");
    Parameter_AddCh1Param(4, 60, 1);
    Parameter_AddCh1Param(4, 62, #1);
    Parameter_AddCh1Param(4, 86, 1);
    }
