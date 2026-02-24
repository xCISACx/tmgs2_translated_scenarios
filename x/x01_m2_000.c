section "x01_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Will your results be that good on\nthe next test?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You've been drawing some good\npictures, lately.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You've been looking pleasant,\nrecently.\nWas something referred to you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Your body is looking firmer, lately.");
        Voice_PlayVoice("X0102000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Now teach me your good training\nmethod.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Something's different......\nIn a good way.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
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
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("X0102000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Looks like you're in a good mood.\nDo your best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
