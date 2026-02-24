section "l04_m8_000"{
    int var0;
    int var1;
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(8, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_01F", 0);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("", 8, "L0408000_H00000");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.\nYou need something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt's Valentine's chocolate.");
        }
    else if (Parameter_GetCh1Param(8, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(8, "M8_01F", 0);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("", 8, "L0408000_H00100");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.\nYou're early today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here... It's chocolate!");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(8, 2, (#1));
        Character_Chara_GS2(8, "M8_01F", 0);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("", 8, "L0408000_H00200");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝. What's wrong?\nYour face is red. You sick?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No... Umm, here, it's chocolate....\nFor ｛Masaki＊＊｝...");
        }
    if (Parameter_GetCh1Param(8, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(8, 3)){
                if (Parameter_GetCh1Param(8, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(8, 2, (#1));
                    Voice_PlayVoice("L0408000_H00300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Oh, chocolate. I'll take this!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It's strange...\nI don't know if he's happy or not.)");
                    Parameter_AddCh1Param(8, 61, 0);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0408000_H00400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ah, for Valentine's Day. Thanks.\nI'll eat it when I get hungry.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, he's happy! I think?)");
                    Parameter_AddCh1Param(8, 61, 0);
                    Parameter_AddCh1Param(8, 60, 6);
                    Parameter_AddCh1Param(8, 62, 0);
                    }
                else {
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(8, 3, (#1));
                    Voice_PlayVoice("L0408000_H00500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "What is the matter?");
                    Voice_PlayVoice("L0408000_H00600", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "No, it's nothing.\nEven if it's obligatory chocolate,\nchocolate is chocolate.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I think I annoyed him...)");
                    Parameter_AddCh1Param(8, 61, #1);
                    Parameter_AddCh1Param(8, 60, 0);
                    Parameter_AddCh1Param(8, 62, 10);
                    }
                Parameter_InCh1Param(8, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(8, 3)){
                if (Parameter_GetCh1Param(8, 130) == 2){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H00700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Hey, this was expensive, wasn't it?\nDon't force yourself.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("L0408000_H00800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Is this for me? It looks expensive.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H00900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ehh...\nI got the feeling you're planning\nsomething, but I'll accept this!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...\nIf you are going to say that, then I\nwill confiscate it!");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H01000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I'm kidding. It was a joke!\nI will gratefully accept this.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy!)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 10);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0408000_H01100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "For me...? Can I take this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0408000_H01200", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nI didn't think I'd be able to get\nsomething like this...\nI'm kinda touched...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0408000_H01300", 8, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ah, no, it's nothing!\nThanks, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Haha. I'm glad he's happy!)");
                    Parameter_AddCh1Param(8, 61, 6);
                    Parameter_AddCh1Param(8, 60, 10);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                Parameter_InCh1Param(8, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(8, 3)){
                if (Parameter_GetCh1Param(8, 130) == 2){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H01400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ehh... Is this homemade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(8, 2, (#1));
                    Voice_PlayVoice("L0408000_H01500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "This is something else.\nThen I'll eat it right away!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 6);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H01600", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ehh...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "H-How is it...?");
                    Voice_PlayVoice("L0408000_H01700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "It looks yummy and I think you made\nit well.\nYeah, it's amazing.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0408000_H01800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I'll eat it when I get home. Thanks.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He's happy...\nI'm glad I did my best!)");
                    Parameter_AddCh1Param(8, 61, 6);
                    Parameter_AddCh1Param(8, 60, 10);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H01900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Eh... Is it okay for me to take it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Of course!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0408000_H02000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I see...\nBut you made it in a hurry, right?\nDid you confuse sugar for salt?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ehh!?\nHow did you know that I made it in a\nhurry?");
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H02100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Because I've lived with someone who\ndid the same thing before....\nGeez, you were pushing yourself.");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0408000_H02200", 8, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "... But I'm real happy.\nThanks, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Masaki＊＊｝ looked really\nhappy.\nI'm glad!)");
                    Parameter_AddCh1Param(8, 61, 10);
                    Parameter_AddCh1Param(8, 60, 10);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                Parameter_InCh1Param(8, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(8, 3)){
                if (Parameter_GetCh1Param(8, 130) == 2){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0408000_H02300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Oh, homemade.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes. You can tell?");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H02400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Yeah, this awkward part gives it\naway!\nBut I will eat it right away.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's that.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H02500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Oh. This homemade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes, it is.");
                    Character_ChFace(0, 0, 0);
                    Voice_PlayVoice("L0408000_H02600", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nIf you think this will make me go\neasy on you at work, you're\nmistaken, you know?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I was not thinking about that.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0408000_H02700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Hahaha. I'm joking!\nI will gratefully accept this.\nThanks!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh!\nHe looked relatively happy.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                else {
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0408000_H02800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Eh, for me? Is that okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes, of course!");
                    Voice_PlayVoice("L0408000_H02900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Hmm...\nSince it's homemade, I wonder if\nthat's why the edges are losing\nshape.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!? Ah, you're right...\nI'm sorry...");
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0408000_H03000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Well this isn't a problem.\nI was just saying.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Geez, ｛Masaki＊＊｝, you're\nmean!");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H03100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Hahaha. Sorry! ...\nYou really are cute...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Voice_PlayVoice("L0408000_H03200", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ah, nothing.\nI just meant that it was worth\nteasing you.");
                    Character_BlinkStart(8, 0, (#1));
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H03300", 8, "L0408000_H03301");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Thanks, ｛主人公｝.\nI'll eat it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh! He looked happy.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 6);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                Parameter_InCh1Param(8, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(8, 3)){
                if (Parameter_GetCh1Param(8, 130) == 2){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0408000_H03400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "What is this...?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "U-Uhh... It's chocolate...");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H03500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Seriously?");
                    Voice_PlayVoice("L0408000_H03600", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nI thought it was firmly packed\npotting mix...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!?");
                    Voice_PlayVoice("L0408000_H03700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "If you look closely, the wrapping is\nalso done randomly...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    Voice_PlayVoice("L0408000_H03800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "... I got it.");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0408000_H03900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I'll give you a wrapping course.\nAt this rate and as a senior, you'd\nbe a shame to the manager!");
                    Character_BlinkStart(8, 0, (#1));
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0408000_H04000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Let's get started.\nBring some random flowers over here.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nI might not have communicated my\nfeelings...)");
                    Parameter_AddCh1Param(8, 61, #1);
                    Parameter_AddCh1Param(8, 60, 0);
                    Parameter_AddCh1Param(8, 62, 3);
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H04100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Oh, thanks....\nYou worked quite hard.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.");
                    Voice_PlayVoice("L0408000_H04200", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Even so, it somehow became something\nquite amazing....\nWhy does this part have a bubble?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!? You're right... I wonder why...");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H04300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nWell, there isn't anything in here\nthat would give me a stomach ache...\nIt'll be fine, probably...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes... it should be...");
                    Voice_PlayVoice("L0408000_H04400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "... Anyway. I'll eat it after work.\nIf something happens to me, I'll\ntell you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "\"I-If something happens\"...");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H04500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ah, if the manager or Arisawa-san\nasks you to fill in for me tomorrow,\nplease do it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I wonder if he's happy...)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0408000_H04600", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Eh... Is that okay?\nThis is hand made, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H04700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I see...\nYou're giving chocolate to me....\nThanks.");
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0408000_H04800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "... You put...\nquite a lot of effort into this...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ehehe... you can tell?");
                    Voice_PlayVoice("L0408000_H04900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Yeah...\nI know that the effort was\nmanifested in a weird way, so I'll\nneed courage to eat it...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Voice_PlayVoice("L0408000_H05000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Ah, nothing!");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0408000_H05100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "By the way, I got a question....\nThis sour smell isn't Tabasco sauce,\nis it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... No, I did not put any in.");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("L0408000_H05200", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Question Two.\nHow did you get this mysterious\ncolor?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "...\nWhen I melted the milk chocolate, it\nturned into that color...");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0408000_H05300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "... I see.");
                    Voice_PlayVoice("L0408000_H05400", 8, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Relax, I'll definitely eat it, no\nmatter how many days it takes.\nThanks, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He generally looked happy... Hmm...\nI should have tried harder.)");
                    Parameter_AddCh1Param(8, 61, 3);
                    Parameter_AddCh1Param(8, 60, 3);
                    Parameter_AddCh1Param(8, 62, #3);
                    }
                Parameter_InCh1Param(8, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(8, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, chocolate. I'll take this!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's strange...\nI don't know if he's happy or not.)");
            Parameter_AddCh1Param(8, 61, 0);
            Parameter_AddCh1Param(8, 60, 3);
            Parameter_AddCh1Param(8, 62, #1);
            Parameter_InCh1Param(8, 555, 5);
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("L0408000_H05500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I kinda can't accept this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Voice_PlayVoice("L0408000_H05600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I think you've mistaken who you\nshould be giving this to.\nAh, welcome!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He couldn't accept it...\nHow unfortunate...)");
            }
        }
    if (var1 == 1){
        System_Call_GS2("L04", "M8", 1);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
