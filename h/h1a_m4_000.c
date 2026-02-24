section "h1a_m4_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A04000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "As expected, being number 1 has the\nbest feeling!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nI'm also the happiest I've ever been\ntoday.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1A04000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... That's unfair.\nMaybe I should join the Baseball\nClub, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H1A04000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Nothing.\nThose guys have been giving me death\nstares for a while now, so go back\nto the club members.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A04000_D00500", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Congrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!\nThis really is the best feeling!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "We lost...\nIt's unfortunate, but it can't be\nhelped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nThanks for supporting us.\nI'm sure the guys in the club...");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1A04000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Ah, geez... Just cry already!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H1A04000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't gimme such a half-assed\nsmile....\nIt's hard for me to see you like\nthat.");
            Character_BlinkStart(4, 0, (#1));
            Voice_PlayVoice("H1A04000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you're not gonna start crying and\nsobbing...\nThen I won't be able to see how\ntroubled you are!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A04000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you can smile, then smile.\nLook, those guys are waiting for\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. I'm going!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... everyone did their best!\nI have to cheer up!)");
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    }
