section "h3a_m6_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A06000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Congratulations on winning the\nchampionship, Senpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A06000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Towards the end, my heart was racing\nas I was cheering.\nI thought my heart would stop!");
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("H3A06000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was racing even more because I\nwas worried whether or not you'd\nfall over.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A06000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But...\nI'm glad that you didn't get\nhurt....\nA-And also the fact that you won!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "I lost...");
            Voice_PlayVoice("H3A06000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3A06000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You were really cool today!\nWhile I was cheering you on, I\ncouldn't take my eyes off you.");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A06000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even if you were running or jumping,\nI was always watching you!\nAs if I was fascinated!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A06000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So...\nyou don't have to worry about\nwinning or losing, right?\nCheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I stayed in the Track and\nField Club.)");
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    }
