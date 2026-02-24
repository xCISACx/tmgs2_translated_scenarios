section "f01_g1_000"{
    Character_BlinkStart(10, 1, (#1), 1);
    Character_BlinkStart(10, 1, (#1), 2);
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
    if ((Parameter_GetCh1Param(10, 130) >= 3) && (System_Randam(0, 99) >= 75)){
        var4 = 1;
        }
    else if ((Parameter_GetCh1Param(10, 513) == 1) && (System_Randam(0, 99) >= 50)){
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
        var5 = Parameter_GetCh1Param(10, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Toudou＊＊｝.)");
        if (1){
            Message_Name_Sele(10);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(10, 59, var0);
            }
        var6 = Parameter_GetCh1Param(10, 59);
        if (Parameter_CanCallFriendly(10, var6) == 0){
            Parameter_AddCh1Param(10, 60, #2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
            if (Parameter_GetCh1Param(10, 513) != 1){
                Character_Chara_GS2(10, "G1_02F", 0);
                Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                Voice_PlayVoice("", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "... ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("F0110000_J00100", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "That's... not my character.");
                Parameter_InCh1Param(10, 59, var5);
                Music_StopBGM(0, 40);
                }
            else {
                Character_Chara_GS2(10, "G1_02F", 0);
                Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                Voice_PlayVoice("F0110000_J00200", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "The way you said my name...\nAre you asking for a fight?");
                Message_Who(0);
                Message_MsgDisp("主人公", "A f-fight...!?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(10, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0110000_J00300", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "... Right. My bad.");
                Character_BlinkStart(10, 0, (#1), 1);
                Voice_PlayVoice("F0110000_J00400", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "...\nBut for your own sake, you shouldn't\ndo things that will make you\nmisunderstood.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(10, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah...\nIt seems like I made her angry.)");
                Parameter_InCh1Param(10, 59, var5);
                }
            }
        else {
            if (Parameter_GetCh1Param(10, 513) != 1){
                Message_MsgSel("Ask them to walk home with you.", "Ask them to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
                    Character_Chara_GS2(10, "G1_02F", 0);
                    Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                    Voice_PlayVoice("F0110000_J00500", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "What? Oh, it's you.\nYou're as noisy as ever.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(10, "G1_01F", 0);
                        Character_BlinkStart(10, 0, (#1), 1);
                        Voice_PlayVoice("F0110000_J00700", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Alright.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay! Let's go.");
                        Parameter_AddCh1Param(10, 60, 2);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F02", "G1", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(10, 3, (#1), 1);
                        Voice_PlayVoice("F0110000_J01000", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Sorry, I want to be alone today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, is that so.");
                        Character_ChFace(0, 0, 3);
                        Voice_PlayVoice("F0110000_J01100", #1, "F0110000_J01101");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Sorry, ｛主人公｝.\nI'll be leaving now.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(10, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
                    Character_Chara_GS2(10, "G1_02F", 0);
                    Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                    Voice_PlayVoice("F0110000_J00500", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "What? Oh, it's you.\nYou're as noisy as ever.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(10, "G1_01F", 0);
                        Character_ChFace(0, 0, 10);
                        Character_BlinkStart(10, 0, (#1), 1);
                        Voice_PlayVoice("F0110000_J01400", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Yeah, okay.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay. Let's go.");
                        Parameter_AddCh1Param(10, 60, 4);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F03", "G1", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 3);
                        Character_BlinkStart(10, 3, (#1), 1);
                        Voice_PlayVoice("F0110000_J01500", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Sorry, I want to be alone today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, that's alright then.");
                        Character_BlinkStart(10, 1, (#1), 1);
                        Voice_PlayVoice("F0110000_J01600", #1, "F0110000_J01601");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "Sorry, ｛主人公｝.\nI'll be leaving now.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(10, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 2:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                    var7 = 1;
                    Music_StopBGM(0, 40);
                    break ;
                    }
                }
            else if (Parameter_GetCh1Param(10, 513) == 1){
                Message_MsgSel("Ask them to walk home with you.", "Ask them to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
                    Character_Chara_GS2(10, "G1_02F", 0);
                    Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                    Voice_PlayVoice("F0110000_J00600", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "... Do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(10, "G1_01F", 0);
                        Character_BlinkStart(10, 0, (#1), 1);
                        Voice_PlayVoice("F0110000_J00800", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "... I'm curious as well...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? Why?");
                        Character_BlinkStart(10, 0, (#1), 1);
                        Voice_PlayVoice("F0110000_J00900", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "...\nIf we're going home, then we should\nstart walking.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Y-Yeah. Let's go.");
                        Parameter_AddCh1Param(10, 60, 2);
                        Music_StopBGM(0, 40);
                        }
                    else {
                        Character_BlinkStart(10, 3, (#1), 1);
                        Voice_PlayVoice("F0110000_J01200", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "...\nI'm not in the mood to walk home\nwith you.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see...");
                        Character_BlinkStart(10, 2, (#1), 1);
                        Character_ChFace(0, 3, 0);
                        Voice_PlayVoice("F0110000_J01300", #1, "");
                        Message_Who(10);
                        Message_MsgDisp("Toudou", "... You're really... Later.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(10, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
                    Character_Chara_GS2(10, "G1_02F", 0);
                    Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
                    Voice_PlayVoice("F0110000_J00600", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "... Do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    Character_BlinkStart(10, 3, (#1), 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("F0110000_J01700", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "...\nI'm not in the mood to drink tea\nwith you.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I see...");
                    Character_BlinkStart(10, 2, (#1), 1);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("F0110000_J01800", #1, "");
                    Message_Who(10);
                    Message_MsgDisp("Toudou", "... You're really... Later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(10, "NON");
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
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_Chara_GS2(10, "G1_01F", 0);
            Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
            Voice_PlayVoice("", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Voice_PlayVoice("F0110000_J01900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Are you alone?\nShould we walk home together every\nnow and then?");
            }
        else {
            Character_Chara_GS2(10, "G1_01F", 0);
            Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
            Voice_PlayVoice("", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Voice_PlayVoice("F0110000_J02000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Are you going home now? I am too.");
            }
        if (Parameter_GetCh1Param(10, 513) != 1){
            Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Voice_PlayVoice("F0110000_J02100", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I'm glad I've got company to walk\nhome with.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Let's go!");
                Parameter_AddCh1Param(10, 60, 2);
                Music_StopBGM(0, 40);
                System_Call_GS2("F02", "G1", 0);
                break ;
                case 1:
                Character_BlinkStart(10, 2, (#1), 1);
                Voice_PlayVoice("F0110000_J02300", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Yeah, that sounds good.\nI'll treat you, today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh, is that okay?");
                Character_BlinkStart(10, 3, (#1), 1);
                Voice_PlayVoice("F0110000_J02400", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "It's only natural.\nI'm the one who called out to you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Wah, I'm so happy!");
                Parameter_AddCh1Param(10, 60, 4);
                Music_StopBGM(0, 40);
                System_Call_GS2("F03", "G1", 0);
                break ;
                case 2:
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0110000_J02500", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Ah, okay.\nI'll see you later then,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, sorry!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(10, "NON");
                Parameter_AddCh1Param(10, 60, #2);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(10, 513) == 1){
            Message_MsgSel("Yeah, let's walk home together.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Character_BlinkStart(10, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0110000_J02200", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "...\nAnd I was curious as well, very\ncurious...");
                Parameter_AddCh1Param(10, 60, 2);
                Music_StopBGM(0, 40);
                break ;
                case 1:
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(10, 2, (#1), 1);
                Voice_PlayVoice("F0110000_J02600", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Did you say that you wanted to walk\nhome with someone?\nI shouldn't have asked.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... I'll see you later.");
                Music_StopBGM(0, 40);
                Parameter_AddCh1Param(10, 60, #2);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var7 == 0){
        Parameter_AddCh1Param(10, 86, 1);
        }
    else {
        }
    }
