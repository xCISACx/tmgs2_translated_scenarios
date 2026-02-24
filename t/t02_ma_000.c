section "t02_ma_000"{
    int var0 = 0;
    if (System_GlobalWork(18, 1) == 23){
        Screen_WipeOut(3);
        Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 1);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I've gotten another present....\nI wonder what Komori-kun is doing.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(When I said \"I'm not his\ngirlfriend\", he had a really sad\nlooking face on...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(But even so, I said it so that I\nwouldn't get in his way...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had good intentions.\nI did it for him.\nBut Komori-kun was really nice about\nit.)");
        SoundEffect_PlayStream(3, "SE_LIGHTHOUSE_DOOR_02");
        System_Wait(70);
        SoundEffect_PlayStream(3, "SS_DSE_068_000");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Screen_WipeOut(3);
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Music_PlayBGM(0, "MN_Z_00_002_D00", 127, 40);
        Still_StillFace(0, 0, 1);
        Character_BlinkStart(25, 3, (#1));
        Screen_WipeIn(3);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Voice_PlayVoice("NS_91_000_11000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "*pant* *pant*");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun... Why are you...");
        var0 = 1;
        Still_Pair_Event("EV_91_02", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_11100", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Umm, the sunset is so beautiful....\nthat it doesn't...\nwait for anyone...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Yeah.");
        var0 = 0;
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_11200", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "We might not be able to see each\nother again, s-so I had to make\nsure...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Make sure?");
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("NS_91_000_11300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Even though it was natural that\nyou'd say you're not my girlfriend,\nit was embarrassing...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun...");
        Character_BlinkStart(25, 3, (#1));
        Voice_PlayVoice("NS_91_000_11400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "So I felt inferior...\nBut I realized.");
        var0 = 1;
        Still_Pair_Event("EV_91_02", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_11500", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "You're always kind and gentle, so...");
        var0 = 0;
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_11600", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I might have been mistaken, but\nperhaps you said it so that you\nwouldn't be in my way.");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Character_BlinkStart(25, 3, (#1));
        Voice_PlayVoice("NS_91_000_11700", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I-If that's what you were thinking,\nthen I did an awful thing...\nSo I had to say it.");
        var0 = 1;
        Still_Pair_Event("EV_91_02", "EV_99_00", var0, var0);
        Voice_PlayVoice("NS_91_000_11800", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I might be mistaken, and I might be\nacting shamelessly, but I need to\nhear it from you, because I...");
        Still_Pair_Event("EV_99_00", "EV_91_02", var0, var0);
        Voice_PlayVoice("NS_91_000_11900", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I love you...\nI love you so much, so...");
        Parameter_InCh1Param(25, 300, 1);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Background_Bg_GS2("BG_SC000_SP_1", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(The sunset is beautiful today.\nRight, over there...)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 1);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun would surely call it a\npresent.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I haven't seen him since then.\nI did something horrible to him.\nHe was depending on me, too...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun was trying his best to\nsocialize with everyone, as well.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was supposed to be happy for him.\nHe probably won't see me anymore...)");
        SoundEffect_PlayStream(3, "SE_LIGHTHOUSE_DOOR_02");
        System_Wait(70);
        SoundEffect_PlayStream(3, "SS_DSE_068_000");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Screen_WipeOut(3);
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 1);
        Character_BlinkStart(25, 3, (#1));
        Music_PlayBGM(0, "MN_Z_00_002_D00", 127, 40);
        Screen_WipeIn(3);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Voice_PlayVoice("NS_91_000_12000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "*pant* *pant*");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun... Why are you...");
        Voice_PlayVoice("NS_91_000_12100", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Umm, the sunset is so beautiful....\nthat it doesn't...\nwait for anyone...");
        Voice_PlayVoice("NS_91_000_12200", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I wanted to see you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I... wanted to see you too.");
        var0 = 1;
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_12300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "You're not angry?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Why would I be?");
        var0 = 0;
        Still_Pair_Event("EV_91_02", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("NS_91_000_12400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I mean, I didn't realize that I was\na bother to you, so...");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, you weren't a bother to me.");
        var0 = 1;
        Still_Pair_Event("EV_91_03", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("NS_91_000_12500", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "But I was a coward, and broke my\npromise...");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're wrong...");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_12600", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "But you look like you're going to\ncry...");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's because I said something\nterrible to you, and you surely\nwon't forgive me for it...");
        var0 = 0;
        Still_Pair_Event("EV_91_02", "EV_99_00", var0, var0);
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("NS_91_000_12700", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Forgive\"...\nBut I'm the one who did something\nwrong...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I was supposed to be happy for you\nwhen you made friends.");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_12800", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "It's fine.\nIt's fine, so don't cry... okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Voice_PlayVoice("NS_91_000_12900", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I'll be a proper person.\nI'll become stronger.\nAnd I won't make you cry anymore,\nso...");
        var0 = 1;
        Still_Pair_Event("EV_99_00", "EV_91_03", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_13000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I won't make the girl that I like\ncry...");
        Parameter_InCh1Param(25, 300, 2);
        }
    Message_TextSpeed(#1);
    System_Wait(#60);
    int var1;
    Message_MsgSel("I like you too, Komori-kun.", "(Answer with a kiss.)", "I'm not suitable for you, Komori-kun.");
    switch (Message_TextSelect()){
        case 0:
        var1 = 0;
        break ;
        case 1:
        var1 = 2;
        break ;
        case 2:
        var1 = 1;
        break ;
        }
    if (var1 == 2){
        Still_Approach(25, #1, 0, 0, 0, 0);
        }
    switch (var1){
        case 0:
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 1){
            Still_Pair_Event("EV_99_00", "EV_91_02", 0, 0);
            var0 = 1;
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_02", 1, 1);
            var0 = 0;
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "I like you too, Komori-kun.");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("NS_91_000_13100", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "That's...\nthat's only because you're worried.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm not worried. I'm really glad.\nThank you.");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_13200", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "S-Same here...");
        Voice_PlayVoice("NS_91_000_13300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Thank you for saving me.\nThank you for coming to get me.\nThank you for always looking out for\nme.");
        Voice_PlayVoice("NS_91_000_13400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Thank you for being by my side.\nAnd thank you for saying that you\nlike me.");
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("NS_91_000_13500", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I've always wanted to say that, but\nI'm an indecisive person.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun...");
        Still_Pair_Event("EV_99_00", "EV_91_03", var0, var0);
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_13600", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I'm a grade behind you now, and I'll\nbe making you wait...\nBut please wait for me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.\nI've become good at waiting, after\nall.");
        if (var0 == 0){
            Still_Pair_Event("EV_99_00", "EV_91_02", 1, 1);
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_02", 0, 0);
            }
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("NS_91_000_13700", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Yeah... I like you.");
        Message_CloseMsg();
        Music_StopBGM(0, 40);
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Still_Event("EV_91_04", #1, 1, 120);
        Screen_WipeIn(2);
        Music_StopBGM(0, 40);
        System_Wait(120);
        Still_Event("EV_91_04", #1, 0, 120, 0, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        Parameter_InCh1Param(25, 301, 1);
        Parameter_InCh1Param(25, 305, 1);
        System_GlobalWork(3, 0, 100);
        break ;
        case 1:
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "I don't think that I'm suited to\nyou, Komori-kun.\nSo, I can't--");
        if (var0 == 1){
            Still_Pair_Event("EV_99_00", "EV_91_03", 0, 0);
            var0 = 0;
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_03", 1, 1);
            var0 = 1;
            }
        Music_PlayBGM(0, "MN_C_91_001_D00", 127, 40);
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("NS_91_000_13800", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Yeah...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm really sorry.");
        if (var0 == 1){
            Still_Pair_Event("EV_99_00", "EV_91_02", 0, 0);
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_02", 1, 1);
            }
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("NS_91_000_13900", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I should apologize, because I've\nalways wanted to say this to you.");
        Voice_PlayVoice("NS_91_000_14000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Thank you for saving me.\nThank you for coming to get me.\nThank you for always looking out for\nme.");
        Voice_PlayVoice("NS_91_000_14100", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Thank you for being by my side.\nAnd thank you for saying that you\nlike me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun.");
        Voice_PlayVoice("NS_91_000_14200", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "The best present was having you be\nthere for me.\nBecause you were there...\nI can do things again.");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("NS_91_000_14300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "It's fine. I will remember you.\nI will surely remember you\nforever....\nGoodbye.");
        Music_StopBGM(0, 40);
        System_GlobalWork(3, 0, 101);
        Message_CloseMsg();
        Screen_WipeOut(3);
        break ;
        case 2:
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 0){
            Still_Pair_Event("EV_99_00", "EV_91_02", 1, 1);
            var0 = 0;
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_02", 0, 0);
            var0 = 1;
            }
        Music_StopBGM(0, 40);
        Music_PlayBGM(0, "MN_C_91_000_D00", 127, 40);
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("NS_91_000_14400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "!!");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Voice_PlayVoice("NS_91_000_14500", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I-I... Umm...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you. I was really glad.");
        Still_Pair_Event("EV_99_00", "EV_91_03", var0, var0);
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("NS_91_000_14600", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "Oh crap...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Komori-kun?");
        Voice_PlayVoice("NS_91_000_14700", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I was thinking of thanking you for\nmany things, but I forgot...");
        Message_Who(0);
        Message_MsgDisp("主人公", "So when you remember, will you tell\nme?");
        if (var0 == 0){
            Still_Pair_Event("EV_99_00", "EV_91_02", 1, 1);
            var0 = 0;
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_91_02", 0, 0);
            var0 = 1;
            }
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_14800", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "U-Umm...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah?");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("NS_91_000_14900", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I might be able to remember it\nagain...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Okay.");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("NS_91_000_15000", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I love you.");
        Message_CloseMsg();
        Music_StopBGM(0, 40);
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Still_Event("EV_91_04", #1, 1, 120);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_91_04", #1, 0, 120, 0, 1);
        Music_StopBGM(0, 40);
        System_Wait(120);
        Screen_WipeOut(3);
        Parameter_InCh1Param(25, 301, 2);
        Parameter_InCh1Param(25, 305, 1);
        System_GlobalWork(3, 0, 100);
        break ;
        }
    Message_TextSpeed(#1);
    }
