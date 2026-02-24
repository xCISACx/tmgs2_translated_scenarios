section "h36_m5_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("", 5, "H3605000_E00000");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝. Congrats～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Chris＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I won!)");
            }
        else {
            Voice_PlayVoice("", 5, "H3605000_E00100");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝, you came\nfirst.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did!\nThanks for cheering me on too,\n｛Chris＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3605000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was nothing... *Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3605000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was actually on the edge of my\nseat near the end, I couldn't\nbreathe.");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("H3605000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I felt like I was running with you.\nI'm glad you won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H3605000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I was close, too...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H3605000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well, I'll expect great things from\nyou next time!\nIt's not gonna end like this, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'll win next time!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright! I should train more!)");
            }
        else {
            Voice_PlayVoice("H3605000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... That was unlucky.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3605000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, you don't have time to be down!\nYou've found out what you need to\nwork on, right?");
            Voice_PlayVoice("H3605000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I will cheer for you until the very\nend, so do your best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Thanks, ｛Chris＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I have to practice more!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
