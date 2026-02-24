section "n02_m4_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You aced it!? Amazing.\nWhat's happening inside your brain?");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I did my best!)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're amazing!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("N0204000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Maybe I should stick it to the next\nexam...\nSo, I beg of you!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝!\nI aced the exam!");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Your head...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("N0204000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If I stroke it, maybe I'll benefit a\nlittle...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder...");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("N0204000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let me do that next time.\nYou're incredible.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, good thing I did my best!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh～... You really are smart.\nWell done!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if steadily trying my best\nwas worth it...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nYou pretended that you couldn't do\nit, and you made it with this\nrank...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("N0204000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, that's a great thing.\nYou're terrific.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was good to steadily try my\nbest.)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I envy your rank...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0204000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I was also worried, but I won't give\nup!\n...\nIn everything except for studying.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was good to steadily try my\nbest.)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("", 4, "N0204000_D01100");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝. Hmm...\nA safe rank. Or rather, half-assed.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to try a little harder...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(4, 2, (#1));
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, that's a nice rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0204000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If it were me, I'd burst with pride\nto my parents.\nBut what do you think of it?\nIt's not good, right?");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI should try a little harder...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Your results of the final exams seem\nso-so.");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("N0204000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "However, you were aiming for a\nhigher rank, weren't you?\nYou and I are so different, you seem\nlike you're smarter.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0204000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, next time, do your best.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay! I will try harder.)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I will say being first is better.");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("N0204000_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How come you aimed lower than first\nrank, anyway?");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI have to study harder from now\non...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're coming along～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0204000_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Supplementary lessons.\nYou should try to get Wakaouji's.");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("N0204000_D02100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Studying isn't the only thing.\nIt's also his soft, boring voice\nthat you have to fight along with\ndrowsiness.");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0204000_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This is going nowhere.\nI bet you could've done better if\nyou tried a bit harder.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to try a little harder...)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("N0204000_D02300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah! Our names are so close!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("N0204000_D02400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This is such an unusual approach...");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("N0204000_D02500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Maybe you should give up on your\nstudies and look for other options.\nOr you should try a little harder...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("N0204000_D02600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Better if you make up your mind to\nwhich way you're going for.\nBeing half-assed isn't a good thing.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to try a little harder...)");
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    }
