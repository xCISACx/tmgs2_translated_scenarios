section "h6d_g4_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.");
        if (Parameter_GetBkParam(6, 52) <= 25){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(13, "G4_01F", 0);
                Voice_PlayVoice("H6D13000_M00000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "What's wrong, ｛主人公｝?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                Character_BlinkStart(13, 2, (#1));
                Character_BlinkStart(13, 0, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M00100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Your playing seemed unstable.\nWere you not feeling well?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Voice_PlayVoice("H6D13000_M00200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M00300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nWas your unstable playing perhaps my\nfault?");
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I have to try harder!)");
                }
            }
        else if ((Parameter_GetBkParam(6, 52) > 25) && (Parameter_GetBkParam(6, 52) <= 50)){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M00400");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M00500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You played well, didn't you?\nI was impressed too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M00600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", ".........");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6D13000_M00700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nI think it's amazing that you were\nable to focus.\nIt's impossible for me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(......\nI'm glad I went to the camp.)");
                }
            }
        else if (Parameter_GetBkParam(6, 52) > 50){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M00800");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6D13000_M00900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "The week went by fast, but it seems\nlike you improved quite a lot.\nYou've changed so much during the\ncamp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M01000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... ｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M01100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nIt looks like you've had a rich\nweek.\nYou've gotten better.\nI want that kind of strength too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(......\nI'm glad I went to the camp.)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.");
        if (Parameter_GetBkParam(6, 52) <= 60){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H6D13000_M01200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "What's wrong?\nIt seems like you didn't have the\nwill to perform at all.\nAre you alright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else {
                Voice_PlayVoice("H6D13000_M01300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", ".........");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6D13000_M01400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nIs it my fault that you couldn't\nkeep up with the ensemble...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...... I have to try harder...)");
                }
            }
        else if ((Parameter_GetBkParam(6, 52) > 60) && (Parameter_GetBkParam(6, 52) <= 120)){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M01500");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(13, 2, (#1));
                Character_BlinkStart(13, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M01600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You're a hard worker, aren't you?\nEven after group practice was done,\nI know that you practiced by\nyourself.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6D13000_M01700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I also have to do my best!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M01800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", ".........");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6D13000_M01900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... You put in effort.\nI think your playing has changed\nquite a lot.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M02000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nI want you to give some of that\nstrength to me, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(.........\nBut it looks like I improved a\nlittle.)");
                }
            }
        else if (Parameter_GetBkParam(6, 52) > 120){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M02100");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H6D13000_M02200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You played perfectly in the last\nperformance.\nI could hear your playing the entire\ntime.");
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H6D13000_M02300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I look forward to the Culture\nFestival.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M02400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", ".........");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6D13000_M02500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... I'm jealous of you right now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(......\nBut it seems like I improved a lot!)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.\nThe last camp ever...");
        if (Parameter_GetBkParam(6, 52) <= 90){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M02600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's our last camp, but it seems\nlike it didn't really produce good\nresults.\nThat's a little unfortunate.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M02700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "But you continued for three years.\nLet's look forward to the Culture\nFestival, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...\nIt was the last camp too.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M02800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... ｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6D13000_M02900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nSorry, I couldn't match your pace at\nthe end...\nNo one else could, either.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...\nIt was the last camp too.)");
                }
            }
        else if ((Parameter_GetBkParam(6, 52) > 90) && (Parameter_GetBkParam(6, 52) <= 180)){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M03000");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(13, 2, (#1));
                Character_BlinkStart(13, 0, (#1));
                Voice_PlayVoice("H6D13000_M03100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It was tough, but as expected, it's\nsad to think about the fact that\ncamp is over...");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M03200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "There's only a little while left\nuntil our last Culture Festival.\nLet's look forward to it, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My last camp, huh... Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H6D13000_M03300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... ｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M03400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "This signals the end of our last\ncamp.\nI wanted to at least smile at the\nend...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(......\nBut it looks like I improved a\nlittle!)");
                }
            }
        else if (Parameter_GetBkParam(6, 52) > 180){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Voice_PlayVoice("", #1, "H6D13000_M03500");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard,\n｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nToday is the last day of camp.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 2, (#1));
                Voice_PlayVoice("H6D13000_M03600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah, I think that in the spirit of\nthe last camp, we were able to give\nour best performance.");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M03700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Do you know that your playing 3\nyears ago is totally different from\nnow?\nLet's put on the best show at the\nlast Culture Festival.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... My last camp.\nIt's a little sad, but it seems like\nI improved a lot!)");
                }
            else {
                Voice_PlayVoice("H6D13000_M03800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You've worked hard.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nToday is the last day of camp.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6D13000_M03900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah.\nI'm sorry that I couldn't smile,\neven though it was our last camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Well, it can't be helped.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6D13000_M04000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Let's do our best at the last\nCulture Festival.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... My last camp.\nIt's a little sad, but it seems like\nI improved a lot!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    Parameter_AddCh1Param(13, 60, 5);
    }
