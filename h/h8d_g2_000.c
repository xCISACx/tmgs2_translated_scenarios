section "h8d_g2_000"{
    if (Parameter_GetSysParam(0) == 1){
        if (Parameter_GetBkParam(8, 52) <= 25){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Voice_PlayVoice("H7D11000_K00000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "What exactly is going on?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Onoda＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H7D11000_K00100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "To make so many mistakes is unlike\nyou.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K00200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You should be able to do better.\nPlease regain your composure before\nthe new semester.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～. I have to try harder...)");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Voice_PlayVoice("H7D11000_K00300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "...\nIt seems like you made lots of\nmistakes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝...");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H7D11000_K00400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Please get a grip.\nIf you keep going at this rate, you\nwill become a burden to everyone in\nthe Student Council.");
                Character_Chara_GS2(11, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I have to try harder!)");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > 25) && (Parameter_GetBkParam(8, 52) <= 50)){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("H7D11000_K00500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K00600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It seems like you've gotten quite\nused to this.\nPlease keep this up in the new\nsemester too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H7D11000_K00700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K00800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You did your best, but I think that\nI am the one who contributed more to\nthis camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I went to the camp...)");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > 50){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("", #1, "H7D11000_K00900");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K01000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It was an enriching camp.\nYou helped us out a great deal.");
                Voice_PlayVoice("H7D11000_K01100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Let's keep doing our best!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", #1, "H7D11000_K01200");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Voice_PlayVoice("H7D11000_K01300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "...\nI think that the projects you came\nup with were good.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H7D11000_K01400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "But I think that I contributed more\nto this camp!\nBecause I don't think that I lost!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad I went to the camp...)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        if (Parameter_GetBkParam(8, 52) <= 60){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("", #1, "H7D11000_K01500");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝. What's wrong?");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(11, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H7D11000_K01600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Are you a little tired?\nAlthough I think that there were\nmany problems, please try a little\nharder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～. I have to try harder...)");
                }
            else {
                Voice_PlayVoice("H7D11000_K01700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... What's wrong?\nI didn't feel any enthusiasm coming\nfrom you.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(11, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H7D11000_K01800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "If you keep going at this rate, you\nwill become a burden to the Student\nCouncil.\nPlease focus.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～. I have to try harder...)");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > 60) && (Parameter_GetBkParam(8, 52) <= 120)){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("H7D11000_K01900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K02000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "We both did our best.\nI think that it was a good camp.");
                Voice_PlayVoice("H7D11000_K02100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Let's do our best next semester too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H7D11000_K02200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Voice_PlayVoice("H7D11000_K02300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "...\nYou helped us out with many things\nby doing your job.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(11, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H7D11000_K02400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Personal feelings aside, I am saying\nthanks for doing that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Yeah.\nI'm glad I went to the camp.)");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > 120){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("", #1, "H7D11000_K02500");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K02600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "The week went by in the blink of an\neye.\nI think that this was an enriching\ncamp.");
                Voice_PlayVoice("H7D11000_K02700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Let's put even more effort in next\nsemester and aim for an even better\nStudent Council!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", #1, "H7D11000_K02800");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K02900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "...\nSeeing your work became good\nmotivation for me.");
                Voice_PlayVoice("H7D11000_K03000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "But I will not lose!\nWatch me next semester!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I'm glad I went to the camp.)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        if (Parameter_GetBkParam(8, 52) <= 90){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("H7D11000_K03100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H7D11000_K03200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You weren't doing well....\nWell, 3rd year students are busy\nwith many things.");
                Voice_PlayVoice("H7D11000_K03300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "There is little time left in which\nwe can manage the Student Council.\nLet's do our best until the very\nend.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...\nIt was my last camp too.)");
                }
            else {
                Voice_PlayVoice("H7D11000_K03400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H7D11000_K03500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You made many mistakes.\nAs a 3rd year student, you must be a\ngood role model for the juniors!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have tried harder...\nIt was my last camp, too.)");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > 90) && (Parameter_GetBkParam(8, 52) <= 180)){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("", #1, "H7D11000_K03600");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K03700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It was a very meaningful week.\nI think that we both motivated each\nother, and that we were able to\ngrow.");
                Voice_PlayVoice("H7D11000_K03800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "We are only in the Student Council\nfor a a little while longer, but...\nlet's do our best until the very\nend!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My last camp, huh... Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("", #1, "H7D11000_K03900");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7D11000_K04000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... We both worked hard.\nBut our fight will still continue\nuntil the end of our term!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My last camp, huh...\nYeah, I'm glad that I came!)");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > 180){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Voice_PlayVoice("", #1, "H7D11000_K04100");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝, you've worked\nhard!");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.\nThis is the last day of camp.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H7D11000_K04200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Yes, it went by in the blink of an\neye.\nI have been in your good care.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's what I should be saying.");
                Voice_PlayVoice("H7D11000_K04300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "No.\nThanks to you, we were able to\nresolve various issues.\nThank you.");
                Voice_PlayVoice("H7D11000_K04400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "There is only a little while left\nuntil we won't be executives\nanymore...\nLet's do our best until the very\nend!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My last camp, huh...\nI'm glad that I came.)");
                }
            else {
                Voice_PlayVoice("", #1, "H7D11000_K04500");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nYou've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
                Voice_PlayVoice("H7D11000_K04600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... It's our last camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 0, 0);
                Character_BlinkStart(11, 3, (#1));
                Voice_PlayVoice("H7D11000_K04700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "I've learned from your projects and\nproposals.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(11, 2, (#1));
                Voice_PlayVoice("H7D11000_K04800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "But I had planned to contribute in\nmy own way.\nSo... I don't think that I lost!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My last camp, huh...\nI'm glad that I came.)");
                }
            }
        }
    Parameter_AddCh1Param(11, 86, 1);
    Parameter_AddCh1Param(11, 60, 5);
    }
