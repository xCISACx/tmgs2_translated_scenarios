section "b04_m2_170"{
    int var0 = Date_GetDateOption(2, 48);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402170_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What should we sing?");
        Message_MsgSel("Choose your best song, ｛Shiba＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402170_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm not that good at singing, so I\ndon't think I can choose...\nYou choose a song.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402170_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I've heard this song before.\nIf it's the chorus, I think I can\nsing it...\nLet's choose this song.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402170_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That genre is out of the scope.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402170_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*Sigh*... What should I do...");
        Message_MsgSel("Go for a blues song!", "Go for a rock song!", "Go for an anime song!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0402170_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't know any songs, so it's\nimpossible.\nDo you like blues?");
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
            Voice_PlayVoice("B0402170_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then...\nIt might be a song that you don't\nknow, but I'll choose this one.");
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
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402170_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWhat an unexpected genre for you to\nchoose.\nIf it's from an anime I watched as a\nkid, I might be able to sing it...");
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
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402170_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What the...\nThey've put some new songs on the\nmachine, but that song still isn't\nhere...");
        Message_MsgSel("Then I want you to sing this song.", "You know new songs, ｛Shiba＊＊｝...!", "Try singing it a capella.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402170_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Oh. So they have this song.\nThen I'll sing this one.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402170_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What the.\nI do listen to new songs, you know.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402170_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No way.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402170_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No... That's a little...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you wanted to sing it, right?");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402170_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, I did, but... I kind of can't.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Kind of?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402170_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I mean singing the song...\nwithout music is a little...");
                Message_Who(0);
                Message_MsgDisp("主人公", "??? Well... Singing it is...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402170_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "............ It's kind of...\nlike confessing your love, isn't it?");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402170_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI don't want to use the words that\nanother person has thought up of.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
