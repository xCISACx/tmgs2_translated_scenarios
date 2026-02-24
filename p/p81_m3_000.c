section "p81_m3_000"{
    int var0;
    if (Parameter_GetPl1Param(338) < 3){
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("", 3, "P7103000_C00100");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝.\nThe Culture Festival is in two\nweeks.\nLet's be thorough with the\npreparations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, I will do my best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7103000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Since we have management experience,\npreparations should go smoothly.\nThis year however, we also have\nfirst year supporters.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("", 3, "P7103000_C00700");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝, as we\napproach the Culture Festival in two\nweeks, let's make an effort.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, let's do our best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W00800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W01000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        else {
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W01100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7103000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Managing the Culture Festival for\nthe third year...\nWe, the seniors, have responsibility\nof leading the juniors.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7103000_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Moreover, this Culture Festival is\nthe last student council activity...\nWith this, we step down.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("P7103000_C01400", 3, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Let us not let our minds wander\nuntil the end!\nI am counting on you,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, let's do our best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W01500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W01600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W01700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("", 3, "P7103000_C00100");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝.\nThe Culture Festival is in two\nweeks.\nLet's be thorough with the\npreparations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, let's do our best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7103000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Since we have management experience,\npreparations should go smoothly.\nThis year however, we also have\nfirst year supporters.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("", 3, "P7103000_C00700");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝, as we\napproach the Culture Festival in two\nweeks, let's make an effort.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, I will do my best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W00800", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W00900", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W01000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        else {
            if (Parameter_GetPl1Param(13) == 0){
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P7103000_W01100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "We, the student council committee,\nare to \"manage the Culture\nFestival\".\nLet's do our best, everyone.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7103000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Managing the Culture Festival for\nthe third year...\nWe, the seniors, have responsibility\nof leading the juniors.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7103000_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Moreover, this Culture Festival is\nthe last student council activity...\nWith this, we step down.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("P7103000_C01400", 3, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Let us not let our minds wander\nuntil the end!\nI am counting on you,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, let's do our best!)");
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
                Message_MsgDisp("主人公", "(... My phone?\nOh, it's from a student council\nexecutive.)");
                SoundEffect_StopSE(19, 0);
                SoundEffect_PlaySE(20, 127);
                Voice_PlayVoice("P7103000_W01500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "There will be preparations for the\nCulture Festival in two weeks after\nnext week.");
                Voice_PlayVoice("P7103000_W01600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "The student council committee are to\nmanage the Culture Festival.\nPlease join the preparations.");
                Voice_PlayVoice("P7103000_W01700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Student Council", "Well then, take care.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon so I can\nparticipate!)");
                }
            }
        Parameter_InPl1Param(320, 8);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
