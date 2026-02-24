section "h1a_m7_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "H1A07000_G00300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝,\ncongratulations on winning the\nnational championships.\nYou really did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!\nBut the ones that did their best are\nthe players on the ground.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A07000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You are mistaken.\nYou were also fighting on the ground\nwith the players, with your\nfeelings.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A07000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So please say something with more\nconfidence.\nLike \"I am also a championship\nmember\".");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...\nThank you very much!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!\nThis is the best day.)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "H1A07000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Lift your head up,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "But...\nEveryone has been doing their best,\nup until this point...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1A07000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Are you crying for the players?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A07000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Not because you are sad, but for the\nsake of the players you supported...\nThat is sympathy, that is\nfriendship...");
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("", 7, "H1A07000_G01200");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nI must thank you.\nMy heart has warmed up, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A07000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Now then, wipe away your tears.\nThanking the players is another one\nof the manager's jobs.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... I have to cheer up!\nBeing able to come all the way to\nthis point is not something to\nregret.)");
            }
        }
    Parameter_AddCh1Param(7, 86, 1);
    }
