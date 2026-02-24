section "b04_m4_170"{
    int var0 = Date_GetDateOption(2, 48);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404170_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "We came here to sing, right?\nI'm open for requests.");
        Message_MsgSel("Choose your best song, ｛Hariya＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, song number 55573!\nLet's fly with class!");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Leave it to me!\nThe newest song's been checked too!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404170_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What the...?\nDo you think I'd sing something like\nthat?\nThat's just not cool!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404170_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Karaoke's... I guess it's fine.\nI feel something is missing,\nhonestly.");
        Message_MsgSel("A wide stage does suit you, ｛Hariya＊＊｝.", "Maybe because the sound is soft?", "So, should we extend the name a bit?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right!\nThis cramped place doesn't suit me\nwell!\nYeah!");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Basically, because of its\nsynthesizer.\nYou finally get the idea!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No, that's not what I meant...\nWell, I don't really mind, if you'd\nlike to extend it, though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404170_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh*.\nSorry, I sang enthusiastically.\nWhat do you think of my singing?");
        Message_MsgSel("I wish everyone could have heard it.", "I was captivated and fell in love.", "Let me sing along too!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404170_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What, topic changed?\nI'm asking Y-O-U!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404170_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... *Sigh*.\nI have to sing like this in an\naudience always...");
                Voice_PlayVoice("B0404170_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What can I do to be calm when I sing\nin front of you?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404170_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What can you do? By any chance.");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-What... What can I do?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404170_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'm wondering...\nIf I leave you in the middle of the\nstage during a live.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...\nMaybe he's serious?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Haha, thank you.\nI can sing comfortably in front of\nyou.\nBecause of that, my mood is good\ntoo.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404170_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm? Oh, sorry, sorry.\nI never noticed I'd been keeping the\nmic all to myself.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
