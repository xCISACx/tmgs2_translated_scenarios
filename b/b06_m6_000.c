section "b06_m6_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #2);
        Parameter_AddCh1Param(6, 62, 2);
        }
    if (Date_GetDateOption(0) == 0){
        if ((Date_Date_Data(124) >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0606000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I really had a good time today.\nThank you.");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                if (System_GlobalWork(23, 1) == 6){
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("FD_06_170_00000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Does that mean you practiced to the\nvery end?\nToday's date was a huge success!\nI'll give you a passing grade.");
                    }
                else {
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("B0606000_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I had so much fun!\nI look forward to being invited,\nagain!!");
                    }
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Today was so fun!! Senpai!\nLet's play again!");
                }
            }
        else if ((Date_Date_Data(124) == 3) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 3);
                Voice_PlayVoice("B0606000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Thank you for inviting me today.");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                if (System_GlobalWork(23, 1) == 6){
                    Character_ChFace(1, 2, 3);
                    Character_BlinkStart(6, 0, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("FD_06_170_00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "It kinda felt alright.\nDo you have any self-confidence,\nthough?");
                    }
                else {
                    Character_ChFace(1, 0, 3);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Voice_PlayVoice("B0606000_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Yeah, I had quite a nice time.\nLet's play again.");
                    }
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 0, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Voice_PlayVoice("B0606000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Interesting!\nHey, let's play again, Senpai!");
                }
            }
        else if ((Date_Date_Data(124) == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 3);
                Voice_PlayVoice("B0606000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Thank you for today. Well then.");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                if (System_GlobalWork(23, 1) == 6){
                    Character_ChFace(1, 2, 3);
                    Character_BlinkStart(6, 0, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("FD_06_170_00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "That was so-so.\nBut was it because of me?\nThat must not give you any peace of\nmind.");
                    }
                else {
                    Character_ChFace(1, 0, 0);
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("B0606000_F00700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well, today was okay, I guess.");
                    }
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, today was okay.\nI was able to enjoy myself.\nLet's play again, Senpai!");
                }
            }
        else if ((Date_Date_Data(124) == 1) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Voice_PlayVoice("B0606000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It was so-so.\nWell then, I'll be leaving.");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                if (System_GlobalWork(23, 1) == 6){
                    Character_ChFace(1, 2, 1);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("FD_06_170_00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "If you're coming here with the\nperson you like, you have to watch\nyour speech and behavior, Senpai.");
                    }
                else {
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("B0606000_F01000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hmm～, today was complicated.\nMaybe choose a more interesting\nplace next time?");
                    }
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 0, 3);
                Voice_PlayVoice("B0606000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know... Well, no.\nYou should go have more fun next\ntime!");
                }
            }
        else if ((Date_Date_Data(124) == 0) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0606000_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... *Phew* That wore me out.\nGoodbye.");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                if (System_GlobalWork(23, 1) == 6){
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("FD_06_170_00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hah, I'm tired...\nComing to a place like this again\nwould be a waste.");
                    }
                else {
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("B0606000_F01300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I didn't have fun, at all today...\nWell then, Senpai. See you later.");
                    }
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, you seemed tired.\nI'm tired today, too.\nWe should both rest. Bye.");
                }
            }
        else if (Date_Date_Double() == 1){
            Message_PauseSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0606000_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm...\nIf I'm not mistaken, didn't we come\nhere last time?");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 4);
                Voice_PlayVoice("B0606000_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know, invite me to a place\ndifferent from the last.\nI'm tired of this place.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I understand if Senpai is pleased\nwith this place, but let's enjoy\nother places next time.");
                }
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Damn it!\nHe perfectly remembered us going on\na date to this same place the last\ntime!)");
            Message_SkinshipSet(0);
            }
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(1, 0, 0);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I had so much fun!\nLet's play together, again!");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Today was truly the best!\nInvite me again so we can play!");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That was interesting!\nSenpai, let's play again.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Just as I thought, spending time\nwith Senpai was the best fun!\nLet's play, again!");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Mmm～, that wasn't very good, was it?\nI'm sorry, let's go somewhere that's\nmore fun next time.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That wasn't very interesting, was\nit?\nI didn't think it was great...\nLet's go somewhere that's more fun\nnext time.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0606000_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know, I thought that was boring.\nYou're boring to be around, too.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0606000_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Were you not really feeling up to it? \nI probably shouldn't have asked you to \ncome...I'm sorry");
                }
            }
        else if (Date_Date_Data(124) == 0){
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0606000_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nFor all that, you don't need to come\nto a boring place like this.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0606000_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If you don't like it, then it's okay\nto just say so.\nForcing yourself is not a good\nthing.");
                }
            }
        }
    if ((Parameter_GetCh1Param(6, 130) <= 2) || (Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_Chara_GS2(6, "M6_D?F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0606000_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, I'll be going.");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("B0606000_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, bye.");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("B0606000_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "See you later, Senpai!\nBe careful going home.");
            if ((Parameter_GetCh1Param(6, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M6", 0);
                }
            }
        }
    else if ((Parameter_GetCh1Param(6, 130) == 3) || (Parameter_ChkPlayer(5)) || (System_GlobalWork(5, 1) == 1)){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 6);
        if ((System_GlobalWork(23, 1) == 6 && Parameter_GetCh1Param(6, 558) == 0 && (Parameter_GetCh1Param(6, 60) + Parameter_GetCh1Param(6, 61) >= 350))){
            System_Call_GS2("B60", "M6", 0);
            }
        else if ((Parameter_GetCh1Param(6, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nShould I listen to him talk for a\nwhile...)");
            Message_MsgSel("Listen to him talk.", "I have to go home, too.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝.\nI want to listen to you talk for a\nwhile...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M6", 0);
                System_Call_GS2("B08", "M6", 0);
                break ;
                case 1:
                Character_Chara_GS2(6, "M6_D?F", 0);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("B0606000_F02800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well, bye.");
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 0, 0);
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("B0606000_F02900", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "See you later.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0606000_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, I'll walk you home.\nPlease let me do this.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M6", 0);
            System_Call_GS2("B08", "M6", 0);
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(1, 0, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0606000_F03200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'll walk you home, Senpai.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M6", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M6", 0);
                System_Call_GS2("B08", "M6", 0);
                }
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0606000_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'll walk you home.\nIt's natural for a man to do this.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M6", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M6", 0);
                System_Call_GS2("B08", "M6", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0606000_F03400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm, do you have any time, after\nthis?\nWould you wanna drop by somewhere?");
            Message_MsgSel("Yeah, okay.", "Sorry, I kind of can't today...");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 6);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0606000_F03600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, do you want to talk for a\nmoment?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Parameter_AddCh1Param(6, 61, 0);
                Parameter_AddCh1Param(6, 60, 1);
                Parameter_AddCh1Param(6, 62, #3);
                System_Call_GS2("B07", "M6", 0);
                System_Call_GS2("B99", "M6", 0);
                System_Call_GS2("B08", "M6", 0);
                break ;
                case 1:
                Character_Chara_GS2(6, "M6_D?F", 0);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0606000_F03800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, is that so?\nWell then, next time. Goodbye.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Was turning him down a bad thing to\ndo...?)");
                Parameter_AddCh1Param(6, 61, 0);
                Parameter_AddCh1Param(6, 60, 1);
                Parameter_AddCh1Param(6, 62, #3);
                break ;
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0606000_F03500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, do you have any time after\nthis?\nLet's drop by somewhere!");
            Message_MsgSel("Yeah, okay.", "Sorry, I kind of can't today...");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 6);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0606000_F03700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's settled! Well then, let's go!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Parameter_AddCh1Param(6, 61, 0);
                Parameter_AddCh1Param(6, 60, 1);
                Parameter_AddCh1Param(6, 62, #3);
                System_Call_GS2("B99", "M6", 0);
                if ((Parameter_GetCh1Param(6, 130) >= 4 && Parameter_GetCh1Param(6, 570) >= 400) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(6, 556) == 0)){
                    Contact_NearSkinShip("M6_D?F", 6, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                    var4 = Contact_NearSkinEndModeGet();
                    switch (var4){
                        case 3:
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        var5 = Parameter_GetCh1Param(6, 559);
                        if (var5 < 5){
                            System_Call_GS2("B15", "M6", var5);
                            }
                        else {
                            System_Call_GS2("B15", "M6", 5);
                            }
                        Parameter_AddCh1Param(6, 559, 1);
                        break ;
                        case 4:
                        System_Call_GS2("B16", "M6", 12);
                        break ;
                        case 5:
                        System_Call_GS2("B16", "M6", 21);
                        break ;
                        case 6:
                        System_Call_GS2("B16", "M6", 22);
                        break ;
                        case 7:
                        System_Call_GS2("B16", "M6", 42);
                        break ;
                        case 8:
                        System_Call_GS2("B16", "M6", 43);
                        break ;
                        case 9:
                        System_Call_GS2("B16", "M6", 15);
                        break ;
                        case 10:
                        System_Call_GS2("B16", "M6", 23);
                        break ;
                        case 11:
                        System_Call_GS2("B16", "M6", 25);
                        break ;
                        case 12:
                        System_Call_GS2("B16", "M6", 33);
                        break ;
                        case 13:
                        System_Call_GS2("B16", "M6", 34);
                        break ;
                        }
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B08", "M6", 0);
                    }
                else if (Parameter_ChkSpEvent("D02", "M6", 0) == 0){
                    if ((Parameter_GetCh1Param(6, 536) == 1) && (Parameter_GetCh1Param(6, 538) == 0)){
                        System_Call_GS2("B07", "M6", 0);
                        }
                    else if ((Parameter_GetPl1Param(312) == 6) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(6, 537) == 1)){
                        System_Call_GS2("B30", "M6", 0);
                        }
                    else {
                        System_Call_GS2("B07", "M6", 0);
                        }
                    System_Call_GS2("B08", "M6", 0);
                    }
                else {
                    System_Call_GS2("D02", "M6", 0);
                    }
                break ;
                case 1:
                Character_Chara_GS2(6, "M6_D?F", 0);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0606000_F03900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, you can't? Then that's a no.\nSee you later.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Was turning him down a bad thing to\ndo...?)");
                Parameter_AddCh1Param(6, 61, 0);
                Parameter_AddCh1Param(6, 60, 1);
                Parameter_AddCh1Param(6, 62, #3);
                break ;
                }
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
