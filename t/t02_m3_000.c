section "t02_m3_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(3, 559) >= 6){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("？？？", "｛主人公｝.");
        Still_Pair_Event("EV_03_16", "EV_99_00", 0, 0);
        Still_StillFace(0, 0, 4);
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_03_090_D00", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!!\nWhy are you here...?");
        Voice_PlayVoice("T9903000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was looking for you, and then I\nsaw that the lighthouse door was\nopen...\nI wanted to see you.");
        }
    else {
        Voice_PlayVoice("T0203000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I have found you.");
        Message_CloseMsg();
        Still_Pair_Event("EV_03_16", "EV_99_00", 0, 0);
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_03_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝! ...\nWhy are you here?");
        Voice_PlayVoice("T0203000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Why do you ask why?\nRight, before the day was over,");
        Still_StillFace(0, 0, 2);
        Still_StillFace(0, 6, 1);
        }
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0203000_C00200", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "...\nI wanted to see you, no matter what.\nWhile I still have the\ndetermination.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Determination?");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0203000_C00300", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Yes.\nI want to know what you think of me.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh...!?");
    Still_StillFace(0, 0, 3);
    Voice_PlayVoice("T0203000_C00400", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "......... You know.\nIn the past, people would often say\nto me that I was a wimp, and a weird\nperson.");
    Voice_PlayVoice("T0203000_C00500", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "But I had perceived myself as\nnormal, so I carried on in the same\nmanner.");
    Still_Pair_Event("EV_03_17", "EV_99_00", 1, 1);
    Voice_PlayVoice("T0203000_C00600", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "...\nI thought that as long as I did the\ncorrect things, with pride, people\nwould also do the same.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
    Still_Pair_Event("EV_03_16", "EV_99_00", 0, 0);
    Voice_PlayVoice("T0203000_C00700", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "...\nThat is why I was truly glad when\nyou and I became close.");
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("T0203000_C00800", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I thought \"Yes, I have finally found\nsomeone who understands me.\nThis person is a true friend\".");
    Message_Who(0);
    Message_MsgDisp("主人公", ".........");
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0203000_C00900", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "But by talking to you, and by going\nthrough many things with you......\nI realized that I was mistaken.");
    Message_Who(0);
    Message_MsgDisp("主人公", "You were mistaken...?");
    Still_StillFace(0, 0, 4);
    Voice_PlayVoice("T0203000_C01000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I did not understand a thing.\nFriends are not all people who I\nperceive as convenient.");
    Voice_PlayVoice("T0203000_C01100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "A friend is someone who you can be\nwith, even if they have bad aspects\nto them...\nRight?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah......");
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("T0203000_C01200", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... I also realized one more thing.");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("T0203000_C01300", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... About you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "About me...?");
    Voice_PlayVoice("T0203000_C01400", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Right.\nWhen talking to you, my feelings\nbecame very light...");
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0203000_C01500", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Before thinking about the effects of\nyour words, you just say what is on\nyour mind....\nYou're pure.");
    Message_Who(0);
    Message_MsgDisp("主人公", ".........");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0203000_C01600", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "But that is very comforting.\nThat is why I...");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("T0203000_C01700", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "That is why I want to spend time\nwith you from now on, too.");
    Still_StillFace(0, 0, 4);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("T0203000_C01800", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I do not want things to end with me\nbeing in your circle of friends.");
    Still_Pair_Event("EV_99_00", "EV_03_16", 0, 0);
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 4, 0);
    Screen_WipeIn(3);
    Voice_PlayVoice("", 3, "T0203000_C01900");
    Message_Who(3);
    Message_MsgDisp("Hikami", "｛主人公｝. I like you.");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("I like you, too...", "(Answer with a kiss.)", "... I'm sorry...");
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
        Still_Approach(3, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 1);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9903000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "This is my answer.");
            Still_Pair_Event("EV_99_00", "EV_03_17", 1, 1);
            Voice_PlayVoice("T9903000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "R-Really... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I like you too,\n｛Hikami＊＊｝.");
            Still_Pair_Event("EV_99_00", "EV_03_16", 0, 0);
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 1);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9903000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Wah! ... What was that!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I always express my feelings this\nway.");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9903000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I see! In other words...\nWhat does that mean?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It means that I like you too,\n｛Hikami＊＊｝.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Me too...\nI like you too,\n｛Hikami＊＊｝...");
            }
        Still_StillFace(0, 0, 1);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0203000_C02000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Really!?\nP...Please tell me that this is not\na dream!");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's not a dream!");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0203000_C02100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see...... Thank you!\nBut this feels like a dream, after\nall.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I said that it's not a dream!");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0203000_C02200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Haha!\nSorry, I was so happy that I just\nlet it out unintentionally.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha!");
        Still_StillFace(0, 0, 5);
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0203000_C02300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Haha... You are composed.");
        if (var0 != 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm not...");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9903000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are.\nYou have always been the one to\nlead.\nSo this time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "?");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9903000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "This time, I want to be the lead.\nIs that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Still_Pair_Event("EV_99_00", "EV_03_17", 1, 1);
            Voice_PlayVoice("T9903000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Close your eyes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Voice_PlayVoice("T9903000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am sorry if I hit your nose.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha... It's fine.");
            Still_Pair_Event("EV_99_00", "EV_03_16", 0, 0);
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T9903000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I like you.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I...");
            if (Parameter_GetPl1Param(312) == 3){
                Still_StillFace(0, 0, 0);
                Still_StillFace(0, 6, 1);
                Still_StillFace(0, 4, 1);
                Voice_PlayVoice("T0203000_C02400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWas it not the same at that time,\ntoo?\nThe only panicked one was me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That time?");
                Still_StillFace(0, 6, 2);
                Voice_PlayVoice("T0203000_C02500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... Near the stairs...\nWhen we ended up k-kissing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So that's what happened...!");
                Still_StillFace(0, 0, 5);
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0203000_C02600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI should have told you to worry\nabout it.\nYou really are something else.");
                }
            Still_StillFace(0, 0, 1);
            Still_StillFace(0, 6, 0);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T0203000_C02700", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "?");
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T0203000_C02800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Can I receive my certificate to say\nthat I have graduated from being a\n\"friend\"?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...?");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 6, 2);
            Voice_PlayVoice("T0203000_C02900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Close your eyes.\nPlease continue to treat me well.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Music_StopBGM(0, 60);
        if (Parameter_GetPl1Param(312) == 3){
            }
        else {
            }
        Message_CloseMsg();
        Still_Event("EV_03_18", #1, 1, 0);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_03_18", #1, 0, 0, 0, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 30);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "... I'm sorry...\nI think of you as a good friend,\n｛Hikami＊＊｝...");
        Still_Pair_Event("EV_99_00", "EV_03_17", 1, 1);
        Music_PlayBGM(0, "MN_C_03_005_D00_B", 127, 40);
        Voice_PlayVoice("T0203000_C03000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see. So that is your answer...");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0203000_C03100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "So it is true that your first love\nwill never come to fruition.");
        Still_Pair_Event("EV_99_00", "EV_03_16", 0, 0);
        System_Wait(60);
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("T0203000_C03200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is fine.\nIt does not mean that we still\ncannot remain friends.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
        Still_StillFace(0, 0, 5);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0203000_C03300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am glad that I could hear your\nresponse.");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0203000_C03400", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Now then, excuse me,\n｛主人公｝.");
        Music_StopBGM(0, 60);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        SoundEffect_PlayStream(3, "SS_T_00_269_M00");
        System_GlobalWork(3, 0, 31);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(3, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 3){
            Parameter_InCh1Param(3, 307, 1);
            }
        else {
            Parameter_InCh1Param(3, 306, 1);
            }
        if (Parameter_GetCh1Param(3, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 3){
                Parameter_InCh1Param(3, 307, 2);
                }
            else {
                Parameter_InCh1Param(3, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 3){
            Parameter_InCh1Param(3, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(3, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(3, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(3, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(3, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(3, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(3, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(3, 300, 3);
                }
            }
        }
    }
