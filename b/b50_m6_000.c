section "b50_m6_000"{
    Character_Chara_GS2(6, "M6_??F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Aah... ｛Amachi＊＊｝!");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("FD_06_000_00000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Aah, I'm sorry, I...\nMaybe next time will be like this,\ntoo!");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(6, "NON");
    }
