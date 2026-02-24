section "l05_m2_000"{
    Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
    Voice_PlayVoice("", 2, "L0402000_B00100");
    Message_Who(2);
    Message_MsgDisp("Shiba", "｛主人公｝. What's up?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Here! It's Valentine's chocolate.");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("FD_02_020_00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "For me? ...\nAh, obligatory chocolate. I see.\nThanks.");
        Character_Chara_GS2(2, "NON");
        Parameter_AddCh1Param(2, 61, 0);
        Parameter_AddCh1Param(2, 60, 6);
        Parameter_AddCh1Param(2, 62, 0);
        Parameter_InCh1Param(2, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("FD_02_020_00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What's gonna happen if you spend all\nthis money on me?\nAnyway, thanks.");
        Character_Chara_GS2(2, "NON");
        Parameter_AddCh1Param(2, 61, 3);
        Parameter_AddCh1Param(2, 60, 10);
        Parameter_AddCh1Param(2, 62, #1);
        Parameter_InCh1Param(2, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("FD_02_020_00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "This... Are you serious? ...\nSomething's wrong if you're not\nmistaking who you should give this\nto.");
        Character_Chara_GS2(2, "NON");
        Parameter_AddCh1Param(2, 61, 6);
        Parameter_AddCh1Param(2, 60, 10);
        Parameter_AddCh1Param(2, 62, #3);
        Parameter_InCh1Param(2, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
