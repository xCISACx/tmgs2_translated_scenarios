section "b06_m2_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(2, 61, 3);
        Parameter_AddCh1Param(2, 60, 2);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(2, 61, 0);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #2);
        Parameter_AddCh1Param(2, 62, 2);
        }
    if (Date_GetDateOption(0) == 0){
        if ((Date_Date_Data(124) >= 4) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Voice_PlayVoice("B0602000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Phew*...\nThis might be good, once in a while.");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Voice_PlayVoice("B0602000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Today went well. How was it...\nfor you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "It was really fun!");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                if (System_GlobalWork(23, 1) != 2){
                    Message_ResumeSkinship();
                    }
                Voice_PlayVoice("B0602000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Really?");
                if (System_GlobalWork(23, 1) == 2){
                    Message_ResumeSkinship();
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_02_170_00000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "It'd be nice if we can go to our\nfavorite place next time.\nEven if you're uncertain, I'll still\ntag along.");
                    }
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Voice_PlayVoice("B0602000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There's not enough time in one\nday...\nLet's go out again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'll ask you out somewhere\nagain.");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah.\nAnd when you do, I'll clear up my\nschedule.");
                }
            }
        else if ((Date_Date_Data(124) == 3) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Voice_PlayVoice("B0602000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, I enjoyed today.");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0602000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We played around a lot all day\ntoday.");
                if (System_GlobalWork(23, 1) != 2){
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    }
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, that's right.");
                Message_SkinshipSet(0);
                if (System_GlobalWork(23, 1) == 2){
                    Message_ResumeSkinship();
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("FD_02_170_00100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "If it was like this, I'm sure he'd\nbe able to enjoy himself, too.");
                    }
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0602000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "This is nice.\nAsk me out again sometime.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Only if it's alright with you,\n｛Shiba＊＊｝.");
                Message_SkinshipSet(0);
                }
            }
        else if ((Date_Date_Data(124) == 2) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Voice_PlayVoice("B0602000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... So that's that.");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Voice_PlayVoice("B0602000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Was it fun?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh, it was fun.");
                if (System_GlobalWork(23, 1) != 2){
                    Message_ResumeSkinship();
                    }
                Voice_PlayVoice("B0602000_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It was a strange place.");
                if (System_GlobalWork(23, 1) == 2){
                    Message_ResumeSkinship();
                    Character_ChFace(1, 0, 0);
                    Character_ChFace(1, 6, 1);
                    Voice_PlayVoice("FD_02_170_00200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Well, I'll do my best.");
                    }
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(2, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Incomplete combustion....\nThat's what today felt like.");
                }
            }
        else if ((Date_Date_Data(124) == 1) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_PauseSkinship();
                Voice_PlayVoice("B0602000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Bad aftertaste...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(2, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...\nDid you want to do something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh... Sorry.");
                Character_ChFace(0, 0, 3);
                if (System_GlobalWork(23, 1) != 2){
                    Message_ResumeSkinship();
                    }
                Voice_PlayVoice("B0602000_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's over already.\nIt can't be helped.");
                if (System_GlobalWork(23, 1) == 2){
                    Message_ResumeSkinship();
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 6, 2);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("FD_02_170_00300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nBut even when you lose focus, there\nare still boundaries.");
                    }
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(2, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... *Sigh*.\nWas today an unlucky day for us?");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry...");
                Character_ChFace(1, 0, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Don't apologize.\nI wasn't blaming you.");
                }
            }
        else if ((Date_Date_Data(124) == 0) && (Date_Date_Double() == 0)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... What the hell?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝, your eyes\nlook angry...)");
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(2, 3, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(2, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                if (System_GlobalWork(23, 1) != 2){
                    Message_ResumeSkinship();
                    }
                Voice_PlayVoice("B0602000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...\nMaybe I should stop by the video\nstore or something on the way\nhome...");
                if (System_GlobalWork(23, 1) == 2){
                    Message_ResumeSkinship();
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 6, 1);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("FD_02_170_00400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........");
                    }
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hey, did I do something wrong?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? W-Why do you ask?");
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Nothing, just... It's fine.\nIt's nothing.");
                }
            }
        else if (Date_Date_Double() == 1){
            Message_PauseSkinship();
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0602000_B02200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I failed to mention this at first,\nbut I've been bored of this place\nsince we came here last time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nThis is the same place as last\ntime...)");
            Message_SkinshipSet(0);
            Parameter_AddCh1Param(2, 61, 0);
            Parameter_AddCh1Param(2, 60, 0);
            Parameter_AddCh1Param(2, 62, 0);
            }
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0602000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks for today.\nIt might have been a good thing that\nyou asked me out.");
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0602000_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks for the entire day.\nIt was a good choice to invite you\nout.");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if (Parameter_GetCh1Param(2, 130) == 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0602000_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks. You're interesting.");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Really?");
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B02600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.");
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0602000_B02700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks, it was fun.\nI'll ask you out again... maybe.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, I look forward to it.");
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B02800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Got it. Look forward to it.");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0602000_B02900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Sorry for dragging you along with me\nfor the whole day.");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's fine. It was fun.");
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B03000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Good, then.");
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0602000_B03100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Do you... regret it? Today, I mean.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, why?");
                Character_ChFace(1, 0, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B03200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, nothing.\nIt's fine if you could enjoy\nyourself.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("B0602000_B03300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...\nSo there are also such times.");
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("B0602000_B03400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "My bad... I'm thick-headed.\nYou were bored, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No, I wasn't...");
                Character_ChFace(1, 0, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B03500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You don't have to worry about my\nfeelings.\nNext time... I'll be careful.");
                }
            }
        else if (Date_Date_Data(124) == 0){
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0602000_B03600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "The both of us were reckless...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh... sorry...");
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B03700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's fine. It's over.");
                }
            else if (Parameter_GetCh1Param(2, 130) >= 4){
                Message_PauseSkinship();
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0602000_B03800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...\nIf you don't like it, then just say\nit, okay?\nI won't get angry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not the case...\nBut, sorry for bringing the mood\ndown...");
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(2, 3, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0602000_B03900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........\nSorry, I shouldn't have said that.\nI'll be careful, too.");
                }
            }
        }
    if ((Parameter_GetCh1Param(2, 130) <= 2) || (Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_ChMove(2, 0);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("B0602000_B04000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Later.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("B0602000_B04100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well then, I'm going now.");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Voice_PlayVoice("B0602000_B04200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm going home.\nBe careful on your way home, okay?");
            if ((Parameter_GetCh1Param(2, 130) >= 4) && (Date_Date_Data(124) == 0)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B10", "M2", 0);
                }
            }
        }
    else if ((Parameter_GetCh1Param(2, 130) == 3) || Parameter_ChkPlayer(5) || (System_GlobalWork(5, 1) == 1)){
        var0 = Character_GetChFace(1, 2);
        var1 = Character_GetChFace(1, 3);
        var2 = Character_GetChFace(1, 4);
        Character_ChMove(2, 0);
        Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 6);
        Character_ChFace(1, 2, var0);
        Character_ChFace(1, 3, var1);
        Character_ChFace(1, 4, var2);
        if ((System_GlobalWork(23, 1) == 2 && Parameter_GetCh1Param(2, 558) == 0 && (Parameter_GetCh1Param(2, 60) + Parameter_GetCh1Param(2, 61) >= 350))){
            System_Call_GS2("B60", "M2", 0);
            }
        else if ((Parameter_GetCh1Param(2, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him about it.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                break ;
                case 1:
                Character_ChMove(2, 0);
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Voice_PlayVoice("B0602000_B04000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Later.");
                    }
                else {
                    Voice_PlayVoice("B0602000_B04100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Well then, I'm going now.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("B0602000_B04300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Should I... walk you home?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M2", 0);
            System_Call_GS2("B08", "M2", 0);
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("B0602000_B04400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'll walk you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M2", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                }
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Voice_PlayVoice("B0602000_B04500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Come on. I'll walk you home.");
            if (Parameter_ChkPlayer(5)){
                Parameter_InPl1Param(336, #1);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M2", 11);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        Voice_PlayVoice("B0602000_B04600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey... Do you have to go home now?\nIf not, then...");
        Message_MsgSel("No, it's fine.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 6);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0602000_B04700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then stay with me a little longer.\nIt's still not enough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(2, 61, 0);
            Parameter_AddCh1Param(2, 60, 1);
            Parameter_AddCh1Param(2, 62, #3);
            System_Call_GS2("B99", "M2", 0);
            if ((Parameter_GetCh1Param(2, 130) >= 4 && Parameter_GetCh1Param(2, 570) >= 400) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(2, 556) == 0)){
                Contact_NearSkinShip("M2_D?F", 2, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                var4 = Contact_NearSkinEndModeGet();
                switch (var4){
                    case 3:
                    var5 = Parameter_GetCh1Param(2, 559);
                    if (var5 < 5){
                        System_Call_GS2("B15", "M2", var5);
                        }
                    else {
                        System_Call_GS2("B15", "M2", 5);
                        }
                    Parameter_AddCh1Param(2, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M2", 12);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M2", 21);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M2", 31);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M2", 41);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M2", 43);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M2", 23);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M2", 24);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M2", 25);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M2", 33);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M2", 35);
                    break ;
                    }
                Screen_WipeOut(2);
                Screen_ClearScreen();
                if ((var4 >= 4 && 13 >= var4)){
                    }
                System_Call_GS2("B08", "M2", 0);
                }
            else if ((Parameter_GetCh1Param(2, 536) == 1) && (Parameter_GetCh1Param(2, 538) == 0)){
                System_Call_GS2("B07", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                }
            else if ((Parameter_GetPl1Param(312) == 2) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(2, 537) == 1)){
                System_Call_GS2("B30", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                }
            else {
                System_Call_GS2("B07", "M2", 0);
                System_Call_GS2("B08", "M2", 0);
                }
            break ;
            case 1:
            Character_Chara_GS2(2, "M2_D?F", 0);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0602000_B04800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'm not getting lucky at all, today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was it a bad idea to turn him\ndown...?)");
            Parameter_AddCh1Param(2, 61, 0);
            Parameter_AddCh1Param(2, 60, 1);
            Parameter_AddCh1Param(2, 62, #3);
            break ;
            }
        }
    Parameter_AddCh1Param(2, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
