section "h1a_m5_000"{
    Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Voice_PlayVoice("H1A05000_E00300", 5, "H1A05000_E00301");
            Message_Who(5);
            Message_MsgDisp("Chris", "Amazing, ｛主人公｝!\nThe national championships!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!\nBut the ones who actually worked\nhard were all the players.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1A05000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What are you saying～～.\nYou also did your best, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("H1A05000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Look, they're going.\nYou're the main star, today!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'm going.");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Voice_PlayVoice("H1A05000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... That was bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A05000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nThat \"the world is over face\"\ndoesn't suit you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "But...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H1A05000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Don't say \"but\".\nThe game went bad, but everyone\nexhausted all of their energy for\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A05000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you wanna cry, I'll lend you my\narm or chest, so lift your head up,\nokay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...\nThanks, ｛Chris＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nI didn't do anything regrettable as\nthe Baseball Club's manager.)");
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    }
