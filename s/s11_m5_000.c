section "s11_m5_000"{
    int var0;
    if (Parameter_GetCh1Param(5, 335) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Chris＊＊｝\ngot?)");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("S1105000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Small luck.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Small luck...\nAh, slightly good luck.");
        Voice_PlayVoice("S1105000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I do love small luck.\nDon't you think it's cute?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, my fortune's not bad, either.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1105000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Seems like something good is in\nstore.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Giggles* ｛Chris＊＊｝ is\nreally happy.)");
        }
    else if (Parameter_GetCh1Param(5, 335) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Chris＊＊｝\ngot?)");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("S1105000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's wrong?");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("S1105000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Great luck...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What, you got great luck?\nGood for you!");
        Voice_PlayVoice("S1105000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "A normal luck would have been fine.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Why?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1105000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Having great luck makes me feel\narrogant.\nI prefer to be modest and get normal\nluck.");
        Voice_PlayVoice("S1105000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm hoping to get just ordinary good\nluck next time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm... I wonder...)");
        }
    else if (Parameter_GetCh1Param(5, 335) == 2){
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Chris＊＊｝\ngot?)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_??F", 0);
            Voice_PlayVoice("S1105000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Small luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Small luck...\nAh, slightly good luck.");
            Voice_PlayVoice("S1105000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I do love small luck.\nDon't you think it's cute?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, my fortune's not bad, either.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1105000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Seems like something good is in\nstore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Giggles* ｛Chris＊＊｝ is\nreally happy.)");
            }
        else if (var0 >= 51){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Chris＊＊｝\ngot?)");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(5, "M5_??F", 0);
            Voice_PlayVoice("S1105000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What the--");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1105000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Great luck...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What? You got great luck?\nGood for you!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("S1105000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "A normal luck would have been fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Why?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1105000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Having great luck makes me feel\narrogant.\nI prefer to be modest and get normal\nluck.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("S1105000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm hoping to get just ordinary good\nluck next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm... I wonder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 335, 1);
    }
