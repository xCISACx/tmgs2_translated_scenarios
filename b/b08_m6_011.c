section "b08_m6_011"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0806011_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Ah. I'm sorry... Goodbye!");
        Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!?");
        Character_Chara_GS2(6, "NON");
        SoundEffect_PlayStream(3, "SS_T_00_020_M00");
        }
    else if (Parameter_GetCh1Param(6, 130) >= 3){
        Character_Chara_GS2(6, "M6_??F", 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0806011_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hmph, I get the picture....\nUnderstood. Bye.");
        Music_PlayBGM(0, "MN_S_00_Z42_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!?");
        Character_Chara_GS2(6, "NON");
        SoundEffect_PlayStream(3, "SS_T_00_020_M00");
        }
    Music_StopBGM(0, 40);
    }
