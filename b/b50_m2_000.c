section "b50_m2_000"{
    Character_Chara_GS2(2, "M2_??F", 0);
    Character_ChFace(0, 2, 1);
    Character_ChFace(0, 6, 1);
    Character_ChFace(0, 3, 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
    Voice_PlayVoice("FD_02_000_00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... My bad.");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(2, "NON");
    }
