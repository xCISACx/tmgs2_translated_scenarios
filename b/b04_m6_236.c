section "b04_m6_236"{
    int var0 = Date_GetDateOption(2, 72);
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #2);
        Parameter_AddCh1Param(6, 62, 2);
        }
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406236_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... it's beautiful!");
            }
        else {
            Voice_PlayVoice("B0406236_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... very beautiful!");
            }
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "Let's dance together▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it's true!\nIt's very much like sparkles.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, what a lovely expression.\nYou're girlish, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes...\nIf this could last a long time, I\nthink it'd be great...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I want to watch it forever.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406236_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... No, I decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406236_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm～, go ahead, Senpai.\nI will be watching from here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406236_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's beautiful...\nOverflowing lights...");
            }
        else {
            Voice_PlayVoice("B0406236_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's beautiful...\nOverflowing lights...");
            }
        Message_MsgSel("I was admiring it.", "We have to collect them!", "How much is the electricity bill?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I am happy just watching it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 0, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh! I am happy just watching it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, the overflowing lights?\nAhahaha, geez, don't make me laugh!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... The overflowing lights?\nAhaha, that's an amazing joke!\nIt made me laugh!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406236_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's more enjoyable not thinking\nabout stuff like that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406236_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWhy do you worry about such boring\nthings?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406236_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a little early, but do you want\nto leave?");
            }
        else {
            Voice_PlayVoice("B0406236_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a little early, but do you want\nto leave?");
            }
        Message_MsgSel("Yes, let's do so.", "Let's watch until the end.", "Let's go on one last ride.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If we stay and watch until the end,\nthe exit will be crowded.\nLet's leave.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It'll be crowded if we stay until\nthe end.\nLet's just go already.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Voice_PlayVoice("B0406236_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, won't it be too late if we stay\nand have it wind up being crowded?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406236_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are you seriously saying that?\nWon't it be hard to watch it until\nthe end if we're swallowed in the\nconfusion?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406236_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Going home like this would be\nchaotic, maybe we might be getting\nhome really late?");
                Voice_PlayVoice("B0406236_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is it all right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, but in this case, I don't mind\nbeing with you,\n｛Amachi＊＊｝.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406236_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Eh! You said...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406236_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That was such a nice thing to say...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406236_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I also feel reluctant to leave.\nSo let's take our time and watch the\nparade until the very end.\nBefore we go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Everyone's seen the parade now.\nIt's become empty. Let's go!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406236_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, that's a good idea!\nLet's wrap up the day by riding one\nlast ride!\nLet's go!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
