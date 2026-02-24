section "h1a_m1_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 1, "H1A01000_A00300");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝. Yay!\nYou guys won! Amazing.\nCongratulations!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!\nBut the ones who actually worked\nhard were all the players.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A01000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Idiot.... You're wrong.\nYou're supporting the players.\nThat's why everyone is doing their\nbest, right?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A01000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "And that means...\nEveryone knows that fact, more than\nyou know it.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1A01000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're...\nreally working hard as a manager,\naren't you?\nYou've worked hard....\nCongratulations.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1A01000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... See, everyone's waiting for you!\nDon't worry about me, just go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A01000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... You guys lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.... We lost.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1A01000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But your efforts weren't a waste....\nRight?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A01000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "And that means...\nEveryone knows that fact, more than\nyou know it.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A01000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Not just the guys in the Baseball\nClub......\nOf course, I know that fact, as\nwell.\nSo relax, okay?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("H1A01000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nYou worked hard up until this point.\nIt was commendable.\nYou're the best manager.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... I have to cheer up!\nBeing able to come all the way to\nthis point is not something to\nregret.)");
            }
        }
    Parameter_AddCh1Param(1, 86, 1);
    }
