section "n02_m7_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("N0207000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You did it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!!\nYes, I did it!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Wow.\nBut if I do say so myself, the first\nrank was a student from my class...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("N0207000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm sorry. Yes, congratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha. It was good to do my best!)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("N0207000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, I found the top student.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("N0207000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Congratulations.\nYou are Sensei's pride.\nSensei is proud.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝ contributed to\nthe fact that I was able to do my\nbest here.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0207000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, such a nice thing to say.\nSensei's tearing up a little...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha. It was good to do my best!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!!");
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Congratulations.\nAre you impressed to be this year's\ntop rank?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. I am glad!");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("N0207000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So... Is that all?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Excuse me, I am very happy!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0207000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes. Then I am twice as happy.\nYou did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha. It was good to do my best!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You left the vice principal in a\nspeechless mood.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is different.\nYes, do your best in the future from\nnow on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will try my hardest!)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("N0207000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, I found the honor student.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("N0207000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sensei is proud.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's thanks to you,\n｛Wakaouji＊＊｝!");
            Character_BlinkStart(7, 0, (#1));
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I see...\nSensei's going to boast to the vice\nprincipal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha! Okay, I will try my hardest!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Yeah.\nSomehow, the face of the honor\nstudent shows itself today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("N0207000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It shines.\nExcellent studying was done.\nI am happy because of that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will try my hardest!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("N0207000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's very normal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, yes.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0207000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yeeeees...\nIt would be easier for Sensei to\nencourage you a bit, however, you\ndid not do so bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nmore...)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Why this?\nLook, where is this so-called\nstudying!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nmore...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0207000_G19000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Enjoy learning that you must mature\nin your own way.\nDo not rush it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay.\nI will try to do my best a little\nmore.)");
            }
        }
    else if (Parameter_Test_Check() == 3){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "N0207000_G02000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝. That?\nHow can you be so energetic?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, the results of the exam...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0207000_G02100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, perhaps you should worry about\nthe results...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Oh, for the time being...");
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("N0207000_G02200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is very serious...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I need to try more harder.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("N0207000_G02300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm sorry.\nSensei's lessons are strange...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?\nNo, it was because of my\nabilities...");
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("N0207000_G02400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sensei is not suitable for you.\n*Sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nI need to try more harder.)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.");
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0207000_G02500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "They are not just exam results.\nEnjoy learning that you must mature\nin your own way.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0207000_G02600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "But, of course, will you try harder?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I need to try more harder.)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("N0207000_G02700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Supplementary lessons...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0207000_G02800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "One week of supplementary lessons.\n*Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry. *Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to do what must be done.)");
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "N0207000_G02900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nYou have been given supplementary\nlessons.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝. I'm sorry...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("N0207000_G03000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Okay, first one, let's be bright!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("N0207000_G03100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "*Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to do what must be done.)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0207000_G03200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hmm... This is troubling.");
            Character_BlinkStart(7, 0, (#1));
            Voice_PlayVoice("N0207000_G03300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Have you come to dislike studying?");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0207000_G03400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Very well then, let's review this\nsemester!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to do what must be done.)");
            }
        }
    Parameter_AddCh1Param(7, 86, 1);
    }
