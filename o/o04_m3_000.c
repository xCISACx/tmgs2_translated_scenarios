section "o04_m3_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "1st place. Splendid gluttony.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0403000_C00100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "You want to share it with me?\nI am sorry for making you share it\nwith me.\nThanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great, he accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C00200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "You dropped that bread.\nI will dispose of it, myself.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seemed pissed off.)");
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
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "1st place, congratulations.\nThis isn't your first bread eating\nrace.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, have I gotten used to it...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(3, 2, (#1));
                    Voice_PlayVoice("O0403000_C00400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "You want to share 1st place?\nThank you, I will accept it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(That was great!\nHe seemed to be pleased!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C00500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I will decline.\nI will surely get an upset stomach.");
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
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Congratulations.\n1st place, most definitely....\nThe hunter has a discerning eye for\nthe bread.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe he was praising me...?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(3, 0, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0403000_C00700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Huh, for m-me?\nAlthough you aimed at great extent\nfor this bread...\nThank you, I'll cherish this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seemed to be pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0403000_C00800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nThough I'm glad, I don't feel like\neating, at all....\nYou may withdraw your hand.");
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
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see you are 2nd place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0403000_C01000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "You want to give it to me?\nThank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Great! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C01100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I would take that, but you dropped\nthe bread.\nI will dispose of it myself.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seemed to be pissed off.)");
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
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "With 2nd place, you were almost\nthere.\nYou definitely have a way with\neating.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Was it that much?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("O0403000_C01300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Eh, you are giving it to me?\nEven though I didn't participate...\nThank you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* He seemed to be pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(3, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("O0403000_C01400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nI would surely have an upset\nstomach.\nI will decline.");
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
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You were almost there. However...\nYour eyes were on the bread!\nThat shines more than anything else.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if he came to encourage\nme...?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 3);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("O0403000_C01600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "This is...\nThe crystal of your sweat and tears.\nThank you for half.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Hikami＊＊｝ was\nexaggerating.\nHowever, he seemed to be pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("O0403000_C01700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Unfortunately, I am not interested\nin ground flavored bread...\nI will just accept the thought.");
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
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "3rd place.\nNot too fast, not too slow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... How disappointing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Voice_PlayVoice("O0403000_C01900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "For me? Thank you for this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He accepted it!)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C02000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Would this happen to be the bread\nthat you dropped?\nI will dispose of it myself.");
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
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C02100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You were in 3rd place.\nYou did your very best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Did I? ...\nHowever, I'm still disappointed...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0403000_C02200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Oh, thank you.\nThis will surely taste like an\nexceptional prize.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C02300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I would lose my composure and that\nwould certainly destroy my\nstomach....\nI will decline.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It isn't any good.\nI dropped the bread...)");
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
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C02400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good job.\nYou were quite enthusiastic.\nHowever, 3rd place was a nice fight.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you....\nBut I am still disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_BlinkStart(3, 0, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0403000_C02500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Huh, is it alright?\nW-Well, because you went through\ngreat trouble for it...\nI will accept and cherish it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good. He looked pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0403000_C02600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Such sympathy isn't needed, I did\nnot participate....\nI will just accept the thought.");
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
        if (Parameter_GetCh1Param(3, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C02700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "4th place.\nSomeone was bound to be it with four\npeople running.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm so disappointed!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(3, 2, (#1));
                    Voice_PlayVoice("O0403000_C02800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "For me?\nAlthough your luck wasn't very good,\nI'll accept it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... Right.\nThank you for accepting it...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C02900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Would this happen to be the bread\nthat you dropped?\nI will dispose of it myself.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seemed to be pissed off.)");
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
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 3, (#1));
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C03000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Last place.\nDisappointing does not drift from\nthe nuance of the word.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I can clearly see that...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("O0403000_C03100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Huh...!!\nYou want to give this to me even\nthough I did not participate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He shouldn't be so surprised...)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0403000_C03200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I will decline....\nIt's not because you were 4th place,\nit is because that fell on the\nground.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... He seemed pissed off.)");
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
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0403000_C03300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Good work.\nDon't worry about the position.\nYou worked hard, that fact is what's\nreally important.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, he's trying to cheer me up...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("O0403000_C03400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Huh...!?\nEven though you tried so hard to get\nit, are you so depressed that you\nlost your appetite?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... Ugh, that's not it.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0403000_C03500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nEven though it's a present from you,\nI feel thankful for your commendable\nact.\nHowever, I am sorry, I can't accept\nthat.");
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
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
