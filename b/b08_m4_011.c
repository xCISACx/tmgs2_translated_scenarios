section "b08_m4_011"{
    Character_Chara_GS2(4, "M4_??F", 0);
    Character_ChFace(0, 0, 8);
    Voice_PlayVoice("B0804011_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "......");
    Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hariya＊＊｝!?");
    Character_BlinkStart(4, 2, (#1));
    Voice_PlayVoice("B0804011_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... I don't understand. Goodbye.");
    Character_Chara_GS2(4, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_020_M00");
    Music_StopBGM(0, 40);
    }
