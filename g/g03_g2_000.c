section "g03_g2_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(2, "SS_T_00_034_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "(...... Hmm?)");
    Character_ChFace(0, 0, 8);
    Character_Chara_GS2(11, "G2_01F", 0);
    Voice_PlayVoice("G0311000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "............ ...... You are mean.\nI trusted you...");
    SoundEffect_PlayStream(2, "SS_T_00_035_M00");
    Character_Chara_GS2(11, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "............\n｛Onoda＊＊｝......");
    Message_CloseMsg();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
