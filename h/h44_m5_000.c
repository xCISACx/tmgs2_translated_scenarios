section "h44_m5_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H4405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "No.\nI'm here to cheer the Cheerleading\nClub on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh～!?\nMeaning you're going to cheer for\ncheerleaders?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI'm actually the leader of the cheer\nsquad for the Cheerleading Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nA cheer squad for the Cheerleading\nClub?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So let's both do our best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, I feel determined.\nAlright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H4405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hm?\nDoes the Baseball Club have a game\non today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? What did you think?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was only thinking about the\nCheerleading Club.\nI came here to cheer you on▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha. Then I must do my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ came to watch\nas well, so I have to do my best to\ncheer!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H4405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you here to cheer on the Track\nand Field Club?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I came to observe the Track and\nField Club.\nIt's amazing watching the girls do\ntheir best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh...");
            Voice_PlayVoice("H4405000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I came here to cheer on the\nCheerleading Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Meaning you're going to cheer for\ncheerleaders?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI'm actually the leader of the cheer\nsquad for the Cheerleading Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nA cheer squad for the Cheerleading\nClub?");
            Voice_PlayVoice("H4405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So let's both do our best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, I feel determined.\nAlright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you here to cheer on the Track\nand Field Club?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hm?\nDid they have something on today?\nHow lucky.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? What did you think?");
            Voice_PlayVoice("H4405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was only thinking about the\nCheerleading Club.\nI came here to cheer you on▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha. Then I must do my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ came to watch\nas well, so I have to do my best to\ncheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
