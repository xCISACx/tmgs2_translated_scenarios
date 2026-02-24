section "f10_g3_100"{
    Character_BlinkStart(12, 1, (#1), 1);
    Character_BlinkStart(12, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Character_ChFace(0, 0, 0);
    if (Parameter_GetCh1Param(12, 326) == 0){
        Parameter_AddCh1Param(12, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Nishimoto＊＊｝.");
        Character_Chara_GS2(12, "G3_01F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("F1012100_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Right...\nMy upper arms are really bad...\nYou would call them flabby...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is she talking about dieting?\nBut there's no reason for her to\nworry that much...)");
        }
    else if (Parameter_GetCh1Param(12, 326) == 1){
        Parameter_AddCh1Param(12, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Nishimoto＊＊｝.");
        Character_Chara_GS2(12, "G3_01F", 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(12, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("F1012100_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "When I'm dieting, I wonder why the\nplaces I don't want to slim down,\nslim down.\nIsn't that strange!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It feels as if\n｛Nishimoto＊＊｝ gets quite\nheated when talking about\ndieting...)");
        }
    else if (Parameter_GetCh1Param(12, 326) == 2){
        Parameter_AddCh1Param(12, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Nishimoto＊＊｝.");
        Character_Chara_GS2(12, "G3_01F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("F1012100_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Eh, you're going to eat cake!?\nM-Me too... No, I must hold back...\nBut I want to eat cake～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it seems really painful...\nBut it seems like with that state of\nmind, she's going to go!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
