section "r06_m7_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0607000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got...\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Brain Coffee Samples\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Brain coffee...\nWhat the hell is this?)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Brain Candy Samples\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Brain candy...\nWill I get smarter if I eat it?)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Special-made Aroma Banner & Brain\nOil\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Brain oil...\nWell, I wonder what will happen if I\nuse this...)");
        }
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("R0607000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's sort of a gift!");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's wrong, ｛Wakaouji＊＊｝?");
        Character_BlinkStart(7, 0, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0607000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The teachers issued the wrapping\npaper, so I figured, it was killing\ntwo birds with one stone.\nTo be exact.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝, that's\nthe present I brought!\nWhat a terrible coincidence.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0607000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am twice as surprised.\nAre you waiting for me to open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, please!");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("R0607000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Where did you go to get this?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Why, what's wrong,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0607000_G00500", 7, "R0607000_G00501");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, ｛主人公｝.\nI was checking to see who got\nSensei's present...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0607000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is it! It went to you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝, that's\nthe present I brought!\nWhat a terrible coincidence.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0607000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Very. I am twice as surprised.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0607000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Though I do have to admit, that kind\nof probability does not happen very\noften....\nOkay, I will open it.");
        }
    else {
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("R0607000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Did you get this?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nYes, but you seem...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0607000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is the present Sensei brought.\nYou ended up with it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Waaah, is that so! ... Ah!\n｛Wakaouji＊＊｝, that's the\npresent I brought!");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0607000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Huh, really? This is surprising.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0607000_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...\nUnexpected coincidences such as this\nare thrown aside by society.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0607000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The God of Probability may have\nappeared....\nOkay, I will open it.");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 3;
        }
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("R0607000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is ultra nice!\nI musn't, this is too risky.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray!\nPerfect, he seemed pleased.)");
            }
        else {
            Voice_PlayVoice("R0607000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is nice!\nAs a matter of fact, it is something\nI actually wanted.\nThank you, Santa.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray!\nPerfect, he seemed pleased.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("R0607000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is quite nice! I am very happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        else {
            Voice_PlayVoice("R0607000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's good that I retrieved this\npresent.\nThank you, Santa.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Voice_PlayVoice("R0607000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I like things like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        else {
            Voice_PlayVoice("R0607000_G01900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is just like you.\nOkay, I will accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("R0607000_G02000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is this fashionable these days?\nSensei must have missed it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("R0607000_G02100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nI feel like I got the unsold stuff\nfrom a charity bazaar.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 61, 3);
    Parameter_AddCh1Param(7, 60, 5);
    Parameter_AddCh1Param(7, 86, 1);
    }
