section "b04_m4_221"{
    int var0 = Date_GetDateOption(2, 66);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404221_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Woah!\nA lot of valuable historical\nartifacts are displayed!");
        Message_MsgSel("They even have things from the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404221_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh, which one? You remembered.");
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
            Voice_PlayVoice("B0404221_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "In that case, let's go see the\nkatana swords!\nThey said they have a famous one\nhere.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404221_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You don't need to think that deeply,\nwe're just visiting the castle.\nI'd say that's a tiring thought.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404221_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Do you think this ancient armor\nis...\nhaunted by a vengeful spirit?");
        Message_MsgSel("I think I saw something foggy...", "It's scary. I'll stop looking!", "That's not it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404221_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't joke with a straight face!\nIt's not funny at all!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404221_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Right. Let's head on.");
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
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404221_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seems so. It's nothing, right?\nYeah, it's nothing...");
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
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404221_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ooh, a gorgeous kimono is displayed.\nMaybe it's bridal wear?");
        Message_MsgSel("I wish I could wear something like this.", "A kimono is too much of a hassle.", "It'a a haori-coat from a corrupt official!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404221_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, sounds good!\nI found one at a rental clothing\nshop.\nLet's go there and try!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404221_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Don't say that since you haven't\nworn one before.\nWe don't know, it may not be much of\na hassle.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404221_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Is that so?\nI don't think it'd be that much of a\nhassle, though...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you often wear kimonos,\n｛Hariya＊＊｝?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404221_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh? No... well... Not always...");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's great!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404221_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I-It's... nothing.\nThis isn't something to be making a\nfuss over!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0404221_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, anyway, if it's just about\nwearing one, I'll do it for you, so\ndon't sweat it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404221_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I told you!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404221_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "......... Oh!");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404221_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Nothing!");
                Voice_PlayVoice("B0404221_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Umm...\nyou should also remember this, that\nit's not that much of a hassle!\nAlright!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Why is ｛Hariya＊＊｝ in a\nhurry?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404221_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you serious!? ...\nIt feels like that.\nWhat seriously bad taste～.");
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
