section "f01_m2_000"{
    Character_BlinkStart(2, 1, (#1), 1);
    Character_BlinkStart(2, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(2, 308);
    if (Parameter_GetCh1Param(2, 512) == 0){
        if ((Parameter_GetCh1Param(2, 130) >= 4 && System_Randam(0, 99) >= 75)){
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
        var6 = Parameter_GetCh1Param(2, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Shiba＊＊｝.)");
        if (1){
            Message_Name_Sele(2);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(2, 59, var0);
            }
        var7 = Parameter_GetCh1Param(2, 59);
        if (Parameter_CanCallFriendly(2, var7) == 0){
            Parameter_AddCh1Param(2, 60, #2);
            Parameter_AddCh1Param(2, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Character_Chara_GS2(2, "M2_02F", 0);
                Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                Voice_PlayVoice("F0102000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Are you talking to me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I am....\nDo you not like that name?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0102000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI wonder what's up with calling me\nthat name.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I did something bad...)");
                Parameter_InCh1Param(2, 59, var6);
                Parameter_InCh1Param(2, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_Chara_GS2(2, "M2_02F", 0);
                    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                    Voice_PlayVoice("F0102000_B00000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, I'm sorry.\nDid you not like what I called you\njust then?");
                    Character_BlinkStart(2, 3, (#1), 1);
                    Voice_PlayVoice("F0102000_B00100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nIt seems like I made him angry...)");
                    Parameter_InCh1Param(2, 59, var6);
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_Chara_GS2(2, "M2_02F", 0);
                    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                    Voice_PlayVoice("F0102000_B00200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... What did you say?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, I'm sorry. Did you not like it?");
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("F0102000_B00300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Do you think I liked it?");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(2, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm～, he doesn't like being called\nthat...)");
                    Parameter_InCh1Param(2, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                Character_Chara_GS2(2, "M2_02F", 0);
                Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                Voice_PlayVoice("F0102000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, I'm sorry. Did you not like it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0102000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I thought there was no way you'd\ncall me that, but I was checking,\njust in case.");
                Character_ChFace(0, 2, 2);
                Voice_PlayVoice("F0102000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Are you trying to annoy me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!?");
                Character_BlinkStart(2, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0102000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not like I wanted to do that.\nHurry up and forget about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"That\"...");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1), 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0102000_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hurdle.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("F0102000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nConsidering your reaction, it\ndoesn't seem like you said it to\nannoy me.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0102000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "That's fine.\nDon't call me that normally. Later.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, I screwed up...)");
                Parameter_InCh1Param(2, 59, var6);
                Parameter_InCh1Param(2, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(2, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                    Character_Chara_GS2(2, "M2_02F", 0);
                    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                    Voice_PlayVoice("", 2, "F0102000_B01500");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "｛主人公｝.\nYou're still here... It's late.\nWhat's wrong?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                    if (Parameter_GetCh1Param(2, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                        Character_Chara_GS2(2, "M2_02F", 0);
                        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                        Voice_PlayVoice("F0102000_B01300", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... What is it?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "If it's alright with you, would you\nlike to walk home together...?");
                        }
                    else if (Parameter_GetCh1Param(2, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                        Character_Chara_GS2(2, "M2_02F", 0);
                        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                        Voice_PlayVoice("F0102000_B01400", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Ah, it's you. Do you need something?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "No, but...\nIf it's alright with you, would you\nlike to walk home together...?");
                        }
                    }
                else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                    Character_Chara_GS2(2, "M2_02F", 0);
                    Character_BlinkStart(2, 2, (#1), 1);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                    Voice_PlayVoice("F0102000_B01600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nDo you have something you want to\nsay to me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?\nI was just wondering if you wanted\nto walk home together.");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(2, 130) >= 4){
                        Character_Chara_GS2(2, "M2_01F", 0);
                        Character_BlinkStart(2, 2, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(2, 0, (#1), 1);
                        Voice_PlayVoice("F0102000_B02000", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Well, it's not like I was waiting...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(2, 3, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0102000_B02100", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... It's nothing. Alright, let's go.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay.");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                        if (Parameter_GetCh1Param(2, 130) <= 2){
                            Character_Chara_GS2(2, "M2_01F", 0);
                            Character_BlinkStart(2, 2, (#1), 1);
                            Character_BlinkStart(2, 0, (#1), 1);
                            Voice_PlayVoice("F0102000_B01700", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... With me?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Yeah. Is it okay?");
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0102000_B01800", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Whatever is fine.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(2, 130) == 3){
                            Character_Chara_GS2(2, "M2_01F", 0);
                            Character_BlinkStart(2, 0, (#1), 1);
                            Voice_PlayVoice("F0102000_B01900", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "...\nIs it okay if I only walk you half\nway?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Sure. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                        Character_Chara_GS2(2, "M2_01F", 0);
                        Character_ChFace(0, 3, 0);
                        Character_BlinkStart(2, 0, (#1), 1);
                        Voice_PlayVoice("F0102000_B02200", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "It's fine, but...\nI'm not going to listen to any\ncomplaints about that time.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "That time?");
                        Character_BlinkStart(2, 3, (#1), 1);
                        Voice_PlayVoice("F0102000_B02300", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Maybe I'm thinking too much.\nIt's fine.\nJust continue to forget about it.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah!");
                        Character_ChFace(0, 2, 0);
                        Character_BlinkStart(2, 2, (#1), 1);
                        Character_ChFace(0, 3, 2);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0102000_B02400", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "...\nIt looks like I said something\nunnecessary.\nI brought this on myself...");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0102000_B02500", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Anyway, let's walk.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "O-Okay. Let's go.");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    Parameter_AddCh1Param(2, 60, 2);
                    Parameter_AddCh1Param(2, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M2", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(2, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0102000_B03000", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Sorry.\nI have training today, so...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so... That's too bad.");
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0102000_B03100", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Ask me again some other time.\nLater.\nBe careful on your way home, okay?");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(2, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                        if (Parameter_GetCh1Param(2, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Character_BlinkStart(2, 3, (#1), 1);
                            Voice_PlayVoice("F0102000_B02600", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... It's impossible.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...\nIt can't be helped, then.");
                            Character_BlinkStart(2, 0, (#1), 1);
                            Voice_PlayVoice("F0102000_B02700", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Yeah. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(2, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(2, 130) == 3){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0102000_B02800", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "I've got somewhere I want to stop by\ntoday.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...\nIt can't be helped then.");
                            Character_BlinkStart(2, 3, (#1), 1);
                            Voice_PlayVoice("F0102000_B02900", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(2, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                        Character_ChFace(0, 0, 11);
                        Voice_PlayVoice("F0102000_B03200", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Aren't you worried?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0102000_B03300", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I did say to forget it, but...\nBeing asked by you, with no\nreservation, has a complex feeling.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "...\nAre you perhaps talking about that\ntime?");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0102000_B03400", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "...\nI'm not \"perhaps\" talking about it,\nI am talking about it.");
                        Character_BlinkStart(2, 3, (#1), 1);
                        Voice_PlayVoice("F0102000_B03500", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I'm going home alone today. Later.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(2, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 2){
                        if (var10 == 1){
                            switch (var9){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
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
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                Character_Chara_GS2(2, "M2_02F", 0);
                Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(2, 130) >= 4){
                        Character_Chara_GS2(2, "M2_01F", 0);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(2, 0, (#1), 1);
                        Voice_PlayVoice("F0102000_B03800", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... I wanted to hear your voice.\nLet's go.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, let's go.");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                        if (Parameter_GetCh1Param(2, 130) <= 2){
                            Character_Chara_GS2(2, "M2_01F", 0);
                            Character_BlinkStart(2, 0, (#1), 1);
                            Voice_PlayVoice("F0102000_B03600", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Whatever is fine.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(2, 130) == 3){
                            Character_Chara_GS2(2, "M2_01F", 0);
                            Character_BlinkStart(2, 0, (#1), 1);
                            Voice_PlayVoice("F0102000_B03700", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Alright.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Yeah. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                        Character_Chara_GS2(2, "M2_01F", 0);
                        Character_BlinkStart(2, 0, (#1), 1);
                        Voice_PlayVoice("F0102000_B03900", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "It's fine, but...\nI'm not going to listen to any\ncomplaints about that time.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "That time?");
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(2, 3, (#1), 1);
                        Voice_PlayVoice("F0102000_B04000", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Maybe I'm thinking too much.\nIt's fine.\nJust continue to forget about it.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah!");
                        Character_ChFace(0, 0, 9);
                        Character_BlinkStart(2, 2, (#1), 1);
                        Voice_PlayVoice("F0102000_B04100", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "...\nIt looks like I said something\nunnecessary.\nI brought this on myself...");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0102000_B04200", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Anyway, let's walk.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "O-Okay. Let's go.");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    Parameter_AddCh1Param(2, 60, 4);
                    Parameter_AddCh1Param(2, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M2", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(2, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Character_BlinkStart(2, 2, (#1), 1);
                        Voice_PlayVoice("F0102000_B04700", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Sorry.\nI have training today so...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so... That's too bad.");
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0102000_B04800", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Ask me again some other time.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(2, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
                        if (Parameter_GetCh1Param(2, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0102000_B04300", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... It's impossible.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...\nIt can't be helped, then.");
                            Voice_PlayVoice("F0102000_B04400", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Yeah. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(2, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(2, 130) == 3){
                            Character_ChFace(0, 0, 3);
                            Voice_PlayVoice("F0102000_B04500", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "I've got somewhere I want to stop by\ntoday.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...\nIt can't be helped, then.");
                            Character_BlinkStart(2, 3, (#1), 1);
                            Voice_PlayVoice("F0102000_B04600", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(2, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(2, 2, (#1), 1);
                        Voice_PlayVoice("F0102000_B04900", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Aren't you worried?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh?");
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0102000_B05000", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I did say to forget it, but...\nBeing asked by you, with no\nreservation, has a complex feeling.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "...\nAre you perhaps talking about that\ntime?");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0102000_B05100", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "...\nI'm not \"perhaps\" talking about it,\nI am talking about it.");
                        Character_BlinkStart(2, 3, (#1), 1);
                        Voice_PlayVoice("F0102000_B05200", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I'm going straight home today.\nLater.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(2, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(2, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 2){
                        if (var10 == 1){
                            switch (var9){
                                case 1:
                                System_Call_GS2("F99", "M1", 0);
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
                Message_MsgDisp("主人公", "(Ah, whatever...\nI'll go home by myself today.)");
                var8 = 1;
                break ;
                }
            }
        }
    else if (var5 == 1){
        System_Call_GS2("F01", "M2", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(2, "M2_02F", 0);
        Voice_PlayVoice("F0102000_B07700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looked\nsomewhat angry...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(2, 86, 1);
        }
    else {
        }
    }
