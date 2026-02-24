section "w01_g4_000"{
    if (Parameter_ChkHoliday(2) != 1){
        Character_Chara_GS2(13, "G4_01F", 0);
        Music_PlayBGM(0, "MN_C_13_000_D00");
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
        Voice_PlayVoice("", #1, "W0113000_M00000");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝. Good!\nI was looking for you.\nHey, are you free next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sunday?\nIs there anything you want to do?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W0113000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I have complimentary tickets for the\nAmusement Park.\nDo you want to go together?");
        Message_Who(0);
        Message_MsgDisp("主人公", "The Amusement Park...\nAre you inviting anyone else?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("W0113000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Y-Yes... I will... try to.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W0113000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey, will you?");
        Message_MsgSel("Yeah, I'll go!", "I'm sorry, I'm a little busy that day.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0113000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Great! Next Sunday, it is.\nDon't forget, okay?\n*Giggles*");
            Character_Chara_GS2(13, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nWho on earth will be coming?)");
            Date_SetNextSandayDateEvent(13);
            break ;
            case 1:
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("W0113000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Okay～... How disappointing.\nWell, I'll stop bothering you this\ntime...");
            Character_Chara_GS2(13, "NON");
            Music_StopBGM(0, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        Parameter_AddCh1Param(13, 86, 1);
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
        Message_MsgDisp("主人公", "I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("W0113000_M00600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hello. It's Mizushima...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!\nWhat's up?");
        Voice_PlayVoice("W0113000_M00700", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Yes, I know it's sudden, but are you\nfree next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sunday? Is something up?");
        Voice_PlayVoice("W0113000_M00800", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I have complimentary tickets for the\nAmusement Park.\nDo you want to go together?");
        Message_Who(0);
        Message_MsgDisp("主人公", "The Amusement Park...\nAre you inviting anyone else?");
        Voice_PlayVoice("W0113000_M00900", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Y-Yes... I will... try to.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Voice_PlayVoice("W0113000_M01000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey, will you?");
        Message_MsgSel("Yeah, I'll go!", "I'm sorry, I'm a little busy that day.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("W0113000_M01100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Great! Next Sunday, it is.\nDon't forget, okay? *Giggles*.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nI wonder who else will be coming?)");
            Date_SetNextSandayDateEvent(13);
            break ;
            case 1:
            Voice_PlayVoice("W0113000_M01200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Okay～... How disappointing.\nWell, I'll stop bothering you this\ntime...");
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
