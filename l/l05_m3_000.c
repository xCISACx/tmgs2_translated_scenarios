section "l05_m3_000"{
    Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_01F", 0);
    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
    Voice_PlayVoice("", 3, "L0403000_C00100");
    Message_Who(3);
    Message_MsgDisp("Hikami", "｛主人公｝.\nDo you need something from me?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Today's Valentine's Day!\nHere, it's chocolate.");
    if (Parameter_GetPl1Param(36) == 1){
        Voice_PlayVoice("FD_03_020_00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is prohibited to carry sweets at\nschool...\nBut today is a special day.\nI pray for your success.");
        Character_Chara_GS2(3, "NON");
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, 6);
        Parameter_AddCh1Param(3, 62, 0);
        Parameter_InCh1Param(3, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_03_020_00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Thank you.\nI see, what beautiful wrapping...\nThis would make anyone happy!");
        Character_Chara_GS2(3, "NON");
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 10);
        Parameter_AddCh1Param(3, 62, #1);
        Parameter_InCh1Param(3, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("FD_03_020_00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "T-This is hand made, isn't it?\nThis is amazing!\nI will gratefully share this with\nyou.");
        Character_Chara_GS2(3, "NON");
        Parameter_AddCh1Param(3, 61, 6);
        Parameter_AddCh1Param(3, 60, 10);
        Parameter_AddCh1Param(3, 62, #3);
        Parameter_InCh1Param(3, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
