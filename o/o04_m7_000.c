section "o04_m7_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0407000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "1st place, congratulations.\nSensei was surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, thank you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0407000_G00100", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nIt's filled with a lot of jam.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great, he accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G00200", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "...\nI cannot eat this without it being\ncooked.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G00300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\n1st place, congratulations.\nYou did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, ｛Wakaouji＊＊｝!\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0407000_G00400", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nThank you, my stomach was feeling\nempty.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0407000_G00500", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "... Well, that bread isn't clean.\nMay I decline?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, I dropped it...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nCongratulations, 1st place.\nYou are suitable for this\ncompetition.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nIs that supposed to be a compliment,\n｛Wakaouji＊＊｝?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0407000_G00700", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nIt will surely taste like victory.\nThank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Haha!\nHe seemed to have been pleased!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G00800", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "... Give me that.\nWe'll throw it away together.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped the bread...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else if (var0 == 2){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nYou came in 2nd place. Good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I did my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0407000_G01000", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nIt's been a long time since I've had\na red bean bun.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G01100", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "... Ehh, it's covered in sand.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0407000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "2nd place shows fine results.\nGood work.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes...\nHowever, I am slightly disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0407000_G01300", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nThank you for the snack today.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0407000_G01400", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "... Does it taste like poison?\nMay I decline?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, I dropped it...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G01500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝. Welcome.\nThough you paused, you did your\nbest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I am slightly disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(7, 0, (#1));
                    Voice_PlayVoice("O0407000_G01600", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nI'm happy you want to share this\nwith me.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Haha! He seemed pleased!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(7, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G01700", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "...\nIs there any reward given if I eat\nthis?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped the bread...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else if (var0 == 3){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0407000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You got 3rd place.\nI appreciate your effort.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I wanted to do more of my best...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0407000_G01900", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nMy cat and I will be happy.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0407000_G02000", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "This part of the bread can be the\nbait for fish.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G02100");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nThat's enough for today.\nIt was a booby prize.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I am a little disappointed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(7, 2, (#1));
                    Voice_PlayVoice("O0407000_G02200", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei? Thank you.\nI secretly wanted to eat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0407000_G02300", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "If I eat this, it will be crunchy.\nMay I decline?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, I dropped it...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(Gave up on giving.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G02400");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nYou tried your best and didn't give\nup until the last minute.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, somehow I managed to get 3rd\nplace...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0407000_G02500", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "I'm sorry.\nThank you for taking my needs into\nconsideration.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Haha. He seemed pleased!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(7, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G02600", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "... I'm hesitant.\nShould I take good care of this\nthing, or should I take good care of\nmy health?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped the bread...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else {
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(7, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("O0407000_G02700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The 4th place person.\nYou had a fairly hard time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I was no good...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("O0407000_G02800", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nNo need to overdo it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I'm not...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0407000_G02900", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Sensei's stomach is full.\nNo room for a red bean bun either.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G03000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nYou were 4th place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I feel disappointed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("O0407000_G03100", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Is this for Sensei?\nI unexpectedly have a small\nappetite.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Unexpectedly...?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0407000_G03200", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "...\nNow that you have dropped this in\nthe sand, I'll return it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, I dropped it...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(7, "M7_08F", 0);
            Voice_PlayVoice("", 7, "O0407000_G03300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nA bread eating race is not your\nlife.\nCome now, cheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... It's hard to cheer up...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("O0407000_G03400", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "The last bit of bread left is a\nlittle dry.\nAs for this, interesting.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I'm sorry,\n｛Wakaouji＊＊｝...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0407000_G03500", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "This...\nLet's bury it under the flowerbed.\nIt will become fertilizer.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Damn it! I dropped the bread...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    switch (var1){
        case 0:
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 1);
        break ;
        case 1:
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, 0);
        break ;
        case 2:
        Parameter_AddCh1Param(7, 61, 0);
        Parameter_AddCh1Param(7, 60, 0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
