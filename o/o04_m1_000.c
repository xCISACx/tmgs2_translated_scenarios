section "o04_m1_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "1st place... Congratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0401000_A00100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh... Thank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0401000_A00200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... I don't need it.\nDidn't you have that in the sand?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "1st place, congratulations! You...\nsurprisingly ate a large amount of\nfood.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A00400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you. But... is it okay?\nI thought you went through a lot for\nthis.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0401000_A00500", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Don't treat me like a garbage\ndisposal...\nDidn't you just drop that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "1st place, congratulations!\nYou had a good face when you reached\nthe goal.\nAnd a mouthful of red bean bun.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0401000_A00700", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you.... Is it okay?\nTo eat it?\nI won't be able to return it once I\neat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He was pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("O0401000_A00800", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Maybe...\nAre you giving me that to eat after\nyou've already dropped it?");
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
        }
    else if (var0 == 2){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place... So close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0401000_A01000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh... Thank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0401000_A01100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... I don't need it.\nDidn't you have that in the sand?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place... So close.\nMaybe you were thinking too much\nabout the red bean bun?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A01300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you. But... is it okay?\nYou went through so much to get\nthis.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0401000_A01400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Don't treat me like a garbage\ndisposal...\nDidn't you just drop that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "2nd place...\nTrue, you were so close.\nIf your mind wasn't preoccupied with\nthe red bean bun, things would have\nchanged...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I guess that's encouraging...?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A01600", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you.... Is it okay?\nTo eat it?\nYou know I can't return it after I\nhave already eaten it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0401000_A01700", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Maybe...\nAre you giving me that to eat after\nyou've already dropped it?");
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
        }
    else if (var0 == 3){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... You avoided last place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0401000_A01900", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh... Thank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0401000_A02000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... I don't need it.\nDidn't you have that in the sand?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A02100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well...\nIt's not last place, so I assume\nit's okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A02200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you. But... is it okay?\nYou went through so much get this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0401000_A02300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Don't treat me like a garbage\ndisposal...\nDidn't you just drop that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Oh, I dropped it...)");
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
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A02400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Okay, okay. It's not last place.\nYou did your best for this\nposition....\nOkay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you. But...\nI'm still disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A02500", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you.... Is it okay?\nTo eat it?\nI won't be able to return it once I\neat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0401000_A02600", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Maybe...\nAre you giving me that to eat after\nyou've already dropped it?");
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
        }
    else {
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A02700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You...\nEven so, you were too absorbed with\nthe red bean bun.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0401000_A02800", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh... Thank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_BlinkStart(1, 3, (#1));
                    Voice_PlayVoice("O0401000_A02900", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... I don't need it.\nDidn't you have that in the sand?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A03000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Too tired....\nWell, at least you received a red\nbean bun.\nDo you feel like you achieved the\ngoal?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A03100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you. But... is it okay?\nYou went through so much get this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(.........\nHowever, he seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0401000_A03200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Don't treat me like a garbage\ndisposal...\nDidn't you just drop that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0401000_A03300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know...\nThis kind of event doesn't suit you.\nGo for something different next\ntime.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(1, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0401000_A03400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Oh, thank you.... Is it okay?\nTo eat it?\nI won't be able to return it once I\neat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 2, (#1));
                    Voice_PlayVoice("O0401000_A03500", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Maybe...\nAre you giving me that to eat after\nyou've already dropped it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seems pissed off.)");
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
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(1, 61, 0);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
