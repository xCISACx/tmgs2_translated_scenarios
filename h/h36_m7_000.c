section "h36_m7_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_17F", 0);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("", 7, "H3607000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That was good,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I am very glad!");
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H3607000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It was commendable. Nice fight!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I won!)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Voice_PlayVoice("", 7, "H3607000_G00200");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I am very glad!");
            Voice_PlayVoice("H3607000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The way you used your muscles was\ngood.\nI am already looking forward to the\nnext contest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I won!)");
            }
        else {
            Voice_PlayVoice("", 7, "H3607000_G00400");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Welcome back, ｛主人公｝.\nYou did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!\nThank you very much.");
            Voice_PlayVoice("H3607000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I was cheering for all of our\nstudents equally, but...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3607000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "As expected, you are the Track and\nField Club's ace.\nI feel proud when you win.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm really glad that I won!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "H3607000_G00700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I appreciate your effort,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* I lost...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3607000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "But you ran the race.\nI will give you an award for effort.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... That was unfortunate!)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "H3607000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* I lost...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3607000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "There are days like these.\nDo not worry about it.\nYou are the Track and Field Club's\nsecret weapon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah...\nI've been made a secret weapon.)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("H3607000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You were close...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... It's unfortunate.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H3607000_G01200", 7, "H3607000_G01201");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "But ｛主人公｝.\nBeing caught up in this feeling\nstops here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H3607000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Remember my lessons.\nA chemist had made a huge discovery\nwhen one of their experiments\nfailed.");
            Character_BlinkStart(7, 0, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H3607000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is the same.\nIf you use this experience, you will\nbe able to do better next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it's vexing...\nBut I will do better next time!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
