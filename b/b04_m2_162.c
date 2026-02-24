section "b04_m2_162"{
    int var0 = Date_GetDateOption(2, 46);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402162_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There are a lot of token games,\naren't there?\nThis is my first time seeing these.");
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Really?\nI don't know, since I don't know\nmuch about these games.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh, how dependable.\nI'll leave it to you, then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If we aim for that spot where there\nare lots piled up, we can get a lot.\nAlright, leave it to me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402162_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I can't get any tokens at all...");
        Message_MsgSel("You have no luck, ｛Shiba＊＊｝...", "These games are a test of patience!", "Should we go to the next machine?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402162_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "My eyes are tired... Hm?\nHow did you get so many?\nAren't you doing well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, I have a feeling that it won't\nchange much, but it's fine, if it's\na machine next to us.");
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
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402162_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Token games............\nI have no words for them...");
        Message_MsgSel("I'm kind of bored of them.", "It's fine if we take it easy.", "But you usually say even less...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402162_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Should we go home? ...\nSorry for boring you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402162_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.\nI might be more suited to that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402162_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah, you're right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402162_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You think so?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402162_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nBut I think that there'd be lots of\nguys who'd be shocked if they saw me\nlike this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Why?");
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("B0402162_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Because I'm talking... and smiling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... So you never smiled in the past?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402162_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.\nI thought that I shouldn't smile....\nNot until I'm forgiven.");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"Until you're forgiven\"...?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402162_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... We're out of time.\nLet's leave, we've run out of\ntokens.");
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0402162_B01700", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's go, ｛主人公｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looked a\nlittle sad...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
