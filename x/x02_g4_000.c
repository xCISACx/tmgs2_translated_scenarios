section "x02_g4_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Is your health bad?\nTake a breather and let's do our\nbest.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(13, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hmm... Did you fail?\nLet's work hard without being\ndiscouraged.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(13, 3, (#1));
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Is fashion such a serious thing?\nDon't be too disappointed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(13, 3, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Is the condition of your body that\nbad?\nDon't overwork or you'll injure\nyourself.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did badly this week...)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00400", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Why has your feelings changed?\nDon't be too disappointed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
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
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("X0213000_M00500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I guess you're a little tired.\nDo you need to take a proper break?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh...*)");
        }
    else if (Parameter_ChkPlayer(8) == 6){
        if (Parameter_ChkPlayer(7) == 1){
            Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week was perfect!)");
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("X0213000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Were you happy this week?\n*Giggles*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I did it!)");
            }
        else {
            Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week didn't go well...)");
            Character_BlinkStart(13, 2, (#1));
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("X0213000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Hey, try not to overdo it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I'm disappointed...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
