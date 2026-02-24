section "b06_m1_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    var4 = Date_Date_Data(124);
    if (var4 >= 4){
        Parameter_AddCh1Param(1, 61, 3);
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (var4 == 3){
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (var4 == 2){
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (var4 == 1){
        Parameter_AddCh1Param(1, 61, 0);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 1);
        }
    else if (var4 == 0){
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #2);
        Parameter_AddCh1Param(1, 62, 2);
        }
    Character_ChFace(1, 0, 0);
    if (Date_GetDateOption(0) == 0){
        if ((var4 >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Voice_PlayVoice("B0601000_A00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "This was kinda... like a date.\nWhat do you call a day like today?");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                if (System_GlobalWork(23, 1) == 1){
                    Character_ChFace(1, 0, 6);
                    Character_ChFace(1, 4, 0);
                    Voice_PlayVoice("FD_01_170_00000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Being with you is fun, as expected.\nI'm a little jealous.\nJust a little, though.");
                    }
                else {
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0601000_A00100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Today was all smiles.");
                    }
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 0, 0);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0601000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's kinda not much, but...\nthanks for today.");
                }
            }
        else if ((var4 == 3) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Voice_PlayVoice("B0601000_A00300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Now then....\nSo what was it like today?");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                if (System_GlobalWork(23, 1) == 1){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_01_170_00100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Well, I guess that's that.\nIt was normal.\nI determine my attitude based on\nwhat you feel.");
                    }
                else {
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0601000_A00400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "It was quite fun.\nIt somehow went well.");
                    }
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0601000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's already time, huh.\nWhen I'm with you, it somehow always\ngoes by in the blink of an eye.");
                }
            }
        else if ((var4 == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Voice_PlayVoice("B0601000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Is it okay if I leave soon?\nI gotta open Sangosho.");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                if (System_GlobalWork(23, 1) == 1){
                    Character_ChFace(1, 0, 0);
                    Voice_PlayVoice("FD_01_170_00200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Hmm～... It was lacking.\nLet's be more enthusiastic next\ntime.");
                    }
                else {
                    Voice_PlayVoice("B0601000_A00700", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "...... So.\nI gotta go soon to open up Sangosho.");
                    }
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0601000_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'm a little unsatisfied, but I\nguess these things happen.\nThere's always next time.");
                }
            }
        else if ((var4 == 1) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0601000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That's enough for today, right?\nI gotta get back to Sangosho.");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                if (System_GlobalWork(23, 1) == 1){
                    Character_ChFace(1, 0, 0);
                    Character_ChFace(1, 6, 1);
                    Voice_PlayVoice("FD_01_170_00300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I'm just saying.\nBut you screwed up today, you know?\nYou should be more careful, okay?");
                    }
                else {
                    Voice_PlayVoice("B0601000_A01000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Hey, you...\nIs it any fun going out somewhere\nwith me?");
                    }
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0601000_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey, you...\nAre you tired or something?\nDon't force yourself, okay?");
                }
            }
        else if ((var4 == 0) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Voice_PlayVoice("B0601000_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's finally over.\nNow, I'll be leaving.");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                if (System_GlobalWork(23, 1) == 1){
                    Character_ChFace(1, 0, 8);
                    Voice_PlayVoice("FD_01_170_00400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... You kinda don't seem interested.\nAre we going to keep doing this?");
                    }
                else {
                    Voice_PlayVoice("B0601000_A01300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Now then... I'm going home.\nYou should also hurry home, okay?");
                    }
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Voice_PlayVoice("B0601000_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Today was kinda tiring.\nShould we go home?");
                }
            }
        else if (Date_Date_Double() == 1){
            Message_PauseSkinship();
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0601000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "We've kinda...\nalways been coming to this area,\nlately.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nHe actually remembered the last\nplace we had a date at!)");
            Message_SkinshipSet(0);
            Parameter_AddCh1Param(1, 61, 0);
            Parameter_AddCh1Param(1, 60, 0);
            Parameter_AddCh1Param(1, 62, 0);
            }
        }
    else {
        if (var4 >= 4){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0601000_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Going out somewhere with you has...\nkinda become a habit.\nLet's go somewhere else again.");
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 0, 0);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0601000_A01700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "How should I say it?\nThanks for today.\nI'll ask you out somewhere again.");
                }
            }
        else if (var4 == 3){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Voice_PlayVoice("B0601000_A01800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That somehow went well.\nAs expected, asking you out was a\ngood choice.");
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0601000_A01900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's already this time, huh?\nI'll ask you out again.\nSo go out somewhere with me again,\nokay?");
                }
            }
        else if (var4 == 2){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Voice_PlayVoice("B0601000_A02000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...... So.\nI gotta leave to open up Sangosho.\nBut call me again, okay?");
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0601000_A02100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That was kinda unsatisfying.\nWe should think of a better place\nthe next time we go out.");
                }
            }
        else if (var4 == 1){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 4);
                Voice_PlayVoice("B0601000_A02200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Today was kinda bad, the way we\ninteracted with each other.");
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0601000_A02300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Today...\nwasn't supposed to be like that.\nWe communicated badly.");
                }
            }
        else if (var4 == 0){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(1, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0601000_A02400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "We're not getting along well\ntoday....\nShould we head home?");
                }
            else if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("B0601000_A02500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey...\nTell me if you don't like this.\nGoing home like this is painful...");
                }
            }
        }
    if ((Parameter_GetCh1Param(1, 130) <= 2) || (var4 == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_ChMove(1, 0);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("B0601000_A02600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'll be leaving first.");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("B0601000_A02700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Later.");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0601000_A02800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's head home.\nIt's not like we can stand around\nhere forever, right?");
            if ((Parameter_GetCh1Param(1, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M1", 0);
                }
            }
        }
    else if (Parameter_GetCh1Param(1, 130) == 3 || Parameter_ChkPlayer(5) || (System_GlobalWork(5, 1) == 1)){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 6);
        if ((System_GlobalWork(23, 1) == 1 && Parameter_GetCh1Param(1, 558) == 0 && (Parameter_GetCh1Param(1, 60) + Parameter_GetCh1Param(1, 61) >= 350))){
            System_Call_GS2("B60", "M1", 0);
            }
        else if ((Parameter_GetCh1Param(1, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him about it.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                break ;
                case 1:
                Character_ChMove(1, 0);
                if (Parameter_GetCh1Param(1, 130) <= 2){
                    Voice_PlayVoice("B0601000_A02600", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I'll be leaving first.");
                    }
                else {
                    Voice_PlayVoice("B0601000_A02700", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Later.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("B0601000_A02900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'll walk you home, since you're a\ngirl, after all.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M1", 0);
            System_Call_GS2("B08", "M1", 0);
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("B0601000_A03000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's a little late...\nI'll walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M1", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                }
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 4, 1);
            Voice_PlayVoice("B0601000_A03100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go. I'll walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M1", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                }
            }
        }
    else {
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 6);
        Character_ChFace(1, 0, 0);
        Character_ChFace(1, 4, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0601000_A03200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, if you still have time, do you\nwanna go the long way home?");
        Message_MsgSel("Yeah, it's fine.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0601000_A03300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Alright. Let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(1, 61, 0);
            Parameter_AddCh1Param(1, 60, 1);
            Parameter_AddCh1Param(1, 62, #3);
            System_Call_GS2("B99", "M1", 0);
            if ((Parameter_GetCh1Param(1, 130) >= 4 && Parameter_GetCh1Param(1, 570) >= 400 && Date_Date_Data(124) >= 2 && Date_Date_Data(124) < 5 && Date_DateEvent(0) == 0 && System_GlobalWork(0, 1) == 0 && Parameter_GetCh1Param(1, 556) == 0)){
                Contact_NearSkinShip("M1_D?F", 1, Date_Date_Data(124), Parameter_GetSysParam(4), var5);
                var5 = Contact_NearSkinEndModeGet();
                switch (var5){
                    case 3:
                    var6 = Parameter_GetCh1Param(1, 559);
                    if (var6 < 5){
                        System_Call_GS2("B15", "M1", var6);
                        }
                    else {
                        System_Call_GS2("B15", "M1", 5);
                        }
                    Parameter_AddCh1Param(1, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M1", 12);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M1", 22);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M1", 31);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M1", 42);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M1", 43);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M1", 24);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M1", 25);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M1", 33);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M1", 34);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M1", 35);
                    break ;
                    }
                Screen_WipeOut(2);
                Screen_ClearScreen();
                if ((var5 >= 4 && 13 >= var5)){
                    }
                if (var5 != 3){
                    System_Call_GS2("B08", "M1", 0);
                    }
                }
            else if ((Parameter_GetCh1Param(1, 536) == 1) && (Parameter_GetCh1Param(1, 538) == 0)){
                System_Call_GS2("B07", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                }
            else if ((Parameter_GetPl1Param(312) == 1) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(1, 537) == 1)){
                System_Call_GS2("B30", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                }
            else {
                System_Call_GS2("B07", "M1", 0);
                System_Call_GS2("B08", "M1", 0);
                }
            break ;
            case 1:
            Character_Chara_GS2(1, "M1_D?F", 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0601000_A03400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really... Ah, it's fine.\nLet's split, then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was it a bad idea to turn him\ndown...?)");
            Parameter_AddCh1Param(1, 61, 0);
            Parameter_AddCh1Param(1, 60, 1);
            Parameter_AddCh1Param(1, 62, #3);
            break ;
            }
        }
    Parameter_AddCh1Param(1, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
