section "f99_m2_000"{
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Voice_PlayVoice("FD_02_190_00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "What's wrong?\nDid you do something bad?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Y-Yeah.... You know?");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("FD_02_190_00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Kind of. Anyway, chin up.\nI'll pray so that you won't fail\nnext time.");
    }
