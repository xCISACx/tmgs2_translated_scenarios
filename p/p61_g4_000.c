section "p61_g4_000"{
    int var0;
    if (Parameter_GetPl1Param(338) < 3){
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year's Culture Festival, the\nSymphony Club is to perform the\nclassical.\nGood luck.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(13, 2, (#1));
                    Voice_PlayVoice("P6113000_M00100", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Let's do our best these next two\nweeks, okay?\nSince it's our first performance\ntogether, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Okay! Let's do our best!)");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6113000_M00200", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Out of tune.");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... L-Let's do our best!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, it'll be\npreparation time for the Culture\nFestival for two weeks.");
                Voice_PlayVoice("P6113000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform\nclassical music at this year's\nCulture Festival.\nPlease participate in the practices.");
                Voice_PlayVoice("P6113000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparing for the Culture\nFestival...\nI must participate soon for\nimprovement!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W00600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform game\nmusic!\nLet's give our all!!");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("P6113000_M00700", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey, our club can perhaps be a lot\nbetter than last year's, right?\nSo let's do our best, too!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Okay, let's do our best!");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6113000_M00800", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Nothing.\nLet's do our best, okay?");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... L-Let's try harder!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, it'll be a\npreparation time for the Culture\nFestival for two weeks.");
                Voice_PlayVoice("P6113000_W01000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform\nclassical music at this year's\nCulture Festival.\nPlease join the practice sessions.");
                Voice_PlayVoice("P6113000_W01100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Give it your all! ...\nWell then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparing for the Culture\nFestival...\nI must participate soon for\nimprovement!)");
                }
            }
        else {
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W01200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Our Symphony Club this year is to\nperform the \"Second Season\" at the\nCulture Festival!\nEveryone, let's show them!!");
                SoundEffect_PlayStream(2, "SS_T_00_148_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(13, 3, (#1));
                    Voice_PlayVoice("P6113000_M01300", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "*Sigh* Our last performance...\nDon't you perhaps feel sentimental?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah...");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6113000_M01400", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey...\nLet's make it a huge success, okay?\nLet's make a nice memory together.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I see, this year's going to be the\nlast...\nOkay, let's try our best!!)");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6113000_M01500", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Umm...");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("P6113000_M01600", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Let's do our best, okay?");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Okay!\nSince this year's going to be the\nlast!\nLet's do our best!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W01700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting in two weeks after next,\nit'll be the time for preparing for\nthe Culture Festival.");
                Voice_PlayVoice("P6113000_W01800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year's Culture Festival, the\nSymphony Club is to perform \"Second\nSeason\"!\nPlease join the practice sessions!");
                Voice_PlayVoice("P6113000_W01900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(I see, the Culture Festival..\nOkay, let's do our best!)");
                }
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year's Culture Festival, the\nSymphony Club is to perform\nclassical music.\nGood luck.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(13, 2, (#1));
                    Voice_PlayVoice("P6113000_M00100", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Let's do our best these next two\nweeks, okay?\nSince it's our first performance\ntogether, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Okay, let's do our best!)");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6113000_M00200", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Out of tune.");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... L-Let's try harder!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting in two weeks after next,\nit'll be the time for preparing for\nthe Culture Festival.");
                Voice_PlayVoice("P6113000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform\nclassical music on this year's\nCulture Festival.\nPlease join the practice.");
                Voice_PlayVoice("P6113000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparation for the Culture\nFestival...\nMust participate soon for\nimprovement!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W00600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform game\nmusic!\nPut some spirit into it!!");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("P6113000_M00700", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey, our club can perhaps be a lot\nbetter than last year's, right?\nSo let's do our best, too!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Okay, let's do our best!)");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6113000_M00800", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Nothing.\nLet's do our best, okay?");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... L-Let's try harder!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting in two weeks after next,\nit'll be the time for preparing for\nthe Culture Festival.");
                Voice_PlayVoice("P6113000_W01000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "The Symphony Club is to perform game\nmusic on this year's　Culture\nFestival.\nPlease join the practice.");
                Voice_PlayVoice("P6113000_W01100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Give it your all!! ...\nWell then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparing for the Culture\nFestival...\nI must participate soon for\nimprovement!)");
                }
            }
        else {
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P6113000_W01200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Our symphony club is to perform\n\"Second Season\" at the Culture\nFestival this year!\nEveryone, let's show them!!");
                SoundEffect_PlayStream(2, "SS_T_00_148_S00");
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah...");
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(13, 3, (#1));
                    Voice_PlayVoice("P6113000_M01300", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "*Sigh* Our last performance...\nDon't you perhaps feel sentimental?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah...");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6113000_M01400", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey...\nLet's make it a success, okay?\nLet's make a nice memory together.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I see, this year's going to be the\nlast...\nOkay, let's do our best!!)");
                    SoundEffect_StopStream(2, 40);
                    }
                else {
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6113000_M01500", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Umm...");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("P6113000_M01600", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... Let's do our best, okay?");
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Okay!\nSince this year's going to be the\nlast!\nLet's do our best!)");
                    }
                }
            else {
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
                    break ;
                    }
                Screen_WipeIn(2);
                SoundEffect_PlaySE(19, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(... A phone call?\nOh, it's from the club leader.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P6113000_W01700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting in two weeks after next,\nit'll be the time for preparing for\nthe Culture Festival.");
                Voice_PlayVoice("P6113000_W01800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year's Culture Festival, the\nSymphony Club is to perform \"Second\nSeason\"!\nPlease join the practice!");
                Voice_PlayVoice("P6113000_W01900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparing for the Culture\nFestival...\nMust participate soon for\nimprovement!)");
                }
            }
        Parameter_InPl1Param(320, 6);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
