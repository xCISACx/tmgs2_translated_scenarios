section "o04_m4_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You came in 1st. Ehh～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0404000_D00100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "If you're giving it to me, then I'll\ntake it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked happy to take it.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0404000_D00200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I don't need bread that fell on the\nground.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It looks like I made him angry...)");
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
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You came in 1st!?\nAh, because it was bread eating.\nI get it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0404000_D00400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Oh, thanks. I'll take it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looked happy to take\nit.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0404000_D00500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You eat it!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I made him angry...)");
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
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yay, you came 1st! Good work!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 4);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0404000_D00700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Bread that you had in your mouth...");
                    Character_ChFace(0, 4, 1);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0404000_D00800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah, I'll eat it!\nOf course I'd eat it!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(What a relief, he looked happy to\ntake it.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("O0404000_D00900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Didn't that bread fall on the\nground...\nWell, I'll take it.");
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
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You came in 2nd place, huh. Hmph.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0404000_D01100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Just half of it? Whatever.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Anyway, he looked happy to take\nit...\nperhaps.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0404000_D01200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... Hey.\nDidn't this fall on the ground?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I made him angry...)");
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
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You were so close.\nIf you were a horse, you definitely\nwould have one!\nYou were a nose behind!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A nose...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("O0404000_D01400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Thanks! I'll eat it later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It looks like he was happy to take\nit.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0404000_D01500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I don't need it since it fell down\non the ground.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It looks like I made him angry...)");
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
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You won in terms of getting the\nbread, you know?\nBut after all, getting 1st place is\nbetter!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0404000_D01700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "The same bread you won, huh.\nIt seems like a blessing!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looked happy to take\nit.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("O0404000_D01800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Forgetting it right away～...\nWhatever.\nI'll eat the inside only later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nIt had fallen down on the ground!)");
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
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "3rd place, huh?\nWell, at least it's better than last\nplace, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0404000_D02000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I don't really feel like eating now.\nWhatever.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm, he was happy to take it...\nright?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0404000_D02100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I don't need that.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... yeah...)");
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
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's the rank that I guessed you'd\nget.\nSo don't be down!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0404000_D02300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah, I'm hungry. I'll take it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked happy to take it.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("O0404000_D02400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Doing that will just make me\nhungrier, you know?");
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
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D02500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let's leave your rank outta this.\nThe way you ate bread was\nunbeatable!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("O0404000_D02600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Oh, thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nIt looked like he was happy to take\nit.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0404000_D02700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "...\nWell, since it's me, I'll take it.\nAren't I nice?");
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
        if (Parameter_GetCh1Param(4, 130) < 3){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D02800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nYou had this \"I don't wanna do this\"\nfeeling.\nIf so, don't participate in the\nfirst place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(4, 3, (#1));
                    Voice_PlayVoice("O0404000_D02900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "......... Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like...\nhe wasn't happy to take it...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0404000_D03000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "......... I don't need it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... right...)");
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
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D03100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Last place!?\nWhy did you come last when it\ninvolved food?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I made him worry...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("O0404000_D03200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hmm... Well, I'll thank you for it.\nThanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked happy to take it...\nright?)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0404000_D03300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... Wipe off the sand on it.\nThen I'll take it.");
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
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0404000_D03400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "4th place in a bread eating race...\nI'm kinda worried... Are you okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I made him worry...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat should I do with the red bean\nbun I got in the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0404000_D03500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Are you giving me half of it!?\nHey... are you okay, for real?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I made him worry...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0404000_D03600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah, I'll eat it! So hurry and rest!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(S-Something's off...)");
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
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
