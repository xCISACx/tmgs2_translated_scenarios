section "b50_m8_000"{
    Character_Chara_GS2(8, "M8_D?F", 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 3);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Masaki-senpai.");
    Voice_PlayVoice("FD_08_000_00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Ah... Sorry! I'll call you later.\nSee you.");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(8, "NON");
    }
