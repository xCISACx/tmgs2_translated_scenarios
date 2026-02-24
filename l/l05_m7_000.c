section "l05_m7_000"{
    Background_Bg_GS2("BG_SC340_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_01F", 0);
    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
    Voice_PlayVoice("", 7, "L0407000_G00100");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("FD_07_020_00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, this...\nis splendid obligatory chocolate.\nWill you be giving chocolate to him\nafter?\nGood luck!");
        Character_Chara_GS2(7, "NON");
        Parameter_AddCh1Param(7, 61, 0);
        Parameter_AddCh1Param(7, 60, 6);
        Parameter_AddCh1Param(7, 62, 0);
        Parameter_InCh1Param(7, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("FD_07_020_00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh, this is high quality\nchocolate...\nShould I give this to him? ...\nAm I your messenger?");
        Character_Chara_GS2(7, "NON");
        Parameter_AddCh1Param(7, 61, 3);
        Parameter_AddCh1Param(7, 60, 10);
        Parameter_AddCh1Param(7, 62, #1);
        Parameter_InCh1Param(7, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_07_020_00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "But this...\nWell, I will share it with you....\nGive it to him as well, okay?");
        Character_Chara_GS2(7, "NON");
        Parameter_AddCh1Param(7, 61, 6);
        Parameter_AddCh1Param(7, 60, 10);
        Parameter_AddCh1Param(7, 62, #3);
        Parameter_InCh1Param(7, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
