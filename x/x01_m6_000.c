section "x01_m6_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Lately, you've been studying hard.\nKeep at it. It's good!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You've been like a genius artist\nthese pass several days, Senpai.\nCan I get your autograph?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I know a lot about Senpai these\ndays.\nYou look good!\nYou do chase after fashion, after\nall!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Your waist looks a little tight or\nsomething.\nIs it the result of exercise?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I feel the atmosphere becoming\nbetter around you, Senpai.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
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
        Message_MsgDisp("主人公", "(I did perfect this week!)");
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("X0106000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Senpai, you'll get tired!\nYou're in youthful club activities.\nThat's a good thing!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
