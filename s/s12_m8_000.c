section "s12_m8_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(338) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Voice_PlayVoice("S1208000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, we better get going.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for asking me out today,\n｛Masaki＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Sure, be careful on your way home.\nLater! ...\nOh, don't get sidetracked!");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how my new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Voice_PlayVoice("S1208000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Since I've prayed quite hard to the\nGods, visiting the shrine went well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you wish for\n｛Masaki＊＊｝?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1208000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "To improve on my studies....\nIn other words, to get a good\nstanding.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Woah, so sincere...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Let's see.\nWell, we better get going.\nI'll walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for the day.\nFurthermore, for walking me home.");
                Voice_PlayVoice("S1208000_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah, don't mention it.\nWell, see you then.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how my new year started.)");
                }
            }
        else {
            Voice_PlayVoice("S1208000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It would be nice if God heard my\nprayers.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you wish for?");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1208000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh～...\nTo be together with you next year,\ntoo...\nNo, I mean, to get more luck with\nwealth.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1208000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "An increase of my hourly wage would\nbe nice.\nHahahahaha.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* It would be nice if it did\ncome true.");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1208000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I hope so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1208000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I should open up the shop soon.\nLet's go home by car.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.");
                Voice_PlayVoice("S1208000_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Sure. Likewise, thank you....\nI feel something good is gonna\nhappen this year.\nWell, later.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how my new year started.)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "This ends my schedule for the day.\nYou must be tired.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("S1208000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, I'll be staying over in my\nhometown, after this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're going to your hometown for\nthe holidays?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "My hometown is not that far.\nI'll be eating like hell～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha, good for you.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1208000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah. Later then, go straight home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oookay!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how my new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You're now a third year student.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1208000_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Courses and all are tough, but do\nyour best.\nI'm always here for advice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Alright!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, we better get home before the\nstreets get crowded.\nLet's get rolling.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.\nAre you off to your folks?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("S1208000_H01900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah.\nThey kept on bugging me to at least\nvisit on New Year's.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1208000_H02000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So, I better get going.\nI'll see you at Anneri.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how my new year started.)");
                }
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H02100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "So you're a third year student this\nyear...\nHow time flies so fast.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I guess...");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1208000_H02200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "This is an important year to decide\non your future.\nYou could go for a degree or a\ncareer, just don't depend on P/T\njobs.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S1208000_H02300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nIt pains me that we can't see each\nother as much as before...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Masaki＊＊｝?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1208000_H02400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, nah! Nothing! Hahaha.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H02500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay, time to go.\nI'll walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.\nAre you off to your folks?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1208000_H02600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah.\nThey kept on bugging me to at least\nvisit home for New Year's.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("S1208000_H02700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nI want to take you sometime soon.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1208000_H02800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well, sooner or later. Bye then.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how my new year started.)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(8, 130) <= 2){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H02900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "At last, you're graduating this\nyear...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, everything went by somewhat\nfast.");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S1208000_H03000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I agree, it was brief.\nYou were this small when I first met\nyou...");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's much too small!");
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1208000_H03100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I wonder if you'll grow up once you\ngraduate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Geez, stop it\n｛Masaki＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how my new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H03200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, yeah.");
            Voice_PlayVoice("S1208000_H03300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Do you happen to know where to buy\nHabataki's well-known Castella cakes\naround here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Castellas...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1208000_H03400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'm off to my folks after this and\nthey asked me to buy one...\nPeople say it's delicious.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1208000_H03500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Honestly...\nWe live in the same area, they\nshould have just bought it\nthemselves.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haven't seen one around here.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S1208000_H03600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay... It can't helped.\nI'll go look for it after I see you\nhome...");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks for today.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("S1208000_H03700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Sure....\nYou're about to graduate, too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I guess.\nSomehow I feel it's too good to be\ntrue.");
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("S1208000_H03800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... But that must be it.\nA huge part where you can't see that\nyou've grown...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so... Are you talking to me?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("S1208000_H03900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I never said that, you know.\nBut if you thought of it that way,\nthen it's true, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...\n｛Masaki＊＊｝, you're\nmean...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1208000_H04000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Hahaha.\nWell, live your high school life to\nthe fullest for a few more months.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Will do!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1208000_H04100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So, I'll see you then.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Just a few more until I graduate...\nIt all happened so fast...)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(8, 3, (#1));
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1208000_H04200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "*Phew*");
            Message_Who(0);
            Message_MsgDisp("主人公", "You prayed for quite a long time.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1208000_H04300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hmm?\nMaybe it's because I'm not just\npraying for myself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?\nYou prayed on behalf of someone\nelse?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1208000_H04400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Yup.\nSo the one special to me can move on\nto the path she has chosen.");
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1208000_H04500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nAnd after that, I hope my humble\nwishes would be part of it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I hope it will come true, whichever\nof those.");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S1208000_H04600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I guess. Yeah.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1208000_H04700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, let's go home!");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(8, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(8, "M8_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("S1208000_H04800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Sure.\nYou're about to graduate, too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "It kinda feels like it all happened\nso fast.\nIt feels unreal.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("S1208000_H04900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "......\nI wonder what will happen after you\ngraduate.");
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("S1208000_H05000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You and I...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... ｛Masaki＊＊｝?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("S1208000_H05100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Well, when the right time comes.\nLater then.");
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Graduation's soon...\nIt all went by so fast.)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M8", 10);
        System_Call_GS2("K02", "M8", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(8, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
