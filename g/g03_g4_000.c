section "g03_g4_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(......?)");
    Character_ChFace(0, 0, 8);
    Character_Chara_GS2(13, "G4_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Mizushima＊＊｝......");
    Voice_PlayVoice("G0313000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "... I'll never forgive you.\nNo matter what happens, I'll never\nhand him over.");
    SoundEffect_PlayStream(2, "SS_T_00_035_M00");
    Character_Chara_GS2(13, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Mizushima＊＊｝......");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
