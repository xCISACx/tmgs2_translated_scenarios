section "i65_m6_000"{
    Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I called out to you because I was\npassing by and saw you.\nI will leave now.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I6506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "This job looks tough, so I was\nwondering if you were okay.");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("I6506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm relieved that you seem\nenergetic.\nLater!");
        }
    else {
        Voice_PlayVoice("", 6, "I6506000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nAre you working hard?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I6506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yeah.\nI came here to collect my beloved\ncar from maintenance!\nIs it done?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I6506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Kidding.\nI came here to see how you were\ndoing.");
        Character_BlinkStart(6, 0, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I6506000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Umm, when I...\nget my license, I really will buy a\ncar.\nI'll let you ride in it, Senpai.");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("I6506000_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So learn about car maintenance while\nyou're working here, okay?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I6506000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... That's all!\nI'm counting on you!!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
