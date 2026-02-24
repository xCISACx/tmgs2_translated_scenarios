section "f01_m6_000"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(6, 308);
    if (Parameter_GetCh1Param(6, 512) == 0){
        if ((Parameter_GetCh1Param(6, 130) >= 3 && System_Randam(0, 99) >= 75)){
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
        var6 = Parameter_GetCh1Param(6, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Amachi＊＊｝.)");
        if (1){
            Message_Name_Sele(6);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(6, 59, var0);
            }
        var7 = Parameter_GetCh1Param(6, 59);
        if (Parameter_CanCallFriendly(6, var7) == 0){
            Parameter_AddCh1Param(6, 60, #2);
            Parameter_AddCh1Param(6, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
            if (Parameter_GetCh1Param(6, 130) >= 4){
                Character_Chara_GS2(6, "M6_02F", 0);
                Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                Voice_PlayVoice("F0106000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... What did you just say?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, did you dislike it? I'm sorry...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0106000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You said it because you knew, right?\n...\nIf it's something to apologize for\nthen don't say it in the first\nplace...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm～, that nickname was a\nfailure...)");
                Parameter_InCh1Param(6, 59, var6);
                Parameter_InCh1Param(6, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_Chara_GS2(6, "M6_02F", 0);
                    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                    Voice_PlayVoice("F0106000_F00000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nUmm, were you perhaps talking to me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, umm... Did you dislike it?");
                    Voice_PlayVoice("F0106000_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Umm... as expected, I don't like it.\nI'm sorry.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(6, 59, var6);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_Chara_GS2(6, "M6_02F", 0);
                    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                    Voice_PlayVoice("F0106000_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", ".... Wait.\nWhat was with that way of calling\nme?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, umm... Did you dislike it?");
                    Voice_PlayVoice("F0106000_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I hate it. It's lame.\nIt's tasteless.\nIt's out of the question.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(6, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                Character_Chara_GS2(6, "M6_02F", 0);
                Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                Voice_PlayVoice("F0106000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh, umm...");
                Voice_PlayVoice("F0106000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Is it that fun teasing me?");
                Voice_PlayVoice("F0106000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Excuse me.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                Parameter_InCh1Param(6, 59, var6);
                Parameter_InCh1Param(6, 548, 53);
                }
            else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                Character_Chara_GS2(6, "M6_02F", 0);
                Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                Voice_PlayVoice("F0106000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "......... Stop it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Uhh, umm...");
                Voice_PlayVoice("F0106000_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Does it mean you enjoy doing things\nthat I hate in order to see my\nreaction?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1), 1);
                Voice_PlayVoice("F0106000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Excuse me.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that.)");
                Parameter_InCh1Param(6, 59, var6);
                Parameter_InCh1Param(6, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(6, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
                    Character_Chara_GS2(6, "M6_02F", 0);
                    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                    Voice_PlayVoice("F0106000_F01400", 6, "F0106000_F01401");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ah, ｛主人公｝.\nWhat is it, do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nHey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
                        Character_Chara_GS2(6, "M6_02F", 0);
                        Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                        Voice_PlayVoice("", 6, "F0106000_F01200");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "｛主人公｝.\nWhat is the matter?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "If it's alright with you, would you\nlike to walk home together?");
                        }
                    else if (Parameter_GetCh1Param(6, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
                        Character_Chara_GS2(6, "M6_02F", 0);
                        Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                        Voice_PlayVoice("", 6, "F0106000_F01300");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "｛主人公｝. What's up?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I'm going home now.\nIf it's alright with you, would you\nlike to walk home together?");
                        }
                    }
                else if ((Parameter_GetCh1Param(6, 130) <= 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
                    Character_Chara_GS2(6, "M6_02F", 0);
                    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                    Voice_PlayVoice("F0106000_F01500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Wah, Senpai!? Do you need...\nsomething?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(6, 130) >= 4){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F01800", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Yes, of course! Let's go!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_Chara_GS2(6, "M6_01F", 0);
                            Character_BlinkStart(6, 0, (#1), 1);
                            Voice_PlayVoice("F0106000_F01600", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Okay, I do not mind.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) == 3){
                            Character_Chara_GS2(6, "M6_01F", 0);
                            Character_BlinkStart(6, 0, (#1), 1);
                            Voice_PlayVoice("F0106000_F01700", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Yeah, okay.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F01900", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Eh? Ah... Yeah. Okay. It's fine.\nI don't... mind.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F02000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Eh? Ah... Yeah. Okay. It's fine.\nI don't mind, but...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    Parameter_AddCh1Param(6, 60, 2);
                    Parameter_AddCh1Param(6, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M6", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(6, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0106000_F02500", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Sorry, I can't today.\nI have something to do.\nAh, but if I contact them now...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, no, it's fine.\nDon't worry about it.");
                        Voice_PlayVoice("F0106000_F02600", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Okay.... Sorry.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(0, 0, 9);
                            Character_BlinkStart(6, 2, (#1), 1);
                            Voice_PlayVoice("F0106000_F02100", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I'm sorry, today I can't really...");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0106000_F02200", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I'm sorry. Now excuse me.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(6, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(6, 130) == 3){
                            Character_ChFace(0, 0, 9);
                            Character_BlinkStart(6, 2, (#1), 1);
                            Voice_PlayVoice("F0106000_F02300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Ah, sorry.\nI have something to do today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0106000_F02400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Yeah. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(6, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_ChFace(0, 0, 9);
                        Character_BlinkStart(6, 2, (#1), 1);
                        Voice_PlayVoice("F0106000_F02700", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Ah, I'm sorry!\nI don't mean that I dislike you, but\nI have something...");
                        Voice_PlayVoice("F0106000_F02800", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... To do today.\nUhh, I am sorry to turn you down,\neven though you asked me.");
                        Voice_PlayVoice("F0106000_F02900", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I am really sorry.\nIt doesn't mean that I dislike you!\n... Excuse me.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_ChFace(0, 0, 9);
                        Character_BlinkStart(6, 2, (#1), 1);
                        Voice_PlayVoice("F0106000_F03000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I don't mean that I dislike you, but\nI have something to do...");
                        Voice_PlayVoice("F0106000_F03200", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I'm telling the truth!\nIt doesn't mean I dislike you, okay?\n... Okay!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 6){
                        if (var10 == 1){
                            switch (var9){
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
                                case 7:
                                System_Call_GS2("F99", "M7", 0);
                                break ;
                                }
                            }
                        }
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
                Character_Chara_GS2(6, "M6_02F", 0);
                Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(6, 130) >= 4){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F03500", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Of course it's okay!\nI was just thinking that I wanted to\nhave tea!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh! Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_Chara_GS2(6, "M6_01F", 0);
                            Character_BlinkStart(6, 0, (#1), 1);
                            Voice_PlayVoice("F0106000_F03300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Okay, I do not mind.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh! Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) == 3){
                            Character_Chara_GS2(6, "M6_01F", 0);
                            Character_BlinkStart(6, 0, (#1), 1);
                            Voice_PlayVoice("F0106000_F03400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Okay, it's fine! Let's go!");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh! Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F03600", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Eh? Ah... yeah. Okay. Tea is fine.\nI don't... mind.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh! Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_Chara_GS2(6, "M6_01F", 0);
                        Character_BlinkStart(6, 0, (#1), 1);
                        Voice_PlayVoice("F0106000_F03700", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Eh? Ah... yeah. Okay. Tea is fine.\nI don't mind, but...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh! Now then, let's go.");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    Parameter_AddCh1Param(6, 60, 4);
                    Parameter_AddCh1Param(6, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M6", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(6, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0106000_F04200", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Sorry, I can't today.\nI have something to do.\nAh, but if I contact them now...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, no, it's fine.\nDon't worry about it.");
                        Voice_PlayVoice("F0106000_F04300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Okay.... Sorry.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0106000_F03800", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I'm sorry, today I can't really...");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0106000_F03900", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I'm sorry. Now excuse me.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(6, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(6, 130) == 3){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0106000_F04000", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Ah, sorry.\nI have something to do today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0106000_F04100", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Yeah. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(6, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0106000_F04400", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Ah, I'm sorry!\nI don't mean that I dislike you, but\nI have something...");
                        Voice_PlayVoice("F0106000_F04500", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... To do today.\nUhh, I am sorry to turn you down,\neven though you asked me.");
                        Voice_PlayVoice("F0106000_F04600", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I am really sorry.\nIt doesn't mean that I dislike you!\n... Excuse me.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0106000_F04700", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Ah... I will pass!\nI don't mean that I dislike you, but\nI have something to do today...");
                        Voice_PlayVoice("F0106000_F04900", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I'm telling the truth!\nIt doesn't mean I dislike you, okay?\n... Okay!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(6, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(6, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 6){
                        switch (var9){
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
                            case 7:
                            System_Call_GS2("F99", "M7", 0);
                            break ;
                            }
                        }
                    }
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
        System_Call_GS2("F01", "M6", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(6, "M6_02F", 0);
        Voice_PlayVoice("F0106000_F06800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(6, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Amachi＊＊｝ looked like\nhe was a bit angry...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(6, 86, 1);
        }
    else {
        }
    }
