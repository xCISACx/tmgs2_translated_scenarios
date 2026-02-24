section "b04_m4_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404151_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well then, let's go!");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh!?\nYou've seriously never tried\nbowling?\nThat's just so unusual these days.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, game on!\nChallenging me to a game...\nI'll make you regret it!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0404151_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm...\nThat kind of talk is draining my\nenergy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404151_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Woah, that's the spirit!\nYou've got me!");
        Message_MsgSel("So not cool!", "What spirit?", "Maybe I should play on your part.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404151_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Who's not cool!?\nSay that again and we're done! ...\nNeed a spare...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Amazed on how every pin falls.\nI know too much.\nAnd well, you're not learning much.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, you've said it!\nWell, just watch my miracle play.");
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
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404151_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay, I'm warning you, the next one\nwill be a strike!\nWatch me!");
        Message_MsgSel("It won't be cool if you miss.", "It should be easy for you, ｛Hariya＊＊｝.", "People are starting to notice you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No reason for you to be worried....\nSee here!\nMy very own splendid strike!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404151_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, leave it to me! ...\nWhat do ya know? Just as planned!\nHahaha, thanks for the cheer!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1), 1);
                Voice_PlayVoice("B0404151_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Aah!! Say no more! ...\nNo good, nerves got me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404151_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Aah!! Say no more!\nCompletely nervous!");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry... Let's shift order.");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404151_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Sounds good! Okay...\nLet's go............Woah!");
                SoundEffect_PlayStream(3, "SS_T_00_274_M00");
                System_Wait(60);
                SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
                System_Wait(30);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝!\nAre you okay!? Hold on!");
                Voice_PlayVoice("B0404151_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ouch... Yeah, sorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah!");
                SoundEffect_StopStream(2, 40);
                SoundEffect_PlayStream(3, "SS_T_00_274_M00");
                System_Wait(60);
                SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
                System_Wait(30);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ouch...");
                Voice_PlayVoice("B0404151_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Pfft! Haha, Hahahaha!");
                Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404151_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Why do you have to also fall!\nLook, stand.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Voice_PlayVoice("B0404151_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah, I laughed....\nTension will go away, if you laugh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404151_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah.\nIf you get nervous again, just try\nto remember today and just laugh\nfrom it.");
                Voice_PlayVoice("B0404151_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll try not to forget that pathetic\nlook.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝, you meanie!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404151_D02000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hahaha! Okay, resume game! Let's go!");
                SoundEffect_StopStream(2, 40);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
