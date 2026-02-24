section "l04_m3_000"{
    int var0;
    int var1;
    int var2 = 0;
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "L0403000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nWalk when you are in the corridors.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right.... Today is Valentine's Day.\nHere, it's chocolate!");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "L0403000_C00100");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nDo you need something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is Valentine's Day.\nHere, it's chocolate!");
        }
    else {
        Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "L0403000_C00200");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nWhat is the matter, you are\ngrinning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Because today is Valentine's Day.\nHere, it's chocolate!");
        }
    if (Parameter_GetCh1Param(3, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(3, 3)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("L0403000_C00300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Bringing sweets to school is an\nextreme violation of the school\nrules.\nI will confiscate it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!?");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0403000_C00400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nI want to say that, but the teachers\ntold me to overlook it today.\nThank you for this.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, that scared me...)");
                    Parameter_AddCh1Param(3, 61, 0);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("L0403000_C00500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Bringing sweets to school is an\nextreme violation of the school\nrules.\nGive me any others that you have.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh...!?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0403000_C00600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I am joking.\nThe teachers told me to overlook it\ntoday....\nThanks for this.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(When ｛Hikami＊＊｝ says it,\nit doesn't sound like a joke...)");
                    Parameter_AddCh1Param(3, 61, 0);
                    Parameter_AddCh1Param(3, 60, 6);
                    Parameter_AddCh1Param(3, 62, 0);
                    }
                else {
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0403000_C00700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Is this for me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Why not?");
                    Character_ChFace(0, 0, 6);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("L0403000_C00800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "It is the same packaging as the\nchocolate that my mother gave me\nthis morning....\nIs this popular?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, really?");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C00900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Then I will eat the one that you\ngave me first....\nThanks for this.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nHe might have found out that it was\nstandard chocolate.)");
                    Parameter_AddCh1Param(3, 61, #1);
                    Parameter_AddCh1Param(3, 60, 0);
                    Parameter_AddCh1Param(3, 62, 10);
                    }
                Parameter_InCh1Param(3, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(3, 3)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("L0403000_C01000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Bringing sweets to school is a\nviolation of the school rules.\nI will confiscate it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0403000_C01100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nI want to say that, but the teachers\ntold me to overlook it today.\nThanks, the packaging is flashy.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, that scared me.\nHe looks happy... I think?)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("L0403000_C01200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Bringing sweets to school is an\nextreme violation of the school\nrules.\nGive me any others that you have.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh......!?");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(3, 2, (#1));
                    Voice_PlayVoice("L0403000_C01300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I am joking.\nThe teachers told me to overlook it\ntoday....\nThanks, the packaging is lovely.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(When ｛Hikami＊＊｝ says it,\nit doesn't sound like a joke...\nBut he looks happy... I think?)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 10);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 3);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0403000_C01400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "What a lovely box...\nIs this seemingly expensive thing\nfor me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, take it!");
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C01500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Thank you for this, it will surely\nbe nice.\nI am glad.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(3, 61, 6);
                    Parameter_AddCh1Param(3, 60, 10);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                Parameter_InCh1Param(3, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(3, 3)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C01600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "This packaging means that is it\nhomemade.\nI am opening it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Go ahead!");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0403000_C01700", 3, "L0403000_C01701");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "This is an artistic masterpiece.\nThank you, ｛主人公｝.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked happy!)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 6);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C01800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Did you... do the wrapping for this?\nMeaning it is homemade.\nCan I open it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Go ahead.\nI'm confident that it is nice.");
                    Character_ChFace(0, 0, 11);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C01900", 3, "L0403000_C01901");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nThis is amazing, it must have been\ntough on you, right?\nThank you, ｛主人公｝.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy!)");
                    Parameter_AddCh1Param(3, 61, 6);
                    Parameter_AddCh1Param(3, 60, 10);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0403000_C02000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Is this... handmade chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, you can tell?");
                    Character_ChFace(0, 0, 9);
                    Character_ChFace(0, 3, 0);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0403000_C02100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Your eyes are red and you look\nsleepy.\nDid you not get much sleep? ...\nFor my sake.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Haha, busted?");
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C02200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "You did not have to force\nyourself...\nI am grateful, I will open it.");
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C02300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... This looks very delicious!\nThank you. I will savor the taste.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked really happy!)");
                    Parameter_AddCh1Param(3, 61, 10);
                    Parameter_AddCh1Param(3, 60, 10);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                Parameter_InCh1Param(3, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(3, 3)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0403000_C02400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Judging from the wrapping, this is\nhandmade.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, you're right.");
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C02500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I see.\nThank you for going through all that\ntrouble.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked relatively happy.)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C02600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Judging from the wrapping...\nThis is homemade, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, you can tell?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0403000_C02700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "As I thought....\nThank you for going to all the\ntrouble.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy!)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C02800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Is this... handmade chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, you can tell?");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0403000_C02900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Yes, because you look a little\nsleepy.\nSorry for making you force\nyourself...\nThank you, I will gratefully accept\nit.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy!)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 6);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                Parameter_InCh1Param(3, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(3, 3)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_ChFace(0, 0, 11);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0403000_C03000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Is this chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It is.");
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C03100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I see. Surprisingly, you...\nNo, I will drop it.\nIt is something that I cannot say,\nas a human.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
                    Parameter_AddCh1Param(3, 61, #1);
                    Parameter_AddCh1Param(3, 60, 0);
                    Parameter_AddCh1Param(3, 62, 3);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0403000_C03200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... This is chocolate, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C03300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I was just confirming that fact.\nRight...\nI am touched by your feelings.");
                    Character_BlinkStart(3, 3, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0403000_C03400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... This is chocolate...");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 9);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0403000_C03500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Is this perhaps...\nsupposed to be handmade chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah, it is handmade chocolate...");
                    Character_BlinkStart(3, 3, (#1));
                    Voice_PlayVoice("L0403000_C03600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... I see.\nI wonder why you gave this to me,\nand not store bought chocolate...");
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(3, 3, (#1));
                    Voice_PlayVoice("L0403000_C03700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nRight, I will try it out right\nnow...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
                    Character_BlinkStart(3, 0, (#1));
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0403000_C03800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I am grateful for your feelings, I\nwill take responsibility for this.\nI will certainly eat it all!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Hikami＊＊｝...\nI should have tried a little\nharder...)");
                    Parameter_AddCh1Param(3, 61, 3);
                    Parameter_AddCh1Param(3, 60, 3);
                    Parameter_AddCh1Param(3, 62, #3);
                    }
                Parameter_InCh1Param(3, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(3, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("L0403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Bringing sweets to school is an\nextreme violation of the school\nrules.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI want to say that, but the teachers\ntold me to overlook it today.\nThank you for this.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, that scared me...)");
            Parameter_AddCh1Param(3, 61, 0);
            Parameter_AddCh1Param(3, 60, 3);
            Parameter_AddCh1Param(3, 62, #1);
            Parameter_InCh1Param(3, 555, 5);
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("L0403000_C03900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Bringing sweets to school is an\nextreme violation of the school\nrules.\nThere is no reason why you should\nnot know that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Eh?");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("L0403000_C04000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If I take this, I will be setting a\nbad example to everyone.\nDispose of it.");
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("L0403000_C04100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Excuse me.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He can't accept it...\nThat's unfortunate...)");
            var2 = System_GlobalWork(23, 1);
            if (var2 == #1){
                var2 = 0;
                }
            if (Parameter_ExtChar(0, 6, 2, 1, var2) == 0){
                if (Parameter_ExtChar(0, 6, 1, 0) == 3){
                    var1 = 1;
                    }
                else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                    if (Parameter_ExtChar(0, 6, 0, 0) == 3){
                        var1 = 1;
                        }
                    }
                }
            if (var1 == 1){
                Character_Chara_GS2(3, "NON");
                switch (var2){
                    case 1:
                    System_Call_GS2("F99", "M1", 0);
                    break ;
                    case 2:
                    System_Call_GS2("F99", "M2", 0);
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
    Parameter_AddCh1Param(3, 86, 1);
    }
