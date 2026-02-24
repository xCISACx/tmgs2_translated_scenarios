section "f01_m4_000"{
    Character_BlinkStart(4, 1, (#1), 1);
    Character_BlinkStart(4, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(4, 308);
    if (Parameter_GetCh1Param(4, 512) == 0){
        if ((Parameter_GetCh1Param(4, 130) >= 3 && System_Randam(0, 99) >= 75)){
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
        var6 = Parameter_GetCh1Param(4, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Hariya＊＊｝.)");
        if (1){
            Message_Name_Sele(4);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(4, 59, var0);
            }
        var7 = Parameter_GetCh1Param(4, 59);
        if (Parameter_CanCallFriendly(4, var7) == 0){
            Parameter_AddCh1Param(4, 60, #2);
            Parameter_AddCh1Param(4, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Character_Chara_GS2(4, "M4_02F", 0);
                Character_ChFace(0, 3, 0);
                Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                Voice_PlayVoice("F0104000_D00400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey... What did you say just then?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, sorry. Did you not like it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0104000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Rather than not liking it...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 0, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("F0104000_D00600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "......\nAs expected, that name isn't good.\nSorry, but call me something else.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm～... That nickname failed.)");
                Parameter_InCh1Param(4, 59, var6);
                Parameter_InCh1Param(4, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Character_Chara_GS2(4, "M4_02F", 0);
                    Character_BlinkStart(4, 2, (#1), 1);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Character_ChFace(0, 3, 4);
                    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                    Voice_PlayVoice("F0104000_D00000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... What did you say?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, sorry. Did you not like it?");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(4, 2, (#1), 1);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("F0104000_D00100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I don't! Later.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, sorry.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(4, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah...\nIt seems like I made him mad.)");
                    Parameter_InCh1Param(4, 59, var6);
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Character_Chara_GS2(4, "M4_02F", 0);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Character_ChFace(0, 3, 4);
                    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                    Voice_PlayVoice("F0104000_D00200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... What did you call me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, sorry. Did you not like it?");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("F0104000_D00300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You've got bad tastes!\nUse your head a little more.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(4, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nIt seems like that nickname was\nawful.)");
                    Parameter_InCh1Param(4, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                Character_Chara_GS2(4, "M4_02F", 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_BlinkStart(4, 0, (#1), 1);
                Character_ChFace(0, 3, 4);
                Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                Voice_PlayVoice("F0104000_D00700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_BlinkStart(4, 0, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0104000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I haven't responded....\nDon't call me weird names.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, sorry. Did you not like it?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0104000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nWell, even if I said calling me that\nis embarrassing, I still haven't\nthought of a different name...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0104000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... But I'll have to refuse!\nThink of something else to call me!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I messed up...\nBut what did he mean by \"it was\nembarrassing\"?)");
                Parameter_InCh1Param(4, 59, var6);
                Parameter_InCh1Param(4, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(4, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
                    Character_Chara_GS2(4, "M4_02F", 0);
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(4, 2, (#1), 1);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                    Voice_PlayVoice("F0104000_D01300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... Yo. What are you doing here?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                    if (Parameter_GetCh1Param(4, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
                        Character_Chara_GS2(4, "M4_02F", 0);
                        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                        Voice_PlayVoice("F0104000_D01100", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Do you need something?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Hey, do you want to walk home\ntogether?");
                        }
                    else if (Parameter_GetCh1Param(4, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
                        Character_Chara_GS2(4, "M4_02F", 0);
                        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                        Voice_PlayVoice("F0104000_D01200", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Yo. Are you also going home?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.\nDo you want to walk home together?");
                        }
                    }
                else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
                    Character_Chara_GS2(4, "M4_02F", 0);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                    Voice_PlayVoice("F0104000_D01400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Yo.");
                    Character_ChFace(0, 0, 6);
                    Character_BlinkStart(4, 2, (#1), 1);
                    Character_BlinkStart(4, 0, (#1), 1);
                    Voice_PlayVoice("F0104000_D01500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "... What is it?\nAre you aiming for another chance?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Chance...?\nI don't know what you're talking\nabout.\nI was just wondering if you wanted\nto walk home together.");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(4, 130) >= 4){
                        Character_Chara_GS2(4, "M4_01F", 0);
                        Character_ChFace(0, 2, 5);
                        Character_ChFace(0, 3, 4);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(4, 0, (#1), 1);
                        Voice_PlayVoice("F0104000_D01800", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "I wanted to ask you....\nDon't say it before me.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "S-Sorry.");
                        Character_ChFace(0, 2, 1);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 0);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0104000_D01900", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "I didn't tell you to apologize, did\nI!?");
                        Character_ChFace(0, 2, 5);
                        Character_BlinkStart(4, 2, (#1), 1);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0104000_D02000", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "... Ah... A-Anyway! Let's go home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay.");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                        if (Parameter_GetCh1Param(4, 130) <= 2){
                            Character_Chara_GS2(4, "M4_01F", 0);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Voice_PlayVoice("F0104000_D01600", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Alright, I don't mind.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(4, 130) == 3){
                            Character_Chara_GS2(4, "M4_01F", 0);
                            Character_BlinkStart(4, 2, (#1), 1);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Character_ChFace(0, 3, 3);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Voice_PlayVoice("F0104000_D01700", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "So you're asking me to accompany\nyou?\nAlright, let's go.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                        Character_Chara_GS2(4, "M4_01F", 0);
                        Character_BlinkStart(4, 2, (#1), 1);
                        Character_ChFace(0, 3, 5);
                        Character_BlinkStart(4, 0, (#1), 1);
                        Voice_PlayVoice("F0104000_D02100", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Alright.\nBut I'm not going to give you the\nopportunity today.");
                        Character_ChFace(0, 2, 0);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("F0104000_D02200", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "It's not something that anyone can\ndo so easily to me...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "\"It\"... Ah!\nAre you perhaps talking about the\nkiss...?");
                        Character_ChFace(0, 0, 8);
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0104000_D02300", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "You're talking too loudly! ...\nLet's go!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "O-Okay.");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    Parameter_AddCh1Param(4, 60, 2);
                    Parameter_AddCh1Param(4, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M4", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(4, 130) >= 4){
                        Character_ChFace(0, 0, 3);
                        Character_ChFace(0, 2, 2);
                        Voice_PlayVoice("F0104000_D02800", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "... Seriously?\nI have to go and practice at the\nstudio, so I can't take my time.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Really... That's too bad.");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D02900", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Sorry. Ah, crap. Later!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(4, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                        if (Parameter_GetCh1Param(4, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Character_BlinkStart(4, 3, (#1), 1);
                            Voice_PlayVoice("F0104000_D02400", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "... Pass. I'm in alone mode today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Alone mode?");
                            Character_ChFace(0, 2, 0);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Character_ChFace(0, 3, 2);
                            Voice_PlayVoice("F0104000_D02500", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Meaning I won't walk home with you\ntoday.\nLet's split. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(4, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(4, 130) == 3){
                            Character_ChFace(0, 0, 9);
                            Character_ChFace(0, 3, 5);
                            Voice_PlayVoice("F0104000_D02600", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Sorry. I've got stuff to do today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Really...\nThen I guess it can't be helped.");
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0104000_D02700", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Don't get discouraged! Later!");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(4, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D03000", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Sorry, I just can't forgive you for\ndoing that.");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D03100", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "So don't bother today. Later!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(4, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Does he mean...?\nA-Anyway, I'll go home by myself.)");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 4){
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
                Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
                Character_Chara_GS2(4, "M4_02F", 0);
                Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(4, 130) >= 4){
                        Character_Chara_GS2(4, "M4_01F", 0);
                        Character_ChFace(0, 3, 2);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(4, 0, (#1), 1);
                        Voice_PlayVoice("F0104000_D03500", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "...\nI'm going with you, so let's\naccompany each other for a while,\nokay?");
                        Character_ChFace(0, 2, 1);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 2);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0104000_D03600", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Going straight home after having tea\nisn't allowed!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, okay. Now then, let's go.");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                        if (Parameter_GetCh1Param(4, 130) <= 2){
                            Character_Chara_GS2(4, "M4_01F", 0);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Voice_PlayVoice("F0104000_D03200", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Alright, I don't mind.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(4, 130) == 3){
                            Character_Chara_GS2(4, "M4_01F", 0);
                            Character_ChFace(0, 0, 6);
                            Character_BlinkStart(4, 2, (#1), 1);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Character_ChFace(0, 4, 0);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Voice_PlayVoice("F0104000_D03300", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "...\nI wanted to drink an ice-cream soda\nsince I haven't had one in a\nwhile...");
                            Character_ChFace(0, 0, 9);
                            Character_BlinkStart(4, 2, (#1), 1);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Character_ChFace(0, 3, 1);
                            Character_ChFace(0, 4, 1);
                            Voice_PlayVoice("F0104000_D03400", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "... Ah!\nI-It's not like I'm not going to\naccompany you!\nWhat now? Are we going?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Yeah, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                        Character_Chara_GS2(4, "M4_01F", 0);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 3);
                        Character_BlinkStart(4, 0, (#1), 1);
                        Voice_PlayVoice("F0104000_D03700", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Isn't that great!\nYou can also brag about today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "??? Umm... A-Anyway, let's go.");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    Parameter_AddCh1Param(4, 60, 4);
                    Parameter_AddCh1Param(4, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M4", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(4, 130) >= 4){
                        Character_ChFace(0, 0, 9);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0104000_D04200", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "... Seriously?\nI have to go and practice at the\nstudio, so I can't take my time.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see... That's too bad.");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D04300", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Sorry. Ah, crap. Later!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(4, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
                        if (Parameter_GetCh1Param(4, 130) <= 2){
                            Character_ChFace(0, 0, 3);
                            Character_BlinkStart(4, 3, (#1), 1);
                            Voice_PlayVoice("F0104000_D03800", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "... Pass. I'm in alone mode today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Alone mode?");
                            Character_ChFace(0, 2, 0);
                            Character_BlinkStart(4, 0, (#1), 1);
                            Character_ChFace(0, 3, 2);
                            Voice_PlayVoice("F0104000_D03900", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Meaning I won't walk home with you\ntoday.\nLet's split. Later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(4, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(4, 130) == 3){
                            Character_ChFace(0, 0, 9);
                            Character_ChFace(0, 3, 5);
                            Voice_PlayVoice("F0104000_D04000", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Sorry. I've got stuff to do today.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Really...\nThen I guess it can't be helped.");
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0104000_D04100", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "Don't get discouraged! Later!");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(4, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(4, 3, (#1), 1);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D04400", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Sorry, I just can't forgive you for\ndoing that.");
                        Character_ChFace(0, 2, 0);
                        Character_ChFace(0, 3, 5);
                        Voice_PlayVoice("F0104000_D04500", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "So don't bother today. Later!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(4, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Does he mean...?\nA-Anyway, I'll go home by myself.)");
                        Parameter_InCh1Param(4, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 4){
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
        System_Call_GS2("F01", "M4", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
        Character_Chara_GS2(4, "M4_02F", 0);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_BlinkStart(4, 0, (#1), 1);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 2, 1);
        Voice_PlayVoice("F0104000_D06700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ looked like\nhe was a little angry...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(4, 86, 1);
        }
    else {
        }
    }
