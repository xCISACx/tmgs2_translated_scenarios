section "w01_g2_000"{
    if (Parameter_ChkHoliday(2) != 1){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Character_Chara_GS2(11, "G2_01F", 0);
        Music_PlayBGM(0, "MN_C_11_000_D00");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
        Voice_PlayVoice("", #1, "W0111000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nAre you free next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sunday?\nIs there something you want to do?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("W0111000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I have complimentary tickets for the\nAmusement Park.\nIf it is alright, would you like to\ncome with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "The Amusement Park...\nAre you inviting anyone else?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("W0111000_K00200", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Yes, that is the plan. So, will you?");
        Message_MsgSel("Yeah, I'll go!", "I'm sorry, I have things to do...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0111000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Very well. Well then, on Sunday.");
            Character_Chara_GS2(11, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nI wonder who in the world will be\nthere.)");
            Date_SetNextSandayDateEvent(11);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0111000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I see...\nThen I will ask other people.\nExcuse me.");
            Character_Chara_GS2(11, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        Parameter_AddCh1Param(11, 86, 1);
        }
    else {
        int var0 = Parameter_GetPl1Param(12);
        switch (var0){
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
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("W0111000_K00500", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Hello, it's Onoda.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝.\nWhat's up?");
        Voice_PlayVoice("W0111000_K00600", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Are you free next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sunday?\nIs there something you want to do?");
        Voice_PlayVoice("W0111000_K00700", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I have complimentary tickets for the\nAmusement Park.\nIf it is alright, would you like to\ncome with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "The Amusement Park...\nAre you inviting anyone else?");
        Voice_PlayVoice("W0111000_K00800", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Yes, that is the plan. So, will you?");
        Message_MsgSel("Yeah, I'll go!", "I'm sorry, I have things to do...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("W0111000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Very well. Well then, on Sunday.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nI wonder who in the world will be\nthere.)");
            Date_SetNextSandayDateEvent(11);
            break ;
            case 1:
            Voice_PlayVoice("W0111000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I see...\nThen I will ask other people.\nExcuse me.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
