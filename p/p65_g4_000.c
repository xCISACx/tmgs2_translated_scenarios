section "p65_g4_000"{
    int var0;
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetPl1Param(338) < 3){
            if (Parameter_bunka_jyu(0) == 1){
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(13, 3, (#1));
                    Voice_PlayVoice("P6513000_M00000", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "*Giggles*");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "*Giggles*");
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("P6513000_M00100", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Kyaa～! A great success～!!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "We did it～!!");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6513000_M00200", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "The performance was...\nDone harmoniously.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah.");
                    }
                var0 = 0;
                }
            else {
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("P6513000_M00300", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "What's wrong? You look down.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's because I made a mistake...");
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(13, 2, (#1));
                    Voice_PlayVoice("P6513000_M00400", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Yeah, but...\nLet's do our best next year! I hope?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah!");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M00500", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_BlinkStart(13, 3, (#1));
                    Voice_PlayVoice("P6513000_M00600", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "We were both out of tune...\nRight to the very end.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh......");
                    }
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6513000_M00700", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Good job.\nStill, it was a little lonely.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Seems that way...");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(13, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6513000_M00800", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "But I'm glad that we performed our\nlast performance together.\nWe've made a memory.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah!");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M00900", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6513000_M01000", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "It was great...\nIf we based it on performance alone,\nit ended well...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    }
                var0 = 0;
                }
            else {
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("P6513000_M01100", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey! Don't make that face.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I made a mistake...");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6513000_M01200", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "But we performed together in the\nend, right?\nSo smile, okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M00900", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6513000_M01300", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "We were both out of tune...\nRight to the very end.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    }
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetPl1Param(338) == 2){
            if (Parameter_bunka_jyu(0) == 1){
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(13, 3, (#1));
                    Voice_PlayVoice("P6513000_M01400", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "*Giggles*");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "*Giggles*");
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("P6513000_M01500", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Kyaa～! We're genius～!!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "We did it～!!");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!\nThat went well, right?");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("P6513000_M01600", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Yeah, umm...\nNevermind, it's nothing.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "O-Okay.");
                    }
                var0 = 0;
                }
            else {
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("P6513000_M01700", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey! Come on, cheer up! ... Okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M01800", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6513000_M01900", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "We're definitely out of tune....\nWas it because of the stars?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    }
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6513000_M00700", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Good job.\nIt surely is going to be a little\nlonely.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I guess...");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(13, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6513000_M00800", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "But for me, I'm glad I performed\ntogether with you for our last\nperformance.\nWe've　made a memory.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah!");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M00900", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("P6513000_M01000", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "It was great...\nIf we are to base it on performance\nalone, it ended well...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    }
                var0 = 0;
                }
            else {
                if (Parameter_GetCh1Param(13, 513) != 1){
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("P6513000_M01100", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "Hey! Don't make that face.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I made a mistake...");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(13, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("P6513000_M01200", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "But we performed together in the\nend, right?\nSo smile, okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    }
                else {
                    Character_ChFace(0, 0, 0);
                    Character_Chara_GS2(13, "G4_01F", 0);
                    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Voice_PlayVoice("P6513000_M00900", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "......");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(13, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("P6513000_M01300", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "We were out of tune...\nUp to the very end.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    }
                var0 = 1;
                }
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("P6513000_M02000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "*Giggles*");
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles*");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M02100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Kyaa～!\nThe performance was a great\nsuccess～!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "We did it～!!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("P6513000_M02200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "*Sigh～* It feels great!!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("P6513000_M02300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Our last performance has ended.\nFor a moment there, I got sad and\nthought I was going to cry...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("P6513000_M02400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "But when I saw you, I didn't want to\ncry.\nWe both made a nice memory, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M02500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nUmm, thank you for the past three\nyears.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Why thank me?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M02600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I feel that I got through with this\nclub because you were there.");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M02700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Anyway, I wanted to say that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                }
            var0 = 0;
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(13, 2, (#1));
                Voice_PlayVoice("P6513000_M02800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Good job! ...\nHey, don't make that face, okay?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("P6513000_M02900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "For me, I'm glad that we've\nperformed our last performance\ntogether.");
                Character_BlinkStart(13, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("P6513000_M03000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You know, honestly, there were days\nwhen I've thought about quitting the\nclub.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...");
                Character_ChFace(0, 0, 0);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M03100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah.\nBut because you were there, I made\nit through.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M03200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "So, please.\nLet's smile together until the very\nend, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(13, "G4_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(13);
                Message_MsgDisp("Mizushima", "｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("P6513000_M03300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Umm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("P6513000_M03400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Cheer up soon...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Mizushima＊＊｝...");
                }
            var0 = 1;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
            System_Call_GS2("D01", "M4", 0);
            }
        }
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how my Culture\nFestival　days ended this year.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how my last Culture\nFestival days ended.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Parameter_AddPl1Param(322, 1);
    Screen_ClearScreen();
    switch (var0){
        case 0:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, 4);
        Parameter_AddCh1Param(#1, 62, #4);
        break ;
        case 1:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, #4);
        Parameter_AddCh1Param(#1, 62, 1);
        break ;
        }
    Parameter_AddCh1Param(13, 86, 1);
    }
