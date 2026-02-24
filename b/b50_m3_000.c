section "b50_m3_000"{
    Character_Chara_GS2(3, "M3_??F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
    Character_ChFace(0, 0, 6);
    Character_ChFace(0, 6, 2);
    Character_ChFace(0, 4, 0);
    Voice_PlayVoice("FD_03_000_00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... I apologize, I interrupted you.");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(3, "NON");
    }
