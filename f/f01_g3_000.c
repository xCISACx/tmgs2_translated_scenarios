section "f01_g3_000"{
    Character_BlinkStart(12, 1, (#1), 1);
    Character_BlinkStart(12, 1, (#1), 2);
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
    if ((Parameter_GetCh1Param(12, 130) >= 3) && (System_Randam(0, 99) >= 75)){
        var4 = 1;
        }
    else if ((Parameter_GetCh1Param(12, 513) == 1) && (System_Randam(0, 99) >= 50)){
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
        var5 = Parameter_GetCh1Param(12, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Nishimoto＊＊｝.)");
        if (1){
            Message_Name_Sele(12);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(12, 59, var0);
            }
        var6 = Parameter_GetCh1Param(12, 59);
        if (Parameter_CanCallFriendly(12, var6) == 0){
            Parameter_AddCh1Param(12, 60, #2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Nishimoto＊＊｝!");
            if (Parameter_GetCh1Param(12, 513) != 1){
                Character_Chara_GS2(12, "G3_02F", 0);
                Character_ChFace(0, 3, 1);
                Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                Voice_PlayVoice("F0112000_L00000", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Wah! My body is really ticklish!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0112000_L00100", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "About what you just called me.\nIf you're really my friend, you'll\nstop it, right?\n... That was a joke!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(12, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah...\nIt doesn't seem like she likes being\ncalled that...)");
                Parameter_InCh1Param(12, 59, var5);
                }
            else {
                Character_Chara_GS2(12, "G3_02F", 0);
                Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                Voice_PlayVoice("F0112000_L00200", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "... What you just called me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(12, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("F0112000_L00300", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "... Was gross...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(12, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah...\nIt seems like I made her angry...)");
                Parameter_InCh1Param(12, 59, var5);
                }
            }
        else {
            if (Parameter_GetCh1Param(12, 513) != 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Nishimoto＊＊｝.");
                    Character_Chara_GS2(12, "G3_02F", 0);
                    Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                    Voice_PlayVoice("F0112000_L00400", #1, "F0112000_L00401");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "Hmm? Ah, ｛主人公｝.\nAre you going home now? Me too.\nWhat a coincidence!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(12, "G3_01F", 0);
                        Character_BlinkStart(12, 3, (#1), 1);
                        Character_BlinkStart(12, 0, (#1), 1);
                        Voice_PlayVoice("F0112000_L00600", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ah, I'm so happy!\nI've always wanted to walk home with\nyou.\nLet's do that!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah! Now then, let's go.");
                        Parameter_AddCh1Param(12, 60, 2);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F02", "G3", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0112000_L00800", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ah, I'm really sorry.\nI have to hurry today!\nShould we run home together?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "U-Uhh...");
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("F0112000_L00900", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ahaha, it was a joke!\nLet's go have tea next time.\nNow then, I'm going!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(12, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(...\nIt can't be helped, I'll go home by\nmyself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Nishimoto＊＊｝.");
                    Character_Chara_GS2(12, "G3_02F", 0);
                    Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                    Voice_PlayVoice("F0112000_L00400", #1, "F0112000_L00401");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "Hm? Ah, ｛主人公｝.\nAre you going home now? Me too.\nWhat a coincidence!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(12, "G3_01F", 0);
                        Character_BlinkStart(12, 3, (#1), 1);
                        Character_BlinkStart(12, 0, (#1), 1);
                        Voice_PlayVoice("F0112000_L01200", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ah, that's a good idea.\nLet's chat while we have tea!\nCome on, let's go!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay. Now then, let's go.");
                        Parameter_AddCh1Param(12, 60, 4);
                        Music_StopBGM(0, 40);
                        System_Call_GS2("F03", "G3", 0);
                        }
                    else {
                        Character_ChFace(0, 0, 9);
                        Voice_PlayVoice("F0112000_L01300", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ah, I'm really sorry.\nI have to hurry today!\nShould we run home together?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "U-Uhh...");
                        Character_ChFace(0, 0, 10);
                        Voice_PlayVoice("F0112000_L01400", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "Ahaha, it was a joke!\nLet's go have tea next time.\nNow then, I'm going!");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(12, "NON");
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
            else if (Parameter_GetCh1Param(12, 513) == 1){
                Message_MsgSel("Ask her to walk home with you.", "Ask her to swing by the cafe with you.", "Go home by yourself.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Nishimoto＊＊｝!");
                    Character_Chara_GS2(12, "G3_02F", 0);
                    Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                    Voice_PlayVoice("F0112000_L00500", #1, "");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "... What is it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, if it's alright with you, would\nyou like to walk home together...?");
                    if (Parameter_Kitaku_Check() == 1){
                        Character_Chara_GS2(12, "G3_01F", 0);
                        Character_BlinkStart(12, 2, (#1), 1);
                        Character_Chara_GS2(12, "NON");
                        Character_BlinkStart(12, 0, (#1), 1);
                        Voice_PlayVoice("F0112000_L00700", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "I live really close though.\nWithin 300... no, 100m!\nWe can, if you don't mind!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, I don't mind!\nNow then, let's go.");
                        Parameter_AddCh1Param(12, 60, 2);
                        Music_StopBGM(0, 40);
                        }
                    else {
                        Voice_PlayVoice("F0112000_L01000", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "I have a lot of things to do today!");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I see..\nThen I guess it can't be helped.");
                        Character_BlinkStart(12, 2, (#1), 1);
                        Character_ChFace(0, 3, 2);
                        Voice_PlayVoice("F0112000_L01100", #1, "");
                        Message_Who(12);
                        Message_MsgDisp("Nishimoto", "I'll be leaving now.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(12, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        }
                    break ;
                    case 1:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Nishimoto＊＊｝.");
                    Character_Chara_GS2(12, "G3_02F", 0);
                    Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
                    Voice_PlayVoice("F0112000_L00500", #1, "");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "... What is it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                    Voice_PlayVoice("F0112000_L01500", #1, "");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "I have a lot of things to do today!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I see.., Then I guess it can't be\nhelped.");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(12, 2, (#1), 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("F0112000_L01600", #1, "");
                    Message_Who(12);
                    Message_MsgDisp("Nishimoto", "I'll be leaving now.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(12, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                    break ;
                    case 2:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, whatever...\nI'll go home by myself today.");
                    var7 = 1;
                    Music_StopBGM(0, 40);
                    break ;
                    }
                }
            }
        }
    else if (var4 == 1){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_Chara_GS2(12, "G3_01F", 0);
            Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
            Voice_PlayVoice("", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Nishimoto＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1), 1);
            Voice_PlayVoice("F0112000_L01700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Hey, let's walk home together!\nOkay, okay?");
            Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first then.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Character_BlinkStart(12, 0, (#1), 1);
                Voice_PlayVoice("F0112000_L02000", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Alright, I'm so happy!\nI have lots of things I wanna talk\nto you about.\nWill you listen?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course. Now then, let's go!");
                Parameter_AddCh1Param(12, 60, 2);
                Music_StopBGM(0, 40);
                System_Call_GS2("F02", "G3", 0);
                break ;
                case 1:
                Character_BlinkStart(12, 0, (#1), 1);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("F0112000_L02200", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "I was waiting for you to say that!\nToday is the day we gotta take on\nthe Miracle Jumbo Parfait!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Miracle Jumbo...");
                Character_BlinkStart(12, 2, (#1), 1);
                Voice_PlayVoice("F0112000_L02300", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "It's not such a big deal to me, but\nI can't finish it.\nSo you should help me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0112000_L02400", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Come on, let's go!");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay.");
                Parameter_AddCh1Param(12, 60, 4);
                Music_StopBGM(0, 40);
                System_Call_GS2("F03", "G3", 0);
                break ;
                case 2:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0112000_L02500", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Ehh! What a shock...\nYou rejected me...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0112000_L02600", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Well then in exchange, let's go eat\nparfait some time.\nPromise me, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, I'm sorry.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(12, "NON");
                Parameter_AddCh1Param(12, 60, #2);
                break ;
                }
            }
        else {
            Character_Chara_GS2(12, "G3_01F", 0);
            Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
            Voice_PlayVoice("", #1, "F0112000_L01800");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "｛主人公｝....\nAre you alone?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Nishimoto＊＊｝. Yeah, I am...");
            Character_BlinkStart(12, 2, (#1), 1);
            Voice_PlayVoice("F0112000_L01900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "...\nThen it might be a good idea to walk\nhome together.");
            Message_MsgSel("Yeah, let's walk home together.", "Sorry, I have something to do today.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0112000_L02100", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Let's go then.");
                Parameter_AddCh1Param(12, 60, 2);
                Music_StopBGM(0, 40);
                break ;
                case 1:
                Character_BlinkStart(12, 0, (#1), 1);
                Voice_PlayVoice("F0112000_L02700", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then it can't be helped.\nSee you later then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm sorry.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(12, "NON");
                Parameter_AddCh1Param(12, 60, #2);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var7 == 0){
        Parameter_AddCh1Param(12, 86, 1);
        }
    else {
        }
    }
