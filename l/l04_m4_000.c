section "l04_m4_000"{
    int var0;
    int var1;
    int var2 = 0;
    Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Voice_PlayVoice("L0404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Ah, it's you. What?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_01F", 0);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Voice_PlayVoice("L0404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh. Chocolate delivery?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you seem to know. Here.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(4, "M4_01F", 0);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Voice_PlayVoice("L0404000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo! ... What? You need something?\nYou do, don't you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Here.\nIt's Valentine's chocolate.");
        }
    if (Parameter_GetCh1Param(4, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(4, 3)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("L0404000_D00300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "What the-- This chocolate looks\ncheap.");
                    Character_ChFace(0, 0, 3);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0404000_D00400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Whatever, chocolate is chocolate.\nWhat number is this...\nI'm such a sinner.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Anyway, he is happy... I think?)");
                    Music_StopBGM(0, 40);
                    Parameter_AddCh1Param(4, 61, 0);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0404000_D00500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Even though it's obligatory\nchocolate, it's still refreshing!");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0404000_D00600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I've written it down in my Harry\nMemo.\nLook forward to getting something in\nreturn next month!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm... He's happy... right?)");
                    Parameter_AddCh1Param(4, 61, 0);
                    Parameter_AddCh1Param(4, 60, 6);
                    Parameter_AddCh1Param(4, 62, 0);
                    }
                else {
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0404000_D00700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I'm depressed.........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D00800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Obligatory chocolate...");
                    Character_BlinkStart(4, 3, (#1));
                    Voice_PlayVoice("L0404000_D00900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Thanks... *Sigh*...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I think I made him annoyed...)");
                    Parameter_AddCh1Param(4, 61, #1);
                    Parameter_AddCh1Param(4, 60, 0);
                    Parameter_AddCh1Param(4, 62, 10);
                    }
                Parameter_InCh1Param(4, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(4, 3)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D01000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Whoa, this looks really expensive.\nThis is the best one outta the ones\nI got today.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0404000_D01100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I look forward to eating it～.\nThanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0404000_D01200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Thanks! Oh, you splurged on it!");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0404000_D01300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah.\nBut don't expect anything next\nmonth, okay?\nI'm gonna be adding something extra!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy!)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 10);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                else {
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 5);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0404000_D01400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Finally...");
                    Character_ChFace(0, 0, 8);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0404000_D01500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Not! You're late!\nYou know I've got not much space\nleft in my bag?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, sorry. Is there still space?");
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0404000_D01600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "T-There's tons! ... Umm... Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Haha, I'm glad that he was happy!)");
                    Parameter_AddCh1Param(4, 61, 6);
                    Parameter_AddCh1Param(4, 60, 10);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                Parameter_InCh1Param(4, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(4, 3)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0404000_D01700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "It's very elaborate...\nEhh, is it handmade?");
                    Character_ChFace(0, 0, 6);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("L0404000_D01800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Anyway, thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 6);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D01900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Oh, handmade!\nYou've made it well, haven't you?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Really?");
                    Character_BlinkStart(4, 0, (#1));
                    Voice_PlayVoice("L0404000_D02000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "For real.\nThanks, I'll eat it when I get home.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He was happy...\nI'm glad I did my best.)");
                    Parameter_AddCh1Param(4, 61, 6);
                    Parameter_AddCh1Param(4, 60, 10);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                else {
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0404000_D02100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Amazing... Is this perhaps handmade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah. I did my best.");
                    Character_ChFace(0, 4, 0);
                    Character_BlinkStart(4, 0, (#1));
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0404000_D02200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "...\nBut I can't take it from someone\nwho's got eye bags!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, can't you?");
                    Character_BlinkStart(4, 3, (#1));
                    Character_ChFace(0, 3, 5);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0404000_D02300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "...\nBut I guess I'll try it, since you\nput in the effort.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, I would be happy if you did\nthat.");
                    Character_BlinkStart(4, 0, (#1));
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0404000_D02400", 4, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Anyway, hurry and get some sleep!\nThanks, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked extremely happy!)");
                    Parameter_AddCh1Param(4, 61, 10);
                    Parameter_AddCh1Param(4, 60, 10);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                Parameter_InCh1Param(4, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(4, 3)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0404000_D02500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "This looks like it's handmade.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, it actually is.");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0404000_D02600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hmm...\nIf it's gonna look like this,\nchocolate from the store would have\nbeen better.\nYou've got so much free time.");
                    Character_ChFace(0, 0, 6);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("L0404000_D02700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Well, thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's that.)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0404000_D02800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Eh, did you make this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    Character_ChFace(0, 0, 6);
                    Character_ChFace(0, 4, 0);
                    Voice_PlayVoice("L0404000_D02900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Let's try a little harder next time,\nokay?\nAnyway, thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked relatively happy.)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                else {
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0404000_D03000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "This handmade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah. I did my best.");
                    Character_BlinkStart(4, 3, (#1));
                    Voice_PlayVoice("L0404000_D03100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Yeah. It looks a little crooked.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh......");
                    Character_ChFace(0, 0, 6);
                    Voice_PlayVoice("L0404000_D03200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "...\nWell, who cares about the\nappearance.\nWhat's important is that I got\nchocolate from you...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(4, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0404000_D03300", 4, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Anyway! I'll savor it!\nThanks, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 6);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                Parameter_InCh1Param(4, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(4, 3)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0404000_D03400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... What's this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ehh, chocolate...");
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D03500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "What kinda chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's supposed to be normal\nchocolate...");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0404000_D03600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "...\nHmm, well it looks like it's edible.\nI'll take it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nI might not have communicated my\nfeelings...)");
                    Parameter_AddCh1Param(4, 61, #1);
                    Parameter_AddCh1Param(4, 60, 0);
                    Parameter_AddCh1Param(4, 62, 3);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0404000_D03700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hahahahaha!\nOi, that joke is way too funny!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D03800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You couldn't call this chocolate...\nEh, is it chocolate!?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah...");
                    Character_ChFace(0, 2, 4);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0404000_D03900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ehh, amazing...\nYou've got guts to think about\ngiving such a weird thing!");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0404000_D04000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You deserve respect.\nYou're amazing, for real...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I wonder if he's happy?)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0404000_D04100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... This... is chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, handmade. I did my best.");
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0404000_D04200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", ".........\nHey is it okay if I don't eat it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ehh!? Why!?");
                    Character_BlinkStart(4, 3, (#1));
                    Voice_PlayVoice("L0404000_D04300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Well, I'm so grateful that I can't\neat it, or I'd like to offer it to\nthe gods...");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0404000_D04400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "But you know!");
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D04500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You've communicated your feelings!\nHahaha...");
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(4, 2, (#1));
                    Voice_PlayVoice("L0404000_D04600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "*Sigh*...\nI wonder what it tastes like...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... He's happy... right?)");
                    Parameter_AddCh1Param(4, 61, 3);
                    Parameter_AddCh1Param(4, 60, 3);
                    Parameter_AddCh1Param(4, 62, #3);
                    }
                Parameter_InCh1Param(4, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(4, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("L0404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What the-- This chocolate looks\ncheap.");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("L0404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Whatever, chocolate is chocolate.\nWhat number is this...\nI'm such a sinner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Anyway, he is happy... I think?)");
            Parameter_AddCh1Param(4, 61, 0);
            Parameter_AddCh1Param(4, 60, 3);
            Parameter_AddCh1Param(4, 62, #1);
            Parameter_InCh1Param(4, 555, 5);
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("L0404000_D04700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Don't need it.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh! He couldn't take it...\nThat's unfortunate...)");
            var2 = System_GlobalWork(23, 1);
            if (var2 == #1){
                var2 = 0;
                }
            if (Parameter_ExtChar(0, 6, 2, 1, var2) == 0){
                if (Parameter_ExtChar(0, 6, 1, 0) == 4){
                    var1 = 1;
                    }
                else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                    if (Parameter_ExtChar(0, 6, 0, 0) == 4){
                        var1 = 1;
                        }
                    }
                }
            if (var1 == 1){
                Character_Chara_GS2(4, "NON");
                switch (var2){
                    case 1:
                    System_Call_GS2("F99", "M1", 0);
                    break ;
                    case 2:
                    System_Call_GS2("F99", "M2", 0);
                    break ;
                    case 3:
                    System_Call_GS2("F99", "M3", 0);
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
    Parameter_AddCh1Param(4, 86, 1);
    }
