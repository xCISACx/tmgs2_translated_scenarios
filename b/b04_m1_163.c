section "b04_m1_163"{
    int var0 = Date_GetDateOption(2, 47);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401163_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Music games, huh...");
        Message_MsgSel("Music games are fun!", "Can I take pictures of you dancing?", "Can you play, ｛Saeki＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401163_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, then do your best.\nI'm gonna go somewhere else.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0401163_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Meaning you want to stop being\nfriends, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401163_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I've never played before.\nI also don't want to play.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401163_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, that's enough already, right?\nLet's go and play something else,\nokay?");
        Message_MsgSel("Let's take a little break then.", "It's because you're bad at this!", "Look! When a magnificent step!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401163_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "More like let's take a long break.\nAnyway, let's go somewhere else.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401163_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You just gave me permission to\nleave, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401163_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It looks like you can't hear me at\nall.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401163_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, is it that fun? This game?");
        Message_MsgSel("Yes, because there are people watching!", "You'll know if you try it!", "I love games where you have to use your body!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401163_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know there are also people in\nthe this world who hate that?\nEven though it might be unexpected.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401163_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You're so obstinate.\nI said I'm not going to play.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey? Let's play together!");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401163_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Just once, then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yay!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401163_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "B-But only when there aren't any\npeople around!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, we'll do that.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0401163_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Also...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401163_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Promise me that you won't ever\nlaugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hah... He's kind of cute.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401163_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, it might be better than just\nsitting down....\nNo, I won't play, okay? Not me!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
