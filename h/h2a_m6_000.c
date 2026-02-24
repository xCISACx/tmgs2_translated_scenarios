section "h2a_m6_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A06000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yay! Senpai, you did it!\nYou're the national champion!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks!");
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("H2A06000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Amazing... You really did it.\nI'm kind of seeing you in a new\nlight.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A06000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The one who worked and did their\nbest until the very end was me, when\nI was cheering!\nBe grateful!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Sure.");
            Character_BlinkStart(6, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2A06000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was a joke! ...\nI didn't do anything.");
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("H2A06000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But I'm glad if I was of help to\nyou...\nprobably.\nI'm really glad I'm in the Cheer\nSquad!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.)");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "I lost.... Sorry.");
            Voice_PlayVoice("H2A06000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Don't apologize!\nYou were really cool, Senpai!\nYou will always be better than your\nopponent!!");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A06000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You looked different then usual when\nyou were playing, it was a little\nscary...");
            Character_BlinkStart(6, 0, (#1));
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2A06000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But you were really cool!\nEven the people cheering you on\ncould see that!\nThat's why I'll do my best, too...");
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("H2A06000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Anyway, I will give you a reward for\nyour faultless playing.\nSo... cheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though we lost, I'm glad I\nstayed in the Lacrosse Club.)");
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    }
