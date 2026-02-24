section "h26_m5_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H2605000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad you won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks ｛Chris＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad we won!)");
            }
        else {
            Voice_PlayVoice("H2605000_E00100", 5, "H2605000_E00101");
            Message_Who(5);
            Message_MsgDisp("Chris", "Congrats, ｛主人公｝!\nYou won!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks ｛Chris＊＊｝!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2605000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You looked cool, running on the\nfield～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though you're a little clumsy.");
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2605000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's still charming.\nSo don't worry about it▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H2605000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That was close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry we lost, even though you came\nto support us.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2605000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's fine, it's fine.\nThere's always next time, right?\nUse this as motivation to do your\nbest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...\nI have to try harder practicing!)");
            }
        else {
            Voice_PlayVoice("H2605000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That was bad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2605000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Just seeing you do your best is\nenough for me.");
            Voice_PlayVoice("H2605000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll postpone seeing your victory\nsmile, so show it to me next time,\nokay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Okay!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...\nI will try harder practicing!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
