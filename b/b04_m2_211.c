section "b04_m2_211"{
    int var0 = Date_GetDateOption(2, 63);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402211_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That monkey.\nIt's been glaring at us this whole\ntime.");
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402211_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Bothered by what?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402211_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, because the expression of my\neyes is bad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402211_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'll do it if the monkey can laugh.\nHow trivial...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402211_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Is there somewhere you wanna go?");
        Message_MsgSel("The wild animal corner.", "I want to pet the rabbits.", "Reptiles!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402211_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right, because we rarely see them.\nLet's start from the lions.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402211_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Got it.\nBut if I can, I'd want to refrain\nfrom going inside the petting\narea...");
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
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402211_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What a weird one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402211_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Life in a cage, huh.\nHey, what do you think about it?");
        Message_MsgSel("It's better than living in the wild.", "I want to let them return to the wild.", "I want to release them right now!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402211_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Because they're guaranteed food and\nsafety?\n...\nIf you think about it that way,\nmaybe they're happier.");
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
            Voice_PlayVoice("B0402211_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah...\nThe most painful thing might be not\nbeing able to move around freely.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402211_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Then we'd be in danger.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402211_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Idiot.\nIf you suddenly released them, what\nwould you do if they attacked you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, right...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402211_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWell, no matter what animal it is,\nI'll protect you, for as long as I'm\nalive.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402211_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nBut if I were facing off with an\nelephant, I wouldn't be able to win.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ahaha, yeah.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402211_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Oi, punk. Don't laugh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, sorry.");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 4);
                Voice_PlayVoice("B0402211_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nMaybe you're the strongest one here?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0402211_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If you keep smiling like that, it\nseems like you'd tame any animal.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402211_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I'm also one of those animals.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm, what does he mean by that...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
