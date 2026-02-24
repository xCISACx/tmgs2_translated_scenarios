section "f99_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_BlinkStart(4, 2, (#1));
    Character_Chara_GS2(4, "M4_01F", 0);
    Voice_PlayVoice("FD_04_190_00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "What's with that gloomy face? ...\nIt's the \"I messed up face\".");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ugh......");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("FD_04_190_00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Was it a bulls-eye!?\nWell, get depressed in moderation.\nIf not, you won't be able to rise\nback up, okay?");
    }
