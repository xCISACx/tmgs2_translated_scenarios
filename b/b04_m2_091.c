section "b04_m2_091"{
    int var0 = Date_GetDateOption(2, 25);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP410_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0402091_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh...\nThey've got some mysterious items.");
        Message_MsgSel("Somehow, it feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402091_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "History? ... Sorry, I'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's too puzzling.\nI'd definitely not get sick of\ncoming here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "As if it......\nThe eye area looks similar...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Background_Bg_GS2("BG_FP410_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0402091_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey, about that necklace in that\ncase...");
        Message_MsgSel("It's not a necklace, it's a choker.", "It's old, but it's kind of amazing.", "It looks like it would suit you▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Isn't that the same kinda thing? ...\nOr is it completely different?");
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
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The surface is tattered...\nbut you don't really see this kinda\nthing.\nIt's a strange design.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("B0402091_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... As if it even does.\nNo matter how you look at it, it's\nfor girls.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP410_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0402091_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "They've got various exhibits opening\nhere, but is there something you\nwanna see?");
        Message_MsgSel("A documentation of your life.", "The progress of Hanegasaki Academy.", "A history of humans and animals?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402091_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWho the hell would want to see that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402091_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Huh?\nWhat the hell are you saying?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I want to know.\nYou seem like you have a lot of\nsecrets, ｛Shiba＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402091_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I don't... really have any secrets.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, I wonder...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402091_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "As if I'd have something I'd hide\nfrom you............\nAh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "See, you do! What is it? Tell me!");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402091_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's a secret.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh～...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402091_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I can't say it.\nNot now, not yet.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... ｛Shiba＊＊｝?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you being serious?\nYou're actually quite a serious\nperson...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402091_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That sounds good.\nIf it's that kinda exhibit...\nI might end up coming here many\ntimes.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
