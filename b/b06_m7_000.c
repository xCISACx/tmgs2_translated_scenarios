section "b06_m7_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(7, 61, 3);
        Parameter_AddCh1Param(7, 60, 2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(7, 61, 2);
        Parameter_AddCh1Param(7, 60, 1);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(7, 61, 0);
        Parameter_AddCh1Param(7, 60, #1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #2);
        }
    if (Date_GetDateOption(5)){
        if (Date_Date_Data(124) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've learned a lot from today's\nclass trip!");
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0607000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, you did very well.\nAs for studying with you, Sensei's\nhappy.\nEveryone, applaud today's honor\nstudent～!");
            SoundEffect_PlayStream(2, "SS_DSE_148_000");
            }
        else if (Date_Date_Data(124) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've learned a lot from today's\nclass trip!");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0607000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, good for you.\nSensei's relieved when there are\nmany students eager to study.\nNo, he is very glad.");
            SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
            }
        else if (Date_Date_Data(124) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've learned a lot from today's\nclass trip!");
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0607000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nI assume you would do well if you\nlearned.\nEnjoy next time.");
            SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
            }
        else if (Date_Date_Data(124) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've learned a lot from today's\nclass trip!");
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(7, 2, (#1), 2);
            Voice_PlayVoice("B0607000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm relieved to hear that.\nWell then, let's give you a prize\nfor doing your best.");
            SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
            }
        else if (Date_Date_Data(124) == 0){
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "I've learned a lot from today's\nclass trip!");
            Character_ChFace(1, 0, 11);
            Voice_PlayVoice("B0607000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0607000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Really?");
            SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
            }
        Character_Chara_GS2(7, "M7_17F", 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0607000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. Well then, let's part here.\nSee you in school, everyone.");
        SoundEffect_StopStream(2, 40);
        }
    else {
        if (Date_Date_Data(124) >= 4){
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 130) == 3)){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("FD_07_170_00000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Huge success.\nNext time, go on a date with him.");
                }
            else {
                Message_PauseSkinship();
                Character_ChFace(1, 0, 10);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for inviting me today.");
                Voice_PlayVoice("B0607000_G00600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It is I who should be saying that.\nI had fun.\nIt was like we were on a trip, so to\nspeak.");
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(7, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0607000_G00700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "No, it's all right.\nIn addition, the two of us should be\ngoing.");
                }
            }
        else if (Date_Date_Data(124) == 3){
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 130) == 3)){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("FD_07_170_00100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "That was pleasant.\nHowever, the substitute teacher\ncompletely forgot something.");
                }
            else {
                Message_PauseSkinship();
                Character_ChFace(1, 0, 10);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for inviting me today.");
                Voice_PlayVoice("B0607000_G00800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It is I who should be saying that.\nIt was fun to be a teenager, again.");
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(7, 2, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0607000_G00900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Let's go out together, again.");
                }
            }
        else if (Date_Date_Data(124) == 2){
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 130) == 3)){
                Character_ChFace(1, 0, 0);
                Voice_PlayVoice("FD_07_170_00200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "This kind of thing also happens, it\ndoes.\nProbably... if it's with him.");
                }
            else {
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for inviting me today.");
                Voice_PlayVoice("B0607000_G01000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Don't mention it.\nLet's go out together, again.");
                }
            }
        else if (Date_Date_Data(124) == 1){
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 130) == 3)){
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("FD_07_170_00300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Eh～... Was it a good place?\nHe certainly said so, too.");
                }
            else {
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(7, 2, (#1), 2);
                Character_ChFace(1, 3, 5);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for inviting me today.");
                Voice_PlayVoice("B0607000_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was nice.\nBut if you weren't able to enjoy it,\nthen I apologize.");
                }
            }
        else if (Date_Date_Data(124) == 0){
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 130) == 3)){
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("FD_07_170_00400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Okay.\nPractice so that this kind of thing\ndoesn't happen.\nOkay?");
                }
            else {
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(7, 2, (#1), 2);
                Character_ChFace(1, 3, 4);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for inviting me today.");
                Voice_PlayVoice("B0607000_G01200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yeah...\nBut you don't need to overdo it.\nI will stop saying things like that.");
                }
            }
        if ((Date_Date_Data(124) == 0) || (System_GlobalWork(5, 1) == 2)){
            Character_Chara_GS2(7, "M7_06F", 0);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0607000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, let's go home soon.\nYour family will worry if we are too\nlate.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Date_Date_Data(124) == 0){
                System_Call_GS2("B10", "M7", 0);
                }
            }
        else if ((Parameter_GetCh1Param(7, 556) == 1 || System_GlobalWork(5, 1) == 1) || (Parameter_ChkPlayer(5))){
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 6);
            if ((System_GlobalWork(23, 1) == 7 && Parameter_GetCh1Param(7, 558) == 0 && (Parameter_GetCh1Param(7, 60) + Parameter_GetCh1Param(7, 61) >= 350))){
                System_Call_GS2("B60", "M7", 0);
                }
            else if ((Parameter_GetCh1Param(7, 556) == 1 && Date_NightDate(1, 0) == 0)){
                Message_PauseSkinship();
                Message_Who(0);
                Message_MsgDisp("主人公", "(What should I do?\nI want to hear him talk a little\nmore...)");
                Message_MsgSel("Listen to him talk.", "Let's go home.");
                switch (Message_TextSelect()){
                    case 0:
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.\nI want to listen to you speak for a\nwhile...");
                    Message_SkinshipSet(0);
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B07", "M7", 0);
                    System_Call_GS2("B08", "M7", 0);
                    break ;
                    case 1:
                    Character_Chara_GS2(7, "M7_06F", 0);
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0607000_G01400", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "Well, let's go home soon.\nYour family will worry if we're too\nlate.");
                    break ;
                    }
                }
            else {
                Message_PauseSkinship();
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(7, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0607000_G01500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Well, let's go home soon.\nYour family will worry if we're too\nlate.");
                Message_ResumeSkinship();
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 6);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(7, 2, (#1), 2);
                Voice_PlayVoice("B0607000_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I'll see you to your home.\nI want to talk like this for a\nlittle while we walk.");
                if (Parameter_ChkPlayer(5)){
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("K02", "M7", 11);
                    Parameter_InPl1Param(336, #1);
                    }
                else {
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B99", "M7", 0);
                    System_Call_GS2("B08", "M7", 0);
                    }
                }
            }
        else {
            Message_PauseSkinship();
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0607000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Do you still have a little time?");
            Message_MsgSel("Yes, it's okay.", "Sorry, I kind of can't today...");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 6);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0607000_G01800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yeah...\nWell, I'll drop you off a little on\nthe way.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Parameter_AddCh1Param(7, 61, 0);
                Parameter_AddCh1Param(7, 60, 1);
                System_Call_GS2("B99", "M7", 0);
                if ((Parameter_GetCh1Param(7, 130) >= 4 && Parameter_GetCh1Param(7, 570) >= 300) && (Date_Date_Data(124) >= 2) && (Date_Date_Data(124) < 5) && (Date_DateEvent(0) == 0) && (System_GlobalWork(0, 1) == 0) && (Parameter_GetCh1Param(7, 556) == 0)){
                    Contact_NearSkinShip("M7_D?F", 7, Date_Date_Data(124), Parameter_GetSysParam(4), var6);
                    var6 = Contact_NearSkinEndModeGet();
                    switch (var6){
                        case 3:
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        var7 = Parameter_GetCh1Param(7, 559);
                        if (var7 < 5){
                            System_Call_GS2("B15", "M7", var7);
                            }
                        else {
                            System_Call_GS2("B15", "M7", 5);
                            }
                        Parameter_AddCh1Param(7, 559, 1);
                        break ;
                        case 4:
                        System_Call_GS2("B16", "M7", 12);
                        break ;
                        case 5:
                        System_Call_GS2("B16", "M7", 31);
                        break ;
                        case 6:
                        System_Call_GS2("B16", "M7", 41);
                        break ;
                        case 7:
                        System_Call_GS2("B16", "M7", 42);
                        break ;
                        case 8:
                        System_Call_GS2("B16", "M7", 43);
                        break ;
                        case 9:
                        System_Call_GS2("B16", "M7", 14);
                        break ;
                        case 10:
                        System_Call_GS2("B16", "M7", 24);
                        break ;
                        case 11:
                        System_Call_GS2("B16", "M7", 25);
                        break ;
                        case 12:
                        System_Call_GS2("B16", "M7", 33);
                        break ;
                        case 13:
                        System_Call_GS2("B16", "M7", 34);
                        break ;
                        }
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    if (var6 != 3){
                        System_Call_GS2("B08", "M7", 0);
                        }
                    }
                else if ((Parameter_GetCh1Param(7, 536) == 1) && (Parameter_GetCh1Param(7, 538) == 0)){
                    System_Call_GS2("B07", "M7", 0);
                    System_Call_GS2("B08", "M7", 0);
                    }
                else if ((Parameter_GetPl1Param(312) == 7) && (Parameter_GetPl1Param(316) == 0) && (Parameter_GetCh1Param(7, 537) == 1)){
                    System_Call_GS2("B30", "M7", 0);
                    System_Call_GS2("B08", "M7", 0);
                    }
                else {
                    System_Call_GS2("B07", "M7", 0);
                    System_Call_GS2("B08", "M7", 0);
                    }
                break ;
                case 1:
                Character_Chara_GS2(7, "M7_06F", 0);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0607000_G01900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "So... Alright.\nW-Well then, let's hurry!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Was it bad to refuse...?)");
                Parameter_AddCh1Param(7, 61, 0);
                Parameter_AddCh1Param(7, 60, 1);
                break ;
                }
            }
        }
    Parameter_AddCh1Param(7, 86, 1);
    Message_CloseMsg();
    SoundEffect_StopStream(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
