section "b04_m4_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH141_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_002_D02", 127, 40);
        Voice_PlayVoice("B0404250_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You can relax.");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it, it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So...?\nIt's naturally a wonderful room\nbecause it's to my specifications!\nHahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404250_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Are you saying that it's filthy?\nWhat a rude girl...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so?\nWell, as you can see, I do have many\nmusically inclined things.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_BH141_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_002_D02", 127, 40);
        Voice_PlayVoice("B0404250_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nLooks like I don't know what to\ndo...\nWhat would you like to do?");
        Message_MsgSel("I want to hear a recommended song.", "Let's talk about various stuff.", "Like taking it easy, a nap perhaps...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, that sounds good!\nI'll let you listen to \"Harry's Best\nSelection\"!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 0);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Talk!? ... That's okay, though......\nHey, you, say something.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404250_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A nap!?\nThat's the reason why you came to my\nroom!?\nWhy you...\nAre you playing games with me?\nGo home!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_BH141_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_002_D02", 127, 40);
        Voice_PlayVoice("B0404250_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Huh, looks like you've been\ndaydreaming since...");
        Message_MsgSel("I wanted to look at a photo album.", "That's a lot of CDs!", "Hmm... There's only one guitar.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nI guess it's fine to have a look,\nthough, just don't laugh at it!");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404250_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See? These are my pride!\nOh, I'll let you borrow one if you\nwant!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404250_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What's with that unhappy face?\nSince I'm a singer, having one is\nenough.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404250_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "For a vocalist, having this guy is\ngood enough.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see.\nBut ｛Hariya＊＊｝, You're\ngood with a guitar.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404250_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "R-Really? ... Thank you.");
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0404250_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I do like to play it often, if I put\nmy mind to it.\nHalfway isn't good.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404250_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nNo matter what I say, the band's\nguitarist just won't give in.");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404250_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, it's natural.\nIf someone yelled at me, I'd be a\ndifficult guy, too.");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404250_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh.... Sorry.\nThis story's boring, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, not at all.\nI enjoy listening, to\n｛Hariya＊＊｝.");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0404250_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Idiot.\nI'm not ending the fun, yet.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404250_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Since you're here, I'll play the\nguitar.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Voice_PlayVoice("B0404250_D02000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah....\nThe one who made this is right here.\nI should tell you that.");
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404250_D02100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... It's special.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            }
        }
    Parameter_InCh1Param(4, 539, 44);
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
