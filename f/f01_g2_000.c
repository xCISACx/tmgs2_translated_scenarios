section "f01_g2_000"{
    Character_BlinkStart(11, 1, (#1), 1);
    Character_BlinkStart(11, 1, (#1), 2);
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
    if ((Parameter_GetCh1Param(11, 130) >= 3) && (System_Randam(0, 99) >= 75)){
        var4 = 1;
        }
    else if ((Parameter_GetCh1Param(11, 513) == 1) && (System_Randam(0, 99) >= 50)){
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
        var5 = Parameter_GetCh1Param(11, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Onoda＊＊｝.)");
        if (1){
            Message_Name_Sele(11);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(11, 59, var0);
            }
        var6 = Parameter_GetCh1Param(11, 59);
        if (Parameter_CanCallFriendly(11, var6) == 0){
            Parameter_AddCh1Param(11, 60, #2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_Chara_GS2(11, "G2_02F", 0);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("F0111000_K00000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Eh? ... Umm, do you mean me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I do.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0111000_K00100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "I'm sorry.\nWill you please not call me that?");
                Parameter_InCh1Param(11, 59, var5);
                }
            else {
                Character_Chara_GS2(11, "G2_02F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("F0111000_K00200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... Umm. What you just said.\nYou meant me, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I did.");
                Character_BlinkStart(11, 2, (#1), 1);
                Voice_PlayVoice("F0111000_K00300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Please don't call me that.\nIt's unpleasant.");
                Music_StopBGM(0, 40);
                Parameter_InCh1Param(11, 59, var5);
                }
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm.\nThey don't like being called that.)");
            Parameter_InCh1Param(11, 59, var5);
            }
        else {
            if (Parameter_GetCh1Param(11, 513) != 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
                    Character_Chara_GS2(11, "G2_02F", 0);
                    Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                    Voice_PlayVoice("", #1, "F0111000_K00400");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "｛主人公｝, are you going\nhome now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nHey, do you want to walk home\ntogether?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(11, "G2_01F", 0);
                        Character_ChFace(0, 0, 10);
                        Character_BlinkStart(11, 0, (#1), 1);
                        Voice_PlayVoice("F0111000_K00600", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "Hmm, right.\nLet's walk home together.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, let's go!");
                        Parameter_AddCh1Param(11, 60, 2);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F02", "G2", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0111000_K00900", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "I am sorry.\nI have a question to ask my teacher,\nso...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Studying?");
                        Character_ChFace(0, 2, 1);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0111000_K01000", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "Yes.\nI don't plan to go home until I can\nunderstand.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(11, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
                    Character_Chara_GS2(11, "G2_02F", 0);
                    Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                    Voice_PlayVoice("", #1, "F0111000_K00400");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "｛主人公｝, are you going\nhome now?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(11, "G2_01F", 0);
                        Character_ChFace(0, 0, 8);
                        Character_BlinkStart(11, 0, (#1), 1);
                        Voice_PlayVoice("F0111000_K01300", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "But not going directly home is a\nviolation of the school rules.\nIt's not allowed.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I-Is that so? That's too bad.");
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("F0111000_K01400", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "Gee...\nOnly for a little while, okay?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay. Let's go!");
                        Parameter_AddCh1Param(11, 60, 4);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F03", "G2", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0111000_K01500", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "I can't today.\nI have somewhere else to go on the\nway home.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see. That's too bad.");
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(11, 2, (#1), 1);
                        Voice_PlayVoice("F0111000_K01600", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "Ah, furthermore, not going directly\nhome is a violation of the school\nrules!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I-Is that so?\nI'll see you later then!");
                        Music_StopBGM(0, 40);
                        }
                    break ;
                    case 2:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                    var7 = 1;
                    break ;
                    }
                }
            else if (Parameter_GetCh1Param(11, 513) == 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
                    Character_Chara_GS2(11, "G2_02F", 0);
                    Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                    Voice_PlayVoice("", #1, "F0111000_K00500");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "｛主人公｝....\nIs there something that you need?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yes.\nHey, do you want to walk home\ntogether?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(11, "G2_01F", 0);
                        Character_Chara_GS2(11, "NON");
                        Character_BlinkStart(11, 0, (#1), 1);
                        Voice_PlayVoice("F0111000_K00700", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "You are my rival.\nI can't get along well with you!\nThat's why I will not walk home with\nyou!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see.\nThen I guess it can't be helped.");
                        Character_ChFace(0, 0, 8);
                        Character_BlinkStart(11, 2, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0111000_K00800", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "B-But...\nwe might just happen to be walk in\nthe same direction, and at the same\nspeed.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Right! ...\nThen let's just happen to walk in\nthe same direction at the same\nspeed.");
                        Parameter_AddCh1Param(11, 60, 2);
                        Music_StopBGM(0, 40);
                        }
                    else {
                        Character_ChFace(0, 2, 1);
                        Character_BlinkStart(11, 3, (#1), 1);
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("F0111000_K01100", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "I am busy.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so...");
                        Character_ChFace(0, 0, 11);
                        Character_BlinkStart(11, 2, (#1), 1);
                        Character_ChFace(0, 4, 1);
                        Voice_PlayVoice("F0111000_K01200", #1, "");
                        Message_Who(11);
                        Message_MsgDisp("Onoda", "I-I really am! I am busy! Excuse me!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(11, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Onoda＊＊｝.");
                    Character_Chara_GS2(11, "G2_02F", 0);
                    Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                    Voice_PlayVoice("", #1, "F0111000_K00500");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "｛主人公｝....\nIs there something that you need?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("F0111000_K01700", #1, "");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "I'm sorry, but I am busy today....\nExcuse me.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(11, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                    Character_Chara_GS2(11, "G2_02F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("F0111000_K01800", #1, "");
                    Message_Who(11);
                    Message_MsgDisp("Onoda", "That is a violation of the school\nrules as well.");
                    Character_Chara_GS2(11, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Is that so...)");
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
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_Chara_GS2(11, "G2_01F", 0);
            Character_ChFace(0, 0, 10);
            Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
            Voice_PlayVoice("", #1, "F0111000_K01900");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝, if it is\nalright with you, would you like to\nwalk home together?");
            Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Character_BlinkStart(11, 2, (#1), 1);
                Voice_PlayVoice("F0111000_K02200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Thank goodness. Now then, let's go.");
                Parameter_AddCh1Param(11, 60, 2);
                Music_StopBGM(0, 40);
                System_Call_GS2("F02", "G2", 0);
                break ;
                case 1:
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(11, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0111000_K02400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Hmm～...\nIt's a violation of the school\nrules.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, is that so.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0111000_K02500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It's fine.\nI will accompany you today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Alright. It's decided then.\nLet's go!");
                Parameter_AddCh1Param(11, 60, 4);
                Music_StopBGM(0, 40);
                System_Call_GS2("F03", "G2", 0);
                break ;
                case 2:
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0111000_K02600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Is that so. Then it can't be helped.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sorry!");
                Parameter_AddCh1Param(11, 60, #2);
                Music_StopBGM(0, 40);
                break ;
                }
            }
        else {
            Voice_PlayVoice("", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... ｛主人公｝.");
            Character_Chara_GS2(11, "G2_02F", 0);
            Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝...");
            Voice_PlayVoice("F0111000_K02100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "It doesn't mean I was waiting for\nyou, but I...\nI just happen to be going home now.");
            Message_MsgSel("Yeah, let's walk home together.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(11, 2, (#1), 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("F0111000_K02300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... Let's go.");
                Parameter_AddCh1Param(11, 60, 2);
                Music_StopBGM(0, 40);
                break ;
                case 1:
                Voice_PlayVoice("F0111000_K02700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "There is no need to apologize.\nAll I said was that I am going home\nnow....\nNow then.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(11, "NON");
                Parameter_AddCh1Param(11, 60, #2);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var7 == 0){
        Parameter_AddCh1Param(11, 86, 1);
        }
    else {
        }
    }
