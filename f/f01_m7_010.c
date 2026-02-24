section "f01_m7_010"{
    Character_BlinkStart(7, 1, (#1), 1);
    Character_BlinkStart(7, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_GetCh1Param(7, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("F0107000_G03400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you going home now? I am, too.");
        Voice_PlayVoice("F0107000_G03500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Should we try to cause gossip?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("F0107000_G03600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, I am joking.\nShall we walk home together?");
        }
    else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("F0107000_G03300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you going home now?\nLet's walk home together.");
        }
    else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("F0107000_G03700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you going home now?\nThen how about you go with me... Ah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Voice_PlayVoice("F0107000_G03800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hmm～... Well, it should be fine.\nLet's walk home together.");
        }
    Message_MsgSel("Okay, let's do that.", "Okay. I wanted to have a chat with you.", "Sorry, I have something to do...");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0107000_G04000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Fantastic! Ah, no...\nNow then, let's go.");
            Parameter_InCh1Param(7, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
            if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0107000_G03900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Now then, let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0107000_G04100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank goodness.\nIt seems like I was worrying too\nmuch.\nLet's go.");
            Parameter_InCh1Param(7, 548, 53);
            }
        Parameter_AddCh1Param(7, 60, 2);
        Parameter_AddCh1Param(7, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M7", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Voice_PlayVoice("F0107000_G04000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Fantastic! Ah, no...\nNow then, let's go.");
            Parameter_InCh1Param(7, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
            Voice_PlayVoice("F0107000_G04100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank goodness.\nIt seems like I was worrying too\nmuch.\nLet's go.");
            Parameter_InCh1Param(7, 548, 53);
            }
        Parameter_AddCh1Param(7, 60, 4);
        Parameter_AddCh1Param(7, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M7", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0107000_G04300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so...\nThen it cannot be helped.\nIt's unfortunate.");
            Voice_PlayVoice("F0107000_G04400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Then I will leave now. Be careful.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(7, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 7) || (Parameter_GetCh1Param(7, 548) == 1)){
            if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0107000_G04200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "How unfortunate.\nNow then, be careful.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(7, 130) <= 3) && (Parameter_GetPl1Param(312) == 7) && (Parameter_GetCh1Param(7, 548) == 0)){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0107000_G04500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... A girl's feeling?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Pardon?");
            Voice_PlayVoice("F0107000_G04600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Nothing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Um...");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0107000_G04700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "If perhaps, you are thinking about\nwhat happened in the chemistry room,\ndo not worry about it.\nNow then, excuse me.");
            Music_StopBGM(0, 40);
            Parameter_InCh1Param(7, 548, 53);
            }
        Parameter_AddCh1Param(7, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
