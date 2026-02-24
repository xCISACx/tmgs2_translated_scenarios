section "x02_g1_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "That's pathetic.\nEither study something or just stop.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That's sad...)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_BlinkStart(10, 3, (#1));
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Your mind's so confused.\nI didn't understand anything I saw\nin that picture.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sob*...)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Did you become an old-fashioned\nwoman?\nIt's too unpleasant to accept.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sob*...)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(10, 3, (#1));
        Character_ChFace(0, 3, 1);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I don't think there is any limit to\nhow slow you can be.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sob*...)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(10, 3, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You have bad taste.\nLike you were left in old, past\ntimes.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sob*...)");
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
        Message_MsgDisp("主人公", "(This week didn't go so well...)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("X0210000_J00500", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Can you try not slacking?\nOr anything like that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sob*...)");
        }
    else if (Parameter_ChkPlayer(8) == 6){
        if (Parameter_ChkPlayer(7) == 1){
            Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week was perfect!)");
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("X0210000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You are a nice person...\nPlease continue to do well, after\nthis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I did it!)");
            }
        else {
            Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week didn't go so well...)");
            Character_Chara_GS2(10, "G1_08F", 0);
            Voice_PlayVoice("X0210000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Things like that are boring...\nI'd say it was your fault and you\nshould try doing something\ndifferent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh no... That's heartbreaking...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
