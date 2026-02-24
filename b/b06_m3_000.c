section "b06_m3_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #2);
        Parameter_AddCh1Param(3, 62, 2);
        }
    if (Date_GetDateOption(0) == 0){
        if ((Date_Date_Data(124) >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was an enriching day.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                if (System_GlobalWork(23, 1) == 3){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_03_170_00000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "It was an exemplary date.\nHe will be jealous, I'm sure.");
                    }
                else {
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0603000_C00100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "It was an enriching day.\nI am glad you invited me out.");
                    }
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0603000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I was able to enjoy today from the\nbottom of my heart.\nThank you for inviting me.\nI will ask you out.");
                }
            }
        else if ((Date_Date_Data(124) == 3) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was considerably enriching.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                if (System_GlobalWork(23, 1) == 3){
                    Character_ChFace(1, 0, 0);
                    Voice_PlayVoice("FD_03_170_00100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Do your best so that the real thing\nwill also be like this.");
                    }
                else {
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(3, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0603000_C00400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Today was considerably enriching.\nI am glad you invited me out.");
                    }
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0603000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was considerably fun.\nThank you for inviting me out.\nLet us...\nhave a day like this again.");
                }
            }
        else if ((Date_Date_Data(124) == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(1, 0, 0);
                Character_BlinkStart(3, 2, (#1), 2);
                Voice_PlayVoice("B0603000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This was quite a breather.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                if (System_GlobalWork(23, 1) == 3){
                    Character_ChFace(1, 0, 6);
                    Character_ChFace(1, 6, 2);
                    Character_ChFace(1, 4, 0);
                    Voice_PlayVoice("FD_03_170_00200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "There were points that you must\nrevise for the real thing.\nI think that you know that too.");
                    }
                else {
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0603000_C00700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I was able to get a little change of\npace.");
                    }
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was a good outlet for\nrelaxation.\nThank you for asking me out.");
                }
            }
        else if ((Date_Date_Data(124) == 1) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 2);
                Voice_PlayVoice("B0603000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I don't know what the purpose of\nthis date today was.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                if (System_GlobalWork(23, 1) == 3){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("FD_03_170_00300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I might have done something wrong.\nI still require more practice.");
                    }
                else {
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(3, 2, (#1), 2);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("B0603000_C01000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "We should have thought of a better\nway to use our time today.");
                    }
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("B0603000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I picked up on some things that need\nimprovement.\nLet us make the next date better.");
                }
            }
        else if ((Date_Date_Data(124) == 0) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0603000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was a pointless day.\nLet us both go home and study.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                if (System_GlobalWork(23, 1) == 3){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("FD_03_170_00400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Did you lose concentration because\nit was just practice?\nWe should strive to become more\nserious.");
                    }
                else {
                    Character_ChFace(1, 2, 1);
                    Character_ChFace(1, 3, 5);
                    Voice_PlayVoice("B0603000_C01300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "It was an entirely pointless day.\nThat is very unfortunate.");
                    }
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0603000_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI did not think that today would end\nup like this.\nAre you also worn out?");
                }
            }
        else if (Date_Date_Double() == 1){
            Message_PauseSkinship();
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0603000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo you like this place very much.\nBut why don't you try changing the\nvenue next time?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nHe actually remembered the last\nplace we had a date at!)");
            Message_SkinshipSet(0);
            Parameter_AddCh1Param(3, 61, 0);
            Parameter_AddCh1Param(3, 60, 0);
            Parameter_AddCh1Param(3, 62, 0);
            }
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was more enjoyable than I had\nanticipated.\nI am glad I invited you out.");
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0603000_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I thoroughly enjoyed today.\nI think that it is... thanks to you.\nIs it alright to invite you out\nagain?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course!");
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0603000_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see... thank you.");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Voice_PlayVoice("B0603000_C01900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was quite a fun day.\nI am glad I asked you.");
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 0);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0603000_C02000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was considerably fun.\nIt would be nice if you thought so\ntoo...\nIs it okay to ask you out again?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course.");
                Message_ResumeSkinship();
                Voice_PlayVoice("B0603000_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see... That's good to know.");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C02200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thank you for coming out with me\ntoday to take a breather.");
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C02300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks to you, I was able to get a\nchange of pace.\nI will ask you again, some day.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0603000_C02400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I made you pointlessly spend time\nwith me.\nMy apologies.");
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0603000_C02500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Today was...\nspent unsatisfactorily....\nI am sorry.");
                }
            }
        else if (Date_Date_Data(124) == 0){
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0603000_C02600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIf it is like this, perhaps it would\nhave been better to not invite you\nout.\nI am sorry.");
                }
            else if (Parameter_GetCh1Param(3, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 4);
                Voice_PlayVoice("B0603000_C02700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are tired, aren't you?\nI am sorry for forcing you to\naccompany me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, that's not it...");
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0603000_C02800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is alright.\nPlease hurry home and rest.");
                }
            }
        }
    if ((Parameter_GetCh1Param(3, 130) <= 2) || (Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_ChMove(3, 0);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            if ((System_GlobalWork(3, 1) == 0) || (Date_Get_Date_Place2() != 5)){
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0603000_C02900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Now, shall we go home?");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0603000_C03200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Now, shall we go home?\nI will walk you home.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B08", "M3", 0);
                }
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0603000_C03000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Now then, it is about time we went\nhome.");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("B0603000_C03100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Now then, I will see you later.\nPlease take care on your way home.");
            if ((Parameter_GetCh1Param(3, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M3", 0);
                }
            }
        }
    else if ((Parameter_GetCh1Param(3, 130) == 3 || Parameter_ChkPlayer(5)) || (System_GlobalWork(5, 1) == 1)){
        var0 = Character_GetChFace(1, 2);
        var1 = Character_GetChFace(1, 3);
        var2 = Character_GetChFace(1, 4);
        Character_ChMove(3, 0);
        Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 6);
        Character_ChFace(1, 2, var0);
        Character_ChFace(1, 3, var1);
        Character_ChFace(1, 4, var2);
        if ((System_GlobalWork(23, 1) == 3 && Parameter_GetCh1Param(3, 558) == 0 && (Parameter_GetCh1Param(3, 60) + Parameter_GetCh1Param(3, 61) >= 350))){
            System_Call_GS2("B60", "M3", 0);
            }
        else if ((Parameter_GetCh1Param(3, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him about it.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M3", 0);
                System_Call_GS2("B08", "M3", 0);
                break ;
                case 1:
                Character_Chara_GS2(3, "M3_D?F", 0);
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_BlinkStart(3, 0, (#1));
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0603000_C02900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Now, shall we go home?");
                    }
                else {
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(3, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0603000_C03000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Now then, it is about time we went\nhome.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0603000_C03200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Now, shall we go home?\nI will walk you home.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M3", 0);
            System_Call_GS2("B08", "M3", 0);
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0603000_C03300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Now then, it is about time we went\nhome.\nI will walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M3", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M3", 0);
                System_Call_GS2("B08", "M3", 0);
                }
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Voice_PlayVoice("B0603000_C03400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... We are going home, right?\nIt is dangerous for a girl to walk\nhome by herself.\nLet me walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M3", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M3", 0);
                System_Call_GS2("B08", "M3", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0603000_C03500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThis is what we had arranged, but if\ntime permits, would you like to take\nthe long way home?");
        Message_MsgSel("Sure, it's fine.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Character_Chara_GS2(3, "M3_D?F", 0, 1, 1, 6);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Voice_PlayVoice("B0603000_C03600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nNow then, please accompany me a\nlittle longer.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(3, 61, 0);
            Parameter_AddCh1Param(3, 60, 1);
            Parameter_AddCh1Param(3, 62, #3);
            System_Call_GS2("B99", "M3", 0);
            if ((Parameter_GetCh1Param(3, 130) >= 4 && Parameter_GetCh1Param(3, 570) >= 400) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(3, 556) == 0)){
                Contact_NearSkinShip("M3_D?F", 3, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                var4 = Contact_NearSkinEndModeGet();
                switch (var4){
                    case 3:
                    var5 = Parameter_GetCh1Param(3, 559);
                    if (var5 < 5){
                        System_Call_GS2("B15", "M3", var5);
                        }
                    else {
                        System_Call_GS2("B15", "M3", 5);
                        }
                    Parameter_AddCh1Param(3, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M3", 11);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M3", 12);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M3", 31);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M3", 42);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M3", 43);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M3", 14);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M3", 15);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M3", 23);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M3", 24);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M3", 33);
                    break ;
                    }
                Screen_WipeOut(2);
                Screen_ClearScreen();
                if ((var4 >= 4 && 13 >= var4)){
                    }
                if (var4 != 3){
                    System_Call_GS2("B08", "M3", 0);
                    }
                }
            else if (Parameter_ChkSpEvent("D02", "M3", 0) == 1){
                System_Call_GS2("D02", "M3", 0);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                if ((Parameter_GetCh1Param(3, 536) == 1) && (Parameter_GetCh1Param(3, 538) == 0)){
                    System_Call_GS2("B07", "M3", 0);
                    }
                else if ((Parameter_GetPl1Param(312) == 3) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(3, 537) == 1)){
                    System_Call_GS2("B30", "M3", 0);
                    }
                else {
                    System_Call_GS2("B07", "M3", 0);
                    }
                System_Call_GS2("B08", "M3", 0);
                }
            break ;
            case 1:
            Character_Chara_GS2(3, "M3_D?F", 0);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0603000_C03700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...\nI am sorry for holding you back.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was it a bad idea to turn him\ndown...?)");
            Parameter_AddCh1Param(3, 61, 0);
            Parameter_AddCh1Param(3, 60, 1);
            Parameter_AddCh1Param(3, 62, #3);
            break ;
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
