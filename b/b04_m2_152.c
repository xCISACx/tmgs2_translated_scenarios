section "b04_m2_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_BlinkStart(2, 3, (#1));
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402152_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Preparations are done.\nSo, let's start.");
        Message_MsgSel("I'd like for you to teach me darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402152_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm?\nWell, first, aim for the top left.\nThe places with the most points are\nthere.");
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
            Character_BlinkStart(2, 0, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402152_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't be so serious.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402152_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't do pointless things like\nrandomly throwing the darts.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402152_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Oi, don't wander around....\nYou'll get hit by a dart.");
        Message_MsgSel("And you'll protect me when I do.", "I'm seeing which spot gets me a high score.", "Sorry, I was in the way...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(2, 3, (#1), 1);
            Voice_PlayVoice("B0402152_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Huh? Whatever, just move.\nYou're in the way.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402152_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ehh...\nDo you have any good techniques?\nTell me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402152_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.... Ah, no.\nYou'll get hit by a dart.");
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
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402152_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The tip of the dart has become\nbent...");
        Message_MsgSel("It's just 1 dart from a pack of 12.", "I'll bring back a replacement.", "Aim for my heart!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0402152_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... Ah, was that a joke?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402152_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Please.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402152_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Give me a break.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402152_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........\nI'm going to seriously aim for it,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh... I was joking...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402152_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......");
                Message_Who(0);
                Message_MsgDisp("主人公", "...? ｛Shiba＊＊｝?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402152_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I... wasn't joking, though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402152_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
