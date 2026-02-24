section "o03_m5_010"{
    if (Parameter_GetPl1Param(312) != 5){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "O0305010_E00000");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝. What's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm looking for a person to run\nwith...");
            Voice_PlayVoice("O0305010_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then do you wanna run with me?\nNo one has asked me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Then maybe I'll ask you.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0305010_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nLet's run in perfect sync▼");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "O0305010_E00300");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝. What's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm looking for a person to run\nwith...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0305010_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then I announce my candidacy!\nI'm also looking for a partner, the\nperfect partner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Then maybe I'll ask you.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0305010_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nEven if you fall over, I won't leave\nyou▼");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Voice_PlayVoice("O0305010_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, wanna join me in the\nthree-legged race?\nI wanna run with you, no matter\nwhat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure, of course!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("O0305010_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let's go then.\nLet's run while being very close\ntogether▼");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "O0305010_E00800");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝. What's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm looking for a person to run\nwith...");
            Voice_PlayVoice("O0305010_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then do you wanna run with me?\nNo one has asked me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Then maybe I'll ask you.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("O0305010_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nAh, right, before we run, let's give\neach other a greeting kiss.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-That's a little...");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "O0305010_E01100");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nWanna join the three-legged race\nwith me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0305010_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was looking for the perfect\npartner.\nAnd if it's with you, we'll also be\nable to give each other a greeting\nkiss.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("O0305010_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We will surely be in perfect sync,\ntoo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay... Right...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder who should be my partner?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Voice_PlayVoice("O0305010_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, wanna join me in the\nthree-legged race?\nI wanna run with you, no matter\nwhat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I was also looking for a partner.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0305010_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("O0305010_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sorry in advance if my consciousness\nleaves me and I give you a kiss on\nthe forehead, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0305010_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Nothing. Let's go.");
            }
        }
    Message_CloseMsg();
    Character_Chara_GS2(5, "NON");
    }
