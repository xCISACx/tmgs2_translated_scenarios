section "b04_m4_212"{
    int var0 = Date_GetDateOption(2, 64);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0404212_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, are these guys grappling?");
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Hariya＊＊｝?", "Won't they get along better if they fight?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404212_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, hey, hey, they're fighting!?\nLook at them carefully!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Dogs.\nHuskies, shepherds, and huge\nwolf-like dogs!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Does that mean you can say that to\nthe cats and dogs?\nNot like in mangas?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404212_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Are there any odd dogs?\nSomething you haven't seen before.");
        Message_MsgSel("I saw a dog that was the size of a pony.", "I saw an unusual cat.", "Like what?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're serious!?\nYou should have told me sooner!\nOkay, let's head out!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404212_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I wanted to see a dog.\nI don't care about cats this time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let me see-...\nA really big one and also, a real\nsnazzy one, those types...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404212_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, the cat I checked at Kitten and\nPuppy Land is here.");
        Message_MsgSel("｛Hariya＊＊｝ is more of a Russian Blue.", "This kitten is wearing socks.", "I'm not in the mood for all of this.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404212_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh?\nI'm not suddenly talking in Greek,\nyou know.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0404212_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Let me see.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0404212_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIt's a shy cat who is cautious to\nother people....");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. Just like you.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0404212_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Well, you're this!");
                Message_Who(0);
                Message_MsgDisp("主人公", "A Cornish Rex?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404212_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "A spoiled gluttonous kind.\nJust like you!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404212_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hahaha!");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404212_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... But you're so keen.\nIt really surprised me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404212_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nThat you'd go as far as meeting a\nguy who would understand...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0404212_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Well, anyway!\nOkay, so it's good to like the\nCornish Rex!");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha!\nYou're right, It looks like he's\nwearing shoes!\nWhat a stylish guy～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404212_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right.\nBut anyways, we're here to see\neverything Let's get out, and\ncontinue to the next.");
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
