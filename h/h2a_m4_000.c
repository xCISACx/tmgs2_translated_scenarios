section "h2a_m4_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A04000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oi, you did it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A04000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seeing you do your best also got me\nreally riled up!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H2A04000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Watch me, I'm definitely gonna be up\nto you.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H2A04000_D00500", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Congrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A04000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was close～....\nDon't be so depressed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... But...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A04000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You worked very hard, I-- no,\neveryone in the club knows that!");
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H2A04000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So it's fine if you feel vexed, but\ndon't be more down than you have to\nbe.");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A04000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nBecause all that will come is pain.");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H2A04000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's the words of an experienced\nperson.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A04000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Since you did your best all the way\nup until now, cut yourself a little\nslack, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hariya＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I stayed in the Lacrosse\nClub...\nToday will surely become a nice\nmemory.)");
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    }
