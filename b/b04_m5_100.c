section "b04_m5_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("", 5, "B0405100_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝, how good are\nyou at skating?");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0405100_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "How promising.\nI'll have you lead▼");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetPl1Param(19) < 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405100_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're kinda staggering...\nAh, you can't bump into other\npeoples' chests～!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405100_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alright...? What is \"alright\" like?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405100_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Leave it to me. Now, come closer...\nYeah, let's skate well today▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0405100_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "My secret technique, 'Special Chris\nSpin'!");
        Message_MsgSel("I'll do a 'Special Spin', too!", "... What a weird name.", "... What's so special about that?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405100_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Since you're doing it, why don't you\ngive it a name?\n'Magical Eccentric Turn!'.\nWhat about that name?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405100_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Sorry...\nI'll think of another name...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405100_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "My out-stretched fingertips and my\nindirect glances.\nShould I teach it to you?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0405100_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I kinda skated around too much...");
        Message_MsgSel("That was an amazing turn!", "You were applauded.", "You're too reckless, ｛Chris＊＊｝!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_BlinkStart(5, 0, (#1), 2);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405100_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If it made you happy, then I'm\nglad...\nWow, the world is spinning.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405100_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? Then I'll do an encore...\nCrap, it's impossible...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405100_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ugh...\nCan you speak to me in a less harsh\ntone...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405100_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They say that being reckless is\nsomething you do when you're young,\nbut it's a given in the Weatherfield\nhouse...");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not what I mean.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝, aren't you\nalways forcing yourself to please\nother people?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405100_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh.........");
                Message_Who(0);
                Message_MsgDisp("主人公", "It kind of seems like time is\nrunning out for you...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405100_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........\nYou're a really mysterious one.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405100_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You sometimes say things that will\noffend people without reservation.\nI'm surprised.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Did I ever say such things?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405100_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But even though you do that, you're\nlike this.\nIt really makes me dizzy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
