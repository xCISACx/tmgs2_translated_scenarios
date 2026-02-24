section "x01_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If you're in this mood for the next\ntest, it'll be perfect.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Can I see the picture you drew?\nYou truly did wonderfully.\nLet's paint together, next time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You've been an excellent star\nlately.\nYou have a very high reputation.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What the hell-- you're so slim!\nYou're even more attractive than\nbefore.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What has changed in the\natmosphere...\nOh, your tastes have improved!\nYou give off a good vibe～.");
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
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("X0105000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You have it easy with club\nactivities.\nEnjoy the high school life.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
