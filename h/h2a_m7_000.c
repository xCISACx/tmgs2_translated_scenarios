section "h2a_m7_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "H2A07000_G00300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nCongratulations on winning the\nchampionships.\nYou worked very hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much,\n｛Wakaouji＊＊｝!");
            Voice_PlayVoice("H2A07000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Your individual technique was\nextraordinary.\nYou also looked out for the entire\nteam during the game.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A07000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nI think that there will be many\nteams that will be wanting you.\nBut don't forget your own\nindividuality.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A07000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... No, it's nothing.\nAnyway, congratulations on winning\nthe championships.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "H2A07000_G01000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nThe result was unfortunate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... It's vexing.");
            Voice_PlayVoice("H2A07000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I also wanted to see you smile.\nBut it is different now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Eh?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A07000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Going at it with all your effort,\nyour feelings...\nare hidden behind your tears.");
            Voice_PlayVoice("H2A07000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It would be a shame to see your\nhardworking self fade away just\nbecause of this match.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A07000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So I want you to praise yourself\nnow.\n\"I did well.\"\nWill you show me how strong your\nheart is?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right, I did everything I could...\nI have no regrets!)");
            }
        }
    Parameter_AddCh1Param(7, 86, 1);
    }
