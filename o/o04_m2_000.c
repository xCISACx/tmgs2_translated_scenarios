section "o04_m2_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... 1st place is the best.\nOr was it because it was\nfood-related?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(2, 3, (#1));
                    Voice_PlayVoice("O0402000_B00100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I'll accept it this time.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He was pleased.... I think?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B00200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Did you drop that bread? ......\nReally.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... He may be pissed...)");
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
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You were quick.\nYou displayed the special ability of\na glutton...");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-That kind of thing is okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(2, 2, (#1));
                    Voice_PlayVoice("O0402000_B00400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Thanks....\nI'll eat it when I get hungry.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He was pleased.... I think?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B00500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I'm afraid to take that...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He may be pissed...)");
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
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I didn't know the human mouth could\nopen that wide...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's bad. Congratulations...\nHaha.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was laughed at...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0402000_B00800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nIf I eat this, it'll be as if I were\nthe one who aimed at 1st place.\nThank you, I will eat it later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* Good. He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_BlinkStart(2, 0, (#1));
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0402000_B00900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I'm never going to eat that.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, I dropped it!)");
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
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Wow... 2nd place. You're fast.\nYou can't tell, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised... I think?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B01100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I don't deserve this.\nBut I'll accept it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He was pleased.... I think?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B01200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nIn what way would I want this after\nwhat was done to it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah! That reminds me, I dropped it!)");
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
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Just a little more.\nHowever disappointing, even 2nd\nplace is a big deal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really disappointed!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0402000_B01400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0402000_B01500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... You, that... No, that's alright.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah! I dropped it!)");
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
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You were the at the top until you\nbit into that bread....\nSounds like you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... He laughed at me...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(2, 3, (#1));
                    Voice_PlayVoice("O0402000_B01700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Is it okay? ... Thanks.\nI'll eat it later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* Good. He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(2, 3, (#1));
                    Voice_PlayVoice("O0402000_B01800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Well, that's okay.\nThat's enough to make my stomach\nill.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah! This is bad! I dropped it!)");
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
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's a reasonable result. Maybe.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uuggh....");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0402000_B02000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nI'll eat it whenever I'm ready to\neat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Was he pleased......\nThat I gave it to him?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B02100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I don't need it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... Yeah, he's right.)");
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
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B02200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The running itself wasn't that\nbad....\nDon't worry about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0402000_B02300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nI'll show my gratitude this time.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He was pleased.... I think?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B02400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "What? It...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I dropped the bread.\nAs expected, it's not any good.)");
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
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B02500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I thought if it was food-related,\nyou wouldn't lose....\nWas your physical condition poor?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I'm worried...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0402000_B02600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Thanks. I'll eat it later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 5);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B02700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... You had better be careful.");
                    Voice_PlayVoice("O0402000_B02800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "No one would usually be pleased with\nthings like that.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Uuggh... I'm sorry.)");
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
        if (Parameter_GetCh1Param(2, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B02900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIt was obvious you were unmotivated.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah...\nI should have tried harder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0402000_B03000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...... Aah.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Uugh...\nHe didn't seem to be pleased...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B03100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nI don't have any tastes that\nincludes eating dropped bread.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... He's right...)");
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
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B03200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The reason you lost was because the\nrotating was too fast.\nI don't believe you need to feel\ndown.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("O0402000_B03300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I'll accept it this time.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nHe doesn't seem to be that happy...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(2, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0402000_B03400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I'll pass.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... Yeah...)");
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
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0402000_B03500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Take a rest.\nYour physical condition was poor.\nIt can lead to injury if you overdo\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was worried about running...\nI should have tried harder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(2, 0, (#1));
                    Voice_PlayVoice("O0402000_B03600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nIf your physical condition is poor,\nyou should eat it all.\nIs it okay? The half.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh, he looks worried...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0402000_B03700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "On the other hand, it sounds like\nluck....\nThat is something you don't have.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I don't think that was\nnecessary...)");
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
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(2, 61, 0);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
