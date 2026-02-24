section "b50_m5_000"{
    Character_Chara_GS2(5, "M5_??F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Chris＊＊｝...!");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("FD_05_000_00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "... Ah...\nSorry, I will save this for next\ntime.\nSee you!");
    SoundEffect_PlayStream(3, "SS_DSE_069_000");
    Character_Chara_GS2(5, "NON");
    }
