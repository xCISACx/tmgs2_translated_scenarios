section "f01_m6_010"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_Chara_GS2(6, "M6_01F", 0);
    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
    if (Parameter_GetCh1Param(6, 130) >= 4){
        Voice_PlayVoice("F0106000_F05200", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nAre you going home now?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("F0106000_F05300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yes. Hey! Let's walk home together!");
        }
    else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
        Voice_PlayVoice("", 6, "F0106000_F05000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nAre you going home now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Amachi＊＊｝?");
        Voice_PlayVoice("F0106000_F05100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yes.\nHey, do you wanna walk home\ntogether?");
        }
    else if ((Parameter_GetCh1Param(6, 130) <= 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("F0106000_F05400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Umm, Senpai.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Voice_PlayVoice("F0106000_F05500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I am going home now. So...\nI am going to go home now!");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F05700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai. Let's go!");
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
            if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0106000_F05600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's decided! Let's go!");
                }
            }
        else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0106000_F05800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Let's do that! It's decided!\n... Please.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0106000_F05900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Let's do that!\nIt's decided then!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank gosh. Now then, let's go.");
            Parameter_InCh1Param(6, 548, 53);
            }
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M6", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F06100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's a nice idea!\nI also wanted tea!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's decided then.\nNow then, let's go.");
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
            if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("F0106000_F06000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, that's a nice idea!\nLet's do that!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F06200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, that's a nice idea! So then...\nPlease... be nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. Let's go then.");
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F06300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, that's nice! Let's do that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. Let's go then.");
            Parameter_InCh1Param(6, 548, 53);
            }
        Parameter_AddCh1Param(6, 60, 4);
        Parameter_AddCh1Param(6, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M6", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("F0106000_F06500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... I see. It's fine then.\nBye bye.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nMaybe that was a bad thing to do...)");
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 548) == 1)){
            if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("F0106000_F06400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Pfft, how boring. Well it's fine....\nLater.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nMaybe that was a bad thing to do...)");
                }
            }
        else if ((Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F06600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...... It's fine then. Excuse me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nMaybe that was a bad thing to do...)");
            Music_StopBGM(0, 40);
            Parameter_InCh1Param(6, 548, 53);
            }
        else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0106000_F06700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Ah, really. It's fine then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nMaybe that was a bad thing to do...)");
            Music_StopBGM(0, 40);
            Parameter_InCh1Param(6, 548, 53);
            }
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
