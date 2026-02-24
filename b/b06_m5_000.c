section "b06_m5_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(5, 61, 3);
        Parameter_AddCh1Param(5, 60, 2);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #2);
        Parameter_AddCh1Param(5, 62, 2);
        }
    if (Date_GetDateOption(0) == 0){
        if ((Date_Date_Data(124) >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(1, 0, 0);
                Character_BlinkStart(5, 2, (#1), 2);
                Voice_PlayVoice("B0605000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Today was fun. Thanks.");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                if (System_GlobalWork(23, 1) == 5){
                    Character_ChFace(1, 0, 10);
                    Character_ChFace(1, 6, 1);
                    Voice_PlayVoice("FD_05_170_00000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It would be amazing if you could do\nthis with him, too.");
                    }
                else {
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0605000_E00100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Time really does fly by when you're\nhaving fun.\nCall me again.");
                    }
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 6);
                Character_BlinkStart(5, 2, (#1), 2);
                Voice_PlayVoice("B0605000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was so fun that I don't wanna go\nhome...\nHow'd you find it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it was fun!");
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I see.\nThen let's go out somewhere, again.");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if ((Parameter_GetCh1Param(5, 130) <= 2) && (Date_Date_Double() == 0)){
                Character_ChFace(1, 0, 0);
                Voice_PlayVoice("B0605000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Spending time like this is also\ngood.");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                if (System_GlobalWork(23, 1) == 5){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_05_170_00100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I think that if it were like this,\nhe'd also have fun.");
                    }
                else {
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0605000_E00500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "When I'm with you, time really\npasses by quickly.\nIt was fun～.");
                    }
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 2, (#1), 2);
                Voice_PlayVoice("B0605000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Sigh*. It's already time...\nThanks for an amazing day.\nLet's go out somewhere, again.");
                }
            }
        else if ((Date_Date_Data(124) == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(1, 0, 0);
                Voice_PlayVoice("B0605000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Good job today.\nIt seems like I'll sleep like a log\ntoday.");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                if (System_GlobalWork(23, 1) == 5){
                    Character_ChFace(1, 0, 0);
                    Voice_PlayVoice("FD_05_170_00200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Breathers are always welcome!\nBut let's only do this once in a\nwhile so he doesn't misunderstand.");
                    }
                else {
                    Character_ChFace(1, 0, 0);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Voice_PlayVoice("B0605000_E00800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It was fun hanging out with you\ntoday.\nLet's do it, again.");
                    }
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard today.\nI want to go out somewhere together,\nagain.");
                }
            }
        else if ((Date_Date_Data(124) == 1) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0605000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It kinda... feels sad...");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                if (System_GlobalWork(23, 1) == 5){
                    Character_ChFace(1, 0, 9);
                    Voice_PlayVoice("FD_05_170_00300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I wonder...\nLet's have a review meeting for when\nyou have a date with him later.");
                    }
                else {
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("B0605000_E01100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I had fun, but I kinda cheated\nyou...");
                    }
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0605000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Sorry, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? For what?");
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 5);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I feel like I kinda forced you out\nwith me.\nIt would be nice if I was wrong,\nthough...");
                }
            }
        else if ((Date_Date_Data(124) == 0) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Voice_PlayVoice("B0605000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Sigh*...\nI wonder why I'm so tired...");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                if (System_GlobalWork(23, 1) == 5){
                    Character_ChFace(1, 0, 9);
                    Voice_PlayVoice("FD_05_170_00400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It might be a good idea to have lots\nof practice dates...");
                    }
                else {
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Character_ChFace(1, 3, 5);
                    Voice_PlayVoice("B0605000_E01500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "The both of us had a bad day\ntoday...\nLet's make the next time more fun.");
                    }
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Was today lacking?\nGet some rest, okay?");
                }
            }
        else if (Date_Date_Double() == 1){
            Message_PauseSkinship();
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0605000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I see. You love this place.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nThis is the same place as last\ntime...)");
            Message_SkinshipSet(0);
            }
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0605000_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Going out with you is fun, for real.\nLet's go somewhere, again!");
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 0);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0605000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That was fun～.\nI'm glad I asked you out, for\nreal....\nLet's go somewhere else again, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_ChFace(1, 0, 0);
                Character_ChFace(1, 4, 1);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay.\nThen let's go search for some\namazing places, okay?");
                }
            }
        else if (Date_Date_Data(124) == 3){
            Character_ChFace(1, 0, 10);
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Voice_PlayVoice("B0605000_E02100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for today, it was extremely\nfun!\nLet's hang out, again.");
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0605000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Today was extremely fun. Thanks.\nHey, let's go out somewhere again,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course!");
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay. I look forward to it.");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thanks for today. You worked hard.");
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "How was today?\nI wonder if you had fun.\nLet's go out somewhere, again.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E02600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It kinda seems like I tired you out,\ntoday...\nLet's hang out again if we have the\nchance, okay?");
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0605000_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Were you tired today?\nIt was my fault for making you tag\nalong with me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not it...");
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's fine. I'm real sorry.");
                }
            }
        else if (Date_Date_Data(124) == 0){
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Voice_PlayVoice("B0605000_E02900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Today...\nwould have been fine if it didn't\nhappen...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh, sorry...");
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 5);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E03000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's fun. Let's have fun next time.");
                }
            else if (Parameter_GetCh1Param(5, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0605000_E03100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's fine to refuse if you don't\nfeel like it, okay?");
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 5);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0605000_E03200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nI worry about you, so be careful on\nthe way home, okay?");
                }
            }
        }
    if ((Parameter_GetCh1Param(5, 130) <= 2) || (Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_Chara_GS2(5, "M5_D?F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0605000_E03300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I'll see you later.");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0605000_E03400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I'll see you later.\nGood night▼");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("B0605000_E03500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Be careful on your way home.\nIf you get lonely, call me.\nI'll come flying to your place.");
            if ((Parameter_GetCh1Param(5, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M5", 0);
                }
            }
        }
    else if ((Parameter_GetCh1Param(5, 130) == 3) || (Parameter_ChkPlayer(5)) || (System_GlobalWork(5, 1) == 1)){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 6);
        if ((System_GlobalWork(23, 1) == 5 && Parameter_GetCh1Param(5, 558) == 0 && (Parameter_GetCh1Param(5, 60) + Parameter_GetCh1Param(5, 61) >= 350))){
            System_Call_GS2("B60", "M5", 0);
            }
        else if ((Parameter_GetCh1Param(5, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him about it.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                break ;
                case 1:
                Character_Chara_GS2(5, "M5_D?F", 0);
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("B0605000_E03300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Now then, I'll see you later.");
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0605000_E03400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Now then, I'll see you later.\nGood night▼");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0605000_E03600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I'll walk you home.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M5", 0);
            System_Call_GS2("B08", "M5", 0);
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0605000_E03700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, wait. I'll walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M5", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                }
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Voice_PlayVoice("B0605000_E03800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I'll walk you home.\nI can't let you go home by yourself.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M5", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0605000_E03900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm, we didn't talk enough.\nHey, if you got the time, do you\nwanna take the long way home?");
        Message_MsgSel("Sure, that's fine.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 6);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0605000_E04000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay. Now then, let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(5, 61, 0);
            Parameter_AddCh1Param(5, 60, 1);
            Parameter_AddCh1Param(5, 62, #3);
            System_Call_GS2("B99", "M5", 0);
            if ((Parameter_GetCh1Param(5, 130) >= 4 && Parameter_GetCh1Param(5, 570) >= 400) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(5, 556) == 0)){
                Contact_NearSkinShip("M5_D?F", 5, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                var4 = Contact_NearSkinEndModeGet();
                switch (var4){
                    case 3:
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    var5 = Parameter_GetCh1Param(5, 559);
                    if (var5 < 5){
                        System_Call_GS2("B15", "M5", var5);
                        }
                    else {
                        System_Call_GS2("B15", "M5", 5);
                        }
                    Parameter_AddCh1Param(5, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M5", 12);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M5", 31);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M5", 32);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M5", 41);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M5", 42);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M5", 23);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M5", 25);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M5", 33);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M5", 34);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M5", 35);
                    break ;
                    }
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B08", "M5", 0);
                }
            else if ((Parameter_GetCh1Param(5, 536) == 1) && (Parameter_GetCh1Param(5, 538) == 0)){
                System_Call_GS2("B07", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                }
            else if ((Parameter_GetPl1Param(312) == 5) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(5, 537) == 1)){
                System_Call_GS2("B30", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                }
            else {
                System_Call_GS2("B07", "M5", 0);
                System_Call_GS2("B08", "M5", 0);
                }
            break ;
            case 1:
            Character_Chara_GS2(5, "M5_D?F", 0);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0605000_E04100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see...\nIt's unfortunate, but maybe next\ntime, then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was it a bad idea to turn him\ndown...?)");
            Parameter_AddCh1Param(5, 61, 0);
            Parameter_AddCh1Param(5, 60, 1);
            Parameter_AddCh1Param(5, 62, #3);
            break ;
            }
        }
    Parameter_AddCh1Param(5, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
