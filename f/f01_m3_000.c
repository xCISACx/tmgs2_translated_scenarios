section "f01_m3_000"{
    Character_BlinkStart(3, 1, (#1), 1);
    Character_BlinkStart(3, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(3, 308);
    if (Parameter_GetCh1Param(3, 512) == 0){
        if ((Parameter_GetCh1Param(3, 130) >= 4 && System_Randam(0, 99) >= 75)){
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
    Character_ChFace(0, 0, 0);
    if (var5 == 0){
        Message_Name_Sele_Pre();
        var6 = Parameter_GetCh1Param(3, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Hikami＊＊｝.)");
        if (1){
            Message_Name_Sele(3);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(3, 59, var0);
            }
        var7 = Parameter_GetCh1Param(3, 59);
        if (Parameter_CanCallFriendly(3, var7) == 0){
            Parameter_AddCh1Param(3, 60, #2);
            Parameter_AddCh1Param(3, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Character_Chara_GS2(3, "M3_02F", 0);
                Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                Voice_PlayVoice("F0103000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, did you not like that name?\nSorry...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0103000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is not something to apologize\nover.\nBut I would like for you to not call\nme that.");
                Voice_PlayVoice("F0103000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I wonder what is a good name to call\nme.\nHmm... Ah, this is no good.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, what is no good?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0103000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, even if you ask me about it, I\ncannot tell you.\nWhat you called me earlier was no\ngood!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, it seems like calling him that\nwas a mistake...)");
                Parameter_InCh1Param(3, 59, var6);
                Parameter_InCh1Param(3, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Character_Chara_GS2(3, "M3_02F", 0);
                    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                    Voice_PlayVoice("F0103000_C00000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "What is that?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, umm... Did you not like it?");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(3, 3, (#1), 1);
                    Voice_PlayVoice("F0103000_C00100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I do not.\nI also have the right to choose.\nThat is all. Excuse me.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It looks like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(3, 59, var6);
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Character_Chara_GS2(3, "M3_02F", 0);
                    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                    Voice_PlayVoice("F0103000_C00200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Are you talking to me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, well I was, but...\nDid you not like it?");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(3, 3, (#1), 1);
                    Voice_PlayVoice("F0103000_C00300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Yes, I immediately reject that name.\nCould you think of a better one?");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(3, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It looks like he didn't like being\ncalled that.)");
                    Parameter_InCh1Param(3, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                Character_Chara_GS2(3, "M3_02F", 0);
                Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                Voice_PlayVoice("F0103000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What is that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, umm... Did you not like it?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0103000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Well it is true that at that time,\nyou and I...\nRight, it is because of that\naccident...");
                Voice_PlayVoice("F0103000_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Perhaps we will not be able to\nbecome normal school friends because\nof that...");
                Character_BlinkStart(3, 0, (#1), 1);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0103000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "However, there is no way that I\nshould be able to have a straight\nface when being called that!\nExcuse me.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It looks like he didn't like being\ncalled that....\nHmm～, I screwed up.)");
                Parameter_InCh1Param(3, 59, var6);
                Parameter_InCh1Param(3, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(3, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
                    Character_Chara_GS2(3, "M3_02F", 0);
                    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                    Voice_PlayVoice("", 3, "F0103000_C01400");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "｛主人公｝.\nAre you going home by yourself?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've changed my plans!\nHey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                    if (Parameter_GetCh1Param(3, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
                        Character_Chara_GS2(3, "M3_02F", 0);
                        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                        Voice_PlayVoice("", 3, "F0103000_C01200");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "｛主人公｝.\nIt's the end of the school day.\nYou should hurry home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                        }
                    else if (Parameter_GetCh1Param(3, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
                        Character_Chara_GS2(3, "M3_02F", 0);
                        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                        Voice_PlayVoice("", 3, "F0103000_C01300");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "｛主人公｝.\nAre you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                        }
                    }
                else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
                    Character_Chara_GS2(3, "M3_02F", 0);
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(3, 2, (#1), 1);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                    Voice_PlayVoice("F0103000_C01500", 3, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "H-Hey, it's you,\n｛主人公｝...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "You're somewhat shaken.");
                    Voice_PlayVoice("F0103000_C01600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... *Ehem* That is not the case.\nIt was your imagination.\nI am very normal.");
                    Character_ChFace(0, 0, 3);
                    Character_BlinkStart(3, 3, (#1), 1);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("F0103000_C01700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Also, I am not worried about\nanything.\nYou and I are just friends....\nBy the way, did you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(3, 130) >= 4){
                        Character_Chara_GS2(3, "M3_01F", 0);
                        Character_ChFace(0, 2, 5);
                        Character_ChFace(0, 3, 3);
                        Character_BlinkStart(3, 0, (#1), 1);
                        Voice_PlayVoice("F0103000_C02000", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Hmm, I see.\nIt seems like you have remembered to\nbe completely at ease.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? About what?");
                        Voice_PlayVoice("F0103000_C02100", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Do you want to hang your things off\nmy bike?\nThere is no need to refuse.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Really? Yay, thank you!");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0103000_C02200", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Yes, the feeling of gratitude is\nimportant.\nI also have something to gain by\npushing my bike.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Haha! Now then, should we go?");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                        if (Parameter_GetCh1Param(3, 130) <= 2){
                            Character_Chara_GS2(3, "M3_01F", 0);
                            Character_ChFace(0, 2, 5);
                            Character_ChFace(0, 3, 3);
                            Character_BlinkStart(3, 0, (#1), 1);
                            Voice_PlayVoice("F0103000_C01800", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "I do not mind.\nI will just push my bike instead.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Okay. Now then, let's go!");
                            }
                        else if (Parameter_GetCh1Param(3, 130) == 3){
                            Character_Chara_GS2(3, "M3_01F", 0);
                            Character_ChFace(0, 2, 5);
                            Character_ChFace(0, 3, 3);
                            Character_BlinkStart(3, 0, (#1), 1);
                            Voice_PlayVoice("F0103000_C01900", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "We should put our bags in the\nbicycle's basket....\nWell, it is fine.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go!");
                            }
                        }
                    else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                        Character_Chara_GS2(3, "M3_01F", 0);
                        Character_ChFace(0, 2, 4);
                        Character_BlinkStart(3, 2, (#1), 1);
                        Character_ChFace(0, 3, 0);
                        Character_BlinkStart(3, 0, (#1), 1);
                        Voice_PlayVoice("F0103000_C02300", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Ehh!! You're quite the challenger.\nShould I accept your challenge...?");
                        Voice_PlayVoice("F0103000_C02400", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Right, we are friends...\nIt is not strange for us to walk\nhome together...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "That's right.\nNow then, should we go?");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    Parameter_AddCh1Param(3, 60, 2);
                    Parameter_AddCh1Param(3, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M3", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(3, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0103000_C02900", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "It is unfortunate, I have coaching\nschool today.\nIt is in opposite direction that you\ntake home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                        Voice_PlayVoice("F0103000_C03000", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Yeah, I'm sorry.\nWill you ask me again some other\ntime?");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(3, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                        if (Parameter_GetCh1Param(3, 130) <= 2){
                            Character_ChFace(0, 2, 5);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0103000_C02500", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "I want to since you asked, but I\nhave coaching school today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0103000_C02600", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "Yeah. You should go straight home.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(3, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(3, 130) == 3){
                            Character_ChFace(0, 2, 5);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0103000_C02700", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "I am sorry. I am busy today.\nI still cannot go home, yet.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0103000_C02800", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "Yes. Please be careful.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(3, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                        Character_ChFace(0, 0, 11);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0103000_C03100", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "When you say \"together\"...\ndo you mean just the two of us?\nThat is not good!");
                        Voice_PlayVoice("F0103000_C03200", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "No, please do not misunderstand.\nI do not mean that I am avoiding\nyou, but today...\nRight, I have something to do.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(3, 2, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0103000_C03300", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Yes, something very important to do.\nExcuse me!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(3, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 3){
                        if (var10 == 1){
                            switch (var9){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
                                break ;
                                case 2:
                                System_Call_GS2("F99", "M2", 0);
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
                Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
                Character_Chara_GS2(3, "M3_02F", 0);
                Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(3, 130) >= 4){
                        Character_Chara_GS2(3, "M3_01F", 0);
                        Character_BlinkStart(3, 0, (#1), 1);
                        Voice_PlayVoice("F0103000_C03600", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Yeah, let's go....\nI cannot say this loudly, but having\ntea on the way home from school\ntastes nice.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah! Now then, let's go.");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                        if (Parameter_GetCh1Param(3, 130) <= 2){
                            Character_Chara_GS2(3, "M3_01F", 0);
                            Character_ChFace(0, 3, 0);
                            Character_BlinkStart(3, 0, (#1), 1);
                            Voice_PlayVoice("F0103000_C03400", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "Isn't that a violation of the school\nrules?\n... But I am also thirsty.\nIt cannot be helped.\nLet us go drink something.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(3, 130) == 3){
                            Character_Chara_GS2(3, "M3_01F", 0);
                            Character_ChFace(0, 3, 0);
                            Character_BlinkStart(3, 0, (#1), 1);
                            Voice_PlayVoice("F0103000_C03500", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "... Right, I am thirsty.\nWe will be forgiven if we have a\nreason to not go straight home,\nright?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Yeah. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                        Character_Chara_GS2(3, "M3_01F", 0);
                        Character_ChFace(0, 3, 0);
                        Character_BlinkStart(3, 0, (#1), 1);
                        Voice_PlayVoice("F0103000_C03700", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "T-Tea!?\nDropping by other places on the way\nhome from school is prohibited by\nschool regulations.");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0103000_C03800", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "No, perhaps it is an unspoken act by\npeople in school......\nAlright, I will go.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    Parameter_AddCh1Param(3, 60, 4);
                    Parameter_AddCh1Param(3, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M3", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(3, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0103000_C04300", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "It is unfortunate, but I have some\nbusiness that I must take care of\ntoday.");
                        Voice_PlayVoice("F0103000_C04400", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "It does not seem like I can go home,\nyet.\n*Sigh*...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Really... that's too bad.\nSorry for stopping you.");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0103000_C04500", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Ah, I am sorry.\nWill you ask me again some other\ntime?");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(3, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
                        if (Parameter_GetCh1Param(3, 130) <= 2){
                            Character_ChFace(0, 2, 3);
                            Character_BlinkStart(3, 3, (#1), 1);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0103000_C03900", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "I cannot do that.\nDropping by places while on the way\nhome from school is prohibited by\nthe school regulations.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "R-Really...? Sorry for stopping you.");
                            Voice_PlayVoice("F0103000_C04000", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "You should go straight home, too.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(3, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(3, 130) == 3){
                            Character_ChFace(0, 2, 3);
                            Character_BlinkStart(3, 3, (#1), 1);
                            Character_ChFace(0, 3, 0);
                            Voice_PlayVoice("F0103000_C04100", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "I am sorry, I must return a book\nback to the library today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "R-Really... Sorry for stopping you.");
                            Voice_PlayVoice("F0103000_C04200", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "Yes. Please be careful.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(3, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
                        Character_ChFace(0, 2, 4);
                        Character_ChFace(0, 3, 1);
                        Voice_PlayVoice("F0103000_C04600", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "When you say \"together\"...\ndo you mean just the two of us?\nThat is not good!");
                        Voice_PlayVoice("F0103000_C04700", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Furthermore, stopping by a cafe on\nthe way home from school.\nThat is against school rules.\nIt is twice as bad.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Y-Yeah... Sorry for stopping you.");
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(3, 3, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0103000_C04800", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Now then, excuse me.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(3, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(3, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 3){
                        if (var10 == 1){
                            switch (var9){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
                                break ;
                                case 2:
                                System_Call_GS2("F99", "M2", 0);
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
                Message_MsgDisp("主人公", "(Ah, whatever...\nI'll go home by myself today.)");
                var8 = 1;
                break ;
                }
            }
        }
    else if (var5 == 1){
        System_Call_GS2("F01", "M3", 10);
        }
    else if (var5 == 2){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(3, "M3_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.");
        Voice_PlayVoice("F0103000_C06800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ looked\nsomewhat angry...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(3, 86, 1);
        }
    else {
        }
    }
