section "b50_m4_000"{
    Character_Chara_GS2(4, "M4_??F", 0);
    Character_ChFace(0, 2, 5);
    Character_ChFace(0, 3, 2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
    Voice_PlayVoice("FD_04_000_00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "You...");
    Character_ChFace(0, 2, 1);
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("FD_04_000_00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Whatever. Contact me again.");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(4, "NON");
    }
