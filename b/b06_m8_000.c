section "b06_m8_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(8, 61, 3);
        Parameter_AddCh1Param(8, 60, 2);
        Parameter_AddCh1Param(8, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(8, 61, 2);
        Parameter_AddCh1Param(8, 60, 1);
        Parameter_AddCh1Param(8, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(8, 61, 0);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #2);
        Parameter_AddCh1Param(8, 62, 2);
        }
    if (Date_Date_Data(124) >= 4){
        if (Parameter_GetCh1Param(8, 130) == 3){
            if (System_GlobalWork(23, 1) == 8){
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("FD_08_170_00000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You get a silver star for today.\nRelax and go on dates with him, too.");
                }
            else {
                Character_ChFace(0, 0, 0);
                Voice_PlayVoice("B0608001_H00000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'm glad I asked you out today.\nThanks.");
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Voice_PlayVoice("B0608000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah～, thanks to you, I'm tired from\nall the laughing today...\nMy face hurts.");
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But I like this kind of tiredness.\nI'll ask you out again soon, so make\nsome time for me when I do.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! I look forward to it.");
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(8, 2, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0608000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, good response.\nYou get a silver star!");
            }
        }
    else if (Date_Date_Data(124) == 3){
        if (Parameter_GetCh1Param(8, 130) == 3){
            if (System_GlobalWork(23, 1) == 8){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("FD_08_170_00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "The result of this rehearsal is:\nGood!\nYou've worked hard.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0608001_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Ah, I feel refreshed!\nThanks for coming along with me.");
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah... Today was so perfect...");
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But I seriously never get bored with\nyou.");
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0608000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "If there's something that looks like\nfun, I'll ask you out, again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, please do!");
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, okay. You've still got energy.");
            }
        }
    else if (Date_Date_Data(124) == 2){
        if (Parameter_GetCh1Param(8, 130) == 3){
            if (System_GlobalWork(23, 1) == 8){
                Character_ChFace(0, 0, 0);
                Voice_PlayVoice("FD_08_170_00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "If you want the other guy to have\nfun, you gotta do something about\nit.");
                }
            else {
                Character_ChFace(0, 0, 0);
                Voice_PlayVoice("B0608001_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well, dates like this do happen.");
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(8, 2, (#1), 2);
            Voice_PlayVoice("B0608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ahh～... Today was enjoyable.");
            Character_BlinkStart(8, 0, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0608000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Let's go somewhere next time you're\nbored or something.");
            }
        }
    else if (Date_Date_Data(124) == 1){
        if (Parameter_GetCh1Param(8, 130) == 3){
            if (System_GlobalWork(23, 1) == 8){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("FD_08_170_00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Even though I'm not him, I'm tired.\nThink a little harder about it next\ntime.");
                }
            else {
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0608001_H00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Sorry for making you come out with\nme.");
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 0, 9);
            Voice_PlayVoice("B0608000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Didn't you get tired halfway\nthrough?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I didn't...");
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0608000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Really? It's fine then.\nIf you're just being considerate,\njust tell me next time without\nhesitating, okay?");
            }
        }
    else if (Date_Date_Data(124) == 0){
        if (Parameter_GetCh1Param(8, 130) == 3){
            if (System_GlobalWork(23, 1) == 8){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("FD_08_170_00400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'd make you feel better.\nI'd be more careful.");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0608001_H00400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Even though I asked you out with me,\nthat kind of thing is just bad, you\nknow?");
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0608000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Hey you～...\nThat was awful, you know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... S-Sorry...");
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0608000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Well it's fine.\nI know you didn't mean any harm by\nit.");
            }
        }
    if ((Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
        Character_Chara_GS2(8, "M8_D?F", 0);
        if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("B0608001_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Later.");
            }
        else {
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0608000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Let's go home.\nBe careful on your way home.");
            }
        if ((Parameter_GetCh1Param(8, 130) >= 4) && (Date_Date_Data(124) == 0)){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B10", "M8", 0);
            }
        }
    else if ((Parameter_GetCh1Param(8, 130) <= 3) || (Parameter_ChkPlayer(5)) || (System_GlobalWork(5, 1) == 1)){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 6);
        if ((System_GlobalWork(23, 1) == 8 && Parameter_GetCh1Param(8, 558) == 0 && (Parameter_GetCh1Param(8, 60) + Parameter_GetCh1Param(8, 61) >= 350))){
            System_Call_GS2("B60", "M8", 0);
            }
        else if ((Parameter_GetCh1Param(8, 556) == 1 && Date_NightDate(1, 0) == 0)){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do?\nMaybe I should ask him about it...)");
            Message_MsgSel("Ask him about it.", "Just go home.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝.\nI have something that I want to ask\nyou...");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B07", "M8", 0);
                System_Call_GS2("B08", "M8", 0);
                break ;
                case 1:
                Character_Chara_GS2(8, "M8_D?F", 0);
                if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_ChFace(0, 0, 0);
                    Voice_PlayVoice("B0608001_H00500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Later.");
                    }
                else {
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("B0608000_H01300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Let's go home.\nBe careful on your way home.");
                    }
                break ;
                }
            }
        else if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("B0608001_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'll drive you home.\nI'd feel more at ease that way.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B99", "M8", 0);
            System_Call_GS2("B08", "M8", 0);
            }
        else {
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0608000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I wanna be with you a little longer,\nbut let's go home.\nGet in, I'll drive you home.");
            if (Parameter_ChkPlayer(5)){
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("K02", "M8", 11);
                Parameter_InPl1Param(336, #1);
                }
            else {
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B99", "M8", 0);
                System_Call_GS2("B08", "M8", 0);
                }
            }
        }
    else {
        Message_PauseSkinship();
        Character_ChFace(1, 0, 0);
        Voice_PlayVoice("B0608000_H01500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You still got time?\nIf it's fine with you, I'll drive\nyou home.");
        Message_MsgSel("Yes, please!", "Sorry, I will go home alone today...");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 6);
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0608000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Then let's take the long way home\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Parameter_AddCh1Param(8, 61, 0);
            Parameter_AddCh1Param(8, 60, 1);
            Parameter_AddCh1Param(8, 62, #3);
            System_Call_GS2("B99", "M8", 0);
            if ((Parameter_GetCh1Param(8, 130) >= 4 && Parameter_GetCh1Param(8, 570) >= 300) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(8, 556) == 0)){
                Contact_NearSkinShip("M8_D?F", 8, Date_Date_Data(124), Parameter_GetSysParam(4), var4);
                var4 = Contact_NearSkinEndModeGet();
                switch (var4){
                    case 3:
                    var5 = Parameter_GetCh1Param(8, 559);
                    if (var5 < 5){
                        System_Call_GS2("B15", "M8", var5);
                        }
                    else {
                        System_Call_GS2("B15", "M8", 5);
                        }
                    Parameter_AddCh1Param(8, 559, 1);
                    break ;
                    case 4:
                    System_Call_GS2("B16", "M8", 11);
                    break ;
                    case 5:
                    System_Call_GS2("B16", "M8", 12);
                    break ;
                    case 6:
                    System_Call_GS2("B16", "M8", 22);
                    break ;
                    case 7:
                    System_Call_GS2("B16", "M8", 23);
                    break ;
                    case 8:
                    System_Call_GS2("B16", "M8", 41);
                    break ;
                    case 9:
                    System_Call_GS2("B16", "M8", 14);
                    break ;
                    case 10:
                    System_Call_GS2("B16", "M8", 24);
                    break ;
                    case 11:
                    System_Call_GS2("B16", "M8", 25);
                    break ;
                    case 12:
                    System_Call_GS2("B16", "M8", 26);
                    break ;
                    case 13:
                    System_Call_GS2("B16", "M8", 34);
                    break ;
                    }
                Screen_WipeOut(2);
                Background_CarBGClose();
                Still_Event("");
                Screen_ClearScreen();
                }
            else if ((Parameter_GetCh1Param(8, 536) == 1) && (Parameter_GetCh1Param(8, 538) == 0)){
                System_Call_GS2("B07", "M8", 0);
                }
            else if ((Parameter_GetPl1Param(312) == 8) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(8, 537) == 1)){
                System_Call_GS2("B30", "M8", 0);
                }
            else {
                if ((Parameter_ChkSpEvent("B05", "M8", 3) == 1) && (System_GlobalWork(6, 1) == 1)){
                    System_Call_GS2("B05", "M8", 3);
                    }
                else {
                    System_Call_GS2("B07", "M8", 0);
                    }
                }
            System_Call_GS2("B08", "M8", 0);
            break ;
            case 1:
            Character_Chara_GS2(8, "M8_D?F", 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0608000_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I see....\nWell, there are times when you just\nwanna be alone.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("B0608000_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Be careful on your way home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was turning him down a bad thing to\ndo...?)");
            Parameter_AddCh1Param(8, 61, 0);
            Parameter_AddCh1Param(8, 60, 1);
            break ;
            }
        }
    Parameter_AddCh1Param(8, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
