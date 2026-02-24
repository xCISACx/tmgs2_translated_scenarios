section "x02_g3_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah!\nYou still facing all that studying?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Is that your original picture?\nFrom an odd degree it looks clear...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "No good, no good!\nYou gotta be more attuned to the\nworld, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(12, 3, (#1));
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "You're so spastic!\nA little more and I'll whack ya!!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(12, 3, (#1));
        Character_ChFace(0, 3, 1);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "To be frank, your taste is too old!\nYou should be more polished, like\nmyself!\nIt's no good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
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
        Message_MsgDisp("主人公", "(This week didn't go well...)");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(12, 3, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("X0212000_L00500", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Hey, what's it half-done for?\nYou should put in more motivation!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    else if (Parameter_ChkPlayer(8) == 6){
        if (Parameter_ChkPlayer(7) == 1){
            Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week was perfect!!)");
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("X0212000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Ah, how fun!\nOf course, when you're playing, I'm\nhappy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I did it!)");
            }
        else {
            Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This week didn't go so well...)");
            Character_BlinkStart(12, 3, (#1));
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("X0212000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Something's not right this week.\nYou didn't give it your all?\nWhy not?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh... How heartbreaking...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
