section "b04_m1_091"{
    int var0 = Date_GetDateOption(2, 25);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0401091_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This display...\nIt's the exact same as when I came\nhere on an excursion in elementary\nschool.\nHow nostalgic...");
        Message_MsgSel("Somehow, it feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nMy teacher in elementary school said\nthe exact same thing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was boring when I came as a\nchild, but looking at it now, it's\nkinda interesting.");
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
            Voice_PlayVoice("B0401091_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you want to get a stone-axe chop?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0401091_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This kind of nervous atmosphere in\nmuseums isn't bad.\nMy body feels tense.");
        Message_MsgSel("That's the weight of history.", "It'd be better if it was like a theme park.", "It's probably still too advanced for you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you like a lady from one of\nthose educational shows?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, that might be a good idea.\nIt'd surely make me wanna come here\nmore often.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401091_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What the hell do you think of me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0401091_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hmm... What's up?");
        Message_MsgSel("There's a nice smell coming from the cafe.", "This accessory is amazing.", "You've got long eyelashes.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah... it's Colombian beans.\nIf we're going all the way over\nthere, do you wanna rest for a bit?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401091_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh...\nThe design seems like it's still\nwidely used today.\nAwesome.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401091_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What the hell are you looking at...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401091_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What are you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401091_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I mean today...\nYou've been looking at me a lot\ntoday, perhaps you want to...");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"Want to\"?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401091_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... No, it's nothing.\nI misunderstood.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Misunderstood?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401091_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Shut up. We're going.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He got angry...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
