section "f01_m5_000"{
    Character_BlinkStart(5, 1, (#1), 1);
    Character_BlinkStart(5, 1, (#1), 2);
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
    int var10 = Parameter_GetCh1Param(5, 308);
    if (Parameter_GetCh1Param(5, 512) == 0){
        if ((Parameter_GetCh1Param(5, 130) >= 2 && System_Randam(0, 99) >= 75)){
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
        var6 = Parameter_GetCh1Param(5, 59);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Chris＊＊｝.)");
        if (1){
            Message_Name_Sele(5);
            var0 = Message_Name_Sele_Result();
            Parameter_InCh1Param(5, 59, var0);
            }
        var7 = Parameter_GetCh1Param(5, 59);
        if (Parameter_CanCallFriendly(5, var7) == 0){
            Parameter_AddCh1Param(5, 60, #2);
            Parameter_AddCh1Param(5, 62, 2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝.");
            if (Parameter_GetCh1Param(5, 130) >= 4){
                Character_Chara_GS2(5, "M5_02F", 0);
                Character_ChFace(0, 3, 1);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Voice_PlayVoice("F0105000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Where you perhaps...\ncalling out to me just then?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, do you dislike that name?\nSorry...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0105000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No...\nDo you always want to call me that?\nIsn't that bad?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not it...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0105000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Really? Thank you.\nNow then, I'll see you later.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm～, that nickname was a\nfailure...)");
                Parameter_InCh1Param(5, 59, var6);
                Parameter_InCh1Param(5, 548, 53);
                }
            else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_Chara_GS2(5, "M5_02F", 0);
                    Character_ChFace(0, 3, 1);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("F0105000_E00000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... Hmm?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... Did you perhaps not like that?");
                    Voice_PlayVoice("F0105000_E00100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It feels like I'm being held back by\nthe arms by some unknown old man.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Voice_PlayVoice("F0105000_E00200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "If it was a girl, then it'd be more\nthan welcome.\nSo try to think of something like\nthat, next time.\nGoodbye.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like he didn't like being\ncalled that...)");
                    Parameter_InCh1Param(5, 59, var6);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_Chara_GS2(5, "M5_02F", 0);
                    Character_ChFace(0, 3, 1);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("F0105000_E00300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Just then...\nYou were talking to me, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I was, but... did you dislike it?");
                    Voice_PlayVoice("F0105000_E00400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Hmm～...\nIt feels like someone dragged a\nfinger right down my spine.");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("F0105000_E00500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Should I try doing that to you?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No, I will decline...");
                    Voice_PlayVoice("F0105000_E00600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yes, it's that kind of feeling.\nNow then, I'll see you later～");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(It seems like that nickname was\nawful...)");
                    Parameter_InCh1Param(5, 59, var6);
                    }
                }
            else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
                Character_Chara_GS2(5, "M5_02F", 0);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Voice_PlayVoice("F0105000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0105000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hey, what you just called me...\nWas that perhaps payback for bumping\ninto your forehead?");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"Bumping into your forehead\"... Ah!");
                Voice_PlayVoice("F0105000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Because it was cute, I want to give\nit the OK, but...\nI want to try hearing other\nnicknames.");
                Voice_PlayVoice("F0105000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Will you do that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, okay...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0105000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I look forward to that～.\nNow then, goodbye～.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I forgot about that time...\nIt also seems like he didn't like me\ncalling him that.\nI screwed up...)");
                Parameter_InCh1Param(5, 59, var6);
                Parameter_InCh1Param(5, 548, 53);
                }
            }
        else {
            Message_MsgSel("Ask him to walk home with you.", "Ask him to swing by the cafe with you.", "Go home by yourself.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(5, 130) >= 4){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                    Character_Chara_GS2(5, "M5_02F", 0);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("F0105000_E01700", 5, "F0105000_E01701");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah, ｛主人公｝.\nIt's late.... What's up?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hey, do you want to walk home\ntogether?");
                    }
                else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
                    if (Parameter_GetCh1Param(5, 130) <= 2){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                        Character_Chara_GS2(5, "M5_02F", 0);
                        Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                        Voice_PlayVoice("F0105000_E01500", 5, "F0105000_E01501");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Ah, ｛主人公｝.\nYou're also taking your time.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                        }
                    else if (Parameter_GetCh1Param(5, 130) == 3){
                        Message_Who(0);
                        Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                        Character_Chara_GS2(5, "M5_02F", 0);
                        Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                        Voice_PlayVoice("F0105000_E01600", 5, "F0105000_E01601");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Ah, ｛主人公｝.\nAre you going home now?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.\nIf it's alright with you, would you\nlike to walk home together?");
                        }
                    }
                else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                    Character_Chara_GS2(5, "M5_02F", 0);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("F0105000_E01800", 5, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah, ｛主人公｝.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... What's up?");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(5, 2, (#1), 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("F0105000_E01900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Huh?\nYou're not going to do it today?\nBumping your forehead into me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I-I'm not.\nHey, do you want to walk home\ntogether?");
                    }
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(5, 130) <= 2){
                        Character_Chara_GS2(5, "M5_01F", 0);
                        Character_BlinkStart(5, 0, (#1), 1);
                        Voice_PlayVoice("F0105000_E02000", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "An invitation from a cute girl is\nmore than welcome.\nLet's go.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh.\nNow then, let's walk home together.");
                        }
                    else if (Parameter_GetCh1Param(5, 130) == 3){
                        Character_Chara_GS2(5, "M5_01F", 0);
                        Character_BlinkStart(5, 0, (#1), 1);
                        Voice_PlayVoice("F0105000_E02100", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Yeah, let's go.\nNow then, should I include an\noption?\nHolding onto my arm is OK.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ahaha. Now then, let's go.");
                        }
                    else if (Parameter_GetCh1Param(5, 130) >= 4){
                        Character_Chara_GS2(5, "M5_01F", 0);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(5, 0, (#1), 1);
                        Voice_PlayVoice("F0105000_E02200", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Right...\nSince we're walking home together,\nlet's take our time～.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Okay.");
                        }
                    Parameter_AddCh1Param(5, 60, 2);
                    Parameter_AddCh1Param(5, 62, #2);
                    Parameter_AddCh1Param(#1, 62, 2);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F02", "M5", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(5, 130) >= 4){
                        Character_ChFace(0, 2, 2);
                        Voice_PlayVoice("F0105000_E02700", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "...... I can't today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, is that so...");
                        Voice_PlayVoice("F0105000_E02800", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I don't want to let you walk home by\nyourself.\nBut I have stuff to do...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Then it can't be helped.");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E02900", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Yeah... Be careful going home....\nSeriously, be careful～.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(5, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
                        if (Parameter_GetCh1Param(5, 130) <= 2){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E02300", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Ah～... I have to hurry home today.\nI made a promise to another cute\ngirl.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Ah, is that so?\nThen it can't be helped.");
                            Voice_PlayVoice("F0105000_E02400", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Sorry, ask me again next time～.\nGood bye～.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(5, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(5, 130) == 3){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E02500", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Sorry... I have a meeting...\nNo, I have stuff to do.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Is that so...\nThen it can't be helped.");
                            Voice_PlayVoice("F0105000_E02600", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "It's too bad, though...\nYeah, let's walk home in a\nlovey-dovey way next time while\nholding hands～.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(5, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E03000", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I can't today. Sorry.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so...");
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E03100", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Since you asked, do you want to bump\ninto each other again?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh!? No, I will decline...");
                        Voice_PlayVoice("F0105000_E03200", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I see. Now then, goodbye～.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(5, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(That surprised me...\nIt can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 5){
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
                Message_MsgDisp("主人公", "｛Chris＊＊｝.");
                Character_Chara_GS2(5, "M5_02F", 0);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to have tea before\ngoing home?");
                if (Parameter_Kitaku_Check() == 1){
                    if (Parameter_GetCh1Param(5, 130) >= 4){
                        Character_Chara_GS2(5, "M5_01F", 0);
                        Character_ChFace(0, 4, 1);
                        Character_BlinkStart(5, 0, (#1), 1);
                        Voice_PlayVoice("F0105000_E03500", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Ah, I'm so happy.\nLet's have a nice chat over tea.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
                        if (Parameter_GetCh1Param(5, 130) <= 2){
                            Character_Chara_GS2(5, "M5_01F", 0);
                            Character_BlinkStart(5, 0, (#1), 1);
                            Voice_PlayVoice("F0105000_E03300", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Yeah, let's go.\nIt's fun drinking tea with girls, so\nI really like it.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        else if (Parameter_GetCh1Param(5, 130) == 3){
                            Character_Chara_GS2(5, "M5_01F", 0);
                            Character_BlinkStart(5, 0, (#1), 1);
                            Voice_PlayVoice("F0105000_E03400", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "You pick the perfect times to ask.\nI felt like having tea.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                            }
                        }
                    else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
                        Character_Chara_GS2(5, "M5_01F", 0);
                        Character_BlinkStart(5, 0, (#1), 1);
                        Voice_PlayVoice("F0105000_E03600", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Ah, that kind of greeting today.\nIt's fine, let's go.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    Parameter_AddCh1Param(5, 60, 4);
                    Parameter_AddCh1Param(5, 62, #4);
                    Parameter_AddCh1Param(#1, 62, 4);
                    Music_StopBGM(0, 40);
                    System_Call_GS2("F03", "M5", 0);
                    }
                else {
                    if (Parameter_GetCh1Param(5, 130) >= 4){
                        Character_ChFace(0, 2, 2);
                        Voice_PlayVoice("F0105000_E04200", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "...... I can't today.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Ah, is that so...");
                        Voice_PlayVoice("F0105000_E04300", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I don't want to let you walk home by\nyourself.\nBut I have stuff to do...");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Then it can't be helped.");
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E04400", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Yeah... Be careful going home....\nSeriously, be careful～.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(5, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
                        if (Parameter_GetCh1Param(5, 130) <= 2){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E03700", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Ah～... I have to hurry home today.\nI made a promise to another cute\ngirl.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Ah, is that so.\nThen it can't be helped.");
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E03800", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Sorry, ask me again next time～.\nGoodbye～.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(5, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        else if (Parameter_GetCh1Param(5, 130) == 3){
                            Character_ChFace(0, 2, 2);
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E03900", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Sorry... I have a meeting...\nNo, I have stuff to do.");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
                            Voice_PlayVoice("F0105000_E04000", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "It's too bad, though...\nYeah, let's walk home in a\nlovey-dovey way next time while\nholding hands～.");
                            Character_ChFace(0, 3, 3);
                            Voice_PlayVoice("F0105000_E04100", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Now then, see you later.");
                            Music_StopBGM(0, 40);
                            Character_Chara_GS2(5, "NON");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "(... It can't be helped.\nI'll go home by myself today.)");
                            }
                        }
                    else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E04500", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I can't today. Sorry.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Is that so...");
                        Character_ChFace(0, 3, 3);
                        Voice_PlayVoice("F0105000_E04600", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Since you asked, do you want to bump\ninto each other, again?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh? No, I will decline...");
                        Voice_PlayVoice("F0105000_E04700", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I see. Now then, goodbye～.");
                        Music_StopBGM(0, 40);
                        Character_Chara_GS2(5, "NON");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(That surprised me...\nIt can't be helped.\nI'll go home by myself today.)");
                        Parameter_InCh1Param(5, 548, 53);
                        }
                    if (Parameter_ExtChar(1, 6, 2, 1, 8, var9) == 5){
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
        System_Call_GS2("F01", "M5", 10);
        }
    else if (var5 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(5, "M5_02F", 0);
        Voice_PlayVoice("F0105000_E08600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", ".........");
        SoundEffect_PlayStream(3, "SS_T_00_004_M00");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ seems like he\nis somewhat angry...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var8 == 0){
        Parameter_AddCh1Param(5, 86, 1);
        }
    else {
        }
    }
