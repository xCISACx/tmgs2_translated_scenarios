section "b04_m4_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404100_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You know how to skate?");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404100_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ooh? Such confidence.... Yeah!\nYou're indeed good! Just like a pro.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404100_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey hey hey...\nShowing off won't do you good, you\nknow?\n... You look like a fool.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh, that's unexpected.\nLet me see how well you skate.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you're gonna say that, then I\ncan't not teach you!\n... But don't expect anything, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404100_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, did you see that?\nThe trick I just did. Cool, right?");
        Message_MsgSel("Yeah, a Olympian for sure.", "Aren't you better with music?", "A musician who can sing while skating.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404100_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See～? ... I guess you can say that.\nIt's kind of a lie.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, yeah! That's pretty obvious.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It's nice.\nIt's from lots of practice.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0404100_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Phew... I skated quite a lot today.\nAre you tired?");
        Message_MsgSel("No, I can still skate!", "I'm getting hungry.", "You saw through me, ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, you've got guts!\nWell, let's go at it again!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404100_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Guess you're right.\nLet's eat something.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404100_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I know the feeling.\nSkating is skating.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404100_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hehe～ Am I one who can skate quite\nwell～?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 0, 11);
                System_Wait(30);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404100_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nThat look is returning a gentle\nsparkle in your eye...");
                Voice_PlayVoice("B0404100_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Strange, I feel nervous... Woah!!");
                SoundEffect_PlayStream(3, "SS_T_00_274_M00");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝!!\nAre you alright!?");
                Voice_PlayVoice("B0404100_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Ouch～...");
                Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404100_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Argh, really! That look is a crime!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I-I'm sorry. I'll try not to stare.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404100_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Not staring is a lot worse.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404100_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Aah, what am I saying? I'm lost!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
