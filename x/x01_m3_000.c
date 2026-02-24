section "x01_m3_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_ChkPlayer(8) == 0){
        Background_Bg_GS2("BG_SC311_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The teacher sent me to praise you.\nMy apprentice and I are behind him.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 1){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You have so much talent!\nIn addition, you show it when you\ndraw a picture.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You know, you are quite fashion\nsavvy.\nWill you teach me so that I am\nsuitable, as well?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 3){
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You are stronger lately.\nWell, umm...\nBeing active is a good thing!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    else if (Parameter_ChkPlayer(8) == 4){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Huh?\nThe atmosphere is different......\nOh no, I did not mean that in a bad\nway!");
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
        Message_MsgDisp("主人公", "(I did my best this week!)");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("X0103000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I hear everyone relies on you\nbecause you are a hard worker.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I did it!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
