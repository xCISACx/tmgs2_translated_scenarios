section "l04_m1_000"{
    int var0;
    int var1;
    int var2;
    int var3 = 0;
    Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) == 3){
        if (Parameter_GetCh1Param(1, 540) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(This chocolate is for\n｛Saeki＊＊｝...)");
            System_GlobalWork(1, 0, 1);
            Parameter_InCh1Param(1, 555, 4);
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nisn't here...)");
            Parameter_InCh1Param(1, 555, 4);
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("L0401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, what's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "L0401000_A00100");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝. H-Hey!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("L0401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, no! Hey! What's up?");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("L0401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What, you need something?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Here.\nIt's Valentine's chocolate.");
            }
        if (Parameter_GetCh1Param(1, 130) >= 2){
            if (Parameter_GetPl1Param(36) == 1){
                var0 = Parameter_GetPl1Param(36);
                if (Parameter_ChkChar(1, 3)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("L0401000_A00400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Is it okay for me to take it?\nThanks. I'll eat it at home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You're welcome.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nis used to getting Valentine's\nchocolates, as expected...)");
                        Parameter_AddCh1Param(1, 61, 0);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Character_ChFace(0, 2, 3);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("L0401000_A00500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Is it okay for me to take it?\nThanks.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "No problem!");
                        Character_ChFace(0, 2, 1);
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("L0401000_A00600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "It's clearly obligatory chocolate.\nHey, do you remember how to take the\nother person into consideration?");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Ugh...\nIt would have been fine if he just\naccepted it.\nGeez...)");
                        Parameter_AddCh1Param(1, 61, 0);
                        Parameter_AddCh1Param(1, 60, 6);
                        Parameter_AddCh1Param(1, 62, 0);
                        }
                    else {
                        Character_ChFace(0, 4, 0);
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("L0401000_A00700", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "This... Ah, is it for my grandpa?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? Umm...\nIt's for ｛Saeki＊＊｝...");
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 4, 0);
                        Voice_PlayVoice("L0401000_A00800", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Seriously?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Y-Yeah...");
                        Character_ChFace(0, 4, 0);
                        Character_ChFace(0, 0, 9);
                        Character_BlinkStart(1, 2, (#1));
                        Voice_PlayVoice("L0401000_A00900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah... I see. Whatever.\nIt's just chocolate...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Are you okay, ｛Saeki＊＊｝?");
                        Character_ChFace(0, 4, 0);
                        Character_ChFace(0, 2, 0);
                        Character_BlinkStart(1, 3, (#1));
                        Voice_PlayVoice("L0401000_A01000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, I'm fine!\nIt's fine, it's just chocolate...");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nwas shocked...)");
                        Parameter_AddCh1Param(1, 61, #1);
                        Parameter_AddCh1Param(1, 60, 0);
                        Parameter_AddCh1Param(1, 62, 10);
                        }
                    Parameter_InCh1Param(1, 555, 5);
                    }
                else {
                    var2 = 1;
                    }
                }
            else if (Parameter_GetPl1Param(37) == 1){
                var0 = Parameter_GetPl1Param(37);
                if (Parameter_ChkChar(1, 3)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("L0401000_A01100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, this chocolate is popular right\nnow, isn't it?\nThanks.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "No problem!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nis used to getting Valentine's\nchocolates, as expected...)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Character_BlinkStart(1, 2, (#1));
                        Voice_PlayVoice("L0401000_A01200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Thanks.\nAh, this chocolate is popular right\nnow, isn't it?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, it seems like it!");
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 2, 1);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("L0401000_A01300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Think about it for a bit.\nThis is the 4th one I've gotten...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Then it's fine.\nI'll just take it home...");
                        Character_BlinkStart(1, 3, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A01400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "No.\nI've gotten it, so it's mine now.\nThanks.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Geez... He's not honest, at all!)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 10);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    else {
                        Character_ChFace(0, 0, 10);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("L0401000_A01500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Thanks.\nIt seems like this chocolate is\npopular right now.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, it seems like it!");
                        Character_ChFace(0, 0, 6);
                        Character_BlinkStart(1, 2, (#1));
                        Voice_PlayVoice("L0401000_A01600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "This is expensive, right?\nDon't go wasting your money like\nthat.\nI'm fine with something cheap.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "But since it's Valentine's...");
                        Character_ChFace(0, 0, 10);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("L0401000_A01700", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Then we'll share it later, okay?\nThanks.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Thank gosh!\nIt looks like he's happy!)");
                        Parameter_AddCh1Param(1, 61, 6);
                        Parameter_AddCh1Param(1, 60, 10);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    Parameter_InCh1Param(1, 555, 4);
                    }
                else {
                    var2 = 1;
                    }
                }
            else if (Parameter_GetPl1Param(39) == 1){
                var0 = Parameter_GetPl1Param(39);
                if (Parameter_ChkChar(1, 3)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Character_ChFace(0, 2, 3);
                        Character_ChFace(0, 3, 4);
                        Voice_PlayVoice("L0401000_A01800", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, is this handmade?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You can tell?\nThat chocolate is--");
                        Voice_PlayVoice("L0401000_A01900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "You're good at cooking, right?\nIt looks nice. I will take it.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It kind of seems like that's his\nstandard response...)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 6);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Character_ChFace(0, 2, 3);
                        Character_ChFace(0, 3, 4);
                        Voice_PlayVoice("L0401000_A02000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, is this handmade?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, it is!");
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("L0401000_A02100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ehh, it's quite elaborate...\nYou're more skilled than I thought,\naren't you?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Maybe? I kind of tried my best.");
                        Character_ChFace(0, 0, 10);
                        Character_BlinkStart(1, 2, (#1));
                        Voice_PlayVoice("L0401000_A02200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Well, you're still no match for me,\nright?\nThanks.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(I wonder if he had to insult me...\nBut it looks like he was happy!)");
                        Parameter_AddCh1Param(1, 61, 6);
                        Parameter_AddCh1Param(1, 60, 10);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    else {
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A02300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Oh... homemade chocolate.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I kind of tried my best.");
                        Voice_PlayVoice("L0401000_A02400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "It's kinda quite fancy, isn't it?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Maybe.\nI don't think it's a match for your\nskills though,\n｛Saeki＊＊｝.");
                        Character_ChFace(0, 0, 10);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("L0401000_A02500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Idiot.\nHey, let's eat this together later.\nWe'll go hide somewhere. Later.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looks\nincredibly happy!)");
                        Parameter_AddCh1Param(1, 61, 10);
                        Parameter_AddCh1Param(1, 60, 10);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    Parameter_InCh1Param(1, 555, 1);
                    }
                else {
                    var2 = 1;
                    }
                }
            else if (Parameter_GetPl1Param(39) == 2){
                var0 = Parameter_GetPl1Param(39);
                if (Parameter_ChkChar(1, 3)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A02600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, is this homemade?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You can tell?\nThat chocolate is--");
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("L0401000_A02700", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Do you like cooking?\nSo you're family- oriented?\nI will accept this.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It kind of seems like that's his\nstandard response...)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A02800", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, is this handmade?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, it is!");
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 2, 1);
                        Voice_PlayVoice("L0401000_A02900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "You mass-produced this, right?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Mass-produced?");
                        Character_BlinkStart(1, 2, (#1));
                        Voice_PlayVoice("L0401000_A03000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "The wrapping is sorta shoddy.\nYou can see the bubbles.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Fine then!\nI'll just take it back home!");
                        Character_BlinkStart(1, 3, (#1));
                        Voice_PlayVoice("L0401000_A03100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "No. I'm confiscating this.\nI'll fix it for you.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(I wonder if he had to insult me...\nBut it looks like he was happy!)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    else {
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A03200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Oh... handmade chocolate.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I kind of tried my best.");
                        Character_ChFace(0, 0, 10);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("L0401000_A03300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "That's what it looks like.\nIt looks nice.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I don't think that it's a match for\nyour skills though,\n｛Saeki＊＊｝.");
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 2, 5);
                        Voice_PlayVoice("L0401000_A03400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Come to Sangosho's kitchen next\ntime.\nI'll teach you some things.\nThanks for this.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looks really\nhappy!)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 6);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    Parameter_InCh1Param(1, 555, 2);
                    }
                else {
                    var2 = 1;
                    }
                }
            else if (Parameter_GetPl1Param(39) == 3){
                var0 = Parameter_GetPl1Param(39);
                if (Parameter_ChkChar(1, 3)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("L0401000_A03500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, this...\nNo matter how you look at it, it's\nhandmade.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah!");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("L0401000_A03600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Uhh, I'm just asking but...\ndo you like cooking?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Hmm～... maybe?");
                        Character_ChFace(0, 0, 8);
                        Voice_PlayVoice("L0401000_A03700", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Liar.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh!?");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("L0401000_A03800", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, no...\nYou're family- oriented, aren't you?\nLater!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It looks like ｛Saeki＊＊｝\nis a little panicked...)");
                        Parameter_AddCh1Param(1, 61, #1);
                        Parameter_AddCh1Param(1, 60, 0);
                        Parameter_AddCh1Param(1, 62, 3);
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("L0401000_A03900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, this... is handmade, right?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, it is!");
                        Character_ChFace(0, 2, 1);
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("L0401000_A04000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "You shouldn't say that...\nThis is more like construction than\nchocolate.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "But I tried my best...");
                        Character_BlinkStart(1, 3, (#1));
                        Voice_PlayVoice("L0401000_A04100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "I know that. It can't be helped...\nMaybe I should eat it.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You don't have to force yourself to\neat it...");
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A04200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "If I say I'm gonna eat it, I'm gonna\neat it....\nYou did your best, right? Thanks.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(It would have been better if I had\nmade the chocolate a little\nbetter...)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #1);
                        }
                    else {
                        Character_ChFace(0, 0, 11);
                        Voice_PlayVoice("L0401000_A04300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Oh... homemade-- But this...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I tried my best...");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A04400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, but you know!\nIf you look closely, there are parts\nthat seem edible!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "... Yeah.");
                        Character_ChFace(0, 2, 2);
                        Character_BlinkStart(1, 2, (#1));
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("L0401000_A04500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "No, this one is a bit of a mess....\nDon't make that face, okay?\nI'm really glad.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "... Really?");
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(1, 0, (#1));
                        Character_ChFace(0, 2, 5);
                        Voice_PlayVoice("L0401000_A04600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Really. So I'll eat it all... okay?\nThanks.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looks\nextremely happy!)");
                        Parameter_AddCh1Param(1, 61, 3);
                        Parameter_AddCh1Param(1, 60, 3);
                        Parameter_AddCh1Param(1, 62, #3);
                        }
                    Parameter_InCh1Param(1, 555, 3);
                    }
                else {
                    var2 = 1;
                    }
                }
            }
        else if (Parameter_GetCh1Param(1, 130) < 2){
            if (Parameter_GetPl1Param(36) == 1){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("L0401000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Is it okay for me to take it?\nThanks. I'll eat it at home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're welcome.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nis used to getting Valentine's\nchocolates, as expected...)");
                Parameter_AddCh1Param(1, 61, 0);
                Parameter_AddCh1Param(1, 60, 3);
                Parameter_AddCh1Param(1, 62, #1);
                Parameter_InCh1Param(1, 555, 5);
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("L0401000_A04700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, thanks. But this is a little...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("L0401000_A04800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'll have to decline this, because\nit looks a little special.\nI'll only accept your feelings,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(As expected of\n｛Saeki＊＊｝.\nIt's like he's used to turning down\nthe offers...)");
                Music_StopBGM(0, 40);
                var3 = System_GlobalWork(23, 1);
                if (var3 == #1){
                    var3 = 0;
                    }
                if (Parameter_ExtChar(0, 6, 2, 1, var3) == 0){
                    if (Parameter_ExtChar(0, 6, 1, 0) == 1){
                        var2 = 1;
                        }
                    else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                        if (Parameter_ExtChar(0, 6, 0, 0) == 1){
                            var2 = 1;
                            }
                        }
                    }
                if (var2 == 1){
                    Character_Chara_GS2(1, "NON");
                    switch (var3){
                        case 2:
                        System_Call_GS2("F99", "M2", 0);
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
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
