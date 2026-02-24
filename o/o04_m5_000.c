section "o04_m5_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_08F", 0);
        if (Parameter_GetCh1Param(5, 130) < 3){
            Voice_PlayVoice("O0405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were so fast...\nHow were you able to get it so\nquickly?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("O0405000_E00100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "You're sharing your victory. Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0405000_E00200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It's got sand on it...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nI wonder if that was a bad thing to\ndo...)");
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
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("O0405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your mouth was open real wide.\nYou were cute, just like a goldfish▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("O0405000_E00400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks.\nIn return, I'll also do my best and\nwin first place.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E00500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "...\nThis is what fell on the ground...\nYeah, thanks...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nNow that you mention it, it did fall\non the ground!)");
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
            Voice_PlayVoice("O0405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I want you to give me a little bit\nof that passion you had when running\nfor the red bean bun...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E00700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'm thankful that you're giving me a\nhigh quality red bean bun...\nThanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("O0405000_E00800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I want to have it all so that you\nwon't get sick...\nIs that okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nNow that you mention it, it did fall\non the ground!)");
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
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You had the same sorta biting skills\nas the girl who came first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0405000_E01000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "You're giving it to me? Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E01100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "The right side looks like it's\nfine...\nThanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nNow that you mention it, it did fall\non the ground!)");
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
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were close.\n*bang*, *crash*, *bite*!\nYou probably didn't have enough of\nthat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E01300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Wow, half. I'm so happy～. Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E01400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... Right, the three second rule.\nThanks, I'll take it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nNow that you mention it, it did fall\non the ground!)");
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
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were really into the bread....\nI was a little jealous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E01600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'll punish this red bean bun that\nhad fascinated you!\n... Yummy.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E01700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It looks sandy, though...\nWell it seems like it will be a\nhighlight, thanks...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Everyone was more into the way you\nopened your mouth rather than your\nrank～.\nMe too, of course▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0405000_E01900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Wow, thanks. It looks yummy.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E02000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'll eat it all later. Thanks...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were also cute when you were too\ninto the bread that you went down in\nthe ranks▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thanks...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E02200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Wow, I'll take this.\nI'll eat it when I'm sitting down～.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E02300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'm glad, but having it decorated\nwith sand makes me even happier...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The red bean bun must also be happy\ntoo, for you to have tried so\nhard...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I w-wonder...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E02500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "But it's your prize?\nIs it okay to give it to me?\nI'll take it then.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("O0405000_E02600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'll take it....\nCan I eat that, too?\nI'm not that worried about the sand.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
        if (Parameter_GetCh1Param(5, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E02700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That was too bad...\nBut you had the prettiest way of\nopening your mouth▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thanks...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("O0405000_E02800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Good timing, just when I wanted to\neat.\nI'll take this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks a little happy...\nperhaps.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0405000_E02900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... Sand bread.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E03000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You looked happy when you got the\nbread▼ It was too bad, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have tried\nharder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0405000_E03100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "This will make us closer▼ I'll take\nit.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0405000_E03200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Sandy... Isn't it?\nHmm, I'll take it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0405000_E03300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The result was bad luck...\nBut I was lucky that I got to see\nyou go to the end▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have tried\nharder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Give half to him as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("O0405000_E03400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Wow, my heart is kinda racing.\nBecause you had it in your mouth for\na long...\nNothing. Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looks happy!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0405000_E03500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "...\nRight, it's proof that you did your\nbest.\nI'll take this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, crap!\nIt had fallen on the ground!)");
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
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
