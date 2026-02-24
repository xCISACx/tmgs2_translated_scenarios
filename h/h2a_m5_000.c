section "h2a_m5_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝! You won!");
            Voice_PlayVoice("H2A05000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Chris＊＊｝?\nWhat's up?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H2A05000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your cute uniform is all muddy...\nAnd sweaty...");
            Voice_PlayVoice("H2A05000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hurry up and change.\nIt'd be bad if people saw you like\nthat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...... ｛Chris＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A05000_E01000", 5, "H2A05000_E01001");
            Message_Who(5);
            Message_MsgDisp("Chris", "Congrats, ｛主人公｝.\nLet's celebrate today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "We lost...");
            Voice_PlayVoice("H2A05000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... It was bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A05000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nI was watching you the entire game.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A05000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were really cool, running around\nthe entire field.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Character_BlinkStart(5, 0, (#1));
            Voice_PlayVoice("H2A05000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nAnd also, even though you lost the\ngame, you won the match.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? What do you mean?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A05000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're today's MVP.\nIn terms of how hard you worked, and\nin terms of cuteness, you were by\nfar the best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're praising me too much...\nBut...\nthank you, ｛Chris＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Although we lost the game...\nI'm glad I stayed in the Lacrosse\nClub.)");
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    }
