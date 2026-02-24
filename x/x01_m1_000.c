section "x01_m1_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You look more intelligent this week.\nAre you an honor student?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You've done much difficult art this\nweek.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You seem to be more popular this\nweek.\nIs your reputation higher?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You seem more robust lately.\nDo you help out at the store?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Huh?\nYou seem more fashionable these\ndays.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!)");
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
        Message_MsgDisp("主人公", "(This week I did my best!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("X0101000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You don't hold back in doing extra\nwork for school activities.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
