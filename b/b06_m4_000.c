section "b06_m4_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #2);
        Parameter_AddCh1Param(4, 62, 2);
        }
    if (Date_GetDateOption(0) == 0){
        if ((Date_Date_Data(124) >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(4, 130) <= 2){
                Voice_PlayVoice("B0604000_D00000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It was surprisingly fun today.\nIf it's gonna be like this, I don't\nmind going out, again.");
                }
            else if (Parameter_GetCh1Param(4, 130) == 3){
                if (System_GlobalWork(23, 1) == 4){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_04_170_00000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "If it's this fun, the guy you like\nwill definitely be satisfied on a\ndate with you.");
                    }
                else {
                    Voice_PlayVoice("B0604000_D00100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I know what \"fun\" is by hanging out\nwith you!\nLet's go somewhere, again.");
                    }
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Voice_PlayVoice("B0604000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It was really fun...\nHey, let's go out again!\nIf you ask me, I'll make some time\nfor you.");
                }
            }
        else if ((Date_Date_Data(124) == 3) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(4, 130) <= 2){
                Voice_PlayVoice("B0604000_D00300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I laughed a lot today.\nIf we go somewhere again, I'll be\ncounting on you.");
                }
            else if (Parameter_GetCh1Param(4, 130) == 3){
                if (System_GlobalWork(23, 1) == 4){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_04_170_00100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Wouldn't the guy you like, like\nthis?\nHe might.");
                    }
                else {
                    Voice_PlayVoice("B0604000_D00400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah, I laughed tons today!\nThis kinda thing is fun.\nAsk me out, again.");
                    }
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0604000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Today was fun!\nAh, I laughed so much that my face\nhurts...\nLet's go somewhere, again. Call me.");
                }
            }
        else if ((Date_Date_Data(124) == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(4, 130) <= 2){
                Voice_PlayVoice("B0604000_D00600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, there are days like today.");
                }
            else if (Parameter_GetCh1Param(4, 130) == 3){
                if (System_GlobalWork(23, 1) == 4){
                    Character_ChFace(1, 0, 0);
                    Voice_PlayVoice("FD_04_170_00200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Since you're with me, shouldn't you\nrethink things?");
                    }
                else {
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0604000_D00700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Doing things half- assed is kinda\ndisgusting...\nBut it can't be helped.");
                    }
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_ChFace(1, 4, 0);
                Voice_PlayVoice("B0604000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I wasn't satisfied but this kinda\nthing is okay once in a while.");
                }
            }
        else if ((Date_Date_Data(124) == 1) && (Date_Date_Double() == 0)){
            Character_ChFace(1, 0, 9);
            if (Parameter_GetCh1Param(4, 130) <= 2){
                Voice_PlayVoice("B0604000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... I'm really tired.");
                }
            else if (Parameter_GetCh1Param(4, 130) == 3){
                if (System_GlobalWork(23, 1) == 4){
                    Character_ChFace(1, 0, 9);
                    Voice_PlayVoice("FD_04_170_00300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "If you did the same thing you did\ntoday, even other guys would be\ntired.\nProbably.");
                    }
                else {
                    Voice_PlayVoice("B0604000_D01000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Ah... I'm tired. Aren't you?");
                    }
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You're tired too, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(1, 3, 5);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0604000_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Because you're making that face.\nIt'd be nice if I were wrong.");
                }
            }
        else if ((Date_Date_Data(124) == 0) && (Date_Date_Double() == 0)){
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            if (Parameter_GetCh1Param(4, 130) <= 2){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Today was very boring.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(4, 130) == 3){
                if (System_GlobalWork(23, 1) == 4){
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 6, 1);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("FD_04_170_00400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... You cut way too many corners.\nEven though I'm surprised, I don't\nknow what's wrong with you...\n*Sigh*");
                    }
                else {
                    Voice_PlayVoice("B0604000_D01400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I would call today...\nboring or tiring...\n*Sigh*");
                    }
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIsn't it also possible to do things\nto refresh yourself?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(4, 0, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0604000_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's better to not make yourself\neven more tired.\nI'll listen to you, so just tell me\nnext time.");
                }
            }
        else if (Date_Date_Double() == 1){
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0604000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Didn't we come here last time?\nHow boring～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nThis is the same place that we went\nto last time...)");
            Message_SkinshipSet(0);
            }
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("B0604000_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Time flies when I'm hanging out with\nyou.\nI'll ask you out again, so you\nbetter come with me!");
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Voice_PlayVoice("B0604000_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I had a lot of fun with you today!\nI'll ask you out again, so you\nbetter come with me!");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("B0604000_D02000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Time really flies when I'm with you.\nLet's go somewhere, again!");
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Voice_PlayVoice("B0604000_D02100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It was really fun... Seriously.\nHey, I'm gonna ask you out again, so\nlet's go somewhere.");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("B0604000_D02200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Today was nice!\nLet's go somewhere, again.");
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Voice_PlayVoice("B0604000_D02300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ah, there wasn't enough time.\nLet's finish this on another day.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D02400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ah... Are you tired?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(4, 3, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0604000_D02500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I've got stiff shoulders.");
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D02600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Are you really stressed or\nsomething?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not it...");
                Character_ChFace(1, 3, 5);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0604000_D02700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, don't force yourself.");
                }
            }
        else if (Date_Date_Data(124) == 0){
            Character_ChFace(1, 0, 9);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D02800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I mean don't force yourself to hang\nout with me if you're tired.\nIt's not a good thing, you know?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(4, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0604000_D02900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It might be hard to say...\nBut it's alright if you leave\nhalfway through the date.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(4, 2, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0604000_D03000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I don't wanna see you making that\nface.\nTell me next time.");
                }
            }
        }
    if ((Parameter_GetCh1Param(4, 130) <= 2) || (Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_Chara_GS2(4, "M4_D?F", 0);
        Character_ChFace(0, 0, 0);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("B0604000_D03100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Later.");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Voice_PlayVoice("B0604000_D03200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll see you later.");
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Voice_PlayVoice("B0604000_D03300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I kinda don't wanna go home...\nIt can't be helped.\nI'll see you later.");
            if ((Parameter_GetCh1Param(4, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M4", 0);
                }
            }
        }
    else if ((Parameter_GetCh1Param(4, 130) == 3) || (Parameter_ChkPlayer(5)) || (System_GlobalWork(5, 1) == 1)){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 6);
        Character_ChFace(1, 4, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        if ((System_GlobalWork(23, 1) == 4 && Parameter_GetCh1Param(4, 558) == 0 && (Parameter_GetCh1Param(4, 60) + Parameter_GetCh1Param(4, 61) >= 350))){
            System_Call_GS2("B60", "M4", 0);
            }
        else if ((Parameter_GetCh1Param(4, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                break ;
                case 1:
                Character_Chara_GS2(4, "M4_D?F", 0);
                Character_ChFace(0, 0, 0);
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Voice_PlayVoice("B0604000_D03100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Later.");
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Voice_PlayVoice("B0604000_D03200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I'll see you later.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("B0604000_D03400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Since I'm here, I'll walk you\nhome....\nBe thankful!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M4", 0);
            System_Call_GS2("B08", "M4", 0);
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Voice_PlayVoice("B0604000_D03500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll walk you home.\nIt's the least I can do.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M4", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                }
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Voice_PlayVoice("B0604000_D03600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll walk you home....\nI want to be with you longer.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M4", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        Character_ChFace(1, 0, 0);
        Voice_PlayVoice("B0604000_D03700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey. You still got time?");
        Message_MsgSel("Yeah, a little.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 6);
            Character_BlinkStart(4, 2, (#1), 2);
            Voice_PlayVoice("B0604000_D03800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then give me some time.\nLet's stay together for as long as\nwe can.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(4, 61, 0);
            Parameter_AddCh1Param(4, 60, 1);
            Parameter_AddCh1Param(4, 62, #3);
            System_Call_GS2("B99", "M4", 0);
            if ((Parameter_GetCh1Param(4, 130) >= 4 && Parameter_GetCh1Param(4, 570) >= 400) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(4, 556) == 0)){
                Contact_NearSkinShip("M4_D?F", 4, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                var4 = Contact_NearSkinEndModeGet();
                switch (var4){
                    case 3:
                    var5 = Parameter_GetCh1Param(4, 559);
                    if (var5 < 5){
                        System_Call_GS2("B15", "M4", var5);
                        }
                    else {
                        System_Call_GS2("B15", "M4", 5);
                        }
                    Parameter_AddCh1Param(4, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M4", 12);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M4", 22);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M4", 41);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M4", 42);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M4", 43);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M4", 14);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M4", 24);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M4", 25);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M4", 33);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M4", 34);
                    break ;
                    }
                Screen_WipeOut(2);
                Screen_ClearScreen();
                if ((var4 >= 4 && 13 >= var4)){
                    }
                System_Call_GS2("B08", "M4", 0);
                }
            else if ((Parameter_GetCh1Param(4, 536) == 1) && (Parameter_GetCh1Param(4, 538) == 0)){
                System_Call_GS2("B07", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                }
            else if ((Parameter_GetPl1Param(312) == 4) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(4, 537) == 1)){
                System_Call_GS2("B30", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                }
            else {
                System_Call_GS2("B07", "M4", 0);
                System_Call_GS2("B08", "M4", 0);
                }
            break ;
            case 1:
            Character_Chara_GS2(4, "M4_D?F", 0);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0604000_D03900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see. Sorry for stopping you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was turning him down a bad thing to\ndo...?)");
            Parameter_AddCh1Param(4, 61, 0);
            Parameter_AddCh1Param(4, 60, 1);
            Parameter_AddCh1Param(4, 62, #3);
            break ;
            }
        }
    Parameter_AddCh1Param(4, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
