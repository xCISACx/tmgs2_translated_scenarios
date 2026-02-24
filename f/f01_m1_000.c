section "f01_m1_000"{
    Character_BlinkStart(1, 1, (#1), 1);
    Character_BlinkStart(1, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(1, 308);
    if (Parameter_GetCh1Param(1, 512) == 0){
        if ((Parameter_GetCh1Param(1, 130) >= 3 && System_Randam(0, 99) >= 75)){
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
    Character_ChFace(0, 0, 0);
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
        var6 = Parameter_GetCh1Param(1, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Saeki＊＊｝.)");
        if (1){
            Message_Name_Sele(1);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(1, 59, var0);
            }
        var7 = Parameter_GetCh1Param(1, 59);
        if (Parameter_CanCallFriendly(1, var7) == 0){
            Parameter_AddCh1Param(1, 60, #2);
            Parameter_AddCh1Param(1, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Character_Chara_GS2(1, "M1_02F", 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                Voice_PlayVoice("F0101000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nDon't get too carried away, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Did you not like being called that?");
                Voice_PlayVoice("F0101000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't ever call me that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... No matter what?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0101000_A00700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "N... Not even if you make that face.\nSo don't!");
                Music_StopBGM(0, 40);
                SoundEffect_PlayStream(3, "SS_T_00_004_M00");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, he ran away.\nIt seems like he doesn't like what I\njust called him...)");
                Parameter_InCh1Param(1, 59, var6);
                Parameter_InCh1Param(1, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                if (Parameter_GetCh1Param(1, 130) <= 2){
                    Character_Chara_GS2(1, "M1_02F", 0);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("F0101000_A00000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "...\nLet me ask you something, just to be\nclear.\nYou weren't referring to me, were\nyou?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, um... Did you not like it?");
                    Voice_PlayVoice("F0101000_A00100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I don't like it.\nEven if I'm saying it out of\nmodesty, I don't like it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(1, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He left...\nIt seems like he doesn't like what I\njust called him...)");
                    Parameter_InCh1Param(1, 59, var6);
                    }
                else if (Parameter_GetCh1Param(1, 130) == 3){
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Character_Chara_GS2(1, "M1_02F", 0);
                    Voice_PlayVoice("F0101000_A00200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Hey, you...\nWhy are you calling me that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, um... Was it no good?");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(1, 3, (#1), 1);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("F0101000_A00300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "...\nThen maybe I should start calling\nyou \"Capybara\".");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... Capy...? T-That's a little...");
                    Character_BlinkStart(1, 0, (#1), 1);
                    Voice_PlayVoice("F0101000_A00400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "It's not good, right?\nDo you understand now? Later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(1, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm, it seems like I made him\nangry...)");
                    Parameter_InCh1Param(1, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                Character_Chara_GS2(1, "M1_02F", 0);
                Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                Voice_PlayVoice("F0101000_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, was that way of calling you no\ngood?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("F0101000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No.\nRather, what if people misunderstood\nmy habits?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Habits?");
                Voice_PlayVoice("F0101000_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I just happened to hit your lips...\nIt's not like I was aiming for them!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you mean that...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("F0101000_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Huh!?\nIt's not like it would be okay if it\nwas somewhere else!\nNo, you can't call me that!");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay...");
                Voice_PlayVoice("F0101000_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Later!");
                Music_StopBGM(0, 40);
                SoundEffect_PlayStream(3, "SS_T_00_004_M00");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He ran away.\nIt seems like he doesn't like being\ncalled that.\nI screwed up...)");
                Parameter_InCh1Param(1, 59, var6);
                Parameter_InCh1Param(1, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(1, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
                    Character_Chara_GS2(1, "M1_02F", 0);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("", 1, "F0101000_A01500");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "｛主人公｝.\nAre you going home now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nHey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                    if (Parameter_GetCh1Param(1, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
                        Character_Chara_GS2(1, "M1_02F", 0);
                        Character_ChFace(0, 3, 2);
                        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                        Voice_PlayVoice("F0101000_A01300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "... What?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                        }
                    else if (Parameter_GetCh1Param(1, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
                        Character_Chara_GS2(1, "M1_02F", 0);
                        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                        Voice_PlayVoice("", 1, "F0101000_A01400");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "｛主人公｝. Hey.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                        }
                    }
                else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
                    Character_Chara_GS2(1, "M1_02F", 0);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("F0101000_A01600", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... W...Why?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(1, 130) >= 4){
                        Character_Chara_GS2(1, "M1_01F", 0);
                        Character_BlinkStart(1, 2, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(1, 0, (#1), 1);
                        Voice_PlayVoice("F0101000_A02100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Yeah.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay.\nYou're being honest, today, aren't\nyou?");
                        Character_ChFace(0, 0, 8);
                        Voice_PlayVoice("F0101000_A02200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "I'm going home by myself, then.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, wait for me!");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                        if (Parameter_GetCh1Param(1, 130) <= 2){
                            Character_Chara_GS2(1, "M1_01F", 0);
                            Character_ChFace(0, 3, 2);
                            Character_BlinkStart(1, 0, (#1), 1);
                            Voice_PlayVoice("F0101000_A01700", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "Why?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Umm...\nWell there's no particular reason.");
                            Voice_PlayVoice("F0101000_A01800", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "... It's fine, though.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "That's great. Now then, let's go!");
                            }
                        else if (Parameter_GetCh1Param(1, 130) == 3){
                            Character_Chara_GS2(1, "M1_01F", 0);
                            Character_ChFace(0, 3, 3);
                            Character_BlinkStart(1, 0, (#1), 1);
                            Voice_PlayVoice("F0101000_A01900", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I'm in a hurry.\nYou know that, right?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see.\nThen I guess it can't be helped...");
                            Voice_PlayVoice("F0101000_A02000", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "Let's go. Hurry.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(What a perverse person...)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                        Character_Chara_GS2(1, "M1_01F", 0);
                        Character_ChFace(0, 3, 0);
                        Character_BlinkStart(1, 0, (#1), 1);
                        Voice_PlayVoice("F0101000_A02300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "...\nI don't mind, but don't get too\nclose to me.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Voice_PlayVoice("F0101000_A02400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Ah, it's nothing...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay? Let's go!");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    Parameter_AddCh1Param(1, 60, 2);
                    Parameter_AddCh1Param(1, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M1", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(1, 130) >= 4){
                        Character_ChFace(0, 0, 8);
                        Character_BlinkStart(1, 3, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A02900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Sorry, I have to hurry because I\nneed to buy things for Sangosho.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see...");
                        Character_BlinkStart(1, 0, (#1), 1);
                        Voice_PlayVoice("F0101000_A03000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "E-Even if you make that face, I just\ncan't!\nLater.");
                        Music_StopBGM(0, 40);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay, later.");
                        Character_Chara_GS2(1, "M1_02F", 0);
                        Character_BlinkStart(1, 3, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A03100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", ".........");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "...?");
                        Voice_PlayVoice("F0101000_A03200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "You go home alone as well, okay?");
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Perhaps ｛Saeki＊＊｝ gets\njealous easily...\nI'll go home alone.)");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                        if (Parameter_GetCh1Param(1, 130) <= 2){
                            Character_ChFace(0, 0, 9);
                            Voice_PlayVoice("F0101000_A02500", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "Why?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Well, there's no particular\nreason...");
                            Voice_PlayVoice("F0101000_A02600", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I don't want to if there's no\nreason.\nLater.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(1, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(1, 130) == 3){
                            Character_ChFace(0, 0, 9);
                            Voice_PlayVoice("F0101000_A02700", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "...\nYou're planning something, aren't\nyou?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I'm not.\nYou're twisting what I say...");
                            Voice_PlayVoice("F0101000_A02800", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "My bad. I'm in a hurry. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(1, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(It seems like he's in a\nparticularly foul mood today...\nWhatever, I'll just go home by\nmyself!)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                        Character_ChFace(0, 0, 3);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A03300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Yes... But I can't, after all.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? Why?");
                        Voice_PlayVoice("F0101000_A03400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "......\nI don't know about you, but I'm\nworried.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "\"Worried\"? Do you perhaps mean...?");
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(1, 3, (#1), 1);
                        Voice_PlayVoice("F0101000_A03500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "We're probably thinking the same\nthing.\nLater.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(I had completely forgotten...\nIt can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 1){
                        if (var10 == 1){
                            switch (var9){
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
                Message_MsgDisp("主人公", "｛Saeki＊＊｝.");
                Character_Chara_GS2(1, "M1_02F", 0);
                Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(1, 130) >= 4){
                        Character_Chara_GS2(1, "M1_01F", 0);
                        Character_BlinkStart(1, 0, (#1), 1);
                        Voice_PlayVoice("F0101000_A03900", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Great!\nI was just going to--");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Hm?");
                        Character_ChFace(0, 0, 8);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A04000", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Just going to... do that.\nObserve enemy movements...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You're so passionate about work,\n｛Saeki＊＊｝.\nIf I'm in the way, we'll just go\nnext time...");
                        Voice_PlayVoice("F0101000_A04100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "As if you're in the way!...\nNo, I mean, it'd be better if we act\nlike a couple in high school.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "O-Okay.\nThen maybe we should hold hands...");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0101000_A04200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Right? Now then, let's go.");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                        if (Parameter_GetCh1Param(1, 130) <= 2){
                            Character_Chara_GS2(1, "M1_01F", 0);
                            Character_BlinkStart(1, 0, (#1), 1);
                            Voice_PlayVoice("F0101000_A03600", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I don't mind...\nOnly for a brief moment.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Okay, I understand.\nNow then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(1, 130) == 3){
                            Character_Chara_GS2(1, "M1_01F", 0);
                            Character_BlinkStart(1, 0, (#1), 1);
                            Voice_PlayVoice("F0101000_A03700", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I thought so too.\nThere is a store I want to go to.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Really? Let's go there then!");
                            Voice_PlayVoice("F0101000_A03800", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "They're our business rival, and it\nseems like they've got a new menu.\nI want to do a little research.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "...... Ah, whatever!");
                            }
                        }
                    else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                        Character_Chara_GS2(1, "M1_01F", 0);
                        Character_BlinkStart(1, 0, (#1), 1);
                        Voice_PlayVoice("F0101000_A04300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "... I don't mind...\nBut don't get too close.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Voice_PlayVoice("F0101000_A04400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "If you get close to me then...\nI'd be troubled, in many ways.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh, why?");
                        Character_ChFace(0, 0, 8);
                        Character_BlinkStart(1, 3, (#1), 1);
                        Voice_PlayVoice("F0101000_A04500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "\"Why\"? Earlier we...\nAnyway, it's troubling! Later!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    Parameter_AddCh1Param(1, 60, 4);
                    Parameter_AddCh1Param(1, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M1", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(1, 130) >= 4){
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0101000_A05100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Sorry.\nI've got to hurry home and open\nSangosho.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see.");
                        Character_ChFace(0, 0, 3);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A05200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Anyway, you should drink tea at\nSangosho.\nI'm going now.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(1, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
                        if (Parameter_GetCh1Param(1, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0101000_A04600", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I won't.\nAnyway, if you want tea, then come\nto Sangosho.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "W-Well, that's true.");
                            Voice_PlayVoice("F0101000_A04700", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "I'll wait for you to come by. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(1, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(1, 130) == 3){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0101000_A04800", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "It's impossible.\nI had a late start at school, so now\nI have to buy things and hurry back\nto open Sangosho.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Okay, I see.");
                            Character_ChFace(0, 0, 11);
                            Character_BlinkStart(1, 2, (#1), 1);
                            Voice_PlayVoice("F0101000_A04900", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "Ah, if you're free, will you go buy\nthe stuff for me?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Eh!?\nUmm～, maybe I should just go home\ntoday!");
                            Character_ChFace(0, 0, 3);
                            Character_BlinkStart(1, 2, (#1), 1);
                            Voice_PlayVoice("F0101000_A05000", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "How cheeky... Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(1, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(Who is...? It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
                        Character_ChFace(0, 0, 3);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0101000_A05300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Yeah... But I can't, after all.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? Why not?");
                        Voice_PlayVoice("F0101000_A05400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "...\nI don't know about you, but I'm\nworried.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "\"Worried\"? Do you mean...?");
                        Voice_PlayVoice("F0101000_A05500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "We're probably thinking the same\nthing.\nLater.");
                        Music_StopBGM(0, 40);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(I had completely forgotten...\nIt can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(1, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 1){
                        if (var10 == 1){
                            switch (var9){
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
                                case 7:
                                System_Call_GS2("F99", "M7", 0);
                                break ;
                                }
                            }
                        }
                    }
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                var8 = 1;
                break ;
                }
            }
        }
    else if (var5 == 1){
        System_Call_GS2("F01", "M1", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.");
        Character_Chara_GS2(1, "M1_02F", 0);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(1, 2, (#1), 1);
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looked\nsomewhat angry...\nHe always does, but he looks\nparticularly angry today.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(1, 86, 1);
        }
    else {
        }
    }
