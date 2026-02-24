section "b04_m2_163"{
    int var0 = Date_GetDateOption(2, 47);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402163_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh...\nSo you must step on the directional\narrows in time with the music?");
        Message_MsgSel("Music games are fun!", "Can I take pictures of you dancing?", "Can you play, ｛Shiba＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It looks fun, and it looks like\nit'll be good exercise.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402163_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I can, if it's a beginner's stage...\nProbably... I think.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402163_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hm...\nIt seems like there are new songs.\nWanna give it a shot?");
        Message_MsgSel("Of course! Let's dance!", "Let's do it on beginner's mode.", "I'll watch, so do your best!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Oi, wait a sec! ...\nCan we play it on beginner's mode?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Thanks.\nUntil I can clear the stage on my\nown, please help me out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("B0402163_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then I'm not playing.\nI can't clear it on my own.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402163_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I want to play this song...\nbut the level of difficulty is too\nhigh.");
        Message_MsgSel("I'll do my best to support you!", "Hey, this song is cool too!", "It's fine, even if you're bad at it!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Then I'll try.\nI'm counting on you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402163_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, you're right.... Good idea.\nThe difficulty level is... Uh...\nwill this song be okay?");
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
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402163_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not.\nI won't even last a second.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402163_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402163_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I won't even last a second.\n*Sigh*...");
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh*.\nBut you were interested in the song\nas well, ｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402163_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Don't you get all depressed.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402163_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nAlright, I'm prepared for the worst.\nPlaying for even a second is fine,\nso I'll give it a shot.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402163_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's hold out for as long as we\ncan....\nOkay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay! Let's do our best!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
