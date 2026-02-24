section "h2a_m2_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for cheering us on,\n｛Shiba＊＊｝.\nBecause of that, we won.");
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H2A02000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You won because of your abilities.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A02000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm glad I could see you take the\nchampionships.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2A02000_B00400", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Congrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "H2A02000_B00700");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.\nThat was bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H2A02000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nBut you were the brightest person on\nthe field.\nAt least that's what I saw.");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H2A02000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Although the result was bad...\nit doesn't mean the world ends\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2A02000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Anyway, rest up today.\nYou worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nThank you, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Although we lost the match...\nI'm glad I stayed in the Lacrosse\nClub.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
