section "b08_m1_011"{
    Character_Chara_GS2(1, "M1_??F", 0);
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(1, 2, (#1));
    Voice_PlayVoice("B0801011_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, hi.");
    Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
    Voice_PlayVoice("B0801011_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Ah, I'm interrupting something.");
    SoundEffect_PlayStream(3, "SS_T_00_004_M00");
    Character_Chara_GS2(1, "NON");
    Music_StopBGM(0, 40);
    }
