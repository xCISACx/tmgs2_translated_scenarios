section "s12_m3_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "At last, we are freed from the\ncrowd.\nWe have successfully completed the\nvisit to the shrine safely, as well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, you're right.");
            Voice_PlayVoice("S1203000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then let us part ways here.\nI will take my leave.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This year will be a good one...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "At last, we have made it through the\ncrowd.\nWe did well without getting\nseparated.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, you're right.");
            Voice_PlayVoice("S1203000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then let's go home.\nSince I picked you up, I will escort\nyou back home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1203000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are welcome. I must get going.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year is going to be a good\none...)");
                }
            }
        else {
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The visit to the shrine is almost\nover...\nYou did not forget to pray for\nsomething, correct?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, it's okay.");
            Voice_PlayVoice("S1203000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Very well. Then let's go home.\nI will walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("S1203000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a matter of definite course.\nBesides, we were not able to speak\nvery well with a crowd of people\naround.");
                Voice_PlayVoice("S1203000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt is good that we were together at\nthe beginning of last year, as well.\nWell then, my best regards this\nyear.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year is going to be a good\none...)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good, we were able to complete the\nvisit to the shrine safely....\nWe did not lose or forget anything.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yep, we made it out okay.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1203000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good. Then let us part ways here.\nI must be going.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This year is going to be a good\none...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "At last, we have returned....\nIs there anything you forgot?\nThat includes forgetting to pray.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I don't think I forgot\nanything.\nWhat about you,\n｛Hikami＊＊｝?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1203000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am fine.\nAcademic achievement, road safety.\nand sound health.\nI did not forget anything.");
            Voice_PlayVoice("S1203000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I especially prayed diligently for\nacademic achievement.\nI will be a third year student this\nyear.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're right...\nWe'll be third year students very\nsoon.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1203000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is quite soon....\nWell, I assume it is time to return.\nI will walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1203000_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are welcome.\nWell then, I must be going.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year is going to be a good\none...)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I can finally see the shrine\narchway...\nI feel relieved.\nWe completed the visit without you\ngetting lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's true, it was great.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1203000_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I was afraid when I lost sight of\nyou for a moment in front of the\noffertory box....\nWhat were you praying a while for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* It's a secret!\nAnd you, ｛Hikami＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1203000_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I...\nTo become a third year student this\nyear.\nMy main prayer was for academic\nachievement.\nAnd... It's a secret!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eeehh, what is...?");
            Voice_PlayVoice("S1203000_C01900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I cannot tell you...\nWell, let us return.\nI will walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1203000_C02000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "To me...\nthis year I was able to have a nice\nstart thanks to you.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...?");
                Voice_PlayVoice("S1203000_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, it is nothing....\nWell then, I must be going.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year is going to be a good\none...)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C02200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We have successfully and safely made\nit through the shrine visit.\nIt is also good that you did not get\nlost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, we managed to make it back\nsafely.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1203000_C02400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We only have a small amount of high\nschool life.\nLet us do our best and go all out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Voice_PlayVoice("S1203000_C02500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well then, let us part ways here.\nI must be going.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It'll be graduation soon...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1203000_C02600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We have successfully visited the\nshrine safely.\nWe were in the crowd for a long\ntime.\nIt feels good to take a breather.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... A breather?");
            Voice_PlayVoice("S1203000_C02700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, lately I have been caught up in\nstudying for the exam.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, I see...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("S1203000_C02800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Still, it was good to come here\ntoday.\nI had planned on studying.");
            Voice_PlayVoice("S1203000_C02900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Well, let us return.\nI will walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1203000_C03000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are welcome....\nYou know, this will be our last New\nYear like this, after today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh...?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("S1203000_C03100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Meaning, this is the last New Year\nyou will be a Hanegasaki Academy\nstudent.\nWe are graduating in two months, are\nwe not?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you're right...");
                Voice_PlayVoice("S1203000_C03200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "These three years were a blink of\ntime.\nI hope to spend the remaining time\nas a high school student with no\nregrets.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("S1203000_C03300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thank you for today.\nWell then, I must be going.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It'll quickly be graduation\nsoon...)");
                }
            }
        else {
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "S1203000_C03400");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I finally see the shrine's\narchway......\nAh! I will release your hand now.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("S1203000_C03500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Y-You...\nUmm, I apologize if I pulled too\nstrongly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, it's alright!\nThanks to you, I didn't get lost.");
            Voice_PlayVoice("S1203000_C03600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is I who should say so...\nNo, that is wrong to say...\nWell, how... pleasant.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("S1203000_C03700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Nevertheless...\nThis ends a New Year like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...?");
            Voice_PlayVoice("S1203000_C03800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "This is the last New Year as a\nHanegasaki student, is it not?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, you're right...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1203000_C03900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I somewhat have the feeling of\nwanting to cherish this New Year a\nbit longer....\nMay I walk you home?");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("S1203000_C04000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This sort of thing is nice....\nThere is no part of me that regrets\nthis New Year.\nBeing with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Voice_PlayVoice("S1203000_C04100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... No, it is fine.\nEven if we graduate...\nWell, I hope it will be nice to come\nback, again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("S1203000_C04200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAnother two more months of high\nschool life.\nLet us not regret anything.\nWell then, I will take my leave.");
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll be graduating soon...)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M3", 10);
        System_Call_GS2("K02", "M3", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(3, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
