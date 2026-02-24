section "f01_m3_010"{
    Character_BlinkStart(3, 1, (#1), 1);
    Character_BlinkStart(3, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_01F", 0);
    Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
    if (Parameter_GetCh1Param(3, 130) >= 4){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("", 3, "F0103000_C05100");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, are you going\nhome now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYeah, I am.");
        Voice_PlayVoice("F0103000_C05200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Do you want to walk home together?\nWe go in the same direction.\nIt is dangerous for a girl to walk\nhome by herself, too.");
        }
    else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
        Voice_PlayVoice("", 3, "F0103000_C04900");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nAre you going home now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Hikami＊＊｝?");
        Voice_PlayVoice("F0103000_C05000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah.\nSince we are together already, do\nyou want to walk home together?");
        }
    else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0103000_C05300", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "H-Hey, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Hikami＊＊｝.");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(3, 3, (#1), 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0103000_C05400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Uhh..........\nAre you going home now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Hikami＊＊｝?");
        Voice_PlayVoice("F0103000_C05500", 3, "F0103000_C05501");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, that is right....\nBy the way, ｛主人公｝.\nWe are friends, right?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1), 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0103000_C05600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Friends going home together is\nnormal.\nSo...\nwould you like to try walking home\ntogether?");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0103000_C05800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thank goodness, that is good.\nIt will be safer this way.");
            Parameter_InCh1Param(3, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
            if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0103000_C05700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Now then, I will go and get my bike.");
                }
            }
        else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0103000_C05900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nLet us go home in a pure and correct\nmanner.");
            Parameter_InCh1Param(3, 548, 53);
            }
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M3", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0103000_C06100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah, let us go....\nI cannot say this loudly, but having\ntea on the way home from school\ntastes nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Now then, let's go!");
            Parameter_InCh1Param(3, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
            if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0103000_C06000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Right, I am thirsty.\nWe will be forgiven if we have a\nreason to not go straight home,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0103000_C06200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "T-Tea!?\nDropping by other places on the way\nhome from school is prohibited by\nschool regulations.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0103000_C06300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, perhaps it is an unspoken act by\npeople in school......\nAlright, I will go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Now then, let's go!");
            Parameter_InCh1Param(3, 548, 53);
            }
        Parameter_AddCh1Param(3, 60, 4);
        Parameter_AddCh1Param(3, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M3", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("F0103000_C06500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, it is not something to apologize\nfor.\nI just happened to see you, so I\njust tried calling out to you...");
            Voice_PlayVoice("F0103000_C06600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Be careful....\nI will see you next time.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(3, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 548) == 1)){
            if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(3, 2, (#1), 1);
                Voice_PlayVoice("F0103000_C06400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see, then it cannot be helped.\nBe careful.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("F0103000_C06700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...... ...\nWell, it is natural that you would\nhave something to do.\nI will excuse myself.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(3, 548, 53);
            }
        Parameter_AddCh1Param(3, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
