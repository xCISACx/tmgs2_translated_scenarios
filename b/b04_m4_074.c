section "b04_m4_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404074_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The sun's rays are hot and it\nhurts...\nAre you alright?");
        Message_MsgSel("It's a shower of sunlight!", "I don't like summer...", "It seems cool in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404074_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah...\nJust thinking of it still being\nhot...\nI don't want that much shower of\nlight～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Me too...\nIt`s fine sweating after a live, but\nbeing made to sweat for no reason is\nthe worst.");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Exactly, a good idea!\nOkay, let's move!\nThat bench over there!");
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
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404074_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "In this heat, there's no point in\nwalking under the shade～.");
        Message_MsgSel("Would you rather go swimming?", "But, it sure is different.", "Anyway, should we just walk in the sunshine?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404074_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't wanna go....\nIt's okay if we're going to the\nfountain.\nArgh, so hot～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I know. But, it sure is hot...");
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
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Haha, I guess!\nThat's more refreshing than walking\nlike we're sneaking.");
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
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404074_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So hot～... Sweat's not stopping...");
        Message_MsgSel("Let's drink tea on the bench.", "I'll squeeze the sweat from your T-shirt!", "But this heat is summer's zest.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I agree!\nYou have to drink liquids or it'll\nruin your health.");
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
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404074_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey, you!!\nEven if it's a joke, you're a woman!\nWhat stupid behavior in the sun!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404074_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ooh...");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404074_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Not that! What are you doing?!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404074_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "M-My belly button's showing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's just showing a teeny-weeny\nbit...");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404074_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No! Don't do that again!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay... I'm sorry.");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404074_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nJust as long as it's in front of\nyou.\nAnyway, what would you do if other\nguys saw it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're right. I'll be careful.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404074_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You don't get it...\n*sigh*");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's wrong with\n｛Hariya＊＊｝?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404074_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nIn the midst of comparing heat, a\nheat like this can still be\nrefreshing.");
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
