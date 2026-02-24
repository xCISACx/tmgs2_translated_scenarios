section "l05_m5_000"{
    Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Chris＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
    Voice_PlayVoice("", 5, "L0405000_E00000");
    Message_Who(5);
    Message_MsgDisp("Chris", "｛主人公｝. Hello.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Hello! Today is Valentine's Day!\nHere, it's chocolate.");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_05_020_00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Thanks....\nThis is different from his, isn't\nit?\nYeah, well done♪");
        Character_Chara_GS2(5, "NON");
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, 6);
        Parameter_AddCh1Param(5, 62, 0);
        Parameter_InCh1Param(5, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("FD_05_020_00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This looks so expensive...\nYou didn't have to worry about me.\nBut thanks.");
        Character_Chara_GS2(5, "NON");
        Parameter_AddCh1Param(5, 61, 3);
        Parameter_AddCh1Param(5, 60, 10);
        Parameter_AddCh1Param(5, 62, #1);
        Parameter_InCh1Param(5, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("FD_05_020_00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "For me? Hmm, it's troubling...\nBut thanks.");
        Character_Chara_GS2(5, "NON");
        Parameter_AddCh1Param(5, 61, 6);
        Parameter_AddCh1Param(5, 60, 10);
        Parameter_AddCh1Param(5, 62, #3);
        Parameter_InCh1Param(5, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
