section "t02_m4_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(4, 559) >= 6){
        Voice_PlayVoice("T9904000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("？？？", "You're late!");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_04_15", "EV_99_00", 0, 0);
        Still_StillFace(0, 0, 0);
        System_Wait(5);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_04_091_D00", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!\nWhy are you here?");
        Voice_PlayVoice("T9904000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Isn't it obvious that I was waiting\nfor you?\n... There's something I wanna say.");
        }
    else {
        Still_Pair_Event("EV_04_15", "EV_99_00", 0, 0);
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_StillFace(0, 0, 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_04_091_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝...!");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0204000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What the, you scared me.\nI was looking everywhere for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "For me...?");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("T0204000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah.\nThe show's not gonna start without\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh...");
        Still_StillFace(0, 0, 2);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0204000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........\nWelcome to my last stage as a high\nschooler.");
        Still_StillFace(0, 0, 3);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0204000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "As you can see, you're the only\nperson in the audience.");
        }
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("T0204000_D00400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "............ Will you hear me out?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.");
    Still_StillFace(0, 0, 8);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("T0204000_D00500", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Thanks.");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("T0204000_D00600", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Up until now...\nWhenever I stood on stage, I got so\nnervous that my mind would go\nblank--");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0204000_D00700", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I end up not being able to hear the\nsound of my own breathing, my own\nheartbeat, and every other noise.");
    Voice_PlayVoice("T0204000_D00800", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "In the end, it always turned out to\nbe a complete mess.");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0204000_D00900", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "That kinda failure kept on\nrepeating.\nAnd then you appeared.");
    Still_StillFace(0, 0, 6);
    Voice_PlayVoice("T0204000_D01000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "You're the only person that I can\nsing in front of in a natural way.");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0204000_D01100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Since I met you, I've always\nwondered what was up with that.");
    Still_StillFace(0, 0, 4);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0204000_D01200", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I finally know the reason why.");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0204000_D01300", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "You dealt with it...\nAnd you gave me peace.");
    Voice_PlayVoice("T0204000_D01400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "You were always like that.\nEven now, too...");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0204000_D01500", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "No matter where I am, you're always\nin my heart, smiling.");
    Voice_PlayVoice("T0204000_D01600", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "And just with that feeling, I...");
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0204000_D01700", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "...\nI thought that I should say it,\nsince I wanna be able to stand by\nyou.");
    Still_Pair_Event("EV_99_00", "EV_04_15", 0, 0);
    Still_StillFace(0, 0, 4);
    Voice_PlayVoice("T0204000_D01800", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I like you...");
    Voice_PlayVoice("T0204000_D01900", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I want you to be by my side\nforever...!");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("Of course. I want to be with you.", "(Answer with a kiss.)", "I'm sorry...");
    switch (Message_TextSelect()){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 2;
        break ;
        case 2:
        var0 = 1;
        break ;
        }
    if (var0 == 2){
        Still_Approach(4, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 5);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9904000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Why did you kiss me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I feel like this way expresses my\nfeelings better than words....\nWas it bad?");
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9904000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I...It wasn't bad! But...\nYour feelings...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 1);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9904000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oi, what did you...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It was to express my feelings.\nI always thought that I would do\nthis, one day...");
            Still_StillFace(0, 0, 7);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9904000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, you... always touch me...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Of course...\nI want to be with you forever,\n｛Hariya＊＊｝...!");
            }
        Still_StillFace(0, 0, 5);
        Still_StillFace(0, 4, 0);
        Voice_PlayVoice("T0204000_D02000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        Voice_PlayVoice("T0204000_D02100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Are you serious... I kinda...\nlost all my strength...");
        Still_StillFace(0, 0, 4);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0204000_D02200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "But now that you've said that, I'm\nnever gonna let you go!");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0204000_D02300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Remember it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        Still_StillFace(0, 0, 4);
        Still_StillFace(0, 4, 0);
        Voice_PlayVoice("T0204000_D02400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Right.... Here.");
        Still_Pair_Event("EV_99_00", "EV_04_16", 1, 1);
        System_Wait(10);
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh... A CD?");
        Voice_PlayVoice("T0204000_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I let you listen to it before,\nright?\nI finished the song, so I brought it\nwith me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Wow... Thanks.");
        Voice_PlayVoice("T0204000_D02600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "On this CD is everything that I can\npossibly express right now.");
        Still_Pair_Event("EV_99_00", "EV_04_15", 0, 0);
        Voice_PlayVoice("T0204000_D02700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "From now on, no matter what happens,\ndon't forget...\nthis feeling.");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("T0204000_D02800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Let's listen to it together.\nTogether, forever.");
        if (var0 != 0){
            Still_StillFace(0, 0, 8);
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T9904000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "......\nWe went the extremely long way.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Maybe...");
            Still_StillFace(0, 0, 0);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T9904000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right. Will you let me get even?");
            Message_Who(0);
            Message_MsgDisp("主人公", "How?");
            Still_StillFace(0, 0, 2);
            Voice_PlayVoice("T9904000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Simple.\nCome closer, and close your eyes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T9904000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The next time you open your eyes...\nthe entire world should change....\nYou and me both.");
            }
        else {
            if (Parameter_GetPl1Param(312) == 4){
                Still_StillFace(0, 0, 2);
                Still_StillFace(0, 4, 1);
                Voice_PlayVoice("T0204000_D02900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Also... I demand to redo it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Redo what?");
                Still_StillFace(0, 0, 7);
                Voice_PlayVoice("T0204000_D03000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "That thing... Eyes, close your eyes!");
                Message_Who(0);
                Message_MsgDisp("主人公", "My eyes? Why?");
                Still_StillFace(0, 0, 5);
                Voice_PlayVoice("T0204000_D03100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Argh, whatever! ...\nDon't regret it, okay?");
                Still_StillFace(0, 0, 0);
                Voice_PlayVoice("T0204000_D03200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Also, this...\nisn't gonna be an accident.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What...");
                }
            }
        Music_StopBGM(0, 40);
        if (Parameter_GetPl1Param(312) == 4){
            }
        else {
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Still_Event("EV_04_17", #1, 1, 60);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_04_17", #1, 0, 60, 0, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 40);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry...");
        Music_PlayBGM(0, "MN_C_04_004_D00", 127, 40);
        Still_StillFace(0, 0, 6);
        Voice_PlayVoice("T0204000_D03300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "............ I see...");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0204000_D03400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I got it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
        Still_StillFace(0, 0, 8);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0204000_D03500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... What's with that face.\nI'm the one who got rejected.");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0204000_D03600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Don't reject me, if you're gonna\nmake that face.\nIdiot.");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0204000_D03700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "......... I'm glad I met you.");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0204000_D03800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Thanks, for real. I was bound...\nand you released me from many\nthings.");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("T0204000_D03900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "With this, I'll be able to devote\nmyself to music!\n...\nIn other words,");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0204000_D04000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I'm gonna make you regret it.");
        Still_StillFace(0, 0, 3);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0204000_D04100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'm gonna make you regret rejecting\na boy with a bright future ahead of\nhim.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Okay. I'll be waiting for it.");
        Still_StillFace(0, 0, 8);
        Voice_PlayVoice("T0204000_D04200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ack, you're heaps annoying!\nJust you wait, I'll definitely make\nyou regret it!");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0204000_D04300", 4, "T0204000_D04301");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll see you later,\n｛主人公｝!");
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 41);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(4, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 4){
            Parameter_InCh1Param(4, 307, 1);
            }
        else {
            Parameter_InCh1Param(4, 306, 1);
            }
        if (Parameter_GetCh1Param(4, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 4){
                Parameter_InCh1Param(4, 307, 2);
                }
            else {
                Parameter_InCh1Param(4, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 4){
            Parameter_InCh1Param(4, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(4, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(4, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(4, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(4, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(4, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(4, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(4, 300, 3);
                }
            }
        }
    }
