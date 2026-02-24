section "b04_m5_221"{
    int var0 = Date_GetDateOption(2, 66);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405221_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's my first time entering a\ncastle...");
        Message_MsgSel("They even have things in the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I dunno what's in the textbooks, but\nthese things are nice.\nI'm impressed～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIf we can't get around to seeing all\nof the stuff, let's come here again,\ntogether▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405221_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm fine with it, since I like\nhistory, though...\nIf you're tired, we'll just go\nhome...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405221_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's completely different to\nEuropean castles.");
        Message_MsgSel("The lifestyle must be completely different.", "This is not made of stone, but wood.", "They look the same.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even the clothing they wear is\ndifferent.\nThis kimono is nice...\nI wanna try wearing it～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see, so that's where they start\ndiffering.\nIt has a warm feeling, since it's\nmade from wood.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405221_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh...\nWhat is so similar about them...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405221_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow, a piece of armor. How cool～.");
        Message_MsgSel("These guys mean serious business.", "It seems like it would suit you.", "The design is lame.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 2, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, every nook and cranny is\nattended to professionally.\nThey surely are artisans.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405221_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? I wanna try it on...\nIs there somewhere I can go to try\nit on?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405221_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Because it's not for decoration...\nIt just can't be helped, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405221_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah...\nThe design is lacking colors.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405221_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It needs red, yellow and blue...\nAnd then my armor would be black and\nyours would be pink.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh! Pink?");
                Voice_PlayVoice("B0405221_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The enemy, donned in black, would\nbecome enrapt by the pink-armored\nheroine.");
                Voice_PlayVoice("B0405221_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The hero in black will betray who he\nused to be fighting for and use his\nspecial \"Love Talk\" to protect the\npink heroine.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405221_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's what I thought up of for the\nfirst episode of \"Habataki Army's\nArmor Man\" series.\nIsn't that a good storyline?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nSo he was talking about armies and\nstuff...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
