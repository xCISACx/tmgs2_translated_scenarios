section "x02_g2_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("X0211000_K00000", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Please do not be so depressed.\nWith effort you you can recover.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I will do my best...)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("", #1, "X0211000_K00100");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nYou've learned a sense of\nintimacy....\nLet's work hard together.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("X0211000_K00200", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I don't mean to be nosy, but isn't\nthat trend over with?\nAren't there other things that\nshould be done?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("X0211000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "You seem like you are in bad shape.\nLet's get psyched and do our best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("", #1, "X0211000_K00400");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝...\nAre you worried about your\nappearance?\nYou should be more modest.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sigh...)");
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
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("X0211000_K00500", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "What did you do?\nYou seem to be tired.\nPlease cheer up.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 6){
        if (Parameter_ChkPlayer(7) == 1){
            Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week was perfect!)");
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("X0211000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "It's a good feeling.\nIt's important to put in effort\nevery day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I did it!)");
            }
        else {
            Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh... this week was no good...)");
            Character_Chara_GS2(11, "G2_01F", 0);
            Voice_PlayVoice("X0211000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "You're not doing well.\nSometimes I get like this, too.\nLet's work hard without being\ndepressed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... This is so disappointing...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
