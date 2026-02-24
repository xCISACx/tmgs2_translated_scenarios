section "x01_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You've been in a good mood lately!\nIf you teach me, I'll study so my\ngrades will get better!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I like your recent drawings.\nThey're good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I sense you've improved.\nLooks like you're learning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Did you become quicker than before?\nDo your best with your health.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Your coordination's been good,\nlately!\nCan you make me your apprentice?");
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
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("X0104000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Why are you working hard lately with\nyour club activities?\nLet's not forget to focus on the\ngood things!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
