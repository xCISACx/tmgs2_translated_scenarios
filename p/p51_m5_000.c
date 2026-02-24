section "p51_m5_000"{
    int var0;
    if (Parameter_GetPl1Param(338) < 3){
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5105000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "For this year's Culture Festival,\nour Art Club will be presenting\npaintings.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                Voice_PlayVoice("P5105000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm looking forward to the Culture\nFestival.\nLet's paint amazing paintings▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
                SoundEffect_StopStream(2, 40);
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
                Message_MsgDisp("主人公", "(... My phone is ringing?\nAh, it's the Club President.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P5105000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, we will have two\nweeks to prepare for the Culture\nFestival.");
                Voice_PlayVoice("P5105000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year, the Art Club will be\npresenting paintings, so please help\nout with the preparations.");
                Voice_PlayVoice("P5105000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Please take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival, huh...\nI have to get better soon so I can\nhelp!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5105000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "For this year's Culture Festival,\nour Art Club will be exhibiting a\npiece of art that is related to\nlegends.");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("P5105000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Legends, huh...\nI'm looking very forward to being\nable to work with you.\nLet's do our best▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright.\nI'll put my all into this and do my\nbest!)");
                SoundEffect_StopStream(2, 40);
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
                Message_MsgDisp("主人公", "(... My phone is ringing?\nAh, it's the Club President.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P5105000_W00700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, we will have two\nweeks to prepare for the Culture\nFestival.");
                Voice_PlayVoice("P5105000_W00800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year, we will be exhibiting a\npiece of art, so please help out\nwith the preparations.");
                Voice_PlayVoice("P5105000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Please take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival, huh...\nI have to get better soon so I can\nhelp!)");
                }
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5105000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "For this year's Culture Festival,\nour Art Club will be presenting\npaintings.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                Voice_PlayVoice("P5105000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm looking forward to the Culture\nFestival.\nLet's paint amazing paintings▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
                SoundEffect_StopStream(2, 40);
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
                Message_MsgDisp("主人公", "(... My phone is ringing?\nAh, it's the Club President.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P5105000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, we will have two\nweeks to prepare for the Culture\nFestival.");
                Voice_PlayVoice("P5105000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year, the Art Club will be\npresenting paintings, so please help\nout with the preparations.");
                Voice_PlayVoice("P5105000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Please take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival, huh...\nI have to get better soon so I can\nhelp!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5105000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "For this year's Culture Festival,\nour Art Club will be exhibiting a\npiece of art that is related to\nlegends.");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("P5105000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Legends, huh...\nI'm looking very forward to being\nable to work with you.\nLet's do our best▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright.\nI'll put my all into this and do my\nbest!)");
                SoundEffect_StopStream(2, 40);
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
                Message_MsgDisp("主人公", "(... My phone is ringing?\nAh, it's the Club President.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P5105000_W00700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, we will have two\nweeks to prepare for the Culture\nFestival.");
                Voice_PlayVoice("P5105000_W00800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year, we will be exhibiting a\npiece of art, so please help out\nwith the preparations.");
                Voice_PlayVoice("P5105000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Please take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival, huh...\nI have to get better soon so I can\nhelp!)");
                }
            }
        else {
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5105000_W01000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "For this year's Culture Festival,\nour Art Club will be exhibiting a\nmural.");
                SoundEffect_PlayStream(2, "SS_T_00_148_S00");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("P5105000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "A mural!\nI really wanted to try making one.\nI'm looking forward to it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You look happy,\n｛Chris＊＊｝.");
                Voice_PlayVoice("P5105000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You don't often get a chance to be\nable to create a mural, right?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("P5105000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I don't think I'd get the chance in\nthe future, either...\nAnd it's also with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("P5105000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's put our all into it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is the last Culture\nFestival...\nAlright, I'll do my best!)");
                SoundEffect_StopStream(2, 40);
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
                Message_MsgDisp("主人公", "(... My phone is ringing?\nAh, it's the Club President.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P5105000_W01500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Starting next week, we will have two\nweeks to prepare for the Culture\nFestival.");
                Voice_PlayVoice("P5105000_W01600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year, we will be exhibiting a\nmural, so please help out with\npreparations.");
                Voice_PlayVoice("P5105000_W01700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Please take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival, huh...\nI have to get better soon so I can\nhelp!)");
                }
            }
        Parameter_InPl1Param(320, 5);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
