section "f01_m4_010"{
    Character_BlinkStart(4, 1, (#1), 1);
    Character_BlinkStart(4, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
    if (Parameter_GetCh1Param(4, 130) >= 4){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0104000_D04800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hi ｛Hariya＊＊｝. What's up?");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0104000_D04900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's not \"What's up?\"....\nIt's obvious I was waiting for you.\nDo you wanna walk home together?");
        }
    else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("F0104000_D04600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hi.\nWhat's up, ｛Hariya＊＊｝?");
        Character_ChFace(0, 2, 0);
        Voice_PlayVoice("F0104000_D04700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'm going home.\nIf you are too, do you wanna go\ntogether?");
        }
    else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("F0104000_D05000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("F0104000_D05100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'm going home....\nIf it's okay by you, do you wanna\nwalk home together?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's do that.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 3, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("F0104000_D05200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "An immediate reply...\nNo awareness at all...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Awareness of what?");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("F0104000_D05300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Nothing! So, what will you do?");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("F0104000_D05500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Alright!");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0104000_D05600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I mean! Let's go!");
            Parameter_InCh1Param(4, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0104000_D05400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Alright. Let's go then.");
                }
            }
        else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Voice_PlayVoice("F0104000_D05700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... You really forgot...");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("F0104000_D05800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Whatever, let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay.");
            Parameter_InCh1Param(4, 548, 53);
            }
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M4", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0104000_D06000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If... it's tea, then we can relax.\nAlright, let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Parameter_InCh1Param(4, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("F0104000_D05900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Let's go to a place where the\nseasonal fruit juices are nice.\nIf not, then I'm not going.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, got it. Now then, let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("F0104000_D06100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What a carefree girl.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("F0104000_D06200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Nothing～. Come on, let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yeah.");
            Parameter_InCh1Param(4, 548, 53);
            }
        Parameter_AddCh1Param(4, 60, 4);
        Parameter_AddCh1Param(4, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M4", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0104000_D06400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see～... Well...\nit can't be helped... right?\nLater... Maybe next time...");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(4, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 548) == 1)){
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("F0104000_D06300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What the? How boring. Later.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 548) == 0)){
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("F0104000_D06500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWere you stepping all over my\ncourage during that one moment...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0104000_D06600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Nothing. Later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(4, 548, 53);
            }
        Parameter_AddCh1Param(4, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
