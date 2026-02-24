section "h3a_m5_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A05000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm dumbfounded that you won the\nchampionship.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm surprised, too.\nThanks for cheering me on too,\n｛Chris＊＊｝!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A05000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "*Sigh*...\nI seriously won't be able to handle\nit if you look even better than you\ndo now.");
            Voice_PlayVoice("H3A05000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "How many times do you plan on making\nme fall in love with you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A05000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're a real bad girl...\nAh, they're calling you.\nWe'll talk later.");
            Voice_PlayVoice("H3A05000_E00600", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. Congrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A05000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("D0105004_E00900", 5, "H3A05000_E01301");
            Message_Who(5);
            Message_MsgDisp("Chris", "... ｛主人公｝.\nLift your head up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H3A05000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You practiced a lot and you went at\nit with all your strength.\nI think it's amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nIt's like you're trying to hint\nsomething to me.");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A05000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm here for you.\nI'm here to be used by you....\nDid it work?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah, it did.\nThanks, ｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A05000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're welcome▼ As expected, you're\ncuter when you smile.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was unfortunate today...\nBut I'm really glad I stayed in the\nTrack and Field Club.)");
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    }
