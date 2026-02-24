section "f01_m2_010"{
    Character_BlinkStart(2, 1, (#1), 1);
    Character_BlinkStart(2, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
    if (Parameter_GetCh1Param(2, 130) >= 4){
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nAre you going home now?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(2, 2, (#1), 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0102000_B05500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "No...\nI wanted to hear your voice so I\nwaited....\nDo you wanna walk home together?");
        }
    else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
        Voice_PlayVoice("", 2, "F0102000_B05300");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝....\nAre you going home now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Shiba＊＊｝?");
        Character_ChFace(0, 2, 5);
        Voice_PlayVoice("F0102000_B05400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.... In that direction.\nShould we walk together?");
        }
    else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nAre you going home now?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 3, (#1), 1);
        Voice_PlayVoice("F0102000_B05600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah..........");
        Message_Who(0);
        Message_MsgDisp("主人公", "...... Uhh. Then...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(2, 2, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("F0102000_B05700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("F0102000_B05800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah... No.\nIf I remember correctly, we walk in\nthe same direction.");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 3, (#1), 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0102000_B05900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I'll see you halfway home....\nIf that's not a bother to you.");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0102000_B06100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Thanks. Now then, let's go.");
            Parameter_InCh1Param(2, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
            if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0102000_B06000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Now, let's go home.");
                }
            }
        else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0102000_B06200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Now then, let's go....\nLet's try not to bump into each\nother.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay.");
            Parameter_InCh1Param(2, 548, 53);
            }
        Parameter_AddCh1Param(2, 60, 2);
        Parameter_AddCh1Param(2, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M2", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("F0102000_B06400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Can we take our time?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's fine.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0102000_B06500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Let's go.");
            Parameter_InCh1Param(2, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
            if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 3, (#1), 1);
                Voice_PlayVoice("F0102000_B06300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah. Let's do that.");
                }
            }
        else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0102000_B06600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Tea...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is it no good?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0102000_B06700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No....\nIt'll be fine as long as I don't\nlook at your mouth.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(2, 3, (#1), 1);
            Voice_PlayVoice("F0102000_B06800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Parameter_InCh1Param(2, 548, 53);
            }
        Parameter_AddCh1Param(2, 60, 4);
        Parameter_AddCh1Param(2, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M2", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("F0102000_B07000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see... I understand.\nWe'll go next time.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("F0102000_B07100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Be careful on your way home, okay?");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(2, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 548) == 1)){
            if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0102000_B06900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Okay. Later.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 548) == 0)){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("F0102000_B07200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... sorry.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("F0102000_B07300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, don't worry.... Ah.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("F0102000_B07400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The thing you have to do.\nDoes it involve carrying something\nfor someone?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0102000_B07500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You should take care of your cheek,\nokay?\n... Something might bump into it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What are you...? Ah!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("F0102000_B07600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I had completely forgotten.\nBut rejecting him was a bad thing to\ndo, since he was waiting for me...)");
            Parameter_InCh1Param(2, 548, 53);
            }
        Parameter_AddCh1Param(2, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
