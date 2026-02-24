section "b04_m4_192"{
    int var0 = Date_GetDateOption(2, 62);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_10F", 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404192_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Are you good at skiing?");
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404192_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You're still in high spirits even in\nthis cold.\nI can't take it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(4, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404192_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Are your legs trembling?\nWhat a show-off. Hehehe.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404192_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "But, you're around the same as me?\nIn that case, let's go and take it\neasy.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404192_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seriously? Not much of a choice...\nWell, I'll teach you the basics, but\nmake it short.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_10F", 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404192_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So vast! Pure white!\nWinter isn't so bad if you look at\nit like this.");
        Message_MsgSel("You'd want to set your footprints on it first.", "It's simplicity.", "Look, rabbit footprints!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404192_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "We will, we will!\nLater, let's go to a place where no\none has set their foot on it.");
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
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404192_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Shut up!\nSince winter is here, don't be\nagainst my positive thoughts about\nit!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404192_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Great find.\nYou see things differently from\nother people～...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_10F", 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404192_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Phew* The sunlight being reflecting\non is blinding...");
        Message_MsgSel("I'm seeing white spots and it hurts.", "It's glistening beautifully.", "｛Hariya＊＊｝ is more blinding.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0404192_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey, are you okay?\nIt's probably better if we pull back\nbefore we get blinded by the snow.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0404192_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey, are you serious......\nBy the way, you're not wearing your\ngoggles.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I must have left them below...");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404192_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Stu-pid, Why didn't you mention it\nearlier?\n... Here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, But this is,\n｛Hariya＊＊｝'s...");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404192_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Just take it! Put it on at once....\nI should be the one to apologize for\nnot noticing it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry. Thank you...");
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404192_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404192_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, it's like the world's shining.\nIt's so amazing that not even trash\nis in sight.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 8);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404192_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, yeah!\nMy shine will surpass anyone!\nHahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
