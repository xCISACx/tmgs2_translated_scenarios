section "f01_g4_000"{
    Character_BlinkStart(13, 1, (#1), 1);
    Character_BlinkStart(13, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0 = 0;
    int var1 = System_Randam(0, 2);
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    if ((Parameter_GetCh1Param(13, 130) >= 3) && (System_Randam(0, 99) >= 75)){
        var4 = 1;
        }
    else if ((Parameter_GetCh1Param(13, 513) == 1) && (System_Randam(0, 99) >= 50)){
        var4 = 1;
        }
    else {
        var4 = 0;
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
    if (var4 == 0){
        Message_Name_Sele_Pre();
        var5 = Parameter_GetCh1Param(13, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Mizushima＊＊｝.)");
        if (1){
            Message_Name_Sele(13);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(13, 59, var0);
            }
        var6 = Parameter_GetCh1Param(13, 59);
        if (Parameter_CanCallFriendly(13, var6) == 0){
            Parameter_AddCh1Param(13, 60, #2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Mizushima＊＊｝.");
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_Chara_GS2(13, "G4_02F", 0);
                Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                Voice_PlayVoice("F0113000_M00000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Hey, are you... referring to me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("F0113000_M00100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Is there something else that you can\ncall me?\nI'm sorry, okay?");
                Parameter_InCh1Param(13, 59, var5);
                Music_StopBGM(0, 40);
                }
            else {
                Character_Chara_GS2(13, "G4_02F", 0);
                Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                Voice_PlayVoice("F0113000_M00200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... What do you mean by that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Um, well, there's no real meaning...");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 2, (#1), 1);
                Voice_PlayVoice("F0113000_M00300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I would like you to not call me\nthat...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm～, they don't like being called\nthat.)");
                Parameter_InCh1Param(13, 59, var5);
                }
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝.");
                    Character_Chara_GS2(13, "G4_02F", 0);
                    Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                    Voice_PlayVoice("", #1, "F0113000_M00400");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.\nAre you going home now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(13, "G4_01F", 0);
                        Character_ChFace(0, 3, 0);
                        Character_BlinkStart(13, 0, (#1), 1);
                        Voice_PlayVoice("F0113000_M00600", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "Of course. Shall we go now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah!");
                        Parameter_AddCh1Param(13, 60, 2);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F02", "G4", 0);
                        }
                    else {
                        Voice_PlayVoice("F0113000_M00800", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "An instructor is coming over, so I\nmust hurry home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see...");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0113000_M00900", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "I'm sorry.\nAsk me another time, okay?\nI will be leaving now.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(13, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝.");
                    Character_Chara_GS2(13, "G4_02F", 0);
                    Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                    Voice_PlayVoice("", #1, "F0113000_M00400");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "｛主人公｝.\nAre you going home now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(13, "G4_01F", 0);
                        Character_BlinkStart(13, 0, (#1), 1);
                        Voice_PlayVoice("F0113000_M01100", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "Just tea?\nHaha, I will if we can have cake as\nwell.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "It's decided, then!\nNow then, let's go!");
                        Parameter_AddCh1Param(13, 60, 4);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F03", "G4", 0);
                        }
                    else {
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0113000_M01200", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "Hmm～... I will pass.\nBecause I'll definitely end up\neating something.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Maybe...");
                        Character_ChFace(0, 2, 2);
                        Character_BlinkStart(13, 3, (#1), 1);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0113000_M01300", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "Why don't we have tea next time?\nIs that alright?");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(13, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 2:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                    var7 = 1;
                    break ;
                    }
                }
            else if (Parameter_GetCh1Param(13, 513) == 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝.");
                    Character_Chara_GS2(13, "G4_02F", 0);
                    Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                    Voice_PlayVoice("F0113000_M00500", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "... What is it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(13, "G4_01F", 0);
                        Character_Chara_GS2(13, "NON");
                        Character_BlinkStart(13, 0, (#1), 1);
                        Voice_PlayVoice("F0113000_M00700", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "Okay.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay. Shall we go then?");
                        Parameter_AddCh1Param(13, 60, 2);
                        Music_StopBGM(0, 40);
                        }
                    else {
                        Voice_PlayVoice("F0113000_M01000", #1, "");
                        Message_Who(13);
                        Message_MsgDisp("Mizushima", "... I cannot do that.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see... Okay.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(13, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Mizushima＊＊｝.");
                    Character_Chara_GS2(13, "G4_02F", 0);
                    Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(13, 3, (#1), 1);
                    Voice_PlayVoice("F0113000_M01400", #1, "");
                    Message_Who(13);
                    Message_MsgDisp("Mizushima", "I'm sorry. I can't.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Okay... I understand.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(13, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                    break ;
                    case 2:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                    var7 = 1;
                    break ;
                    }
                }
            }
        }
    else if (var4 == 1){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_Chara_GS2(13, "G4_01F", 0);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "F0113000_M01500");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, are you going\nhome now?\nHey, should we walk home together?");
            Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Voice_PlayVoice("F0113000_M01800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thank goodness. Let's go!");
                Parameter_AddCh1Param(13, 60, 2);
                Music_StopBGM(0, 40);
                System_Call_GS2("F02", "G4", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1), 1);
                Voice_PlayVoice("F0113000_M02000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Haha, I thought you would say that.\nShould we also eat cake?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course! Now then, let's go!");
                Parameter_AddCh1Param(13, 60, 4);
                Music_StopBGM(0, 40);
                System_Call_GS2("F03", "G4", 0);
                break ;
                case 2:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0113000_M02100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "How unfortunate... I was rejected.\nHaha. Next time, then?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sorry!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Parameter_AddCh1Param(13, 60, #2);
                break ;
                }
            }
        else {
            Voice_PlayVoice("F0113000_M01600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Are you going home now?");
            Character_Chara_GS2(13, "G4_02F", 0);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝...");
            Voice_PlayVoice("F0113000_M01700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I am also going home now...");
            Message_MsgSel("Yeah, let's walk home together.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Voice_PlayVoice("F0113000_M01900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...... Okay.");
                Parameter_AddCh1Param(13, 60, 2);
                Music_StopBGM(0, 40);
                break ;
                case 1:
                Voice_PlayVoice("F0113000_M02200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... I see.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Parameter_AddCh1Param(13, 60, #2);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var7 == 0){
        Parameter_AddCh1Param(13, 86, 1);
        }
    else {
        }
    }
