section "b08_m5_011"{
    Character_Chara_GS2(5, "M5_??F", 0);
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("B0805011_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", ".........");
    Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Chris＊＊｝!");
    Character_ChFace(0, 0, 9);
    Voice_PlayVoice("B0805011_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "... I see. So that's how it is...");
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(5, 2, (#1));
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("B0805011_E00200", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "... S-Sorry, okay? I'll leave now.");
    Character_Chara_GS2(5, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_020_M00");
    Music_StopBGM(0, 40);
    }
