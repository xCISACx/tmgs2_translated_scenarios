section "f01_m7_000"{
    Character_BlinkStart(7, 1, (#1), 1);
    Character_BlinkStart(7, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0 = 0;
    int var1 = System_Randam(0, 2);
    int var2 = System_Randam(0, 100);
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    int var8;
    int var9 = System_GlobalWork(23, 1);
    int var10 = Parameter_GetCh1Param(7, 308);
    if (Parameter_GetCh1Param(7, 512) == 0){
        if ((Parameter_GetCh1Param(7, 130) >= 4 && System_Randam(0, 99) >= 75)){
            var5 = 1;
            }
        else {
            var5 = 0;
            }
        }
    else {
        var5 = 2;
        }
    if (var5 == 2){
        if (var2 >= 50){
            Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            }
        else if (var2 < 50){
            Background_Bg_GS2("BG_SC002_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            }
        var1 = 5;
        }
    if (var1 == 0){
        Background_Bg_GS2("BG_SC100_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        }
    else if (var1 == 1){
        Background_Bg_GS2("BG_SC220_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        }
    else if (var1 == 2){
        Background_Bg_GS2("BG_SC202_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        }
    if (var5 == 0){
        Message_Name_Sele_Pre();
        var6 = Parameter_GetCh1Param(7, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Wakaouji＊＊｝.)");
        if (1){
            Message_Name_Sele(7);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(7, 59, var0);
            }
        var7 = Parameter_GetCh1Param(7, 59);
        if (Parameter_CanCallFriendly(7, var7) == 0){
            Parameter_AddCh1Param(7, 60, #2);
            Parameter_AddCh1Param(7, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
            if (Parameter_GetCh1Param(7, 130) >= 4){
                Character_Chara_GS2(7, "M7_02F", 0);
                Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                Voice_PlayVoice("F0107000_G00600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Are you talking to me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Um... Yes.");
                Voice_PlayVoice("F0107000_G00700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Is that trendy?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No.");
                Voice_PlayVoice("F0107000_G00800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I want something that is cooler...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                Parameter_InCh1Param(7, 59, var6);
                Parameter_InCh1Param(7, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                if (Parameter_GetCh1Param(7, 130) <= 2){
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("F0107000_G00000", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "What you said just then...\nWas that perhaps...?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes, I was talking to you,\n｛Wakaouji＊＊｝.");
                    Voice_PlayVoice("F0107000_G00100", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Hmm～...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, umm...");
                    Voice_PlayVoice("F0107000_G00200", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "It's no good.\nAs expected, I cannot be called\nthat.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(7, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(7, 59, var6);
                    }
                else if (Parameter_GetCh1Param(7, 130) == 3){
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Character_BlinkStart(7, 2, (#1), 1);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("F0107000_G00300", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "What you said just then...\nWere you perhaps... talking to me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nI was talking to you,\n｛Wakaouji＊＊｝.");
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("F0107000_G00400", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "No, no.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, umm...");
                    Voice_PlayVoice("F0107000_G00500", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Huh? Well...\nIt is unbelievable, isn't it?");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(7, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(7, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                Character_Chara_GS2(7, "M7_02F", 0);
                Character_BlinkStart(7, 2, (#1), 1);
                Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                Voice_PlayVoice("F0107000_G00900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "What you said just then...\nWere you perhaps... talking to me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes.\nI was talking to you,\n｛Wakaouji＊＊｝.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0107000_G01000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Does that way of calling me have\nsomething to do with the incident in\nthe chemistry room?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?\nUmm, it doesn't have anything...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("F0107000_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank goodness.\nSo then, you should just call me\nwhat you used to call me.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that...)");
                Parameter_InCh1Param(7, 59, var6);
                Parameter_InCh1Param(7, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to wander around with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(7, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("", 7, "F0107000_G01400");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "｛主人公｝.\nAre you going home now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nIs it alright if we walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                    if (Parameter_GetCh1Param(7, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
                        Character_Chara_GS2(7, "M7_02F", 0);
                        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                        Voice_PlayVoice("", 7, "F0107000_G01200");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "｛主人公｝.\nAre you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.\nUmm, if it's alright with you, would\nyou like to walk home together?");
                        }
                    else if (Parameter_GetCh1Param(7, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
                        Character_Chara_GS2(7, "M7_02F", 0);
                        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                        Voice_PlayVoice("", 7, "F0107000_G01300");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "｛主人公｝.\nAh, are you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.");
                        }
                    }
                else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nIs it alright if we walk home\ntogether?");
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Character_BlinkStart(7, 2, (#1), 1);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("", 7, "F0107000_G01500");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "｛主人公｝.... Hi.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Is it alright if we walk home\ntogether?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(7, 130) >= 4){
                        Character_Chara_GS2(7, "M7_01F", 0);
                        Character_BlinkStart(7, 0, (#1), 1);
                        Voice_PlayVoice("F0107000_G01800", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Of course. Let's walk home together.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                        if (Parameter_GetCh1Param(7, 130) <= 2){
                            Character_Chara_GS2(7, "M7_01F", 0);
                            Character_BlinkStart(7, 0, (#1), 1);
                            Voice_PlayVoice("F0107000_G01600", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "I do not mind. Let's walk home.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(7, 130) == 3){
                            Character_Chara_GS2(7, "M7_01F", 0);
                            Character_BlinkStart(7, 0, (#1), 1);
                            Voice_PlayVoice("F0107000_G01700", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "Let us go.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                        Character_Chara_GS2(7, "M7_01F", 0);
                        Character_BlinkStart(7, 2, (#1), 1);
                        Character_BlinkStart(7, 0, (#1), 1);
                        Voice_PlayVoice("F0107000_G01900", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "With me?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.\nPerhaps even talk along the way.");
                        Voice_PlayVoice("F0107000_G02000", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Will the talk be about what happened\nin the chemistry room?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh!?\nUmm, I wasn't going to talk about\nthat in particular...");
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("F0107000_G02100", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Hmm... Let's go home, then.");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    Parameter_AddCh1Param(7, 60, 2);
                    Parameter_AddCh1Param(7, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M7", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(7, 130) >= 4){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0107000_G02700", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "It is unfortunate.\nI still have work...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so...");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0107000_G02800", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Perhaps I will just ignore that and\ngo home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Y-You can't do that!");
                        Voice_PlayVoice("F0107000_G02900", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "So I cannot do that...\nBe careful then.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(7, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                        if (Parameter_GetCh1Param(7, 130) <= 2){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0107000_G02200", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "I am sorry.\nI still have some things to do at\nschool.\nI cannot leave, yet.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...");
                            Voice_PlayVoice("F0107000_G02300", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "Now then, be careful.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(7, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(7, 130) == 3){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0107000_G02400", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "If we walk home together, I would be\ntroubled if rumors started...");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "... Pardon?");
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0107000_G02500", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "No, it is a joke.\nI have something to do today.\nI am sorry.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...");
                            Voice_PlayVoice("F0107000_G02600", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "It is unfortunate.\nNow then, be careful.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(7, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0107000_G03000", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Ah... I have something to do today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so?");
                        Voice_PlayVoice("F0107000_G03100", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "...\nUmm, it is not like I am avoiding\nthat thing.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh!?");
                        Character_ChFace(0, 2, 3);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0107000_G03200", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Ah, it is nothing.\nNow then, excuse me.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(7, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(\"That thing\"...\nHe must be talking about that time\nin the chemistry room...)");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 7){
                        if (var10 == 1){
                            switch (System_GlobalWork(23, 1)){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
                                break ;
                                case 2:
                                System_Call_GS2("F99", "M2", 0);
                                break ;
                                case 3:
                                System_Call_GS2("F99", "M3", 0);
                                break ;
                                case 4:
                                System_Call_GS2("F99", "M4", 0);
                                break ;
                                case 5:
                                System_Call_GS2("F99", "M5", 0);
                                break ;
                                case 6:
                                System_Call_GS2("F99", "M6", 0);
                                break ;
                                }
                            }
                        }
                    }
                break ;
                case 1:
                if (Parameter_GetCh1Param(7, 130) >= 4){
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("", 7, "F0107000_G01400");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "｛主人公｝.\nAre you going home now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nShall we have a conversation while\nwalking home?");
                    }
                else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                    if (Parameter_GetCh1Param(7, 130) <= 2){
                        Character_Chara_GS2(7, "M7_02F", 0);
                        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                        Voice_PlayVoice("", 7, "F0107000_G01200");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "｛主人公｝.\nAre you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.\nUmm, if it's alright with you, shall\nwe have a conversation while walking\nhome?");
                        }
                    else if (Parameter_GetCh1Param(7, 130) == 3){
                        Character_Chara_GS2(7, "M7_02F", 0);
                        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                        Voice_PlayVoice("", 7, "F0107000_G01300");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "｛主人公｝.\nAh, are you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.\nShall we have a conversation while\nwalking home?");
                        }
                    }
                else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                    Character_Chara_GS2(7, "M7_02F", 0);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("", 7, "F0107000_G01500");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "｛主人公｝.... Ah.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm... Shall we walk home together?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(7, 130) >= 4){
                        Character_Chara_GS2(7, "M7_01F", 0);
                        Character_BlinkStart(7, 0, (#1), 1);
                        Voice_PlayVoice("F0107000_G01600", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "I do not mind. Let's go home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                        if (Parameter_GetCh1Param(7, 130) <= 2){
                            Character_Chara_GS2(7, "M7_01F", 0);
                            Character_BlinkStart(7, 0, (#1), 1);
                            Voice_PlayVoice("F0107000_G01600", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "I do not mind. Let's go home.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(7, 130) == 3){
                            Character_Chara_GS2(7, "M7_01F", 0);
                            Character_BlinkStart(7, 0, (#1), 1);
                            Voice_PlayVoice("F0107000_G01700", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "Let's go.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                        Character_Chara_GS2(7, "M7_01F", 0);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(7, 0, (#1), 1);
                        Voice_PlayVoice("F0107000_G01900", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "With me?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yes.\nPerhaps even talk along the way.");
                        Voice_PlayVoice("F0107000_G02000", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Will the talk be about what happened\nin the chemistry room?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh!?\nUmm, I wasn't going to talk about\nthat in particular...");
                        Voice_PlayVoice("F0107000_G02100", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Hmm... Let's go home, then.");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    Parameter_AddCh1Param(7, 60, 4);
                    Parameter_AddCh1Param(7, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M7", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(7, 130) >= 4){
                        Voice_PlayVoice("F0107000_G02700", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "It is unfortunate.\nI still have work...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so...");
                        Voice_PlayVoice("F0107000_G02800", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Perhaps I will just ignore that and\ngo home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Y-You can't do that!");
                        Voice_PlayVoice("F0107000_G02900", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "So I cannot do that...\nBe careful then.");
                        Character_Chara_GS2(7, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
                        if (Parameter_GetCh1Param(7, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0107000_G02200", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "I am sorry.\nI still have some things to do at\nschool.\nI cannot leave, yet.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...");
                            Voice_PlayVoice("F0107000_G02300", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "Now then, be careful.");
                            Character_Chara_GS2(7, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(7, 130) == 3){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0107000_G02400", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "If we walk home together, I would be\ntroubled if rumors started...");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "... Pardon?");
                            Voice_PlayVoice("F0107000_G02500", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "No, it is a joke.\nI have something to do today.\nI am sorry.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...");
                            Voice_PlayVoice("F0107000_G02600", #1, "");
                            Message_Who(7);
                            Message_MsgDisp("Wakaouji", "It is unfortunate.\nNow then, be careful.");
                            Character_Chara_GS2(7, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
                        Character_ChFace(0, 0, 3);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0107000_G03000", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Ah... I have something to do today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so?");
                        Voice_PlayVoice("F0107000_G03100", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "...\nUmm, it is not like I am avoiding\nthat thing.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Voice_PlayVoice("F0107000_G03200", #1, "");
                        Message_Who(7);
                        Message_MsgDisp("Wakaouji", "Ah, it is nothing.\nNow then, excuse me.");
                        Character_Chara_GS2(7, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(\"That thing\"...\nHe must be talking about that time\nin the chemistry room...)");
                        Parameter_InCh1Param(7, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 7){
                        if (var10 == 1){
                            switch (System_GlobalWork(23, 1)){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
                                break ;
                                case 2:
                                System_Call_GS2("F99", "M2", 0);
                                break ;
                                case 3:
                                System_Call_GS2("F99", "M3", 0);
                                break ;
                                case 4:
                                System_Call_GS2("F99", "M4", 0);
                                break ;
                                case 5:
                                System_Call_GS2("F99", "M5", 0);
                                break ;
                                case 6:
                                System_Call_GS2("F99", "M6", 0);
                                break ;
                                }
                            }
                        }
                    }
                Music_StopBGM(0, 40);
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, whatever...\nI'll go home by myself today.)");
                var8 = 1;
                break ;
                }
            }
        }
    else if (var5 == 1){
        System_Call_GS2("F01", "M7", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(7, "M7_02F", 0);
        Voice_PlayVoice("F0107000_G04800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Did he not notice me? He left...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(7, 86, 1);
        }
    else {
        }
    }
