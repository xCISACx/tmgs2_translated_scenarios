section "b50_m7_000"{
    Character_Chara_GS2(7, "M7_06F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
    Character_ChFace(0, 0, 6);
    Character_ChFace(0, 4, 0);
    Voice_PlayVoice("FD_07_000_00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Good evening....\nYou seem to be in love.");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(7, "NON");
    }
