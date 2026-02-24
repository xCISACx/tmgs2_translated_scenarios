section "b08_m2_011"{
    Character_Chara_GS2(2, "M2_??F", 0);
    Character_ChFace(0, 0, 9);
    Voice_PlayVoice("B0802011_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", ".........");
    Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh? ｛Shiba＊＊｝! Umm...");
    Character_ChFace(0, 2, 1);
    Character_BlinkStart(2, 3, (#1));
    Voice_PlayVoice("B0802011_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Don't say a word.");
    Character_Chara_GS2(2, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_020_M00");
    Music_StopBGM(0, 40);
    }
