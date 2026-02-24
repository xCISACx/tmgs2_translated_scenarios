section "h18_m5_000"{
    if (Parameter_GetCh1Param(5, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "H1805000_E00400");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝. How are you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nI'm a little nervous... perhaps.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H1805000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "............ Wah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Kyaa!? W-What?");
        Voice_PlayVoice("H1805000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Did you feel a little better?");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Ah, yeah. Maybe...");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1805000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Success～.");
        Voice_PlayVoice("H1805000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now, it's about time I go back to\nthe stands.");
        Voice_PlayVoice("H1805000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'll be watching you, so do your\nbest.");
        Message_Who(0);
        Message_MsgDisp("主人公", "If you say that to me, I'll get\nnervous again.");
        Voice_PlayVoice("H1805000_E01000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That'd be bad.\nThen I'll secretly watch you.\nLater～.");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank you,\n｛Chris＊＊｝...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
