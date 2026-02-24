section "x01_m7_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You seem happy when you study.\nWell done! I am impressed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is that art?\nEven Sensei can understand it.\nAs a teacher, I praise your art.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 1);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Fashion.\nEven Sensei knows you're popular.\nIt's true.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Exercise is good.\nYou should do it steadily.\nOh, but it is not for me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "When one becomes too beautiful, it\nbecomes hard for Sensei to teach.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 5){
        if (Parameter_GetPl1Param(25) == 1){
            Background_Bg_GS2("BG_SCA10_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 2){
            Background_Bg_GS2("BG_SCA20_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 3){
            Background_Bg_GS2("BG_SCA30_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 4){
            Background_Bg_GS2("BG_SCA40_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 5){
            Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 6){
            Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 7){
            Background_Bg_GS2("BG_SCA70_?_0", 1, #1, 0);
            }
        else if (Parameter_GetPl1Param(25) == 8){
            Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
            }
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week was perfect!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("X0107000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You seem to be a big success in club\nactivities.\nI am very proud.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
