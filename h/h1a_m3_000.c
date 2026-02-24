section "h1a_m3_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H1A03000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nCongratulations on the championship!\nIt was really good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!\nBut the ones who actually worked\nhard were all the players.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A03000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You too, right?\nYou did your best at the jobs of a\nmanager, so that the players could\nbe devoted to baseball.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1A03000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That's why there is no need to be\npolite.\nBe as elated as you want, to the\npoint that it makes me regret not\nbeing in the club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A03000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... It was close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.... We lost.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H1A03000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "In terms of the match, it was\ncertainly a disappointing result.\nBut...\nyour serious attitude towards this\nwas second to none.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A03000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The players too, but you the manager\nas well.\nDidn't you do your very best?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A03000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAlthough it is vexing, it's not\nsomething to be upset over.\nIt was a good match.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... I have to cheer up!\nBeing able to come all the way to\nthis point is not something to\nregret.)");
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    }
