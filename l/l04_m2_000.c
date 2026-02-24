section "l04_m2_000"{
    int var0;
    int var1;
    int var2 = 0;
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Voice_PlayVoice("L0402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Huh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Voice_PlayVoice("", 2, "L0402000_B00100");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
        }
    else {
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Character_ChFace(0, 2, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Voice_PlayVoice("L0402000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... The school is noisy today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It can't be helped since it's\nValentine's Day today....\nFor you too, ｛Shiba＊＊｝.\nHere!");
        }
    if (Parameter_GetCh1Param(2, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(2, 3)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B00300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nThis is perfect for replenishing my\nsugar levels.\nI'll take it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He's not accepting it as a\nValentine's present...?)");
                    Parameter_AddCh1Param(2, 61, 0);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0402000_B00400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Ah... chocolate. I'll eat it later.\nThanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm, well, that's that...)");
                    Parameter_AddCh1Param(2, 61, 0);
                    Parameter_AddCh1Param(2, 60, 6);
                    Parameter_AddCh1Param(2, 62, 0);
                    }
                else {
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0402000_B00500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "It's clearly obligatory chocolate...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B00600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Nothing. Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked a little sad.\nWas that just my imagination...?)");
                    Parameter_AddCh1Param(2, 61, #1);
                    Parameter_AddCh1Param(2, 60, 0);
                    Parameter_AddCh1Param(2, 62, 10);
                    }
                Parameter_InCh1Param(2, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(2, 3)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B00700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Looks expensive.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's not, though.");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0402000_B00800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Well, it all tastes the same.\nI'll take it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh, well that is certainly\ntrue...)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(2, 2, (#1));
                    Voice_PlayVoice("L0402000_B00900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... For me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah!\nHere, take it♪");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B01000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "You came at the right time.\nI was craving something sweet.\nThanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm, well that's that...)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 10);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                else {
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B01100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... It's too much.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh? Really?");
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 2, 5);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B01200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... But it looks nice. Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looked happy.\nThank gosh...)");
                    Parameter_AddCh1Param(2, 61, 6);
                    Parameter_AddCh1Param(2, 60, 10);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                Parameter_InCh1Param(2, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(2, 3)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B01300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Handmade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nI made it quite well, didn't I?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B01400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Yeah, looks nice. Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked relatively happy...\nI think?)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 6);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0402000_B01500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... You made this yourself?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah. I did my best.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B01600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "That face...\nYou made it with confidence, huh.\nI look forward to eating it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh! He looked happy.)");
                    Parameter_AddCh1Param(2, 61, 6);
                    Parameter_AddCh1Param(2, 60, 10);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0402000_B01700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "There's no price tag.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah. I made it myself...");
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B01800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... ｛Shiba＊＊｝?");
                    Character_ChFace(0, 0, 6);
                    Character_BlinkStart(2, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B01900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nI didn't think that homemade\nchocolates would make me this happy.");
                    Character_BlinkStart(2, 0, (#1));
                    Voice_PlayVoice("L0402000_B02000", 2, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Thanks, ｛主人公｝.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked extremely happy!)");
                    Parameter_AddCh1Param(2, 61, 10);
                    Parameter_AddCh1Param(2, 60, 10);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                Parameter_InCh1Param(2, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(2, 3)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0402000_B02100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... For me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nHere, take it♪");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0402000_B02200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Okay. I'll take it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's that.)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_ChFace(0, 2, 5);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0402000_B02300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... It's handmade, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah. How does it look?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B02400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "It just passes....\nBut isn't that fine? Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B02500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It looks a little bad but...");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B02600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nDon't worry about it, if it's full\nof your feelings.");
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(2, 2, (#1));
                    Voice_PlayVoice("L0402000_B02700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 6);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                Parameter_InCh1Param(2, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(2, 3)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0402000_B02800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... What's this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh... It's chocolate...");
                    Character_BlinkStart(2, 3, (#1));
                    Voice_PlayVoice("L0402000_B02900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... How did it end up like this...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "All I did was melt it...\nAnd reshape it...");
                    Character_BlinkStart(2, 2, (#1));
                    Voice_PlayVoice("L0402000_B03000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nYou went past the point of common\nsense.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nSomehow, he looks very shocked...)");
                    Parameter_AddCh1Param(2, 61, #1);
                    Parameter_AddCh1Param(2, 60, 0);
                    Parameter_AddCh1Param(2, 62, 3);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B03100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Is this perhaps...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, it's handmade chocolate.\nI did my best, but...");
                    Character_BlinkStart(2, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0402000_B03200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "How do you express this kinda\nthing...");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0402000_B03300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Ah. \"Avant-garde\".");
                    Message_Who(0);
                    Message_MsgDisp("主人公", ".........");
                    Character_BlinkStart(2, 2, (#1));
                    Voice_PlayVoice("L0402000_B03400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I admire it, so I'll eat it. Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I kind of feel like he's happy for\nanother reason...)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0402000_B03500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Is this... chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah...");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0402000_B03600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nYou need to change your concepts.\nAlso, your impressions...");
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(2, 3, (#1));
                    Voice_PlayVoice("L0402000_B03700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nIt all tastes the same in the\nend....\nSupposedly.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", ".........");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0402000_B03800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I'm glad that you thought to give me\nhomemade chocolate.\nThanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nI feel like he's happy, yet\nunhappy...)");
                    Parameter_AddCh1Param(2, 61, 3);
                    Parameter_AddCh1Param(2, 60, 3);
                    Parameter_AddCh1Param(2, 62, #3);
                    }
                Parameter_InCh1Param(2, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(2, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThis is perfect for replenishing my\nsugar levels.\nI'll take it.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He's not accepting it as a\nValentine's present...?)");
            Parameter_AddCh1Param(2, 61, 0);
            Parameter_AddCh1Param(2, 60, 3);
            Parameter_AddCh1Param(2, 62, #1);
            Parameter_InCh1Param(2, 555, 5);
            }
        else {
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 2);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("L0402000_B03900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'll also give you something.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't accept it...\nThat's unfortunate...)");
            var2 = System_GlobalWork(23, 1);
            if (var2 == #1){
                var2 = 0;
                }
            if (Parameter_ExtChar(0, 6, 2, 1, var2) == 0){
                if (Parameter_ExtChar(0, 6, 1, 0) == 2){
                    var1 = 1;
                    }
                else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                    if (Parameter_ExtChar(0, 6, 0, 0) == 2){
                        var1 = 1;
                        }
                    }
                }
            if (var1 == 1){
                Character_Chara_GS2(2, "NON");
                switch (var2){
                    case 1:
                    System_Call_GS2("F99", "M1", 0);
                    break ;
                    case 3:
                    System_Call_GS2("F99", "M3", 0);
                    break ;
                    case 4:
                    System_Call_GS2("F99", "M4", 0);
                    break ;
                    case 5:
                    System_Call_GS2("F99", "M5", 0);
                    break ;
                    case 6:
                    System_Call_GS2("F99", "M6", 0);
                    break ;
                    case 7:
                    System_Call_GS2("F99", "M7", 0);
                    break ;
                    }
                }
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
