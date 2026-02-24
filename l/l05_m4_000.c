section "l05_m4_000"{
    Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
    Character_ChFace(0, 2, 5);
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(4, "M4_01F", 0);
    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
    Voice_PlayVoice("L0404000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Oh. You came to deliver chocolate?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, you knew. Here.");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_04_020_00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Isn't this a bit too cheap for my\nconsultation fee?\nWell, just handing me something is\ngood.");
        Character_Chara_GS2(4, "NON");
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, 6);
        Parameter_AddCh1Param(4, 62, 0);
        Parameter_InCh1Param(4, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_04_020_00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Huh, you went all out.\nThat means you went even more out\nfor the person you like, right?\n... That's fine.");
        Character_Chara_GS2(4, "NON");
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 10);
        Parameter_AddCh1Param(4, 62, #1);
        Parameter_InCh1Param(4, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("FD_04_020_00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nI'll take it, but if you're gonna\nget me to taste it first, at least\nbring it on the day before\nValentine's Day!");
        Character_Chara_GS2(4, "NON");
        Parameter_AddCh1Param(4, 61, 6);
        Parameter_AddCh1Param(4, 60, 10);
        Parameter_AddCh1Param(4, 62, #3);
        Parameter_InCh1Param(4, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
