section "f01_m1_010"{
    Character_BlinkStart(1, 1, (#1), 1);
    Character_BlinkStart(1, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    if (Parameter_GetCh1Param(1, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝!");
        Voice_PlayVoice("F0101000_A05800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're late.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry! ... Huh?\nDid we arrange to meet?");
        Voice_PlayVoice("F0101000_A05900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh? Uh... Well, maybe we did?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder...");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("F0101000_A06000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "We did!");
        }
    else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Voice_PlayVoice("F0101000_A05600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Are you going home now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Saeki＊＊｝?");
        Voice_PlayVoice("F0101000_A05700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah....\nIf you're going straight home, do\nyou wanna walk home together?");
        }
    else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(1, 2, (#1), 1);
        Voice_PlayVoice("F0101000_A06100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Wah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.");
        Voice_PlayVoice("F0101000_A06200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "A-Ah... It's you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝...\nAre you still worried about what\nhappened then?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 3, (#1), 1);
        Voice_PlayVoice("F0101000_A06300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Me? As if. Not at all!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah... Right. That's good then.");
        Voice_PlayVoice("F0101000_W06400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Female Student A", "Ah, it's Teru-kun!");
        Voice_PlayVoice("F0101000_W06500", #1, "");
        Message_Who(0);
        Message_MsgDisp("Female Student B", "You're right! ...\nThere's a somewhat suspicious\natmosphere.\nAre those two arguing?");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("F0101000_A06600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "We kind of stand out...\nAnyway, let's go.");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first, then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("F0101000_A06800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Voice_PlayVoice("F0101000_A06900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Nothing. Come on, let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay!");
            Parameter_InCh1Param(1, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
            if (Parameter_GetCh1Param(1, 130) == 3){
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0101000_A06700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.");
                }
            }
        else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0101000_A07000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Now then, let's go....\nDon't get too close to me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay.");
            Parameter_InCh1Param(1, 548, 53);
            }
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M1", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0101000_A07200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I was also going to--");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm?");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("F0101000_A07300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Not, not say that.... But I won't...\nnot do that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, so in other words...");
            Voice_PlayVoice("F0101000_A07400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go. To the cafe.");
            Parameter_InCh1Param(1, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
            if (Parameter_GetCh1Param(1, 130) == 3){
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0101000_A07100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Tea, huh...\nWell, I guess I can watch enemy\nmovements.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("F0101000_A07500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "O-Okay, let's just go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Voice_PlayVoice("F0101000_A07600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Don't come near me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Parameter_InCh1Param(1, 548, 53);
            }
        Parameter_AddCh1Param(1, 60, 4);
        Parameter_AddCh1Param(1, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M1", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("F0101000_A07800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, sorry, okay?");
            Voice_PlayVoice("F0101000_A07900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Go home by yourself for the rest of\nyour life!");
            Music_StopBGM(0, 40);
            SoundEffect_PlayStream(3, "SS_T_00_004_M00");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He ran away...\nEven though he was waiting for me, I\nrejected him.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(1, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 548) == 1)){
            if (Parameter_GetCh1Param(1, 130) == 3){
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("F0101000_A07700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I see. Well, that's how it goes.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 548) == 0)){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("F0101000_A08000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I-I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm sorry.");
            Voice_PlayVoice("F0101000_A08100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Then let's just naturally say\ngoodbye to each other.\nNaturally.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 3, (#1), 1);
            Voice_PlayVoice("F0101000_A08200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So, goodbye!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Goodbye!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(There's this somewhat complex\nfeeling...)");
            Parameter_InCh1Param(1, 548, 53);
            }
        Parameter_AddCh1Param(1, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
