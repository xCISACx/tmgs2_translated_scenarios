section "b08_m3_011"{
    Character_Chara_GS2(3, "M3_??F", 0);
    Character_ChFace(0, 2, 1);
    Character_BlinkStart(3, 2, (#1));
    Character_ChFace(0, 3, 5);
    Voice_PlayVoice("B0803011_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", ".........\nIt seems like I'm interrupting\nyou....\nExcuse me.");
    Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝!?");
    Character_Chara_GS2(3, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_020_M00");
    Music_StopBGM(0, 40);
    }
