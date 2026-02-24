section "b04_m2_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0402100_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Can you skate?");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(2, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0402100_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hmm. It seems that way.\nYou're good.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402100_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You've got the wrong shoes on.\nBefore you go putting on airs, fix\nthat first.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Is that so?\nYou should start off by hanging on\nto the handrails.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIs that okay since I'm bad at\nteaching?\nFirst of all, gimme your hand.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0402100_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You're kind of staggering.\nAre you tired?");
        Message_MsgSel("Yeah, just a little.", "It seems like my feet can't keep up...", "You don't have to worry, I'm fine.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's take a little break.\nI'll go buy something warm to drink,\nso go and wait over there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("B0402100_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Idiot, say so sooner.\nWhat use is there in trying to\nendure it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.\nBut if something's up, tell me\nstraight away.\nI won't know if you don't tell me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0402100_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Be careful. The surface is uneven.");
        Message_MsgSel("I'm fine, I'll just avoid it!", "It's dangerous, so let's just stop.", "Then support me, ｛Shiba＊＊｝▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well... right.\nAlright, so do you wanna have a\nrace?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402100_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's do that.\nIf we continue, it seems like you'd\nfall over.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402100_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There's no need for that.\nWe'll just stop before you fall\nover.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402100_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... J-Just kidding.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402100_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'll support you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402100_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh, umm...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402100_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You said it, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "T-Then... I'll accept your offer...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402100_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Come on. Gimme your hand.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My heart is racing...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
