section "b08_m7_000"{
    int var0;
    int var1;
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Character_BlinkStart(7, 2, (#1));
    Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
    Screen_WipeIn(2);
    var0 = Date_GetDateOption(9);
    if ((var0 == 0) || (var0 == 7)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0807000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, we've arrived.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nThank you for escorting me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(7, "M7_06F", 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("B0807000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Don't mention it.\nWell then, please give my best\nregards to your family.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I will, goodbye.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ escorted me\nhome.)");
        }
    else if (Parameter_GetCh1Param(var0, 62) < 255){
        Message_PauseSkinship();
        Voice_PlayVoice("B0807000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, we've arrived.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nThank you for escorting me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(7, "M7_06F", 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("B0807000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Don't mention it.\nWell then, please give my best\nregards to your family.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I will, goodbye.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ escorted me\nhome.)");
        }
    else if ((Parameter_GetCh1Param(var0, 62) > 254) && (Parameter_GetCh1Param(var0, 62) <= 279)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0807000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We've arrived.\nWell then, please give my best\nregards to your family.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, thank you for escorting me\nhome, ｛Wakaouji＊＊｝...");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, please wait a minute.");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 10);
            Parameter_InCh1Param(1, 553, 58);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 10);
            Parameter_InCh1Param(2, 553, 58);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 10);
            Parameter_InCh1Param(3, 553, 58);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 10);
            Parameter_InCh1Param(4, 553, 58);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 10);
            Parameter_InCh1Param(5, 553, 58);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 10);
            Parameter_InCh1Param(6, 553, 58);
            break ;
            }
        SoundEffect_PlaySE(20, 127);
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0807000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...? Is it okay to leave?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, it's all right.");
        Character_Chara_GS2(7, "M7_06F", 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0807000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Okay, but... No, it's fine.\nWell, take care.");
        Character_Chara_GS2(7, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        SoundEffect_PlayStream(3, "SS_T_00_057_M00");
        int var2 = Parameter_GetPl1Param(12);
        switch (var2){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        switch (var0){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(W-What a surprise!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nBut things might turn bad if I don't\ncontact ｛Saeki＊＊｝\nsoon...)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... I'm in shock!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will contact\n｛Shiba＊＊｝ later...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(W-What a surprise!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nBut things might turn bad if I don't\ncontact ｛Hikami＊＊｝\nsoon...)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... I'm in shock...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will contact\n｛Hariya＊＊｝ later...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(W-What a surprise!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nBut things might turn bad if I don't\ncontact ｛Chris＊＊｝\nsoon...)");
            break ;
            case 6:
            Message_Who(0);
            Message_MsgDisp("主人公", "(W-What a surprise!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nBut things might turn bad if I don't\ncontact ｛Amachi＊＊｝\nsoon...)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var0, 62) > 279){
        Message_PauseSkinship();
        Voice_PlayVoice("B0807000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We've arrived.\nWell then, please give my best\nregards to your family.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "I will, thank you for escorting me\nhome, ｛Wakaouji＊＊｝...");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 11);
            Parameter_InCh1Param(1, 554, 59);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 11);
            Parameter_InCh1Param(2, 554, 59);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 11);
            Parameter_InCh1Param(3, 554, 59);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 11);
            Parameter_InCh1Param(4, 554, 59);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 11);
            Parameter_InCh1Param(5, 554, 59);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 11);
            Parameter_InCh1Param(6, 554, 59);
            break ;
            }
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0807000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Youth.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Huh?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0807000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We ran away to leave like in youth\ndramas.\nSo that means, Sensei is in a\nrival's position...");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm...");
        Character_Chara_GS2(7, "M7_06F", 0);
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0807000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's a joke. Well, Sensei's here.");
        Character_Chara_GS2(7, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 1);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 1);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 1);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 1);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 1);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
