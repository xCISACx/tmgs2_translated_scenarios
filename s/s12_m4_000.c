section "s12_m4_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "*Sigh*... One New Year event down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Thanks.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1204000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then!\nI'll head home and tuck into the\nkotatsu!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1204000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See ya～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how the new year started!)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm hoping my wish will finally come\ntrue this year...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you wish for?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1204000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's... a secret. A secret!\nIt might not come true!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1204000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What about you then?\nWhat did you pray for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... It's a secret!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1204000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See that.\nIt's a thing that we keep deep\nwithin our hearts.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1204000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then, we'd better get going.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for bringing me home!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1204000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No prob!");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("S1204000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah, try not to catch a cold and\ndon't forget to wash your hands once\nyou get inside, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_BlinkStart(4, 0, (#1));
                Voice_PlayVoice("S1204000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Bye then!");
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(And this is how my new year\nstarted.)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's nice to go out for the new\nyear.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You never go out?");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1204000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's not that much of a big deal,\nbut I avoid crowds like this.\nYou can easily catch a cold.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, I see.");
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1204000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I'd never come out alone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1204000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Nothing. We should go home.\nI'll take you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for bringing me home!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1204000_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No prob!\nLet's go out sometime while we live\nclose.");
                Voice_PlayVoice("S1204000_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Later then!");
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started!)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1204000_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seems like...\nMy throat's a little scratchy..");
            Message_Who(0);
            Message_MsgDisp("主人公", "It was crowded and rather dusty...");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S1204000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This doesn't sound too good...\nI'm going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1204000_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Bye then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if ｛Hariya＊＊｝'s\nokay...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D02100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I feel this year is going to be a\ngreat year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("S1204000_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hopefully. Just a feeling.\nAlso, you're here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, me?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1204000_D02300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How should I say this?\nYou look as if you're asking for\nluck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Is that praise?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1204000_D02400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's less than praise. Say it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S1204000_D02500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha! Well then, let's go home.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 5);
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1204000_D02600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "This year's finally the 3rd year...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Seems like it went by in a flash.");
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1204000_D02700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah. We can't be careless anymore.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1204000_D02800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, I'm going home.\nI'll see you at school!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                Character_Chara_GS2(4, "NON");
                Voice_PlayVoice("S1204000_D02900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh, keep me in mind this year, too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Likewise～!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started!)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D03000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Just a thought, but do you think the\npower of this God is　weak?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why do you ask?");
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("S1204000_D03100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "My wish last year never did come\ntrue.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you wish for?");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S1204000_D03200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That you...");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1204000_D03300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I mean, no!");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("S1204000_D03400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "To...\nTo give loaded questions to those\nfeeble adults!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well, that kind of intention...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1204000_D03500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "*Sigh*...\nI get mad when I'm with you.\nLet's go home... I'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home!");
                Voice_PlayVoice("S1204000_D03600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Hey.... Never do that, again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do what?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1204000_D03700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Lead me into that kind of question!");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("S1204000_D03800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'm confident about telling you the\ntruth someday.\nSo, don't do that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So he's confident...)");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("S1204000_D03900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, I'm going home.\nI'll see you at school.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, see ya!");
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started!)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D04000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "My last prayer as a high school\nstudent has ended!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, yeah... The last.");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S1204000_D04100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It feels kinda like, \"That was it?\".");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1204000_D04200", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then, I should go home and\ntrain my voice!\nBye, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, see ya.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Graduation...\nTime flies by so fast.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(4, 2, (#1));
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1204000_D04300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Soon it will be graduation～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("S1204000_D04400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hanegaku feels more like a home.");
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1204000_D04500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I daresay I'll stay for another\nyear...");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1204000_D04600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, it's not that I'm worried I\nwon't pass the graduation test\nresults...\nyou know!?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1204000_D04700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's not about that!\nHey, are you listening?");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* I'm listening.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1204000_D04800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... We should get going.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1204000_D04900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah. Take the rest of the day off.\nWell, see ya.");
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Living the high school life\nfully...\nI'll give my all to do my best!)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝, you're\npraying quite earnestly.");
            Character_ChFace(0, 2, 5);
            Voice_PlayVoice("S1204000_D05000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nI'm focusing on one prayer this\nyear.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1204000_D05100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I feel it's more likely to be heard,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nIt would be nice if it does come\ntrue.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1204000_D05200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Yeah, well.");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1204000_D05300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then, let's go. I'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(4, "M4_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1204000_D05400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "There's not much school time left.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("S1204000_D05500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Doing things like this, we don't\nknow what's in store for us...\nWe've got to treasure it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("S1204000_D05600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Nothing. Well, see ya!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Soon it will be graduation...\nI'll give my all to do my best!)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M4", 10);
        System_Call_GS2("K02", "M4", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(4, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
