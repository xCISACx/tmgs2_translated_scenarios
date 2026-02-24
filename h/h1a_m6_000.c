section "h1a_m6_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A06000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Amazing, Senpai!\nCongratulations on winning the\nchampionship!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Voice_PlayVoice("H1A06000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You worked hard, Senpai.\nIsn't it great?\nThe results of your effort showed.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A06000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I was also cheering the team on, but\nI feel like I should have been with\nSenpai, on the baseball...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1A06000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Ah, no! It's nothing!\nAnyway, that was good!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager.\nThis is the best day.)");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A06000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "They lost. Did I not cheer enough?\nI had planned on doing my best\nthough...");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, that's not it. But... we lost.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H1A06000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please don't make such a pathetic\nface.\nDidn't you do your very best? ...\nIf you did, then you should be\nproud.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H1A06000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If there's anyone making fun of\nSenpai, I'll knock 'em out for you!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1A06000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Kidding! Senpai, cheer up.\nShould I cheer you on, Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... I have to cheer up!\nBeing able to come all the way to\nthis point is not something to\nregret.)");
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    }
