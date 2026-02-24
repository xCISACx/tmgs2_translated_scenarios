section "b04_m1_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401100_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Can you skate?");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0401100_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You really can, and conceitedly\ntoo...\nAlright, let's do a time trial.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401100_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The only thing I can leave up to you\nis wiping down the handrails.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401100_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What do you mean by \"alright\"...?\nDoes that mean you can't even have a\ncompetition with me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401100_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Just stand there as I skate around\nthe rink 10 times.\nIf you can do that, then I'll teach\nyou how to walk.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401100_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey! There's a speed rink.\nWhat do you wanna do?");
        Message_MsgSel("Of course we're going there! It's a race!", "I'll skate over here, peacefully.", "Eh! Stay here!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401100_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, you're so conceited...\nI'm not gonna go easy on you.\nDon't cry when you lose, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401100_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see. I'll see you later then!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401100_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401100_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This feels nice～!\nHey, you saw what I did just then,\nright?\nWasn't it awesome?");
        Message_MsgSel("You were skating so happily.", "It's dangerous being too carefree!", "You're still not that great!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401100_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nWhen I move my body with all my\nmight, I feel refreshed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401100_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I know...\nAre you a mother or something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401100_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You don't know my true strength.\nI'll show you something awesome,\nokay--");
                Message_Who(0);
                Message_MsgDisp("主人公", "You can't do dangerous things!");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401100_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You don't have to get so angry.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0401100_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry... I'll stop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Haha.\n｛Saeki＊＊｝ looks like a\nchild being scolded by his\nmother...)");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401100_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... What?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, nothing!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401100_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, now that you've said it, you\ngotta show me something awesome.\nShow me your special move!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
