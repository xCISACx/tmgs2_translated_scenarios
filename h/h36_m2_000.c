section "h36_m2_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("H3602000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I was surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("H3602000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. I'm seeing you in a new light.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I'm glad I did my best!)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("H3602000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You're quite fast. That's amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks.\nI was feeling good today, so I'm\nreally glad that I came 1st.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3602000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Can't you also aim for the Inter\nHigh School Championships at this\nrate?");
            Message_Who(0);
            Message_MsgDisp("主人公", "M-Maybe.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3602000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. You'd surely be able to do it.");
            Character_BlinkStart(2, 2, (#1));
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("H3602000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Do your best. I'll cheer you on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Voice_PlayVoice("H3602000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Too bad......\nYou should think of it as a new\nstarting point.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right. I'll do my best next time!)");
            }
        else {
            Voice_PlayVoice("H3602000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You were close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nSo this is what I'm like right now.");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H3602000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nPeople who can recognize what their\nown strength is like will be able to\nprogress.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3602000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Also...\nYou should surely be able to become\neven better.");
            Character_BlinkStart(2, 2, (#1));
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("H3602000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'll be watching you, so do your\nbest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Thanks, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right. I'll do my best next time!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
